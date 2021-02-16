#pragma once
#include "Form2.h"
#include "Form3.h"
#include "Form4.h"
namespace Proodos2021 {

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
			aem= gcnew array <String^>(10);
			onoma = gcnew array <String^>(10);
			counter =0;
			counter1 =0;
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
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	public: array < String^ > ^ aem;
	public: array < String^ > ^ onoma ;
	public: int counter;
	public: int counter1;
	public: String^ data;
	public: String^ data1;


	private: System::Windows::Forms::TextBox^  textBox1;
	public: 

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(87, 205);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ΕΜΦΑΝΙΣΗ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(87, 145);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"ΑΝΑΖΗΤΗΣΗ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(87, 84);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 33);
			this->button3->TabIndex = 2;
			this->button3->Text = L"KΑΤΑΧΩΡΗΣΗ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(228, 155);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 3;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(387, 377);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

				 Form2 ^frm = gcnew Form2;
				 frm ->ShowDialog();
				 aem[counter]=frm->get_aem();
				 onoma[counter]=frm->get_onoma();
				 counter = counter + 1 ;


			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form3^ frm = gcnew Form3;
				  int found=0;
			for(int i = 0; i<counter;i++)
				 {
				    if(Convert::ToDouble(aem[i]) == Convert::ToDouble(textBox1->Text))
						{ 
							 found = 1;
							 data = aem[i]+" " +onoma[i];
							 break;
						}
				 }
				 if(found)
				   {
						frm->set_data(data);
			  			frm->ShowDialog();
				   }
				 else 
				 {
					 MessageBox::Show("Δεν υπαρχουν σπουδαστες, καντε εισαγωγη!!!","Αδυναμια Ευρεσης Σπουδαστη", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
				 }
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form4 ^ frm = gcnew Form4;
		
			for(int i = 0; i<counter;i++)
				{
							 data1 += aem[i]+" " +onoma[i];
							 break;		 
				}
			for(int i = 0; i<counter;i++)
				{
				 frm->set_data1(aem[i]);
				}
			  			frm->ShowDialog();   
				
		 }
};
}

