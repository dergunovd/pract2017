#pragma once
#include "recur.h"

namespace recursion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnCalculate;
	private: System::Windows::Forms::Label^  lblOutput;
	private: System::Windows::Forms::ErrorProvider^  errorProvider;
	private: System::Windows::Forms::TextBox^  txtOutput;
	private: System::Windows::Forms::TextBox^  txtInput;
	private: System::Windows::Forms::Label^  lblInput;
	private: System::ComponentModel::IContainer^  components;
	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->lblOutput = (gcnew System::Windows::Forms::Label());
			this->errorProvider = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->lblInput = (gcnew System::Windows::Forms::Label());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider))->BeginInit();
			this->SuspendLayout();
			// 
			// btnCalculate
			// 
			this->btnCalculate->Location = System::Drawing::Point(98, 60);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(75, 23);
			this->btnCalculate->TabIndex = 0;
			this->btnCalculate->Text = L"¬ычислить";
			this->btnCalculate->UseVisualStyleBackColor = true;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &MyForm::btnCalculate_Click);
			// 
			// lblOutput
			// 
			this->lblOutput->AutoSize = true;
			this->lblOutput->Location = System::Drawing::Point(33, 37);
			this->lblOutput->Name = L"lblOutput";
			this->lblOutput->Size = System::Drawing::Size(59, 13);
			this->lblOutput->TabIndex = 1;
			this->lblOutput->Text = L"–езультат";
			// 
			// errorProvider
			// 
			this->errorProvider->ContainerControl = this;
			// 
			// lblInput
			// 
			this->lblInput->AutoSize = true;
			this->lblInput->Location = System::Drawing::Point(32, 11);
			this->lblInput->Name = L"lblInput";
			this->lblInput->Size = System::Drawing::Size(60, 13);
			this->lblInput->TabIndex = 2;
			this->lblInput->Text = L"¬ведите N";
			// 
			// txtInput
			// 
			this->txtInput->Location = System::Drawing::Point(98, 8);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(100, 20);
			this->txtInput->TabIndex = 3;
			// 
			// txtOutput
			// 
			this->txtOutput->Location = System::Drawing::Point(98, 34);
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->ReadOnly = true;
			this->txtOutput->Size = System::Drawing::Size(100, 20);
			this->txtOutput->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(234, 93);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->lblInput);
			this->Controls->Add(this->lblOutput);
			this->Controls->Add(this->btnCalculate);
			this->Name = L"MyForm";
			this->Text = L"–екуррентные вычислени€";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnCalculate_Click(System::Object^  sender, System::EventArgs^  e) {
	int InputNumber;
	bool result = Int32::TryParse(this->txtInput->Text, InputNumber);
	//если спарсили
	if (result) {
		errorProvider->SetError(this->txtInput, String::Empty);
		if (InputNumber < 1) {
			this->txtOutput->Text = "";
			errorProvider->SetError(this->txtInput, "¬ведено не положительное число");
		}
		else {
			double OutputNumber = recur(InputNumber);
			this->txtOutput->Text = System::Convert::ToString(OutputNumber);
		}
	}
	else {
		this->txtOutput->Text = "";
		errorProvider->SetError(this->txtInput, "¬ведено не целое число");
	}
}
};
}
