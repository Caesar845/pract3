#pragma once
#include <cmath>
#include <ctime>
#include <cstdlib>
namespace pract3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(11, 16);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(975, 596);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(967, 563);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(72, 374);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(48, 238);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(185, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Сума 1-10";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(48, 110);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(277, 45);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->richTextBox2);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(967, 563);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(122, 352);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 2;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(116, 129);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(253, 39);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(116, 213);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(181, 60);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Добуток парних";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Controls->Add(this->richTextBox3);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(967, 563);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(85, 322);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 2;
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(75, 106);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(269, 53);
			this->richTextBox3->TabIndex = 1;
			this->richTextBox3->Text = L"";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(75, 205);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(170, 58);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Випадкові -10..10";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Controls->Add(this->listBox1);
			this->tabPage4->Controls->Add(this->textBox3);
			this->tabPage4->Controls->Add(this->textBox2);
			this->tabPage4->Controls->Add(this->textBox1);
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(967, 563);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(77, 114);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(166, 26);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(77, 176);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(166, 26);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(77, 248);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(166, 26);
			this->textBox3->TabIndex = 2;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(458, 251);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(145, 144);
			this->listBox1->TabIndex = 3;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(84, 336);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(171, 59);
			this->button4->TabIndex = 4;
			this->button4->Text = L"3-значні числа";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(998, 636);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int s = 0;
		for (int i = 1; i <= 10; i++) {
			richTextBox1->AppendText(i + "\n");
			s += i;
		}
		label1->Text = "Сума = " + s;
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int d = 1;
	for (int i = 2; i <= 10; i += 2) {
		richTextBox2->AppendText(i + "\n");
		d *= i;
	}
	label2->Text = "Добуток = " + d;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int k = 0;
	richTextBox3->Clear();
	for (int i = 0; i < 10; i++) {
		int a = rand() % 21 - 10;
		richTextBox3->AppendText(a + "\n");
		if (a < 0) k++;
	}
	label3->Text = "Від’ємних: " + k;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	double start, end, steps, stepSize, y;

	start = Convert::ToDouble(textBox1->Text);
	end = Convert::ToDouble(textBox2->Text);
	steps = Convert::ToDouble(textBox3->Text);
	stepSize = (end - start) / steps;

	listBox1->Items->Clear();
	listBox1->Items->Add("x\t|\ty = x²");
	listBox1->Items->Add("===================");

	double x = start;
	while (x <= end + 1e-9) {
		y = Math::Pow(x, 2);
		listBox1->Items->Add(x.ToString("0.0") + "\t|\t" + y.ToString("0.00"));
		x += stepSize;
	}
}
};
}
