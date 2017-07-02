#pragma once

namespace table1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  GridNumbers;
	protected:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Число;
	private: System::Windows::Forms::ErrorProvider^  errorProvider;

	private: System::Windows::Forms::TextBox^  txtTo;
	private: System::Windows::Forms::TextBox^  txtFrom;
	private: System::Windows::Forms::Label^  lblFrom;



	private: System::Windows::Forms::Label^  lblTo;

	private: System::Windows::Forms::Label^  lblTask;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::TextBox^  txtResult;
	private: System::Windows::Forms::Label^  lblResult;
	private: System::Windows::Forms::Button^  btnCalculate;




	private: System::Windows::Forms::Button^  btnRemove;


	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->GridNumbers = (gcnew System::Windows::Forms::DataGridView());
			this->Число = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->errorProvider = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->lblTo = (gcnew System::Windows::Forms::Label());
			this->lblFrom = (gcnew System::Windows::Forms::Label());
			this->txtFrom = (gcnew System::Windows::Forms::TextBox());
			this->txtTo = (gcnew System::Windows::Forms::TextBox());
			this->lblTask = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridNumbers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider))->BeginInit();
			this->SuspendLayout();
			// 
			// GridNumbers
			// 
			this->GridNumbers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->GridNumbers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Число });
			this->GridNumbers->Location = System::Drawing::Point(0, 0);
			this->GridNumbers->Name = L"GridNumbers";
			this->GridNumbers->Size = System::Drawing::Size(143, 345);
			this->GridNumbers->TabIndex = 0;
			// 
			// Число
			// 
			this->Число->HeaderText = L"number";
			this->Число->Name = L"Число";
			// 
			// errorProvider
			// 
			this->errorProvider->ContainerControl = this;
			// 
			// lblTo
			// 
			this->lblTo->AutoSize = true;
			this->lblTo->Location = System::Drawing::Point(165, 80);
			this->lblTo->Name = L"lblTo";
			this->lblTo->Size = System::Drawing::Size(19, 13);
			this->lblTo->TabIndex = 1;
			this->lblTo->Text = L"до";
			// 
			// lblFrom
			// 
			this->lblFrom->AutoSize = true;
			this->lblFrom->Location = System::Drawing::Point(165, 58);
			this->lblFrom->Name = L"lblFrom";
			this->lblFrom->Size = System::Drawing::Size(18, 13);
			this->lblFrom->TabIndex = 2;
			this->lblFrom->Text = L"от";
			// 
			// txtFrom
			// 
			this->txtFrom->Location = System::Drawing::Point(189, 55);
			this->txtFrom->Name = L"txtFrom";
			this->txtFrom->Size = System::Drawing::Size(49, 20);
			this->txtFrom->TabIndex = 3;
			// 
			// txtTo
			// 
			this->txtTo->Location = System::Drawing::Point(189, 81);
			this->txtTo->Name = L"txtTo";
			this->txtTo->Size = System::Drawing::Size(49, 20);
			this->txtTo->TabIndex = 4;
			// 
			// lblTask
			// 
			this->lblTask->Location = System::Drawing::Point(165, 9);
			this->lblTask->Name = L"lblTask";
			this->lblTask->Size = System::Drawing::Size(146, 43);
			this->lblTask->TabIndex = 5;
			this->lblTask->Text = L"Среднее арифметическое нечетных чисел не попадающих в интервал";
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(168, 140);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(66, 27);
			this->btnAdd->TabIndex = 6;
			this->btnAdd->Text = L"Добавить";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnRemove
			// 
			this->btnRemove->Location = System::Drawing::Point(238, 140);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(66, 27);
			this->btnRemove->TabIndex = 7;
			this->btnRemove->Text = L"Удалить";
			this->btnRemove->UseVisualStyleBackColor = true;
			this->btnRemove->Click += gcnew System::EventHandler(this, &MyForm::btnRemove_Click);
			// 
			// btnCalculate
			// 
			this->btnCalculate->Location = System::Drawing::Point(168, 107);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(136, 27);
			this->btnCalculate->TabIndex = 8;
			this->btnCalculate->Text = L"Посчитать";
			this->btnCalculate->UseVisualStyleBackColor = true;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &MyForm::btnCalculate_Click);
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Location = System::Drawing::Point(165, 212);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(59, 13);
			this->lblResult->TabIndex = 9;
			this->lblResult->Text = L"Результат";
			// 
			// txtResult
			// 
			this->txtResult->Location = System::Drawing::Point(168, 228);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(136, 20);
			this->txtResult->TabIndex = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(327, 342);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->btnCalculate);
			this->Controls->Add(this->btnRemove);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->lblTask);
			this->Controls->Add(this->txtTo);
			this->Controls->Add(this->txtFrom);
			this->Controls->Add(this->lblFrom);
			this->Controls->Add(this->lblTo);
			this->Controls->Add(this->GridNumbers);
			this->Name = L"MyForm";
			this->Text = L"Таблица";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridNumbers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
	// очищаем ошибки
	errorProvider->SetError(this->txtFrom, String::Empty);
	errorProvider->SetError(this->txtTo, String::Empty);
	errorProvider->SetError(this->GridNumbers, String::Empty);
	this->txtResult->Text = "";
	this->GridNumbers->Rows->Add(1);
}
private: System::Void btnRemove_Click(System::Object^  sender, System::EventArgs^  e) {
	// очищаем ошибки
	errorProvider->SetError(this->txtFrom, String::Empty);
	errorProvider->SetError(this->txtTo, String::Empty);
	errorProvider->SetError(this->GridNumbers, String::Empty);
	this->txtResult->Text = "";
	if (!this->GridNumbers->CurrentRow->IsNewRow) {
		int i = this->GridNumbers->CurrentRow->Index;
		this->GridNumbers->Rows->Remove(this->GridNumbers->Rows[i]);
	}
}
private: System::Void btnCalculate_Click(System::Object^  sender, System::EventArgs^  e) {
	// очищаем ошибки
	errorProvider->SetError(this->txtFrom, String::Empty);
	errorProvider->SetError(this->txtTo, String::Empty);
	errorProvider->SetError(this->GridNumbers, String::Empty);
	this->txtResult->Text = "";

	// сумма и количество
	int s, k;
	s = k = 0;

	// блок с обработкой исключений
	/* коды ошибок:
	 * 1 - "От" - не число
	 * 2 - "До" - не число
	 * 4 - "От" больше "До"
	 * 8 - в таблице пустые ячейка
	 * 16 - в таблице не числа
	 * 32 - нет удоавлетворяющих условию чисел
	 */
	// выполняем
	try {
		int from, to;
		int errorCode = 0;
		bool resultFrom = Int32::TryParse(this->txtFrom->Text, from);
		bool resultTo = Int32::TryParse(this->txtTo->Text, to);
		if (!resultFrom) {
			errorCode += 1;
		}
		if (!resultTo) {
			errorCode += 2;
		}
		if (resultFrom && resultTo && (from > to)){
			errorCode += 4;
		}
		for (int i = 0; i < this->GridNumbers->RowCount - 1; i++) {
			int currentNumber;
			//проверка на пустую строку
			if (!(String ^)this->GridNumbers->Rows[i]->Cells[0]->Value) {
				errorCode += 8;
			}
			// Проверка на целое число
			else if (!Int32::TryParse(this->GridNumbers->Rows[i]->Cells[0]->Value->ToString(), currentNumber)) {
				errorCode += 16;
			}
			// проверка на нечетность и попадение в интервал
			else if (currentNumber % 2 && (currentNumber < from || currentNumber > to)) {
				k++;
				s += currentNumber;
			}
		}
		if (!k) {
			errorCode += 32;
		}
		//если код ошибки не 0, кидаем исключение
		if (errorCode)
			throw errorCode;

		this->txtResult->Text = System::Convert::ToString((double) s / k );
	}
	//перехватываем исключение
	catch (int errorCode) {
		//парсим код ошибки
		int n = 32;
		while (n > 0) {
			if (errorCode >= n) {
				//разбираем код ошибки и выводим errorProvider'ы
				switch (n) {
				case 1:
					errorProvider->SetError(this->txtFrom, "Введено не число");
					break;
				case 2:
					errorProvider->SetError(this->txtTo, "Введено не число");
					break;
				case 4:
					errorProvider->SetError(this->txtFrom, "\"От\" больше \"До\"");
					errorProvider->SetError(this->txtTo, "\"От\" больше \"До\"");
					break;
				case 8:
					errorProvider->SetError(this->GridNumbers, "В таблице пустые строки");
					break;
				case 16:
					errorProvider->SetError(this->GridNumbers, "В таблице есть не целые числа");
					break;
				case 32:
					errorProvider->SetError(this->GridNumbers, "В таблице нет удовлетворяющих условию чисел");
					break;
				}
				errorCode -= n;
			}
			n /= 2;
		}
	}
	
}
};
}
