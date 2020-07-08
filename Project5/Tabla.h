
#pragma once

using namespace System;
using namespace System::Collections;

ref class Tabla
{

private:
	String^ nombre;

public:
	Tabla();
	String^ getNombre();

	void setNombre(String^);

	void ExportarTabla(String^, ArrayList^, ArrayList^);

	ArrayList^ ImportarTabla(String^);

	ArrayList^ FiltradoPorColumnas(int, int, String^, int, int, String^, ArrayList^);

	ArrayList^ SeleccionPorColumnas(ArrayList^, ArrayList^);

	ArrayList^ IndexarPorColumna(int, ArrayList^);
};
