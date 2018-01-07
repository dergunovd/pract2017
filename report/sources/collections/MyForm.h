#pragma once

namespace collections {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblInput;
	private: System::Windows::Forms::TextBox^  txtInput;
	private: System::Windows::Forms::Button^  btnCreate;
	private: System::Windows::Forms::Label^  lblAdd;
	private: System::Windows::Forms::TextBox^  txtAdd;
	private: System::Windows::Forms::Button^  btnAddFront;



	private: System::Windows::Forms::Label^  lblResult;
	private: System::Windows::Forms::TextBox^  txtResult;
	private: System::Windows::Forms::Button^  btnSum;

	private: System::Windows::Forms::TextBox^  txtSum;
	private: System::Windows::Forms::Button^  btnRemove;

	private: System::Windows::Forms::Button^  btnAddBack;



	private: System::Windows::Forms::Label^  lblRemove;
	private: System::Windows::Forms::Button^  btnRemoveAllMax;
	private: System::Windows::Forms::ErrorProvider^  errorProvider;
	private: System::Windows::Forms::Label^  lblSum;
	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::TextBox^  txtRemove;


	private: System::ComponentModel::IContainer^  components;




	protected:

	protected:

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
			this->lblInput = (gcnew System::Windows::Forms::Label());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->lblAdd = (gcnew System::Windows::Forms::Label());
			this->txtAdd = (gcnew System::Windows::Forms::TextBox());
			this->btnAddFront = (gcnew System::Windows::Forms::Button());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->btnSum = (gcnew System::Windows::Forms::Button());
			this->txtSum = (gcnew System::Windows::Forms::TextBox());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->btnAddBack = (gcnew System::Windows::Forms::Button());
			this->lblRemove = (gcnew System::Windows::Forms::Label());
			this->btnRemoveAllMax = (gcnew System::Windows::Forms::Button());
			this->errorProvider = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->lblSum = (gcnew System::Windows::Forms::Label());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->txtRemove = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider))->BeginInit();
			this->SuspendLayout();
			// 
			// lblInput
			// 
			this->lblInput->AutoSize = true;
			this->lblInput->Location = System::Drawing::Point(13, 13);
			this->lblInput->Name = L"lblInput";
			this->lblInput->Size = System::Drawing::Size(142, 13);
			this->lblInput->TabIndex = 0;
			this->lblInput->Text = L"������� �������� ������";
			// 
			// txtInput
			// 
			this->txtInput->Location = System::Drawing::Point(161, 10);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(164, 20);
			this->txtInput->TabIndex = 1;
			// 
			// btnCreate
			// 
			this->btnCreate->Location = System::Drawing::Point(350, 8);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(105, 23);
			this->btnCreate->TabIndex = 2;
			this->btnCreate->Text = L"������� ������";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &MyForm::btnCreate_Click);
			// 
			// lblAdd
			// 
			this->lblAdd->AutoSize = true;
			this->lblAdd->Location = System::Drawing::Point(12, 42);
			this->lblAdd->Name = L"lblAdd";
			this->lblAdd->Size = System::Drawing::Size(103, 13);
			this->lblAdd->TabIndex = 3;
			this->lblAdd->Text = L"�������� �������";
			// 
			// txtAdd
			// 
			this->txtAdd->Location = System::Drawing::Point(161, 42);
			this->txtAdd->Name = L"txtAdd";
			this->txtAdd->Size = System::Drawing::Size(164, 20);
			this->txtAdd->TabIndex = 4;
			// 
			// btnAddFront
			// 
			this->btnAddFront->Location = System::Drawing::Point(350, 37);
			this->btnAddFront->Name = L"btnAddFront";
			this->btnAddFront->Size = System::Drawing::Size(105, 23);
			this->btnAddFront->TabIndex = 5;
			this->btnAddFront->Text = L"� ������";
			this->btnAddFront->UseVisualStyleBackColor = true;
			this->btnAddFront->Click += gcnew System::EventHandler(this, &MyForm::btnAddFront_Click);
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Location = System::Drawing::Point(13, 100);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(59, 13);
			this->lblResult->TabIndex = 6;
			this->lblResult->Text = L"���������";
			// 
			// txtResult
			// 
			this->txtResult->Location = System::Drawing::Point(161, 98);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(164, 20);
			this->txtResult->TabIndex = 7;
			// 
			// btnSum
			// 
			this->btnSum->Enabled = false;
			this->btnSum->Location = System::Drawing::Point(16, 124);
			this->btnSum->Name = L"btnSum";
			this->btnSum->Size = System::Drawing::Size(309, 23);
			this->btnSum->TabIndex = 8;
			this->btnSum->Text = L"����� ���������, ������� ������������ ���������";
			this->btnSum->UseVisualStyleBackColor = true;
			this->btnSum->Click += gcnew System::EventHandler(this, &MyForm::btnSum_Click);
			// 
			// txtSum
			// 
			this->txtSum->Location = System::Drawing::Point(461, 126);
			this->txtSum->Name = L"txtSum";
			this->txtSum->ReadOnly = true;
			this->txtSum->Size = System::Drawing::Size(105, 20);
			this->txtSum->TabIndex = 9;
			// 
			// btnRemove
			// 
			this->btnRemove->Enabled = false;
			this->btnRemove->Location = System::Drawing::Point(350, 66);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(216, 23);
			this->btnRemove->TabIndex = 10;
			this->btnRemove->Text = L"�������";
			this->btnRemove->UseVisualStyleBackColor = true;
			this->btnRemove->Click += gcnew System::EventHandler(this, &MyForm::btnRemove_Click);
			// 
			// btnAddBack
			// 
			this->btnAddBack->Location = System::Drawing::Point(461, 36);
			this->btnAddBack->Name = L"btnAddBack";
			this->btnAddBack->Size = System::Drawing::Size(105, 23);
			this->btnAddBack->TabIndex = 11;
			this->btnAddBack->Text = L"� �����";
			this->btnAddBack->UseVisualStyleBackColor = true;
			this->btnAddBack->Click += gcnew System::EventHandler(this, &MyForm::btnAddBack_Click);
			// 
			// lblRemove
			// 
			this->lblRemove->AutoSize = true;
			this->lblRemove->Location = System::Drawing::Point(12, 71);
			this->lblRemove->Name = L"lblRemove";
			this->lblRemove->Size = System::Drawing::Size(96, 13);
			this->lblRemove->TabIndex = 13;
			this->lblRemove->Text = L"������� �������";
			// 
			// btnRemoveAllMax
			// 
			this->btnRemoveAllMax->Enabled = false;
			this->btnRemoveAllMax->Location = System::Drawing::Point(350, 95);
			this->btnRemoveAllMax->Name = L"btnRemoveAllMax";
			this->btnRemoveAllMax->Size = System::Drawing::Size(216, 23);
			this->btnRemoveAllMax->TabIndex = 14;
			this->btnRemoveAllMax->Text = L"������� ��� ������������";
			this->btnRemoveAllMax->UseVisualStyleBackColor = true;
			this->btnRemoveAllMax->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveAllMax_Click);
			// 
			// errorProvider
			// 
			this->errorProvider->ContainerControl = this;
			// 
			// lblSum
			// 
			this->lblSum->AutoSize = true;
			this->lblSum->Location = System::Drawing::Point(414, 129);
			this->lblSum->Name = L"lblSum";
			this->lblSum->Size = System::Drawing::Size(41, 13);
			this->lblSum->TabIndex = 15;
			this->lblSum->Text = L"�����";
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(461, 8);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(105, 23);
			this->btnClear->TabIndex = 16;
			this->btnClear->Text = L"�������� ������";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// txtRemove
			// 
			this->txtRemove->Location = System::Drawing::Point(161, 69);
			this->txtRemove->Name = L"txtRemove";
			this->txtRemove->Size = System::Drawing::Size(164, 20);
			this->txtRemove->TabIndex = 17;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(578, 162);
			this->Controls->Add(this->txtRemove);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->lblSum);
			this->Controls->Add(this->btnRemoveAllMax);
			this->Controls->Add(this->lblRemove);
			this->Controls->Add(this->btnAddBack);
			this->Controls->Add(this->btnRemove);
			this->Controls->Add(this->txtSum);
			this->Controls->Add(this->btnSum);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->btnAddFront);
			this->Controls->Add(this->txtAdd);
			this->Controls->Add(this->lblAdd);
			this->Controls->Add(this->btnCreate);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->lblInput);
			this->Name = L"MyForm";
			this->Text = L"������ � �����������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//���������� ������
