#pragma once
#include "count.h"

namespace factorial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtInputX;
	protected:

	private: System::Windows::Forms::TextBox^  txtOutput;
	private: System::Windows::Forms::Label^  lblInputX;

	protected:

	protected:


	private: System::Windows::Forms::Label^  lblOutput;
	private: System::Windows::Forms::Button^  btnCalculate;
	private: System::Windows::Forms::ErrorProvider^  errorProvider;
	private: System::Windows::Forms::Label^  lblInputY;
	private: System::Windows::Forms::TextBox^  txtInputY;


	private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->txtInputX = (gcnew System::Windows::Forms::TextBox());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->lblInputX = (gcnew System::Windows::Forms::Label());
			this->lblOutput = (gcnew System::Windows::Forms::Label());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->errorProvider = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->lblInputY = (gcnew System::Windows::Forms::Label());
			this->txtInputY = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider))->BeginInit();
			this->SuspendLayout();
			// 
			// txtInputX
			// 
			this->txtInputX->Location = System::Drawing::Point(149, 12);
			this->txtInputX->Name = L"txtInputX";
			this->txtInputX->Size = System::Drawing::Size(116, 20);
			this->txtInputX->TabIndex = 0;
			// 
			// txtOutput
			// 
			this->txtOutput->Location = System::Drawing::Point(149, 64);
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->ReadOnly = true;
			this->txtOutput->Size = System::Drawing::Size(116, 20);
			this->txtOutput->TabIndex = 1;
			// 
			// lblInputX
			// 
			this->lblInputX->AutoSize = true;
			this->lblInputX->Location = System::Drawing::Point(12, 15);
			this->lblInputX->Name = L"lblInputX";
			this->lblInputX->Size = System::Drawing::Size(59, 13);
			this->lblInputX->TabIndex = 2;
			this->lblInputX->Text = L"������� X";
			this->lblInputX->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// lblOutput
			// 
			this->lblOutput->AutoSize = true;
			this->lblOutput->Location = System::Drawing::Point(12, 71);
			this->lblOutput->Name = L"lblOutput";
			this->lblOutput->Size = System::Drawing::Size(59, 13);
			this->lblOutput->TabIndex = 3;
			this->lblOutput->Text = L"���������";
			// 
			// btnCalculate
			// 
			this->btnCalculate->Location = System::Drawing::Point(149, 90);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(75, 23);
			this->btnCalculate->TabIndex = 4;
			this->btnCalculate->Text = L"���������";
			this->btnCalculate->UseVisualStyleBackColor = true;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &MyForm1::btnCalculate_Click);
			// 
			// errorProvider
			// 
			this->errorProvider->ContainerControl = this;
			// 
			// lblInputY
			// 
			this->lblInputY->AutoSize = true;
			this->lblInputY->Location = System::Drawing::Point(12, 45);
			this->lblInputY->Name = L"lblInputY";
			this->lblInputY->Size = System::Drawing::Size(59, 13);
			this->lblInputY->TabIndex = 6;
			this->lblInputY->Text = L"������� Y";
			// 
			// txtInputY
			// 
			this->txtInputY->Location = System::Drawing::Point(149, 38);
			this->txtInputY->Name = L"txtInputY";
			this->txtInputY->Size = System::Drawing::Size(116, 20);
			this->txtInputY->TabIndex = 5;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(292, 150);
			this->Controls->Add(this->lblInputY);
			this->Controls->Add(this->txtInputY);
			this->Controls->Add(this->btnCalculate);
			this->Controls->Add(this->lblOutput);
			this->Controls->Add(this->lblInputX);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->txtInputX);
			this->MaximizeBox = false;
			this->Name = L"MyForm1";
			this->Text = L"������� ����������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnCalculate_Click(System::Object^  sender, System::EventArgs^  e) {
		int InputNumberX;
		int InputNumberY;
		bool resultX = Int32::TryParse(this->txtInputX->Text, InputNumberX);
		bool resultY = Int32::TryParse(this->txtInputY->Text, InputNumberY);

		errorProvider->SetError(this->txtInputX, String::Empty);
		errorProvider->SetError(this->txtInputY, String::Empty);
		this->txtOutput->Text = "";

		// ���� � �� �����
		if (!resultX) {
			errorProvider->SetError(this->txtInputX, "������� �� ����� �����");
		}
		// ���� y �� �����
		if (!resultY) {
			errorProvider->SetError(this->txtInputY, "������� �� ����� �����");
		}

		//���� ��� ������
		if (resultX && resultY) {
			// �������� ������� �� 0
			if (InputNumberY == 4) {
				errorProvider->SetError(this->txtInputY, "������� �� 0. Y �� ������ ��������� 4");
			}
			if (InputNumberX == 1) {
				errorProvider->SetError(this->txtInputX, "������� �� 0. X �� ������ ��������� 1");
			}

			//���� ��� ������
			if (InputNumberY != 4 && InputNumberX != 1) {
				double OutputNumber = count(InputNumberX, InputNumberY);
				this->txtOutput->Text = System::Convert::ToString(OutputNumber);
			}
		}
	}
};
}
