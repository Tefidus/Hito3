#pragma once
#include "Tabla.h"

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de formCrearRegistrarTabla
	/// </summary>
	public ref class formCrearRegistrarTabla : public System::Windows::Forms::Form
	{
	public:
		ArrayList^ arrayListColumnas;
		formCrearRegistrarTabla(void)
		{
			InitializeComponent();
			arrayListColumnas = gcnew ArrayList();
			arrayListColumnas->Add("Nro");
			dataTabla->Columns->Clear();
			dataTabla->Columns->Add("Nro", "Nro");
			//
			//TODO: agregar cigo de constructor aqu・
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est駭 usando.
		/// </summary>
		~formCrearRegistrarTabla()      
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelNombreTabla;
	protected:

	protected:








	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnExportar;
	private: System::Windows::Forms::DataGridView^ dataTabla;
	private: System::Windows::Forms::Panel^ panelTabla;






	private: System::Windows::Forms::TextBox^ txtNombreTabla;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panelColumnas;

	private: System::Windows::Forms::Button^ btnAgregar;

	private: System::Windows::Forms::TextBox^ txtEtiqueta;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnLimpiar;







	private:
		/// <summary>
		/// Variable del disedor necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M騁odo necesario para admitir el Disedor. No se puede modificar
		/// el contenido de este m騁odo con el editor de cigo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelNombreTabla = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->btnExportar = (gcnew System::Windows::Forms::Button());
			this->dataTabla = (gcnew System::Windows::Forms::DataGridView());
			this->panelTabla = (gcnew System::Windows::Forms::Panel());
			this->txtNombreTabla = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panelColumnas = (gcnew System::Windows::Forms::Panel());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->txtEtiqueta = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTabla))->BeginInit();
			this->panelTabla->SuspendLayout();
			this->panelColumnas->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelNombreTabla
			// 
			this->labelNombreTabla->Font = (gcnew System::Drawing::Font(L"MS PGothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNombreTabla->Location = System::Drawing::Point(18, 10);
			this->labelNombreTabla->Name = L"labelNombreTabla";
			this->labelNombreTabla->Size = System::Drawing::Size(1047, 28);
			this->labelNombreTabla->TabIndex = 1;
			this->labelNombreTabla->Text = L"Tabla 01";
			this->labelNombreTabla->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->btnLimpiar);
			this->panel3->Controls->Add(this->btnExportar);
			this->panel3->Controls->Add(this->labelNombreTabla);
			this->panel3->Controls->Add(this->dataTabla);
			this->panel3->Location = System::Drawing::Point(12, 89);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1076, 493);
			this->panel3->TabIndex = 7;
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLimpiar->Location = System::Drawing::Point(18, 456);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(196, 30);
			this->btnLimpiar->TabIndex = 5;
			this->btnLimpiar->Text = L"LIMPIAR TABLA";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &formCrearRegistrarTabla::button1_Click_1);
			// 
			// btnExportar
			// 
			this->btnExportar->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExportar->Location = System::Drawing::Point(869, 460);
			this->btnExportar->Name = L"btnExportar";
			this->btnExportar->Size = System::Drawing::Size(196, 30);
			this->btnExportar->TabIndex = 4;
			this->btnExportar->Text = L"EXPORTAR TABLA";
			this->btnExportar->UseVisualStyleBackColor = true;
			this->btnExportar->Click += gcnew System::EventHandler(this, &formCrearRegistrarTabla::button3_Click);
			// 
			// dataTabla
			// 
			this->dataTabla->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataTabla->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataTabla->Location = System::Drawing::Point(18, 41);
			this->dataTabla->Name = L"dataTabla";
			this->dataTabla->RowHeadersWidth = 51;
			this->dataTabla->RowTemplate->Height = 24;
			this->dataTabla->Size = System::Drawing::Size(1047, 413);
			this->dataTabla->TabIndex = 0;
			this->dataTabla->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &formCrearRegistrarTabla::dataTabla_RowsAdded);
			this->dataTabla->RowsRemoved += gcnew System::Windows::Forms::DataGridViewRowsRemovedEventHandler(this, &formCrearRegistrarTabla::dataTabla_RowsRemoved);
			// 
			// panelTabla
			// 
			this->panelTabla->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelTabla->Controls->Add(this->txtNombreTabla);
			this->panelTabla->Controls->Add(this->label1);
			this->panelTabla->Controls->Add(this->label6);
			this->panelTabla->Location = System::Drawing::Point(12, 12);
			this->panelTabla->Name = L"panelTabla";
			this->panelTabla->Size = System::Drawing::Size(535, 71);
			this->panelTabla->TabIndex = 10;
			// 
			// txtNombreTabla
			// 
			this->txtNombreTabla->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNombreTabla->Location = System::Drawing::Point(87, 30);
			this->txtNombreTabla->Name = L"txtNombreTabla";
			this->txtNombreTabla->Size = System::Drawing::Size(437, 24);
			this->txtNombreTabla->TabIndex = 9;
			this->txtNombreTabla->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtNombreTabla->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &formCrearRegistrarTabla::txtNombreTabla_KeyUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(15, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nombre:";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(18, 7);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(506, 17);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Crear Tabla";
			this->label6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// panelColumnas
			// 
			this->panelColumnas->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelColumnas->Controls->Add(this->btnAgregar);
			this->panelColumnas->Controls->Add(this->txtEtiqueta);
			this->panelColumnas->Controls->Add(this->label2);
			this->panelColumnas->Controls->Add(this->label4);
			this->panelColumnas->Location = System::Drawing::Point(553, 12);
			this->panelColumnas->Name = L"panelColumnas";
			this->panelColumnas->Size = System::Drawing::Size(535, 71);
			this->panelColumnas->TabIndex = 11;
			// 
			// btnAgregar
			// 
			this->btnAgregar->Font = (gcnew System::Drawing::Font(L"MS PGothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregar->Location = System::Drawing::Point(343, 29);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(181, 25);
			this->btnAgregar->TabIndex = 10;
			this->btnAgregar->Text = L"AGREGAR";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &formCrearRegistrarTabla::button1_Click);
			// 
			// txtEtiqueta
			// 
			this->txtEtiqueta->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEtiqueta->Location = System::Drawing::Point(87, 30);
			this->txtEtiqueta->Name = L"txtEtiqueta";
			this->txtEtiqueta->Size = System::Drawing::Size(243, 24);
			this->txtEtiqueta->TabIndex = 9;
			this->txtEtiqueta->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Nombre:";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(18, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(506, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Agregar Columna";
			this->label4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// formCrearRegistrarTabla
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1097, 592);
			this->Controls->Add(this->panelColumnas);
			this->Controls->Add(this->panelTabla);
			this->Controls->Add(this->panel3);
			this->Name = L"formCrearRegistrarTabla";
			this->Text = L"Crearci y Llenado de Tabla";
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTabla))->EndInit();
			this->panelTabla->ResumeLayout(false);
			this->panelTabla->PerformLayout();
			this->panelColumnas->ResumeLayout(false);
			this->panelColumnas->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		if (!txtNombreTabla->Text->Trim()->Equals("")) { //verificamos si se asign・un nombre a la tabla
			ArrayList^ arrayListTabla = gcnew ArrayList();

			for each (DataGridViewRow ^ fila in dataTabla->Rows) //obtenemos los datos de la tabla
			{
				array<String^>^ arreglo = gcnew array<String^>(dataTabla->Columns->Count);
				int index = 0;
				for each (DataGridViewCell ^ columna in fila->Cells)
				{
					if (columna->Value == nullptr) {
						arreglo[index] = "";
					}
					else {
						arreglo[index] = columna->Value->ToString();
					}
					index++;
				}
				arrayListTabla->Add(arreglo); //metemos la fila al arrayList
			}

			Tabla^ tabla = gcnew Tabla();
			tabla->ExportarTabla(txtNombreTabla->Text->Trim(), arrayListTabla, arrayListColumnas); //usamos el metodo ExportarTabla de la clase Tabla instanceada
			System::Windows::Forms::MessageBox::Show("Exito!!! Se export・la tabla correctamente", "Exportaci de datos", MessageBoxButtons::OK);
		}
		else {
			System::Windows::Forms::MessageBox::Show("Error!!! El nombre de la tabla es vac卲 ", "Exportaci de datos", MessageBoxButtons::OK);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ etiqueta = txtEtiqueta->Text;
		if (!etiqueta->Trim()->Equals("")) { //Si la etiqueta es diferente de vac僘, agregamos la columna a la tabla
			dataTabla->Columns->Add(txtEtiqueta->Text, txtEtiqueta->Text);
			arrayListColumnas->Add(etiqueta);
			txtEtiqueta->Text = "";
		}
		else {
			System::Windows::Forms::MessageBox::Show("Error!!! El nombre de columna es vac卲 ", "Agregar columna a la tabla", MessageBoxButtons::OK);
		}
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//Limpiamos la tabla		
		arrayListColumnas = gcnew ArrayList();
		arrayListColumnas->Add("Nro");
		dataTabla->Columns->Clear();
		dataTabla->Columns->Add("Nro", "Nro");
	}
	private: System::Void txtNombreTabla_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		//mostramos el nombre de la tabla
		labelNombreTabla->Text = "Tabla: " + txtNombreTabla->Text;
	}
	private: System::Void dataTabla_RowsAdded(System::Object^ sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^ e) {
		//cada vez que se agregue una fila, enumeramos las filas de la tabla
		for (int i = 0; i < dataTabla->Rows->Count - 1; i++)
		{
			dataTabla->Rows[i]->Cells[0]->Value = i + 1;
		}
	}

	private: System::Void dataTabla_RowsRemoved(System::Object^ sender, System::Windows::Forms::DataGridViewRowsRemovedEventArgs^ e) {
		//cada vez que se elimine una fila, enumeramos las filas de la tabla
		for (int i = 0; i < dataTabla->Rows->Count - 1; i++)
		{
			dataTabla->Rows[i]->Cells[0]->Value = i + 1;
		}
	}
	};
}
