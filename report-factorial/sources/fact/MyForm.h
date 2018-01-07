#pragma once
#include "fact.h"

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
	private: System::Windows::Forms::TextBox^  txtInput;
	private: System::Windows::Forms::TextBox^  txtOutput;
	private: System::Windows::Forms::Label^  lblInput;
	protected:

	protected:


	private: System::Windows::Forms::Label^  lblOutput;
	private: System::Windows::Forms::Button^  btnCalculate;
	private: System::Windows::Forms::ErrorProvider^  errorProvider;
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
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->lblInput = (gcnew System::Windows::Forms::Label());
			this->lblOutput = (gcnew System::Windows::Forms::Label());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->errorProvider = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider))->BeginInit();
			this->SuspendLayout();
			// 
			// txtInput
			// 
			this->txtInput->Location = System::Drawing::Point(149, 12);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(116, 20);
			this->txtInput->TabIndex = 0;
			// 
			// txtOutput
			// 
			this->txtOutput->Location = System::Drawing::Point(149, 38);
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->ReadOnly = true;
			this->txtOutput->Size = System::Drawing::Size(116, 20);
			this->txtOutput->TabIndex = 1;
			// 
			// lblInput
			// 
			this->lblInput->AutoSize = true;
			this->lblInput->Location = System::Drawing::Point(12, 15);
			this->lblInput->Name = L"lblInput";
			this->lblInput->Size = System::Drawing::Size(114, 13);
			this->lblInput->TabIndex = 2;
			this->lblInput->Text = L"������� ����� �����";
			this->lblInput->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// lblOutput
			// 
			this->lblOutput->AutoSize = true;
			this->lblOutput->Location = System::Drawing::Point(12, 41);
			this->lblOutput->Name = L"lblOutput";
			this->lblOutput->Size = System::Drawing::Size(59, 13);
			this->lblOutput->TabIndex = 3;
			this->lblOutput->Text = L"���������";
			// 
			// btnCalculate
			// 
			this->btnCalculate->Location = System::Drawing::Point(149, 64);
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
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(292, 101);
			this->Controls->Add(this->btnCalculate);
			this->Controls->Add(this->lblOutput);
			this->Controls->Add(this->lblInput);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->txtInput);
			this->Name = L"MyForm1";
			this->Text = L"���������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnCalculate_Click(System::Object^  sender, System::EventArgs^  e) {
		int InputNumber;
		bool result = Int32::TryParse(this->txtInput->Text, InputNumber);
		if (result) {
			errorProvider->SetError(this->txtInput, String::Empty);
			if (InputNumber < 0) {
				this->txtOutput->Text = "";
				errorProvider->SetError(this->txtInput, "������� ������������� �����");
			}
			else if (InputNumber > 17) {
				this->txtOutput->Text = "";
				errorProvider->SetError(this->txtInput, "����� �� ������� ����");
			}
			else {
				double OutputNumber = fact(InputNumber);
				this->txtOutput->Text = System::Convert::ToString(OutputNumber);
			}
		}
		else {
			this->txtOutput->Text = "";
			errorProvider->SetError(this->txtInput, "������� �� ����� �����");
		}
	}
};
}
