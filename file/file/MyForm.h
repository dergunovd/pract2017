#pragma once
#include "date.h"

namespace file {

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
	private: System::Windows::Forms::DataGridView^  Travel;
	protected:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Lastname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Firstname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Middlename;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Hostel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  longData;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  inDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  outDate;
	private: System::Windows::Forms::Button^  btnRemove;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnSave;
	private: System::Windows::Forms::Button^  btnLoad;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog;
	private: System::Windows::Forms::ErrorProvider^  errorProvider;
	private: System::Windows::Forms::Label^  lblChoose;
	private: System::Windows::Forms::TextBox^  txtDate;


	private: System::Windows::Forms::Label^  lblOnlyDate;
	private: System::Windows::Forms::Label^  lblAll;
	private: System::Windows::Forms::Button^  btnSaveChoose;

	private: System::Windows::Forms::Button^  btnChoose;
	private: System::Windows::Forms::DataGridView^  TravelFilter;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;

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
			this->Travel = (gcnew System::Windows::Forms::DataGridView());
			this->Lastname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Firstname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Middlename = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Hostel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->longData = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->inDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->outDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnLoad = (gcnew System::Windows::Forms::Button());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->errorProvider = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->txtDate = (gcnew System::Windows::Forms::TextBox());
			this->lblChoose = (gcnew System::Windows::Forms::Label());
			this->btnSaveChoose = (gcnew System::Windows::Forms::Button());
			this->lblAll = (gcnew System::Windows::Forms::Label());
			this->lblOnlyDate = (gcnew System::Windows::Forms::Label());
			this->TravelFilter = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnChoose = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Travel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TravelFilter))->BeginInit();
			this->SuspendLayout();
			// 
			// Travel
			// 
			this->Travel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Travel->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Lastname, this->Firstname,
					this->Middlename, this->Hostel, this->longData, this->inDate, this->outDate
			});
			this->Travel->Location = System::Drawing::Point(0, 0);
			this->Travel->Name = L"Travel";
			this->Travel->Size = System::Drawing::Size(745, 173);
			this->Travel->TabIndex = 0;
			// 
			// Lastname
			// 
			this->Lastname->HeaderText = L"Фамилия";
			this->Lastname->Name = L"Lastname";
			// 
			// Firstname
			// 
			this->Firstname->HeaderText = L"Имя";
			this->Firstname->Name = L"Firstname";
			// 
			// Middlename
			// 
			this->Middlename->HeaderText = L"Отчество";
			this->Middlename->Name = L"Middlename";
			// 
			// Hostel
			// 
			this->Hostel->HeaderText = L"Гостиница";
			this->Hostel->Name = L"Hostel";
			// 
			// longData
			// 
			this->longData->HeaderText = L"Длительность";
			this->longData->Name = L"longData";
			// 
			// inDate
			// 
			this->inDate->HeaderText = L"Дата въезда";
			this->inDate->Name = L"inDate";
			// 
			// outDate
			// 
			this->outDate->HeaderText = L"Дата выезда";
			this->outDate->Name = L"outDate";
			// 
			// btnRemove
			// 
			this->btnRemove->Location = System::Drawing::Point(118, 179);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(112, 23);
			this->btnRemove->TabIndex = 1;
			this->btnRemove->Text = L"Удалить строку";
			this->btnRemove->UseVisualStyleBackColor = true;
			this->btnRemove->Click += gcnew System::EventHandler(this, &MyForm::btnRemove_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(0, 179);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(112, 23);
			this->btnAdd->TabIndex = 2;
			this->btnAdd->Text = L"Добавить строку";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(446, 179);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(143, 23);
			this->btnSave->TabIndex = 3;
			this->btnSave->Text = L"Сохранить все";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &MyForm::btnSave_Click);
			// 
			// btnLoad
			// 
			this->btnLoad->Location = System::Drawing::Point(602, 179);
			this->btnLoad->Name = L"btnLoad";
			this->btnLoad->Size = System::Drawing::Size(143, 23);
			this->btnLoad->TabIndex = 4;
			this->btnLoad->Text = L"Загрузить";
			this->btnLoad->UseVisualStyleBackColor = true;
			this->btnLoad->Click += gcnew System::EventHandler(this, &MyForm::btnLoad_Click);
			// 
			// openFileDialog
			// 
			this->openFileDialog->DefaultExt = L"txt";
			this->openFileDialog->FileName = L"openFileDialog";
			this->openFileDialog->Filter = L"Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
			this->openFileDialog->Title = L"Открыть файл";
			// 
			// saveFileDialog
			// 
			this->saveFileDialog->DefaultExt = L"txt";
			this->saveFileDialog->Filter = L"Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
			this->saveFileDialog->Title = L"Сохранить файл";
			// 
			// errorProvider
			// 
			this->errorProvider->ContainerControl = this;
			// 
			// txtDate
			// 
			this->txtDate->Location = System::Drawing::Point(118, 214);
			this->txtDate->Name = L"txtDate";
			this->txtDate->Size = System::Drawing::Size(112, 20);
			this->txtDate->TabIndex = 5;
			// 
			// lblChoose
			// 
			this->lblChoose->AutoSize = true;
			this->lblChoose->Location = System::Drawing::Point(12, 217);
			this->lblChoose->Name = L"lblChoose";
			this->lblChoose->Size = System::Drawing::Size(82, 13);
			this->lblChoose->TabIndex = 6;
			this->lblChoose->Text = L"Выберите дату";
			this->lblChoose->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btnSaveChoose
			// 
			this->btnSaveChoose->Location = System::Drawing::Point(602, 212);
			this->btnSaveChoose->Name = L"btnSaveChoose";
			this->btnSaveChoose->Size = System::Drawing::Size(143, 23);
			this->btnSaveChoose->TabIndex = 7;
			this->btnSaveChoose->Text = L"Сохранить выбранных";
			this->btnSaveChoose->UseVisualStyleBackColor = true;
			this->btnSaveChoose->Click += gcnew System::EventHandler(this, &MyForm::btnSaveChoose_Click);
			// 
			// lblAll
			// 
			this->lblAll->AutoSize = true;
			this->lblAll->Location = System::Drawing::Point(370, 184);
			this->lblAll->Name = L"lblAll";
			this->lblAll->Size = System::Drawing::Size(70, 13);
			this->lblAll->TabIndex = 9;
			this->lblAll->Text = L"Все туристы";
			// 
			// lblOnlyDate
			// 
			this->lblOnlyDate->AutoSize = true;
			this->lblOnlyDate->Location = System::Drawing::Point(304, 217);
			this->lblOnlyDate->Name = L"lblOnlyDate";
			this->lblOnlyDate->Size = System::Drawing::Size(136, 13);
			this->lblOnlyDate->TabIndex = 10;
			this->lblOnlyDate->Text = L"Туристы в заданную дату";
			// 
			// TravelFilter
			// 
			this->TravelFilter->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TravelFilter->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7
			});
			this->TravelFilter->Location = System::Drawing::Point(0, 241);
			this->TravelFilter->Name = L"TravelFilter";
			this->TravelFilter->ReadOnly = true;
			this->TravelFilter->Size = System::Drawing::Size(745, 173);
			this->TravelFilter->TabIndex = 11;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Фамилия";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Имя";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Отчество";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Гостиница";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Длительность";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Дата въезда";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Дата выезда";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			// 
			// btnChoose
			// 
			this->btnChoose->Location = System::Drawing::Point(446, 211);
			this->btnChoose->Name = L"btnChoose";
			this->btnChoose->Size = System::Drawing::Size(143, 23);
			this->btnChoose->TabIndex = 12;
			this->btnChoose->Text = L"Выбрать по дате";
			this->btnChoose->UseVisualStyleBackColor = true;
			this->btnChoose->Click += gcnew System::EventHandler(this, &MyForm::btnChoose_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(770, 420);
			this->Controls->Add(this->btnChoose);
			this->Controls->Add(this->TravelFilter);
			this->Controls->Add(this->lblOnlyDate);
			this->Controls->Add(this->lblAll);
			this->Controls->Add(this->btnSaveChoose);
			this->Controls->Add(this->lblChoose);
			this->Controls->Add(this->txtDate);
			this->Controls->Add(this->btnLoad);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnRemove);
			this->Controls->Add(this->Travel);
			this->Name = L"MyForm";
			this->Text = L"Работа с файлами";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Travel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TravelFilter))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnLoad_Click(System::Object^  sender, System::EventArgs^  e) {
	//чистим ошибки и поля
	this->TravelFilter->Rows->Clear();
	this->errorProvider->Clear();
	this->txtDate->Text = String::Empty;
	//открываем файл
	System::IO::Stream^ myStream;
	if (this->openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if ((myStream = openFileDialog->OpenFile()) != nullptr) {
			System::IO::StreamReader^ sw = gcnew System::IO::StreamReader(myStream,
				System::Text::Encoding::GetEncoding(1251));
			System::String ^str1 = "";
			str1 = sw->ReadToEnd();
			//разбиваем по разделителю
			array<System::String ^>^ str = str1->Split(';');
			int i = 0;
			int j = 0;
			//чистим таблицу
			this->Travel->Rows->Clear();
			//заполняем таблицу
			for each (String ^ s in str) {
				//Добавляем строку
				if (!j) {
					this->Travel->Rows->Add(1);
				}
				//Заполняем ячейки
				this->Travel->Rows[i]->Cells[j++]->Value = s;
				if (j > 6) {
					j = 0;
					i++;
				}
			}
			//Удаляем лишнюю строку в конце
			this->Travel->Rows->RemoveAt(this->Travel->RowCount - 2);
			//Закрываем файловый поток
			sw->Close();
		}
	}
}
//Сохраняем таблицу
private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
	//Очищаем ошибки
	this->errorProvider->SetError(this->txtDate, String::Empty);
	this->errorProvider->SetError(this->Travel, String::Empty);
	this->TravelFilter->Rows->Clear();
	//Строка для записи в файл
	String^ out = "";
	
	//проверка таблицы
	try {
		if (this->Travel->RowCount < 2) {
			throw 1;
		}
		//проверяем строки
		for (int i = 0; i < this->Travel->RowCount - 1; i++) {
			//Проверка на пустоту
			for (int j = 0; j < 7; j++) {
				if (!(System::String ^)this->Travel->Rows[i]->Cells[j]->Value) {
					throw 2;
				}
			}
			//Дата прибытия
			if (this->Travel->Rows[i]->Cells[5]->Value->ToString()->Length != 10
				|| !cor(s2d(this->Travel->Rows[i]->Cells[5]->Value->ToString()))) {
				throw 3;
			}
			//Дата отбытия
			if (this->Travel->Rows[i]->Cells[6]->Value->ToString()->Length != 10
				|| !cor(s2d(this->Travel->Rows[i]->Cells[6]->Value->ToString()))) {
				throw 4;
			}
			//Дата прибытия больше даты отбытия
			if (!aNotMoreThenB(
				s2d(this->Travel->Rows[i]->Cells[5]->Value->ToString()),
				s2d(this->Travel->Rows[i]->Cells[6]->Value->ToString()))) {
				throw 5;
			}
			//Длительность
			int longDate;
			if (!Int32::TryParse(this->Travel->Rows[i]->Cells[4]->Value->ToString(), longDate)) {
				throw 6;
			}
			//равенство пребывания и интервала дат
			if (longDate !=
				hmd(s2d(this->Travel->Rows[i]->Cells[5]->Value->ToString()),
					s2d(this->Travel->Rows[i]->Cells[6]->Value->ToString()))) {
				throw 7;
			}
			//пишем значения ячеек в строку через разделитель
			for (int j = 0 ; j < 7; j++) {
				if (this->Travel->Rows[i]->Cells[j]->Value->ToString()->Contains(";")) {
					throw 8;
				}
				out += this->Travel->Rows[i]->Cells[j]->Value->ToString() + ";";
			}
		}
	}
	//отлавливаем ошибки
	catch (int errorCode) {
		switch (errorCode) {
		case 1:
			this->errorProvider->SetError(this->Travel, "Пустая таблица");
			break;
		case 2:
			this->errorProvider->SetError(this->Travel, "Есть пустые ячейки");
			break;
		case 3:
			this->errorProvider->SetError(this->Travel, "Некорректная дата прибытия");
			break;
		case 4:
			this->errorProvider->SetError(this->Travel, "Некорректная дата отбытия");
			break;
		case 5:
			this->errorProvider->SetError(this->Travel, "Дата прибытия больше даты отбытия");
			break;
		case 6:
			this->errorProvider->SetError(this->Travel, "Некорректная длительность пребывания");
			break;
		case 7:
			this->errorProvider->SetError(this->Travel, "Неверная длительность пребывания");
			break;
		case 8:
			this->errorProvider->SetError(this->Travel, "Ячейки не должны содержать точку с запятой");
			break;
		}
	}

	System::IO::Stream^ myStream;
	//если нет ошибок таблицы
	if ((String ^)this->errorProvider->GetError(this->Travel) == String::Empty
		&& this->saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if ((myStream = saveFileDialog->OpenFile()) != nullptr) {
			System::IO::StreamWriter^ sw =
				gcnew System::IO::StreamWriter(myStream, System::Text::Encoding::GetEncoding(1251));
			//Запись в файл
			sw->Write(out);
			sw->Close();
		}
	}
}
//Добавляем строку
private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
	this->TravelFilter->Rows->Clear();
	this->Travel->Rows->Add(1);
}
//Удаляем строку
private: System::Void btnRemove_Click(System::Object^  sender, System::EventArgs^  e) {
	this->TravelFilter->Rows->Clear();
	if (!this->Travel->CurrentRow->IsNewRow) {
		int i = this->Travel->CurrentRow->Index;
		this->Travel->Rows->Remove(this->Travel->Rows[i]);
	}
}
private: System::Void btnSaveChoose_Click(System::Object^  sender, System::EventArgs^  e) {
	//чистим ошибки
	this->errorProvider->SetError(this->txtDate, String::Empty);
	this->errorProvider->SetError(this->Travel, String::Empty);
	this->txtDate->Text = String::Empty;
	//Строка для записи в файл
	String^ out = "";

	try {
		//Если пустая таблица
		if (this->TravelFilter->RowCount < 2) {
			throw 1;
		}
		//пишем в строку через разделитель
		for (int i = 0; i < this->TravelFilter->RowCount - 1; i++) {
			for (int j = 0; j < 7; j++) {
				out += this->TravelFilter->Rows[i]->Cells[j]->Value->ToString() + ";";
			}
		}
	}
	catch (int errorCode) {
		switch (errorCode) {
		case 1:
			this->errorProvider->SetError(this->Travel, "Пустая таблица");
			break;
		}
	}

	System::IO::Stream^ myStream;
	//если нет ошибок таблицы
	if ((String ^)this->errorProvider->GetError(this->Travel) == String::Empty
		&& (String ^)this->errorProvider->GetError(this->txtDate) == String::Empty
		&& this->saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if ((myStream = saveFileDialog->OpenFile()) != nullptr) {
			System::IO::StreamWriter^ sw =
				gcnew System::IO::StreamWriter(myStream, System::Text::Encoding::GetEncoding(1251));
			//Запись в файл
			sw->Write(out);
			sw->Close();
		}
	}
}
private: System::Void btnChoose_Click(System::Object^  sender, System::EventArgs^  e) {
	this->errorProvider->SetError(this->txtDate, String::Empty);
	this->errorProvider->SetError(this->Travel, String::Empty);
	this->TravelFilter->Rows->Clear();
	//Строка для записи
	String^ out = "";

	//проверка таблицы
	try {
		if (this->Travel->RowCount < 2) {
			throw 1;
		}
		//проверяем строки
		for (int i = 0; i < this->Travel->RowCount - 1; i++) {
			//Проверка на пустоту
			for (int j = 0; j < 7; j++) {
				if (!(System::String ^)this->Travel->Rows[i]->Cells[j]->Value) {
					throw 2;
				}
			}
			//Дата прибытия
			if (this->Travel->Rows[i]->Cells[5]->Value->ToString()->Length != 10
				|| !cor(s2d(this->Travel->Rows[i]->Cells[5]->Value->ToString()))) {
				throw 3;
			}
			//Дата отбытия
			if (this->Travel->Rows[i]->Cells[6]->Value->ToString()->Length != 10
				|| !cor(s2d(this->Travel->Rows[i]->Cells[6]->Value->ToString()))) {
				throw 4;
			}
			//Дата прибытия больше даты отбытия
			if (!aNotMoreThenB(
				s2d(this->Travel->Rows[i]->Cells[5]->Value->ToString()),
				s2d(this->Travel->Rows[i]->Cells[6]->Value->ToString()))) {
				throw 5;
			}
			//Длительность
			int longDate;
			if (!Int32::TryParse(this->Travel->Rows[i]->Cells[4]->Value->ToString(), longDate)) {
				throw 6;
			}
			//равенство пребывания и интервала дат
			if (longDate !=
				hmd(s2d(this->Travel->Rows[i]->Cells[5]->Value->ToString()),
					s2d(this->Travel->Rows[i]->Cells[6]->Value->ToString()))) {
				throw 7;
			}
			//Дата пребывания
			if (this->txtDate->Text->Length != 10
				|| !cor(s2d(this->txtDate->Text))) {
				throw 9;
			}
			//Проверка интервала даты прибытия и отбытия
			if(!aNotMoreThenB(
					s2d(this->Travel->Rows[i]->Cells[5]->Value->ToString()), 
					s2d(this->txtDate->Text))
				|| !aNotMoreThenB(
					s2d(this->txtDate->Text),
					s2d(this->Travel->Rows[i]->Cells[6]->Value->ToString()))) {
				continue;
			}

			//Пишем в новую в таблицу строку с разделителями из старой
			for (int j = 0; j < 7; j++) {
				if (this->Travel->Rows[i]->Cells[j]->Value->ToString()->Contains(";")) {
					throw 8;
				}
				out += this->Travel->Rows[i]->Cells[j]->Value->ToString() + ";";
			}
		}

		//Парсим строку в новую таблицу
		array<System::String ^>^ str = out->Split(';');
		int i = 0;
		int j = 0;
		this->TravelFilter->Rows->Clear();
		//Выводим в ячейки
		for each (String ^ s in str) {
			if (!j) {
				this->TravelFilter->Rows->Add(1);
			}
			this->TravelFilter->Rows[i]->Cells[j++]->Value = s;
			if (j > 6) {
				j = 0;
				i++;
			}
		}
		this->TravelFilter->Rows->RemoveAt(this->TravelFilter->RowCount - 2);
	}
	//отлавливаем ошибки
	catch (int errorCode) {
		switch (errorCode) {
		case 1:
			this->errorProvider->SetError(this->Travel, "Пустая таблица");
			break;
		case 2:
			this->errorProvider->SetError(this->Travel, "Есть пустые ячейки");
			break;
		case 3:
			this->errorProvider->SetError(this->Travel, "Некорректная дата прибытия");
			break;
		case 4:
			this->errorProvider->SetError(this->Travel, "Некорректная дата отбытия");
			break;
		case 5:
			this->errorProvider->SetError(this->Travel, "Дата прибытия больше даты отбытия");
			break;
		case 6:
			this->errorProvider->SetError(this->Travel, "Некорректная длительность пребывания");
			break;
		case 7:
			this->errorProvider->SetError(this->Travel, "Неверная длительность пребывания");
			break;
		case 8:
			this->errorProvider->SetError(this->Travel, "Ячейки не должны содержать точку с запятой");
			break;
		case 9:
			this->errorProvider->SetError(this->txtDate, "Некорректная дата");
			break;
		}
	}
}
};
}
