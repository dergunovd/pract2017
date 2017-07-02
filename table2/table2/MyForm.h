#pragma once

namespace table2 {

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
			this->dataGridRow->Rows->Add(1);
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
	private: System::Windows::Forms::DataGridView^  dataGridInput;
	private: System::Windows::Forms::Label^  lblInput;
	private: System::Windows::Forms::Label^  lblOutput;
	protected:




	private: System::Windows::Forms::DataGridView^  dataGridOutput;
	private: System::Windows::Forms::Button^  btnRowAdd;


	private: System::Windows::Forms::Button^  btnRowRemove;
	private: System::Windows::Forms::Button^  btnColRemove;
	private: System::Windows::Forms::Button^  btnColAdd;
	private: System::Windows::Forms::Button^  btnResult;




	private: System::Windows::Forms::Label^  lblTask;
	private: System::Windows::Forms::DataGridView^  dataGridRow;
	private: System::Windows::Forms::Label^  lblRow;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ColumnIn0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ColumnOut0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ColumnRow0;
	private: System::Windows::Forms::ErrorProvider^  errorProvider;
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
			this->dataGridInput = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnIn0 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lblInput = (gcnew System::Windows::Forms::Label());
			this->lblOutput = (gcnew System::Windows::Forms::Label());
			this->dataGridOutput = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnOut0 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnRowAdd = (gcnew System::Windows::Forms::Button());
			this->btnRowRemove = (gcnew System::Windows::Forms::Button());
			this->btnColRemove = (gcnew System::Windows::Forms::Button());
			this->btnColAdd = (gcnew System::Windows::Forms::Button());
			this->btnResult = (gcnew System::Windows::Forms::Button());
			this->lblTask = (gcnew System::Windows::Forms::Label());
			this->dataGridRow = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnRow0 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lblRow = (gcnew System::Windows::Forms::Label());
			this->errorProvider = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridInput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridOutput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridRow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridInput
			// 
			this->dataGridInput->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridInput->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->ColumnIn0 });
			this->dataGridInput->Location = System::Drawing::Point(12, 25);
			this->dataGridInput->Name = L"dataGridInput";
			this->dataGridInput->Size = System::Drawing::Size(278, 201);
			this->dataGridInput->TabIndex = 0;
			// 
			// ColumnIn0
			// 
			this->ColumnIn0->HeaderText = L"";
			this->ColumnIn0->Name = L"ColumnIn0";
			this->ColumnIn0->Width = 40;
			// 
			// lblInput
			// 
			this->lblInput->AutoSize = true;
			this->lblInput->Location = System::Drawing::Point(9, 9);
			this->lblInput->Name = L"lblInput";
			this->lblInput->Size = System::Drawing::Size(92, 13);
			this->lblInput->TabIndex = 2;
			this->lblInput->Text = L"Входные данные";
			// 
			// lblOutput
			// 
			this->lblOutput->AutoSize = true;
			this->lblOutput->Location = System::Drawing::Point(306, 9);
			this->lblOutput->Name = L"lblOutput";
			this->lblOutput->Size = System::Drawing::Size(59, 13);
			this->lblOutput->TabIndex = 3;
			this->lblOutput->Text = L"Результат";
			// 
			// dataGridOutput
			// 
			this->dataGridOutput->AllowUserToAddRows = false;
			this->dataGridOutput->AllowUserToDeleteRows = false;
			this->dataGridOutput->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridOutput->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->ColumnOut0 });
			this->dataGridOutput->Location = System::Drawing::Point(309, 25);
			this->dataGridOutput->Name = L"dataGridOutput";
			this->dataGridOutput->ReadOnly = true;
			this->dataGridOutput->Size = System::Drawing::Size(278, 259);
			this->dataGridOutput->TabIndex = 4;
			// 
			// ColumnOut0
			// 
			this->ColumnOut0->HeaderText = L"";
			this->ColumnOut0->Name = L"ColumnOut0";
			this->ColumnOut0->ReadOnly = true;
			this->ColumnOut0->Width = 40;
			// 
			// btnRowAdd
			// 
			this->btnRowAdd->Location = System::Drawing::Point(12, 232);
			this->btnRowAdd->Name = L"btnRowAdd";
			this->btnRowAdd->Size = System::Drawing::Size(131, 23);
			this->btnRowAdd->TabIndex = 5;
			this->btnRowAdd->Text = L"Добавить строку";
			this->btnRowAdd->UseVisualStyleBackColor = true;
			this->btnRowAdd->Click += gcnew System::EventHandler(this, &MyForm::btnRowAdd_Click);
			// 
			// btnRowRemove
			// 
			this->btnRowRemove->Location = System::Drawing::Point(158, 232);
			this->btnRowRemove->Name = L"btnRowRemove";
			this->btnRowRemove->Size = System::Drawing::Size(132, 23);
			this->btnRowRemove->TabIndex = 8;
			this->btnRowRemove->Text = L"Удалить строку";
			this->btnRowRemove->UseVisualStyleBackColor = true;
			this->btnRowRemove->Click += gcnew System::EventHandler(this, &MyForm::btnRowRemove_Click);
			// 
			// btnColRemove
			// 
			this->btnColRemove->Location = System::Drawing::Point(158, 261);
			this->btnColRemove->Name = L"btnColRemove";
			this->btnColRemove->Size = System::Drawing::Size(132, 23);
			this->btnColRemove->TabIndex = 9;
			this->btnColRemove->Text = L"Удалить столбец";
			this->btnColRemove->UseVisualStyleBackColor = true;
			this->btnColRemove->Click += gcnew System::EventHandler(this, &MyForm::btnColRemove_Click);
			// 
			// btnColAdd
			// 
			this->btnColAdd->Location = System::Drawing::Point(12, 261);
			this->btnColAdd->Name = L"btnColAdd";
			this->btnColAdd->Size = System::Drawing::Size(131, 23);
			this->btnColAdd->TabIndex = 10;
			this->btnColAdd->Text = L"Добавить столбец";
			this->btnColAdd->UseVisualStyleBackColor = true;
			this->btnColAdd->Click += gcnew System::EventHandler(this, &MyForm::btnColAdd_Click);
			// 
			// btnResult
			// 
			this->btnResult->Location = System::Drawing::Point(309, 356);
			this->btnResult->Name = L"btnResult";
			this->btnResult->Size = System::Drawing::Size(278, 23);
			this->btnResult->TabIndex = 11;
			this->btnResult->Text = L"Получить результат";
			this->btnResult->UseVisualStyleBackColor = true;
			this->btnResult->Click += gcnew System::EventHandler(this, &MyForm::btnResult_Click);
			// 
			// lblTask
			// 
			this->lblTask->Location = System::Drawing::Point(306, 303);
			this->lblTask->Name = L"lblTask";
			this->lblTask->Size = System::Drawing::Size(281, 41);
			this->lblTask->TabIndex = 12;
			this->lblTask->Text = L"Заменить все строки с минимальным элементом на заданную строку";
			// 
			// dataGridRow
			// 
			this->dataGridRow->AllowUserToAddRows = false;
			this->dataGridRow->AllowUserToDeleteRows = false;
			this->dataGridRow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridRow->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->ColumnRow0 });
			this->dataGridRow->Location = System::Drawing::Point(15, 303);
			this->dataGridRow->Name = L"dataGridRow";
			this->dataGridRow->Size = System::Drawing::Size(278, 76);
			this->dataGridRow->TabIndex = 13;
			// 
			// ColumnRow0
			// 
			this->ColumnRow0->HeaderText = L"";
			this->ColumnRow0->Name = L"ColumnRow0";
			this->ColumnRow0->Width = 40;
			// 
			// lblRow
			// 
			this->lblRow->AutoSize = true;
			this->lblRow->Location = System::Drawing::Point(12, 287);
			this->lblRow->Name = L"lblRow";
			this->lblRow->Size = System::Drawing::Size(86, 13);
			this->lblRow->TabIndex = 14;
			this->lblRow->Text = L"Строка замены";
			// 
			// errorProvider
			// 
			this->errorProvider->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(610, 400);
			this->Controls->Add(this->lblRow);
			this->Controls->Add(this->dataGridRow);
			this->Controls->Add(this->lblTask);
			this->Controls->Add(this->btnResult);
			this->Controls->Add(this->btnColAdd);
			this->Controls->Add(this->btnColRemove);
			this->Controls->Add(this->btnRowRemove);
			this->Controls->Add(this->btnRowAdd);
			this->Controls->Add(this->dataGridOutput);
			this->Controls->Add(this->lblOutput);
			this->Controls->Add(this->lblInput);
			this->Controls->Add(this->dataGridInput);
			this->Name = L"MyForm";
			this->Text = L"Таблица 2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridInput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridOutput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridRow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnRowRemove_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!this->dataGridInput->CurrentRow->IsNewRow) {
		int i = this->dataGridInput->CurrentRow->Index;
		this->dataGridInput->Rows->Remove(this->dataGridInput->Rows[i]);
	}
}
private: System::Void btnRowAdd_Click(System::Object^  sender, System::EventArgs^  e) {
	this->dataGridInput->Rows->Add(1);
}
private: System::Void btnColAdd_Click(System::Object^  sender, System::EventArgs^  e) {
	//добавляем колонки с шириной по умолчанию 40 пикселей
	int colCount = this->dataGridInput->ColumnCount;
	this->dataGridInput->Columns->Add("ColumnIn" + colCount, String::Empty);
	this->dataGridInput->Columns[colCount]->Width = 40;
	this->dataGridRow->Columns->Add("ColumnRow" + colCount, String::Empty);
	this->dataGridRow->Columns[colCount]->Width = 40;
}
private: System::Void btnColRemove_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->dataGridInput->ColumnCount > 1) {
		int i = 0;
		i = this->dataGridInput->ColumnCount - 1;
		this->dataGridInput->Columns->Remove(this->dataGridInput->Columns[i]);
		this->dataGridRow->Columns->Remove(this->dataGridRow->Columns[i]);
	}
}
private: System::Void btnResult_Click(System::Object^  sender, System::EventArgs^  e) {
	//чистим ошибки. очищаем вывод
	this->errorProvider->SetError(this->dataGridInput, String::Empty);
	this->errorProvider->SetError(this->dataGridRow, String::Empty);
	this->dataGridOutput->Columns->Clear();

	/* Коды ошибок
	 * 1 -- нет ни одной строки
	 * 2 -- в таблице есть пустые ячейки
	 * 3 -- в таблице есть не целые числа
	 */
	//проверяем матрицу ввода и ищем минимум
	int min;
	try {
		int errorCode;
		//проверка на количество строк
		if (this->dataGridInput->RowCount < 2) {
			throw 1;
		}
		// min = первому элементу с проверкой на пустоту и число
		if (!this->dataGridInput->Rows[0]->Cells[0]->Value) {
			throw 2;
		}

		bool resultParse;
		resultParse = Int32::TryParse(this->dataGridInput->Rows[0]->Cells[0]->Value->ToString(), min);
		if (!resultParse) {
			throw 3;
		}
		//ищем минимум
		for (int i = 0; i < this->dataGridInput->RowCount - 1; i++) {
			for (int j = 0; j < this->dataGridInput->ColumnCount; j++) {
				//проверка на пустоту
				if (!this->dataGridInput->Rows[i]->Cells[j]->Value) {
					throw 2;
				}
				//проверка на число
				int current;
				resultParse = Int32::TryParse(this->dataGridInput->Rows[i]->Cells[j]->Value->ToString(), current);
				if (!resultParse) {
					throw 3;
				}
				//проверка на минимум
				if (current < min)
					min = current;
			}
		}
	}
	catch (int errorCode) {
		switch (errorCode) {
			case 1:
				this->errorProvider->SetError(this->dataGridInput, "В таблице нет ни одной строки");
				break;
			case 2:
				this->errorProvider->SetError(this->dataGridInput, "В таблице есть пустые ячейки");
				break;
			case 3:
				this->errorProvider->SetError(this->dataGridInput, "В таблице есть не целые числа");
				break;
		}
	}
	/*
	* 1 --в строке замены есть пустые ячейки
	* 2 --в строке замены есть не целые числа
	*/
	//проверяем строку замены
	try {
		for (int i = 0; i < this->dataGridRow->ColumnCount; i++) {
			bool resultParse;
			//проверка на пустоту
			if (!(String ^)this->dataGridRow->Rows[0]->Cells[i]->Value) {
				throw 1;
			}
			//проверка на число
			int current;
			resultParse = Int32::TryParse(this->dataGridRow->Rows[0]->Cells[i]->Value->ToString(), current);
			if (!resultParse) {
				throw 2;
			}
		}
	}
	catch (int errorCode) {
		switch (errorCode) {
		case 1:
			this->errorProvider->SetError(this->dataGridRow, "В строке есть пустые ячейки");
			break;
		case 2:
			this->errorProvider->SetError(this->dataGridRow, "В строке есть не целые числа");
			break;
		}
	}

	//заменяем строки
	try {
		//если есть ошибки в заполнении
		if (this->errorProvider->GetError(this->dataGridInput)->ToString() != String::Empty 
			|| this->errorProvider->GetError(this->dataGridRow)->ToString() != String::Empty) {
			throw 0;
		}
		//добавляем столбцы в матрице вывода
		for (int i = 0; i < this->dataGridInput->ColumnCount; i++) {
			this->dataGridOutput->Columns->Add("ColumnOutput" + i, String::Empty);
			this->dataGridOutput->Columns[i]->Width = 40;
		}
		//добавляем строки
		this->dataGridOutput->Rows->Add(this->dataGridInput->RowCount - 1);
		
		//заполняем ячейки
		for (int i = 0; i < this->dataGridInput->RowCount - 1; i++) {
			bool f = false;
			for (int j = 0; j < this->dataGridInput->ColumnCount; j++) {
				if (Int32::Parse(this->dataGridInput->Rows[i]->Cells[j]->Value->ToString()) == min) {
					f = true;
				}
				//если есть минимальный
				if (f) {
					//переписываем из строки для замены
					for (int j = 0; j < this->dataGridOutput->ColumnCount; j++) {
						this->dataGridOutput->Rows[i]->Cells[j]->Value = this->dataGridRow->Rows[0]->Cells[j]->Value;
					}
				} 
				else {
					//переписываем из исходной строки
					for (int j = 0; j < this->dataGridOutput->ColumnCount; j++) {
						this->dataGridOutput->Rows[i]->Cells[j]->Value = this->dataGridInput->Rows[i]->Cells[j]->Value;
					}
				}
			}
		}

	}
	catch (int errorCode) {
	}
	
}
};
}
