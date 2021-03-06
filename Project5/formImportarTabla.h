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
	/// Resumen de formImportarTabla
	/// </summary>
	public ref class formImportarTabla : public System::Windows::Forms::Form
	{
	public:
		ArrayList^ arrayListColumnas;
		ArrayList^ arrayListColumnasSeleccion;
		ArrayList^ arrayListTabla;
		ArrayList^ arrayListIndexada;
		formImportarTabla(void)
		{
			InitializeComponent();
			arrayListColumnas = gcnew ArrayList();
			arrayListTabla = gcnew ArrayList();
			arrayListColumnasSeleccion = gcnew ArrayList();
			desactivarPaneles();
			//
			//TODO: agregar cigo de constructor aqu・
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est駭 usando.
		/// </summary>
		~formImportarTabla()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ labelNombreTabla;

	private: System::Windows::Forms::DataGridView^ dataTabla;
	private: System::Windows::Forms::Panel^ panelFiltrar;
	private: System::Windows::Forms::ComboBox^ comboBoxFiltroCondicion2;



	private: System::Windows::Forms::ComboBox^ comboBoxFiltroCondicion1;

	private: System::Windows::Forms::ComboBox^ comboBoxFiltroColumna2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBoxFiltroColumna1;
	private: System::Windows::Forms::TextBox^ txtFiltro2;

	private: System::Windows::Forms::TextBox^ txtFiltro1;







	private: System::Windows::Forms::Panel^ panelSeleccionar;
	private: System::Windows::Forms::Button^ btnSeleccionGenerar;


	private: System::Windows::Forms::Button^ btnSeleccionAgregar;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBoxSeleccion;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panelIndexar;
	private: System::Windows::Forms::Button^ btnIndexar;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBoxIndexar;

	private: System::Windows::Forms::Panel^ panelAbrirTxt;
	private: System::Windows::Forms::Button^ btnAbrir;


	private: System::Windows::Forms::TextBox^ txtNombreTabla;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnFiltrar;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtNuevoNombre;






	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtNuevoNombre = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->labelNombreTabla = (gcnew System::Windows::Forms::Label());
			this->dataTabla = (gcnew System::Windows::Forms::DataGridView());
			this->panelFiltrar = (gcnew System::Windows::Forms::Panel());
			this->btnFiltrar = (gcnew System::Windows::Forms::Button());
			this->txtFiltro2 = (gcnew System::Windows::Forms::TextBox());
			this->txtFiltro1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxFiltroCondicion2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxFiltroCondicion1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxFiltroColumna2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBoxFiltroColumna1 = (gcnew System::Windows::Forms::ComboBox());
			this->panelSeleccionar = (gcnew System::Windows::Forms::Panel());
			this->btnSeleccionGenerar = (gcnew System::Windows::Forms::Button());
			this->btnSeleccionAgregar = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBoxSeleccion = (gcnew System::Windows::Forms::ComboBox());
			this->panelIndexar = (gcnew System::Windows::Forms::Panel());
			this->btnIndexar = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBoxIndexar = (gcnew System::Windows::Forms::ComboBox());
			this->panelAbrirTxt = (gcnew System::Windows::Forms::Panel());
			this->btnAbrir = (gcnew System::Windows::Forms::Button());
			this->txtNombreTabla = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTabla))->BeginInit();
			this->panelFiltrar->SuspendLayout();
			this->panelSeleccionar->SuspendLayout();
			this->panelIndexar->SuspendLayout();
			this->panelAbrirTxt->SuspendLayout();
			this->SuspendLayout();
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
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->txtNuevoNombre);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->labelNombreTabla);
			this->panel3->Controls->Add(this->dataTabla);
			this->panel3->Location = System::Drawing::Point(12, 207);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1316, 493);
			this->panel3->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(591, 467);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(177, 17);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Guardar Como. Nombre:";
			// 
			// txtNuevoNombre
			// 
			this->txtNuevoNombre->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNuevoNombre->Location = System::Drawing::Point(794, 464);
			this->txtNuevoNombre->Name = L"txtNuevoNombre";
			this->txtNuevoNombre->Size = System::Drawing::Size(295, 24);
			this->txtNuevoNombre->TabIndex = 11;
			this->txtNuevoNombre->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(18, 460);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 30);
			this->button1->TabIndex = 5;
			this->button1->Text = L"MOSTRAR TODO";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &formImportarTabla::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(1105, 460);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(196, 30);
			this->button3->TabIndex = 4;
			this->button3->Text = L"EXPORTAR TABLA";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &formImportarTabla::button3_Click);
			// 
			// labelNombreTabla
			// 
			this->labelNombreTabla->Font = (gcnew System::Drawing::Font(L"MS PGothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNombreTabla->Location = System::Drawing::Point(18, 10);
			this->labelNombreTabla->Name = L"labelNombreTabla";
			this->labelNombreTabla->Size = System::Drawing::Size(1283, 27);
			this->labelNombreTabla->TabIndex = 1;
			this->labelNombreTabla->Text = L"Tabla 01";
			this->labelNombreTabla->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// dataTabla
			// 
			this->dataTabla->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataTabla->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataTabla->Location = System::Drawing::Point(18, 40);
			this->dataTabla->Name = L"dataTabla";
			this->dataTabla->RowHeadersWidth = 51;
			this->dataTabla->RowTemplate->Height = 24;
			this->dataTabla->Size = System::Drawing::Size(1283, 414);
			this->dataTabla->TabIndex = 0;
			// 
			// panelFiltrar
			// 
			this->panelFiltrar->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelFiltrar->Controls->Add(this->btnFiltrar);
			this->panelFiltrar->Controls->Add(this->txtFiltro2);
			this->panelFiltrar->Controls->Add(this->txtFiltro1);
			this->panelFiltrar->Controls->Add(this->comboBoxFiltroCondicion2);
			this->panelFiltrar->Controls->Add(this->comboBoxFiltroCondicion1);
			this->panelFiltrar->Controls->Add(this->comboBoxFiltroColumna2);
			this->panelFiltrar->Controls->Add(this->label2);
			this->panelFiltrar->Controls->Add(this->comboBoxFiltroColumna1);
			this->panelFiltrar->Location = System::Drawing::Point(12, 89);
			this->panelFiltrar->Name = L"panelFiltrar";
			this->panelFiltrar->Size = System::Drawing::Size(655, 97);
			this->panelFiltrar->TabIndex = 6;
			// 
			// btnFiltrar
			// 
			this->btnFiltrar->Font = (gcnew System::Drawing::Font(L"MS PGothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFiltrar->Location = System::Drawing::Point(460, 4);
			this->btnFiltrar->Name = L"btnFiltrar";
			this->btnFiltrar->Size = System::Drawing::Size(180, 25);
			this->btnFiltrar->TabIndex = 11;
			this->btnFiltrar->Text = L"FILTRAR";
			this->btnFiltrar->UseVisualStyleBackColor = true;
			this->btnFiltrar->Click += gcnew System::EventHandler(this, &formImportarTabla::button7_Click);
			// 
			// txtFiltro2
			// 
			this->txtFiltro2->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFiltro2->Location = System::Drawing::Point(460, 66);
			this->txtFiltro2->Name = L"txtFiltro2";
			this->txtFiltro2->Size = System::Drawing::Size(180, 24);
			this->txtFiltro2->TabIndex = 8;
			// 
			// txtFiltro1
			// 
			this->txtFiltro1->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFiltro1->Location = System::Drawing::Point(460, 32);
			this->txtFiltro1->Name = L"txtFiltro1";
			this->txtFiltro1->Size = System::Drawing::Size(180, 24);
			this->txtFiltro1->TabIndex = 6;
			// 
			// comboBoxFiltroCondicion2
			// 
			this->comboBoxFiltroCondicion2->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxFiltroCondicion2->FormattingEnabled = true;
			this->comboBoxFiltroCondicion2->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Mayor", L"Menor", L"Igual a",
					L"Inicia con", L"Finaliza con", L"Est・contenido en", L"No est・contenido en"
			});
			this->comboBoxFiltroCondicion2->Location = System::Drawing::Point(239, 65);
			this->comboBoxFiltroCondicion2->Name = L"comboBoxFiltroCondicion2";
			this->comboBoxFiltroCondicion2->Size = System::Drawing::Size(215, 25);
			this->comboBoxFiltroCondicion2->TabIndex = 7;
			this->comboBoxFiltroCondicion2->Text = L"Seleccionar Condici...";
			// 
			// comboBoxFiltroCondicion1
			// 
			this->comboBoxFiltroCondicion1->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxFiltroCondicion1->FormattingEnabled = true;
			this->comboBoxFiltroCondicion1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Mayor", L"Menor", L"Igual a",
					L"Inicia con", L"Finaliza con", L"Est・contenido en", L"No est・contenido en"
			});
			this->comboBoxFiltroCondicion1->Location = System::Drawing::Point(239, 32);
			this->comboBoxFiltroCondicion1->Name = L"comboBoxFiltroCondicion1";
			this->comboBoxFiltroCondicion1->Size = System::Drawing::Size(215, 25);
			this->comboBoxFiltroCondicion1->TabIndex = 6;
			this->comboBoxFiltroCondicion1->Text = L"Seleccionar Condici...";
			// 
			// comboBoxFiltroColumna2
			// 
			this->comboBoxFiltroColumna2->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxFiltroColumna2->FormattingEnabled = true;
			this->comboBoxFiltroColumna2->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Columna 2" });
			this->comboBoxFiltroColumna2->Location = System::Drawing::Point(18, 65);
			this->comboBoxFiltroColumna2->Name = L"comboBoxFiltroColumna2";
			this->comboBoxFiltroColumna2->Size = System::Drawing::Size(215, 25);
			this->comboBoxFiltroColumna2->TabIndex = 5;
			this->comboBoxFiltroColumna2->Text = L"Selecciona Columna...";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(185, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Fitrar por Columnas";
			// 
			// comboBoxFiltroColumna1
			// 
			this->comboBoxFiltroColumna1->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxFiltroColumna1->FormattingEnabled = true;
			this->comboBoxFiltroColumna1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Columna 1" });
			this->comboBoxFiltroColumna1->Location = System::Drawing::Point(18, 32);
			this->comboBoxFiltroColumna1->Name = L"comboBoxFiltroColumna1";
			this->comboBoxFiltroColumna1->Size = System::Drawing::Size(215, 25);
			this->comboBoxFiltroColumna1->TabIndex = 0;
			this->comboBoxFiltroColumna1->Text = L"Selecciona Columna...";
			// 
			// panelSeleccionar
			// 
			this->panelSeleccionar->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelSeleccionar->Controls->Add(this->btnSeleccionGenerar);
			this->panelSeleccionar->Controls->Add(this->btnSeleccionAgregar);
			this->panelSeleccionar->Controls->Add(this->label4);
			this->panelSeleccionar->Controls->Add(this->comboBoxSeleccion);
			this->panelSeleccionar->Location = System::Drawing::Point(673, 89);
			this->panelSeleccionar->Name = L"panelSeleccionar";
			this->panelSeleccionar->Size = System::Drawing::Size(655, 97);
			this->panelSeleccionar->TabIndex = 7;
			// 
			// btnSeleccionGenerar
			// 
			this->btnSeleccionGenerar->Font = (gcnew System::Drawing::Font(L"MS PGothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSeleccionGenerar->Location = System::Drawing::Point(460, 32);
			this->btnSeleccionGenerar->Name = L"btnSeleccionGenerar";
			this->btnSeleccionGenerar->Size = System::Drawing::Size(180, 25);
			this->btnSeleccionGenerar->TabIndex = 7;
			this->btnSeleccionGenerar->Text = L"GENERAR TABLA";
			this->btnSeleccionGenerar->UseVisualStyleBackColor = true;
			this->btnSeleccionGenerar->Click += gcnew System::EventHandler(this, &formImportarTabla::button4_Click);
			// 
			// btnSeleccionAgregar
			// 
			this->btnSeleccionAgregar->Font = (gcnew System::Drawing::Font(L"MS PGothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSeleccionAgregar->Location = System::Drawing::Point(239, 32);
			this->btnSeleccionAgregar->Name = L"btnSeleccionAgregar";
			this->btnSeleccionAgregar->Size = System::Drawing::Size(215, 25);
			this->btnSeleccionAgregar->TabIndex = 6;
			this->btnSeleccionAgregar->Text = L"AGREGAR";
			this->btnSeleccionAgregar->UseVisualStyleBackColor = true;
			this->btnSeleccionAgregar->Click += gcnew System::EventHandler(this, &formImportarTabla::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(218, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(252, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Seleccion de Datos por Columnas";
			// 
			// comboBoxSeleccion
			// 
			this->comboBoxSeleccion->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxSeleccion->FormattingEnabled = true;
			this->comboBoxSeleccion->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Columna 1", L"Columna 2" });
			this->comboBoxSeleccion->Location = System::Drawing::Point(18, 32);
			this->comboBoxSeleccion->Name = L"comboBoxSeleccion";
			this->comboBoxSeleccion->Size = System::Drawing::Size(215, 25);
			this->comboBoxSeleccion->TabIndex = 0;
			this->comboBoxSeleccion->Text = L"Selecciona Columna...";
			// 
			// panelIndexar
			// 
			this->panelIndexar->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelIndexar->Controls->Add(this->btnIndexar);
			this->panelIndexar->Controls->Add(this->label5);
			this->panelIndexar->Controls->Add(this->comboBoxIndexar);
			this->panelIndexar->Location = System::Drawing::Point(673, 12);
			this->panelIndexar->Name = L"panelIndexar";
			this->panelIndexar->Size = System::Drawing::Size(655, 71);
			this->panelIndexar->TabIndex = 8;
			// 
			// btnIndexar
			// 
			this->btnIndexar->Font = (gcnew System::Drawing::Font(L"MS PGothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIndexar->Location = System::Drawing::Point(331, 32);
			this->btnIndexar->Name = L"btnIndexar";
			this->btnIndexar->Size = System::Drawing::Size(309, 25);
			this->btnIndexar->TabIndex = 6;
			this->btnIndexar->Text = L"INDEXAR";
			this->btnIndexar->UseVisualStyleBackColor = true;
			this->btnIndexar->Click += gcnew System::EventHandler(this, &formImportarTabla::button6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(218, 10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(210, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Indexar Datos por Columnas";
			// 
			// comboBoxIndexar
			// 
			this->comboBoxIndexar->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxIndexar->FormattingEnabled = true;
			this->comboBoxIndexar->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Columna 1", L"Columna 2" });
			this->comboBoxIndexar->Location = System::Drawing::Point(18, 32);
			this->comboBoxIndexar->Name = L"comboBoxIndexar";
			this->comboBoxIndexar->Size = System::Drawing::Size(307, 25);
			this->comboBoxIndexar->TabIndex = 0;
			this->comboBoxIndexar->Text = L"Selecciona Columna...";
			// 
			// panelAbrirTxt
			// 
			this->panelAbrirTxt->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelAbrirTxt->Controls->Add(this->btnAbrir);
			this->panelAbrirTxt->Controls->Add(this->txtNombreTabla);
			this->panelAbrirTxt->Controls->Add(this->label1);
			this->panelAbrirTxt->Controls->Add(this->label6);
			this->panelAbrirTxt->Location = System::Drawing::Point(12, 12);
			this->panelAbrirTxt->Name = L"panelAbrirTxt";
			this->panelAbrirTxt->Size = System::Drawing::Size(655, 71);
			this->panelAbrirTxt->TabIndex = 9;
			// 
			// btnAbrir
			// 
			this->btnAbrir->Font = (gcnew System::Drawing::Font(L"MS PGothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAbrir->Location = System::Drawing::Point(460, 29);
			this->btnAbrir->Name = L"btnAbrir";
			this->btnAbrir->Size = System::Drawing::Size(180, 25);
			this->btnAbrir->TabIndex = 10;
			this->btnAbrir->Text = L"ABRIR";
			this->btnAbrir->UseVisualStyleBackColor = true;
			this->btnAbrir->Click += gcnew System::EventHandler(this, &formImportarTabla::button5_Click);
			// 
			// txtNombreTabla
			// 
			this->txtNombreTabla->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNombreTabla->Location = System::Drawing::Point(87, 30);
			this->txtNombreTabla->Name = L"txtNombreTabla";
			this->txtNombreTabla->Size = System::Drawing::Size(367, 24);
			this->txtNombreTabla->TabIndex = 9;
			this->txtNombreTabla->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS PGothic", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(218, 6);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(139, 17);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Abrir Archivo TXT";
			// 
			// formImportarTabla
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1341, 712);
			this->Controls->Add(this->panelAbrirTxt);
			this->Controls->Add(this->panelIndexar);
			this->Controls->Add(this->panelSeleccionar);
			this->Controls->Add(this->panelFiltrar);
			this->Controls->Add(this->panel3);
			this->Name = L"formImportarTabla";
			this->Text = L"Importartaci de Tabla";
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTabla))->EndInit();
			this->panelFiltrar->ResumeLayout(false);
			this->panelFiltrar->PerformLayout();
			this->panelSeleccionar->ResumeLayout(false);
			this->panelSeleccionar->PerformLayout();
			this->panelIndexar->ResumeLayout(false);
			this->panelIndexar->PerformLayout();
			this->panelAbrirTxt->ResumeLayout(false);
			this->panelAbrirTxt->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		Tabla^ tabla = gcnew Tabla();
		arrayListColumnas = gcnew ArrayList();
		arrayListColumnasSeleccion = gcnew ArrayList();
		arrayListTabla = gcnew ArrayList();
		arrayListTabla = tabla->ImportarTabla(txtNombreTabla->Text->Trim()); //usamos el metodo de la clase instaceada
		int contador = 0;

		dataTabla->Columns->Clear(); //limpiamos la tabla
		desactivarPaneles();

		if (arrayListTabla->Count > 0) {
			llenarTablaInicial(arrayListTabla); //llenamos la tabla con los datos importados
			labelNombreTabla->Text = "Tabla: " + txtNombreTabla->Text->Trim();
			activarPaneles();
			llenarComboBox(arrayListColumnas); //llenamos los comboboxes con las columnas de la tabla importada
		}
		else {
			System::Windows::Forms::MessageBox::Show("No se encontraron datos en el archivo", "Importaci de tabla", MessageBoxButtons::OK);
		}


	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		int indexColumna = comboBoxIndexar->SelectedIndex;
		if (indexColumna >= 0) { //condicion que verifica que haya seleccionado una columna
			Tabla^ tabla = gcnew Tabla();
			arrayListIndexada = tabla->IndexarPorColumna(indexColumna, arrayListTabla); //usamos el metodo de la clase instaceada
			System::Windows::Forms::MessageBox::Show("Se ha indexado por:\n" + comboBoxIndexar->SelectedItem, "Indexado por columna", MessageBoxButtons::OK);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int indexColumna = comboBoxSeleccion->SelectedIndex;
		if (indexColumna >= 0) { //condicion que verifica que haya seleccionado una columna
			if (arrayListColumnasSeleccion->IndexOf(indexColumna) < 0) { //verificamos no exista en el arrayList la columna que vamos agregar
				arrayListColumnasSeleccion->Add(indexColumna);
				System::Windows::Forms::MessageBox::Show("Columna agregada correctamente", "Seleccion de datos por columna", MessageBoxButtons::OK);
			}
			else {
				System::Windows::Forms::MessageBox::Show("Esta columna ya ha sido seleccionada", "Seleccion de datos por columna", MessageBoxButtons::OK);
			}
		}

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Tabla^ tabla = gcnew Tabla();
		ArrayList^ arrayListTablaSeleccion = gcnew ArrayList();
		arrayListTablaSeleccion = tabla->SeleccionPorColumnas(arrayListColumnasSeleccion, arrayListTabla); //usamos el metodo de la clase instaceada
		llenarTablaInicial(arrayListTablaSeleccion); //llenamos la tabla con la nueva tabla retornada con las columnas seleecionadas
		arrayListColumnasSeleccion = gcnew ArrayList(); //Limpiamos el arrayList que contenian las columnas seleccionadas(para poder hacer otra seleccion)
		System::Windows::Forms::MessageBox::Show("ｴLa tabla se gener・correctamente", "Seleccion de datos por columna", MessageBoxButtons::OK);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!txtNuevoNombre->Text->Trim()->Equals("")) { //verificamos que hayamos asignado un nombre para exportarlo
			ArrayList^ arrayListTabla = gcnew ArrayList();
			//obtenemos los datos de la tabla
			for each (DataGridViewRow ^ fila in dataTabla->Rows)
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
				arrayListTabla->Add(arreglo); //agregamos la fila de la tabla al arraList
			}

			Tabla^ tabla = gcnew Tabla();
			tabla->ExportarTabla(txtNuevoNombre->Text->Trim(), arrayListTabla, arrayListColumnas); //usamos el metodo de la clase instaceada
			txtNuevoNombre->Text = "";
			System::Windows::Forms::MessageBox::Show("Exito!!! Se export・la tabla correctamente", "Exportaci de datos", MessageBoxButtons::OK);
		}
		else {
			System::Windows::Forms::MessageBox::Show("Error!!! El nombre de la tabla es vac卲 ", "Exportaci de datos", MessageBoxButtons::OK);
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

		Tabla^ tabla = gcnew Tabla();
		int indexColumna1 = -1, indexCondicion1 = -1, indexColumna2 = -1, indexCondicion2 = -1;
		String^ filtro1 = "";
		String^ filtro2 = "";
		String^ nombre1 = "";
		String^ nombre2 = "";
		//verificamos que los datos del filtro 1 esten completos
		if (!txtFiltro1->Text->Trim()->Equals("") && comboBoxFiltroColumna1->SelectedIndex >= 0 && comboBoxFiltroCondicion1->SelectedIndex >= 0) {
			indexColumna1 = comboBoxFiltroColumna1->SelectedIndex;
			indexCondicion1 = comboBoxFiltroCondicion1->SelectedIndex;
			filtro1 = txtFiltro1->Text->Trim();
			nombre1 = comboBoxFiltroColumna1->SelectedItem->ToString();
		}
		//verificamos que los datos del filtro 2 esten completos
		if (!txtFiltro2->Text->Trim()->Equals("") && comboBoxFiltroColumna2->SelectedIndex >= 0 && comboBoxFiltroCondicion2->SelectedIndex >= 0) {
			indexColumna2 = comboBoxFiltroColumna2->SelectedIndex;
			indexCondicion2 = comboBoxFiltroCondicion2->SelectedIndex;
			filtro2 = txtFiltro2->Text->Trim();
			nombre2 = comboBoxFiltroColumna2->SelectedItem->ToString();
		}

		if (filtro1->Equals("") && filtro2->Equals("")) { //Si esta incompleto no hacemos el filtro
			System::Windows::Forms::MessageBox::Show("Las cajas de texto en Filtro est疣 vac僘s", "Filtrado de datos", MessageBoxButtons::OK);
		}
		else {
			if (indexColumna1 == indexColumna2) { //si ambos filtros es para la misma columna, no hacemos el filtro
				System::Windows::Forms::MessageBox::Show("El filtrado debe ser de columnas diferentes", "Filtrado de datos", MessageBoxButtons::OK);
			}
			else {
				//hacemos uso del metodo de la clase instanceada(Filtramos)
				ArrayList^ filtro = tabla->FiltradoPorColumnas(indexColumna1, indexCondicion1, filtro1, indexColumna2, indexCondicion2, filtro2, arrayListTabla);
				llenarTabla(filtro);
				System::Windows::Forms::MessageBox::Show("Datos filtrador por:\n" + nombre1 + "\n" + nombre2, "Filtrado de datos", MessageBoxButtons::OK);
			}
		}

	}
			 //metodo que desactiva los paneles
	private: void desactivarPaneles() {
		panelFiltrar->Enabled = false;
		panelIndexar->Enabled = false;
		panelSeleccionar->Enabled = false;
	}
			 //metodo que activa los paneles
	private: void activarPaneles() {
		panelFiltrar->Enabled = true;
		panelIndexar->Enabled = true;
		panelSeleccionar->Enabled = true;
	}
			 //metodo que llena los comboboxes con las columnas de la tabla
	private: void llenarComboBox(ArrayList^ columnas) {
		comboBoxFiltroColumna1->Items->Clear();
		comboBoxFiltroColumna2->Items->Clear();
		comboBoxIndexar->Items->Clear();
		comboBoxSeleccion->Items->Clear();
		for each (String^ item in columnas)
		{
			comboBoxFiltroColumna1->Items->Add(item);
			comboBoxFiltroColumna2->Items->Add(item);
			comboBoxIndexar->Items->Add(item);
			comboBoxSeleccion->Items->Add(item);
		}
	}
			 //metodo que llena la tabla despues de un filtro
	private: void llenarTabla(ArrayList^ datos) {
		dataTabla->Columns->Clear();
		llenarColumnaInicial(arrayListTabla);
		for each (array<String^>^ fila in datos)
		{
			dataTabla->Rows->Add(fila);
		}
	}
			 //metodo que llena la tabla con los datos leidos del archivo txt
	private: void llenarTablaInicial(ArrayList^ arrayListTabla) {
		dataTabla->Columns->Clear();
		arrayListColumnas = gcnew ArrayList();
		int contador = 0;
		for each (array<String^> ^ fila in arrayListTabla)
		{
			if (contador == 0) {
				for each (String ^ dato in fila)
				{
					arrayListColumnas->Add(dato);
					dataTabla->Columns->Add(dato, dato);
				}
				contador++;
			}
			else {
				dataTabla->Rows->Add(fila);
			}
		}
	}
			 //metodo que llena las columnas de la tabla con leidos del archivo txt
	private: void llenarColumnaInicial(ArrayList^ arrayListTabla) {
		int contador = 0;
		for each (array<String^> ^ fila in arrayListTabla)
		{
			if (contador == 0) {
				for each (String ^ dato in fila)
				{
					arrayListColumnas->Add(dato);
					dataTabla->Columns->Add(dato, dato);
				}
				contador++;
			}
			else {
				break;
			}
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		llenarTablaInicial(arrayListTabla);
	}
	};

}
