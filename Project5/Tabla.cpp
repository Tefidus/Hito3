 #include "Tabla.h"
#include <iostream>
#include <fstream>
#include<vcclr.h>
#include <stdlib.h>
using namespace System;
using namespace System::IO;

using namespace Runtime::InteropServices;
using namespace System::Windows::Forms;

bool verificarCondicion(int, int, String^, array<String^>^);
bool isNumber(String^);

Tabla::Tabla() {

}

//Metodo que retorna el nombre de la tabla
String^ Tabla::getNombre() {
	return this->nombre;
}

//Metodo que asigna un nombre a la tabla
void Tabla::setNombre(String^ varNombre) {
	this->nombre = varNombre;
}

//Metodo que exporta una tabla, recibe como parametro (Nombre de tabla, Las celdas de la tabla, las columnas de la tabla)
void Tabla::ExportarTabla(String^ nombre, ArrayList^ arrayListTabla, ArrayList^ arrayListColumnas) {

	String^ fileName = "Data/" + nombre + ".txt";

	StreamWriter^ sw = gcnew StreamWriter(fileName); //Abrimos el archivo, si no exite, lo crea
	String^ cadena = "";
	//Llenamos las cabecera de la tabla(Columnas)
	for each (String ^ etiqueta in arrayListColumnas)
	{
		cadena = cadena + etiqueta + "\t";
	}
	sw->Write(cadena + "\n");
	//Llenamos los datos de la tabla fila por fila
	for each (array<String^>^ fila in arrayListTabla)
	{
		cadena = "";
		for each (String^ dato in fila)
		{
			cadena = cadena + dato + "\t";
		}
		sw->Write(cadena + "\n");
	}
	sw->Close();
}

//Metodo que retorna una tabla(ArrayList) despues de leer un archivo. recibe como parametro el nombre del archivo
ArrayList^ Tabla::ImportarTabla(String^ nombre) {

	ArrayList^ arrayListTabla = gcnew ArrayList();
	ArrayList^ arrayListColumnas = gcnew ArrayList();

	String^ fileName = "Data/" + nombre + ".txt";
	try
	{
		StreamReader^ din = File::OpenText(fileName); //abrimos el archivo
		String^ linea;
		int contador = 0; // almacena la cantidad de columnas que tiene nuestra tabla en el archivo
						  //leemos linea por linea
		while ((linea = din->ReadLine()) != nullptr)
		{
			if (contador == 0) {
				interior_ptr<const Char> ppchar = PtrToStringChars(linea);
				for (; *ppchar != L'\0'; ++ppchar) {
					if (*ppchar == '\t') { //cada vez que haya un '\n' significa que es fin de una columna
						contador++;
					}
				}
			}

			if (!linea->Trim()->Equals("")) { //si la linea esta vac˙}, no lo vamos incluir en la tabla
				array<String^>^ arreglo = gcnew array<String^>(contador); //Este arreglo contendrÅEuna fila de la tabla
				int indexArreglo = 0;

				interior_ptr<const Char> ppchar = PtrToStringChars(linea);
				String^ palabra = "";
				for (; *ppchar != L'\0'; ++ppchar) {

					if (*ppchar == '\t') {
						arreglo[indexArreglo] = palabra; //agregamos el dato(una celda de la fila)

						indexArreglo++;
						palabra = "";
					}
					else if (*ppchar != '\n') {
						palabra = palabra + *ppchar;
					}
				}
				arrayListTabla->Add(arreglo); // agregamos la fila al arrayList(tabla)
			}
		}
	}
	catch (Exception^ e)
	{
		if (dynamic_cast<FileNotFoundException^>(e)) { //Si no se encuentra el archivo, muestra el siguiente mensaje
			System::Windows::Forms::MessageBox::Show("Error!!! No se encuentra el archivo", "Importando datos", MessageBoxButtons::OK);
		}
		else { //Muestra el error en un mensaje
			System::Windows::Forms::MessageBox::Show(e->ToString(), "Importando datos", MessageBoxButtons::OK);
		}
	}
	return arrayListTabla; //retorna el arrayList(tabla)
}