private: System::Collections::Generic::LinkedList<int> list;
//����� ����������
private: System::Void showResult() {
	//������ ��
	this->errorProvider->Clear();
	this->txtResult->Text = String::Empty;
	this->txtSum->Text = String::Empty;
	//���������� �������� ������
	for each (int num in list) {
		this->txtResult->Text = this->txtResult->Text + System::Convert::ToString(num) + " ";
	}
	//���� ������
	if (list.Count < 1) {
		//��������� ������
		this->btnRemoveAllMax->Enabled = false;
		this->btnRemove->Enabled = false;
	}
	else {
		this->btnRemoveAllMax->Enabled = true;
		this->btnRemove->Enabled = true;
	}
	//���� ������ 2 ���������
	if (list.Count < 2) {
		//��������� ������
		this->btnSum->Enabled = false;
	}
	else {
		this->btnSum->Enabled = true;
	}
}
//����� ���� ������ ������������ ���������
private: System::Void btnSum_Click(System::Object^  sender, System::EventArgs^  e) {
	this->errorProvider->Clear();
	try {
		int min = 0;
		System::Collections::Generic::LinkedListNode<int>^ node = list.First;
		//���� �����. ���� �������
		do {
			if ((node->Value % 2) && ((node->Value < min) || !min)) {
				min = node->Value;
			}
		} while (node = node->Next);
		//���� ��� ������������
		if (!min) {
			throw 1;
		}
		//������� �����
		int s = 0;
		node = list.First;
		do {
			if (node->Value > min) {
				s += node->Value;
			}
		} while (node = node->Next);
		//������� �����
		this->txtSum->Text = System::Convert::ToString(s);
	}
	//����������� ������
	catch (int errorCode) {
		switch (errorCode) {
		case 1: this->errorProvider->SetError(this->btnSum, "��� �������� ���������");
			break;
		}
	}
}
// ���������� � �����
private: System::Void btnAddBack_Click(System::Object^  sender, System::EventArgs^  e) {
	//������ ������
	this->errorProvider->Clear();
	try {
		//�������� �� �������
		if (this->txtAdd->Text == String::Empty) {
			throw 1;
		}
		//�������� �� �����
		int num;
		if (!Int32::TryParse(this->txtAdd->Text, num)) {
			throw 2;
		}
		//��������� � ����� ������
		list.AddLast(num);
		this->showResult();
	}
	//����������� ������
	catch (int errorCode) {
		switch (errorCode)
		{
		case 1:
			errorProvider->SetError(this->txtAdd, "������� �����");
			break;
		case 2:
			errorProvider->SetError(this->txtAdd, "������� �� ����� �����");
			break;
		}
	}
}
//������� ������
private: System::Void btnCreate_Click(System::Object^  sender, System::EventArgs^  e) {
	//������ ������
	this->errorProvider->Clear();
	list.Clear();
	//������� ������
	try {
		//�������� �� ������� ������
		if (this->txtInput->Text == String::Empty) {
			throw 1;
		}
		for each (String ^ str in this->txtInput->Text->Trim()->Split(' ')) {
			//�� ������ ���� ���� ��������� ������������(��������) ������
			if (str == String::Empty) {
				continue;
			}
			//�������� �� �����
			int num;
			if (!Int32::TryParse(str, num)) {
				throw 2;
			}
			//���������� � ����� ������
			list.AddLast(num);
		}
		//���������� ���������
		this->showResult();
		
	}
	//����������� ������
	catch (int errorCode) {
		switch (errorCode) {
		case 1:
			errorProvider->SetError(this->txtInput, "������ ������");
			break;
		case 2:
			errorProvider->SetError(this->txtInput, "���� �� ����� �����");
			break;
		}
	}
}
//���������� � ������
private: System::Void btnAddFront_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		//�������� �� �������
		if (this->txtAdd->Text == String::Empty) {
			throw 1;
		}
		//�������� �� �����
		int num;
		if (!Int32::TryParse(this->txtAdd->Text, num)) {
			throw 2;
		}
		//��������� � ������
		list.AddFirst(num);
		this->showResult();
	}
	//����������� ������
	catch (int errorCode) {
		switch (errorCode)
		{
		case 1:
			errorProvider->SetError(this->txtAdd, "������� �����");
			break;
		case 2:
			errorProvider->SetError(this->txtAdd, "������� �� ����� �����");
			break;
		}
	}
}
//������� �������
private: System::Void btnRemove_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		//�������� �� �������
		if (this->txtRemove->Text == String::Empty) {
			throw 1;
		}
		//�������� �� �����
		int num;
		if (!Int32::TryParse(this->txtRemove->Text, num)) {
			throw 2;
		}
		//������� ������ ���������
		if (!list.Remove(num)) {
			throw 3;
		}
		this->showResult();
	}
	//����������� ������
	catch (int errorCode) {
		switch (errorCode)
		{
		case 1:
			errorProvider->SetError(this->txtRemove, "������� �����");
			break;
		case 2:
			errorProvider->SetError(this->txtRemove, "������� �� ����� �����");
			break;
		case 3:
			errorProvider->SetError(this->txtRemove, "��� ������ ����� � ������");
			break;
		}
	}
}
//������� ������
private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
	list.Clear();
	this->showResult();
}
//������� ��� ������������
private: System::Void btnRemoveAllMax_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Collections::Generic::LinkedListNode<int>^ node = list.First;
	int max = node->Value;
	//���� �����. ���� ��������
	while ( node = node->Next) {
		if (node->Value > max) {
			max = node->Value;
		}
	}
	//������� ���������
	while(list.Remove(max));
	//�������
	this->showResult();
}
};
}
