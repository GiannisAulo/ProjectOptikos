#pragma once

namespace ProjectTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Subjects
	/// </summary>
	public ref class Subjects : public System::Windows::Forms::Form
	{
	public:
		Subjects(void)
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
		~Subjects()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"΄Ονομα Μαθήματος ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Διδακτικές Μονάδες";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Εξάμηνο ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(144, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(144, 89);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(144, 144);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(27, 246);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 44);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Subjects::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(144, 245);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 45);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Display Subjets";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// Subjects
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(342, 351);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Subjects";
			this->Text = L"Subjects";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
