#pragma once
#include "Form2.h"
namespace Test2021 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			aems = gcnew array<String^>(5);
		    names = gcnew array<String^>(5);
			LastName = gcnew array<String^>(5);
			phone = gcnew array<String^>(5);
			email = gcnew array<String^>(5);
			counter =0 ;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	public: array < String^ > ^ aems;
	public: array < String^ > ^ names;
	public: array < String^ > ^ LastName;
	public:array <String ^> ^phone;
	public:array <String ^> ^email;
			public: String^ data;
	public:int counter;
	private: System::Windows::Forms::Button^  button2;
	public: 
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox6;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(336, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Åìöáíéóç";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(168, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(168, 81);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(168, 134);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(81, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"AEM";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(72, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"ONOMA";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(72, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"ÅÐÙÍÕÌÏ";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(345, 242);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 39);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Áíáæçôçóç";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(345, 195);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 8;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(72, 180);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"ÔÇËÅÖÙÍÏ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(168, 180);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(75, 226);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"ÅÌÁÉË";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(168, 226);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 12;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(565, 448);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			public: String^ get_aem(void)
			{
				return textBox1->Text;
			}
	public: String^ get_name(void)
			{
				return textBox2->Text;
			}
	public: String^ get_LastName(void)
			{
				return textBox3->Text;
			}
	public: String^ get_phone(void)
			{
				return textBox5->Text;
			}
	public: String^ get_email(void)
			{
				return textBox6->Text;
			}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 Form2^ frm =gcnew Form2;
				 for(int i =0;i<5;i++)
				 {
				aems[counter]=get_aem();
				names[counter]=get_name();
				LastName[counter]=get_LastName();
				email[counter] = get_email();
				phone[counter] = get_phone();
				counter+=1;
					   data += aems[i]+" " + names[i]+" "+ LastName[i] + " " + email[i] + " " + phone[i] +"\n";
					 break;
				 }
				 frm ->set_data(data);
				 frm ->ShowDialog();
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 	Form2^ frm;
				 frm = gcnew Form2;
				aems[counter]=get_aem();
				names[counter]=get_name();
				LastName[counter]=get_LastName();
				email[counter] = get_email();
				phone[counter] = get_phone();
				counter+=1;
				 int found=0;
				 for(int i = 0; i<counter;i++)
				 {
				    if(Convert::ToDouble(aems[i]) == Convert::ToDouble(textBox4->Text))
						{ found = 1;
						  data = aems[i]+" " + names[i]+" "+ LastName[i] + " " + email[i] + " " + phone[i] +"\n";
						
						}
					else
					{
						 MessageBox::Show("Ëáèïò ÁÅÌ !!!","Áäõíáìéá Åõñåóçò Óðïõäáóôç", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
					}
				 }
				 if(found)
				   {
						frm->set_data(data);
			  			frm->ShowDialog();
				   }
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