/*Metodo que retorna una nueva tabla con los datos filtrados de acuerdo a una serie de condiciones. Recibe como parametros:
(la columna 1 , la condicion 1, el valor de filtro 1,la columna 2 , la condicion 2, el valor de filtro 2)
Ejemplo: Columna1:nombre - Condicion1: Termine en - Filtro1: ez.(pero estos vendr·n en forma de index(int) de la seleccion del combobox)
de igual manera para los otros parametros
*/
ArrayList^ Tabla::FiltradoPorColumnas(int indexColumna1, int indexCondicion1, String^ filtro1, int indexColumna2, int indexCondicion2, String^ filtro2, ArrayList^ data) {
	int index = 0;
	ArrayList^ arrayListFiltrado = gcnew ArrayList();
	for each (array<String^>^ fila in data)
	{
		if (index > 0) { //en la primera fila(0) estÅEla cabecera de la tabla, por tanto el filtro es desde la fila (1)
			bool primeraCondicion = verificarCondicion(indexColumna1, indexCondicion1, filtro1, fila);
			bool segundaCondicion = verificarCondicion(indexColumna2, indexCondicion2, filtro2, fila);
			if (primeraCondicion && segundaCondicion) { //si los datos en esas columnas pasan el filtro
				arrayListFiltrado->Add(fila); // insertamos fila en la nueva tabla
			}
		}
		index++;
	}
	return arrayListFiltrado; //retornamos nueva tabla
}

//Funcion que retorna una tabla con N columnas seleccionadas de una tabla inicial
ArrayList^ Tabla::SeleccionPorColumnas(ArrayList^ arrayListColumnas, ArrayList^ arrayListTabla) {
	ArrayList^ arrayListSeleccion = gcnew ArrayList();
	if (arrayListColumnas->Count > 0) {

		for each (array<String^> ^ fila in arrayListTabla)
		{
			array<String^>^ nuevaFila = gcnew array<String^>(arrayListColumnas->Count); //creamos la fila con la cantidad de columnas
			int i = 0;
			for each (int index in arrayListColumnas)
			{
				nuevaFila[i] = fila[index]; //asignamos el dato que se encuentra en la celda de la tabla inicial a la fila de la nueva tabla
				i++;
			}
			arrayListSeleccion->Add(nuevaFila); //agregamos la fila a la nueva tabla
		}
	}
	return arrayListSeleccion; //retornamos la nueva tabla
}

//funcion que retorna una nueva tabla indexada por una columna X. recibe como parametro el indexcolumna y los datos de la tabla inicial
ArrayList^ Tabla::IndexarPorColumna(int indexColumna, ArrayList^ arrayListTabla) {
	ArrayList^ arrayListIndexado = gcnew ArrayList();
	if (indexColumna >= 0) {
		for each (array<String^> ^ fila in arrayListTabla)
		{
			array<String^>^ nuevaFila = gcnew array<String^>(fila->Length); //creamos la fila con la cantidad de columnas
			int i = 0;
			for each (String^ dato in fila)
			{
				nuevaFila[i] = dato; //indexamos
				i++;
			}
			arrayListIndexado->Add(nuevaFila); //agregamos la fila a la nueva tabla
		}
	}
	return arrayListIndexado; //retornamos la nueva tabla
}

//Funcion que retorna true si cumple la condicion, caso contrario false
bool verificarCondicion(int indexColumna, int indexCondicion, String^ filtro, array<String^>^ fila) {
	switch (indexCondicion) //Depende de la condicion que sea
	{
	case 0: //MAYOR QUE
		if (isNumber(fila[indexColumna]) && isNumber(filtro)) {
			if (Convert::ToInt32(fila[indexColumna]) > Convert::ToInt32(filtro)) {
				return true;
			}
		}
		return false;

		break;
	case 1: //MENOR QUE
		if (isNumber(fila[indexColumna]) && isNumber(filtro)) {
			if (Convert::ToInt32(fila[indexColumna]) < Convert::ToInt32(filtro)) {
				return true;
			}
		}
		return false;
		break;
	case 2: //IGUAL A
		if (fila[indexColumna]->Equals(filtro)) {
			return true;
		}
		return false;
		break;
	case 3: // INICIA CON
		if (fila[indexColumna]->IndexOf(filtro) == 0) {
			return true;
		}
		return false;
		break;
	case 4: //FINALIZA CON
		if (fila[indexColumna]->IndexOf(filtro) == (fila[indexColumna]->Length - filtro->Length)) {
			return true;
		}
		return false;
		break;
	case 5: //ESTA CONTENIDO EN
		if (fila[indexColumna]->IndexOf(filtro) >= 0) {
			return true;
		}
		return false;
		break;
	case 6: //NO ESTA CONTENIDO EN
		if (fila[indexColumna]->IndexOf(filtro) < 0) {
			return true;
		}
		return false;
		break;
	default:
		//Si no ha condicion para filtrar por una columna, retornamos true
		return true;
		break;
	}
}

/*Funcion que retorna true si la cadena es un numero, caso contrario false. Ya que no se puede obtener el mayor de 2 nombres
Ejemplo: Pepito es numero ? retornaria false, en cambio: 1 es numero ? retornaria true
*/
bool isNumber(String^ cadena) {
	for (int i = 0; i < cadena->Length; i++)
	{
		char c = Convert::ToChar(cadena->Substring(i, 1));
		if (c < 48 || c > 57) {
			return false;
		}
	}
	return true;
}