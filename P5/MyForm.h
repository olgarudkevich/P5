#pragma once
#include <string>
#using <Microsoft.VisualBasic.dll>

namespace P5 {

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
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label2;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(701, 497);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(693, 471);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Yellow;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::MediumBlue;
			this->button3->Location = System::Drawing::Point(476, 341);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(104, 36);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Очистити стек";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Location = System::Drawing::Point(433, 179);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 100);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(100, 44);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(94, 20);
			this->textBox2->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(6, 33);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 41);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Додати нові значення";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Location = System::Drawing::Point(433, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 100);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(6, 70);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(44, 17);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"pop";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(6, 47);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(163, 17);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Кількість елементів в стеці";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(6, 23);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(141, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Верхній елемент стеку";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MediumPurple;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(351, 465);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(127, 338);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 49);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вивести стек";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(74, 35);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(203, 261);
			this->textBox1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(693, 471);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(280, 360);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(77, 37);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Обчислити";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Location = System::Drawing::Point(363, 126);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(151, 169);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(26, 100);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(96, 48);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Видалити елементи стеку";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(26, 29);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(96, 48);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Додати значення стеку";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(91, 112);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(156, 199);
			this->listBox1->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(207, 51);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(88, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введіть розмір стеку";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->listBox2);
			this->tabPage3->Controls->Add(this->textBox4);
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(693, 471);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(275, 378);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(95, 45);
			this->button9->TabIndex = 5;
			this->button9->Text = L"Обчислити";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(358, 242);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(95, 45);
			this->button8->TabIndex = 4;
			this->button8->Text = L"Видалити елементи стеку";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(358, 145);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(95, 45);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Додати елементи стеку";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(87, 127);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(182, 212);
			this->listBox2->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(203, 51);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(84, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Введіть розмір стеку";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(701, 497);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Практична робота 5";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		System::Collections::Generic::Stack<int> numbersStack;
		System::Collections::Generic::Stack<int> myStack1;
		System::Collections::Generic::Stack<String^> StrStack;

		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			numbersStack.Clear();
			numbersStack.Push(10);
			numbersStack.Push(20);
			numbersStack.Push(30);

			textBox1->Clear();
			for each (int number in numbersStack) {
				textBox1->AppendText(number.ToString() + "\r\n");
			}
		}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text != "") {
		int newValue = System::Convert::ToInt32(textBox2->Text);
		numbersStack.Push(newValue);
		textBox2->Clear();

		textBox1->Clear();
		for each (int number in numbersStack) {
			textBox1->AppendText(number.ToString() + "\r\n");
		}
	}
	else {
		MessageBox::Show("Введіть число у поле!", "Увага");
	}
}

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		if (numbersStack.Count > 0) {
			int topElement = numbersStack.Peek();
			MessageBox::Show("Верхній елемент стека: " + topElement.ToString(), "Peek()");
		}
		else {
			MessageBox::Show("Стек порожній!", "Увага");
		}
	}
}

private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked) {
		int count = numbersStack.Count;
		MessageBox::Show("Кількість елементів у стеці: " + count.ToString(), "Count");
	}
}

private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox3->Checked) {
		if (numbersStack.Count > 0) {
			int removedElement = numbersStack.Pop();
			MessageBox::Show("Видалено верхній елемент: " + removedElement.ToString(), "Pop()");

			textBox1->Clear();
			for each (int number in numbersStack) {
				textBox1->AppendText(number.ToString() + "\r\n");
			}
		}
		else {
			MessageBox::Show("Стек порожній! Неможливо виконати Pop().", "Помилка");
		}
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	numbersStack.Clear();
	textBox1->Clear();

	MessageBox::Show("Стек очищено! Кількість елементів після очищення: " + numbersStack.Count.ToString(), "Clear()");
}
	   private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		   if (textBox3->Text != "") {
			   int count = System::Convert::ToInt32(textBox3->Text);

			   for (int i = 0; i < count; i++) {
				   String^ input = Microsoft::VisualBasic::Interaction::InputBox(
					   "Введіть " + (i + 1).ToString() + "-й елемент стеку:",
					   "Введення елемента",
					   "0",
					   -1, -1
				   );

				   if (input != "") {
					   int value = System::Convert::ToInt32(input);
					   myStack1.Push(value);
				   }
			   }

			   listBox1->Items->Clear();
			   for each (int item in myStack1) {
				   listBox1->Items->Add(item);
			   }
		   }
		   else {
			   MessageBox::Show("Будь ласка, введіть розмір стеку!", "Помилка");
		   }
	   }

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	myStack1.Clear();
	listBox1->Items->Clear();
	MessageBox::Show("Стек та список елементів очищено!", "Очищення");
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (myStack1.Count == 0) {
		MessageBox::Show("Стек порожній!", "Увага");
		return;
	}

	int sum = 0;
	int count = 0;

	for each (int number in myStack1) {
		if (number % 2 == 0 && number >= 10 && number <= 20) {
			sum += number;
			count++;
		}
	}

	if (count > 0) {
		double average = (double)sum / count;
		MessageBox::Show("Середнє значення парних чисел у діапазоні [10; 20]: " + average.ToString("F2"), "Результат");
	}
	else {
		MessageBox::Show("У стеці немає парних чисел у діапазоні від 10 до 20.", "Результат");
	}
}
	   private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		   if (textBox4->Text != "") {
			   int count = System::Convert::ToInt32(textBox4->Text);

			   for (int i = 0; i < count; i++) {
				   String^ input = Microsoft::VisualBasic::Interaction::InputBox(
					   "Введіть " + (i + 1).ToString() + "-й рядок стеку:",
					   "Введення елемента",
					   "",
					   -1, -1
				   );

				   if (input != nullptr) {
					   StrStack.Push(input);
				   }
			   }

			   listBox2->Items->Clear();
			   for each (String ^ str in StrStack) {
				   listBox2->Items->Add(str);
			   }
		   }
		   else {
			   MessageBox::Show("Будь ласка, введіть розмір стеку!", "Помилка");
		   }
	   }

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	StrStack.Clear();
	listBox2->Items->Clear();
	MessageBox::Show("Стек та список елементів очищено!", "Очищення");
}

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (StrStack.Count == 0) {
		MessageBox::Show("Стек порожній!", "Увага");
		return;
	}

	int totalChars = 0;

	for each (String ^ str in StrStack) {
		if (str != nullptr) {
			totalChars += str->Length;
		}
	}

	MessageBox::Show("Загальна кількість символів у всіх рядках стеку: " + totalChars.ToString(), "Результат");
}
};
}
