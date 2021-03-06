#pragma once
#include "formCrearRegistrarTabla.h"
#include "formImportarTabla.h"

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de formPrincipal
	/// </summary>
	public ref class formPrincipal : public System::Windows::Forms::Form
	{
	public:
		formPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar cigo de constructor aqu・
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est駭 usando.
		/// </summary>
		~formPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ crearTablaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cargarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(formPrincipal::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->crearTablaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cargarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem1 });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1035, 32);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->crearTablaToolStripMenuItem,
					this->cargarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->toolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"MS PGothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(78, 28);
			this->toolStripMenuItem1->Text = L"Menu";
			// 
			// crearTablaToolStripMenuItem
			// 
			this->crearTablaToolStripMenuItem->Name = L"crearTablaToolStripMenuItem";
			this->crearTablaToolStripMenuItem->Size = System::Drawing::Size(224, 28);
			this->crearTablaToolStripMenuItem->Text = L"Crear Tabla";
			this->crearTablaToolStripMenuItem->Click += gcnew System::EventHandler(this, &formPrincipal::crearTablaToolStripMenuItem_Click);
			// 
			// cargarToolStripMenuItem
			// 
			this->cargarToolStripMenuItem->Name = L"cargarToolStripMenuItem";
			this->cargarToolStripMenuItem->Size = System::Drawing::Size(224, 28);
			this->cargarToolStripMenuItem->Text = L"Cargar Tabla";
			this->cargarToolStripMenuItem->Click += gcnew System::EventHandler(this, &formPrincipal::cargarToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(224, 28);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &formPrincipal::salirToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(12, 31);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1011, 461);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// formPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1035, 504);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"formPrincipal";
			this->Text = L"Home";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void crearTablaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		formCrearRegistrarTabla^ form = gcnew formCrearRegistrarTabla();
		form->Show();
	}
	private: System::Void cargarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		formImportarTabla^ form = gcnew formImportarTabla();
		form->Show();
	}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
