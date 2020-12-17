#pragma once
#include <iostream>
#include <cstdlib>
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtBox;
	protected:

	private: System::Windows::Forms::Button^ btnspace;
	private: System::Windows::Forms::Button^ btnclear;


	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Button^ bntdig7;
	private: System::Windows::Forms::Button^ btndig8;
	private: System::Windows::Forms::Button^ btndig9;
	private: System::Windows::Forms::Button^ btnplus;




	private: System::Windows::Forms::Button^ btndig4;
	private: System::Windows::Forms::Button^ btndig5;
	private: System::Windows::Forms::Button^ btndig6;
	private: System::Windows::Forms::Button^ btnimnus;




	private: System::Windows::Forms::Button^ btndig3;
	private: System::Windows::Forms::Button^ btndig2;
	private: System::Windows::Forms::Button^ btndig1;
	private: System::Windows::Forms::Button^ btnmult;




	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ btndig0;
	private: System::Windows::Forms::Button^ btnequal;
	private: System::Windows::Forms::Button^ btndiv;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ labelRes;







	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtBox = (gcnew System::Windows::Forms::TextBox());
			this->btnspace = (gcnew System::Windows::Forms::Button());
			this->btnclear = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->bntdig7 = (gcnew System::Windows::Forms::Button());
			this->btndig8 = (gcnew System::Windows::Forms::Button());
			this->btndig9 = (gcnew System::Windows::Forms::Button());
			this->btnplus = (gcnew System::Windows::Forms::Button());
			this->btndig4 = (gcnew System::Windows::Forms::Button());
			this->btndig5 = (gcnew System::Windows::Forms::Button());
			this->btndig6 = (gcnew System::Windows::Forms::Button());
			this->btnimnus = (gcnew System::Windows::Forms::Button());
			this->btndig3 = (gcnew System::Windows::Forms::Button());
			this->btndig2 = (gcnew System::Windows::Forms::Button());
			this->btndig1 = (gcnew System::Windows::Forms::Button());
			this->btnmult = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->btndig0 = (gcnew System::Windows::Forms::Button());
			this->btnequal = (gcnew System::Windows::Forms::Button());
			this->btndiv = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelRes = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txtBox
			// 
			this->txtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBox->Location = System::Drawing::Point(14, 12);
			this->txtBox->Multiline = true;
			this->txtBox->Name = L"txtBox";
			this->txtBox->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->txtBox->Size = System::Drawing::Size(309, 68);
			this->txtBox->TabIndex = 0;
			this->txtBox->Text = L"0";
			this->txtBox->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// btnspace
			// 
			this->btnspace->AutoSize = true;
			this->btnspace->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnspace->Font = (gcnew System::Drawing::Font(L"Wingdings", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnspace->Location = System::Drawing::Point(14, 102);
			this->btnspace->Name = L"btnspace";
			this->btnspace->Size = System::Drawing::Size(74, 53);
			this->btnspace->TabIndex = 1;
			this->btnspace->Text = L"";
			this->btnspace->UseVisualStyleBackColor = true;
			this->btnspace->Click += gcnew System::EventHandler(this, &Form1::btnspace_Click);
			// 
			// btnclear
			// 
			this->btnclear->AutoSize = true;
			this->btnclear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnclear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnclear->Location = System::Drawing::Point(94, 102);
			this->btnclear->Name = L"btnclear";
			this->btnclear->Size = System::Drawing::Size(74, 56);
			this->btnclear->TabIndex = 1;
			this->btnclear->Text = L"C";
			this->btnclear->UseVisualStyleBackColor = true;
			this->btnclear->Click += gcnew System::EventHandler(this, &Form1::btnclear_Click);
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(174, 102);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(74, 56);
			this->button3->TabIndex = 1;
			this->button3->Text = L"CE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// bntdig7
			// 
			this->bntdig7->AutoSize = true;
			this->bntdig7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bntdig7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntdig7->Location = System::Drawing::Point(15, 164);
			this->bntdig7->Name = L"bntdig7";
			this->bntdig7->Size = System::Drawing::Size(74, 56);
			this->bntdig7->TabIndex = 1;
			this->bntdig7->Text = L"7";
			this->bntdig7->UseVisualStyleBackColor = true;
			this->bntdig7->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// btndig8
			// 
			this->btndig8->AutoSize = true;
			this->btndig8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btndig8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndig8->Location = System::Drawing::Point(95, 164);
			this->btndig8->Name = L"btndig8";
			this->btndig8->Size = System::Drawing::Size(74, 56);
			this->btndig8->TabIndex = 1;
			this->btndig8->Text = L"8";
			this->btndig8->UseVisualStyleBackColor = true;
			this->btndig8->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// btndig9
			// 
			this->btndig9->AutoSize = true;
			this->btndig9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btndig9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndig9->Location = System::Drawing::Point(175, 164);
			this->btndig9->Name = L"btndig9";
			this->btndig9->Size = System::Drawing::Size(74, 56);
			this->btndig9->TabIndex = 1;
			this->btndig9->Text = L"9";
			this->btndig9->UseVisualStyleBackColor = true;
			this->btndig9->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// btnplus
			// 
			this->btnplus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnplus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnplus->Location = System::Drawing::Point(254, 102);
			this->btnplus->Name = L"btnplus";
			this->btnplus->Size = System::Drawing::Size(74, 56);
			this->btnplus->TabIndex = 1;
			this->btnplus->Text = L"+";
			this->btnplus->UseVisualStyleBackColor = true;
			this->btnplus->Click += gcnew System::EventHandler(this, &Form1::EnterOper);
			// 
			// btndig4
			// 
			this->btndig4->AutoSize = true;
			this->btndig4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btndig4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndig4->Location = System::Drawing::Point(15, 226);
			this->btndig4->Name = L"btndig4";
			this->btndig4->Size = System::Drawing::Size(74, 56);
			this->btndig4->TabIndex = 1;
			this->btndig4->Text = L"4";
			this->btndig4->UseVisualStyleBackColor = true;
			this->btndig4->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// btndig5
			// 
			this->btndig5->AutoSize = true;
			this->btndig5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btndig5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndig5->Location = System::Drawing::Point(95, 226);
			this->btndig5->Name = L"btndig5";
			this->btndig5->Size = System::Drawing::Size(74, 56);
			this->btndig5->TabIndex = 1;
			this->btndig5->Text = L"5";
			this->btndig5->UseVisualStyleBackColor = true;
			this->btndig5->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// btndig6
			// 
			this->btndig6->AutoSize = true;
			this->btndig6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btndig6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndig6->Location = System::Drawing::Point(175, 226);
			this->btndig6->Name = L"btndig6";
			this->btndig6->Size = System::Drawing::Size(74, 56);
			this->btndig6->TabIndex = 1;
			this->btndig6->Text = L"6";
			this->btndig6->UseVisualStyleBackColor = true;
			this->btndig6->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// btnimnus
			// 
			this->btnimnus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnimnus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnimnus->Location = System::Drawing::Point(255, 164);
			this->btnimnus->Name = L"btnimnus";
			this->btnimnus->Size = System::Drawing::Size(74, 56);
			this->btnimnus->TabIndex = 1;
			this->btnimnus->Text = L"-";
			this->btnimnus->UseVisualStyleBackColor = true;
			this->btnimnus->Click += gcnew System::EventHandler(this, &Form1::EnterOper);
			// 
			// btndig3
			// 
			this->btndig3->AutoSize = true;
			this->btndig3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btndig3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndig3->Location = System::Drawing::Point(15, 288);
			this->btndig3->Name = L"btndig3";
			this->btndig3->Size = System::Drawing::Size(74, 56);
			this->btndig3->TabIndex = 1;
			this->btndig3->Text = L"3";
			this->btndig3->UseVisualStyleBackColor = true;
			this->btndig3->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// btndig2
			// 
			this->btndig2->AutoSize = true;
			this->btndig2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btndig2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndig2->Location = System::Drawing::Point(95, 288);
			this->btndig2->Name = L"btndig2";
			this->btndig2->Size = System::Drawing::Size(74, 56);
			this->btndig2->TabIndex = 1;
			this->btndig2->Text = L"2";
			this->btndig2->UseVisualStyleBackColor = true;
			this->btndig2->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// btndig1
			// 
			this->btndig1->AutoSize = true;
			this->btndig1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btndig1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndig1->Location = System::Drawing::Point(175, 288);
			this->btndig1->Name = L"btndig1";
			this->btndig1->Size = System::Drawing::Size(74, 56);
			this->btndig1->TabIndex = 1;
			this->btndig1->Text = L"1";
			this->btndig1->UseVisualStyleBackColor = true;
			this->btndig1->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// btnmult
			// 
			this->btnmult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnmult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnmult->Location = System::Drawing::Point(253, 226);
			this->btnmult->Name = L"btnmult";
			this->btnmult->Size = System::Drawing::Size(74, 56);
			this->btnmult->TabIndex = 1;
			this->btnmult->Text = L"*";
			this->btnmult->UseVisualStyleBackColor = true;
			this->btnmult->Click += gcnew System::EventHandler(this, &Form1::EnterOper);
			// 
			// button17
			// 
			this->button17->AutoSize = true;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(175, 350);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(74, 56);
			this->button17->TabIndex = 1;
			this->button17->Text = L".";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// btndig0
			// 
			this->btndig0->AutoSize = true;
			this->btndig0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btndig0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndig0->Location = System::Drawing::Point(95, 350);
			this->btndig0->Name = L"btndig0";
			this->btndig0->Size = System::Drawing::Size(74, 56);
			this->btndig0->TabIndex = 1;
			this->btndig0->Text = L"0";
			this->btndig0->UseVisualStyleBackColor = true;
			this->btndig0->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// btnequal
			// 
			this->btnequal->AutoSize = true;
			this->btnequal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnequal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnequal->Location = System::Drawing::Point(255, 350);
			this->btnequal->Name = L"btnequal";
			this->btnequal->Size = System::Drawing::Size(74, 56);
			this->btnequal->TabIndex = 1;
			this->btnequal->Text = L"=";
			this->btnequal->UseVisualStyleBackColor = true;
			this->btnequal->Click += gcnew System::EventHandler(this, &Form1::btnequal_Click);
			// 
			// btndiv
			// 
			this->btndiv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btndiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndiv->Location = System::Drawing::Point(254, 288);
			this->btndiv->Name = L"btndiv";
			this->btndiv->Size = System::Drawing::Size(74, 56);
			this->btndiv->TabIndex = 1;
			this->btndiv->Text = L"/";
			this->btndiv->UseVisualStyleBackColor = true;
			this->btndiv->Click += gcnew System::EventHandler(this, &Form1::EnterOper);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(107, 417);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Developed by Moatasem";
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(15, 350);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 56);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// labelRes
			// 
			this->labelRes->Location = System::Drawing::Point(15, 48);
			this->labelRes->Multiline = true;
			this->labelRes->Name = L"labelRes";
			this->labelRes->Size = System::Drawing::Size(308, 31);
			this->labelRes->TabIndex = 3;
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(342, 439);
			this->Controls->Add(this->labelRes);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btndiv);
			this->Controls->Add(this->btnmult);
			this->Controls->Add(this->btnimnus);
			this->Controls->Add(this->btnplus);
			this->Controls->Add(this->btnequal);
			this->Controls->Add(this->btndig1);
			this->Controls->Add(this->btndig6);
			this->Controls->Add(this->btndig9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->btndig0);
			this->Controls->Add(this->btndig2);
			this->Controls->Add(this->btndig5);
			this->Controls->Add(this->btndig8);
			this->Controls->Add(this->btnclear);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btndig3);
			this->Controls->Add(this->btndig4);
			this->Controls->Add(this->bntdig7);
			this->Controls->Add(this->btnspace);
			this->Controls->Add(this->txtBox);
			this->HelpButton = true;
			this->Name = L"Form1";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double FirstDigit, SecondDigit, Result = 0;
		String^ operators = "+";
		String^ List = "0+ ";
		static bool flag = false;
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
		Button^ Number = safe_cast<Button^>(sender);
		if (txtBox->Text == "0")
		{
			txtBox->Text = Number->Text;
		}
		else
		{
			txtBox->Text = txtBox->Text + Number->Text;
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {

		if (!txtBox->Text->Contains("."))
		{
			txtBox->Text = txtBox->Text + ".";
		}
	}

	private: System::Void EnterOper(System::Object^ sender, System::EventArgs^ e) {


		Button^ Btnoper = safe_cast<Button^>(sender);
		FirstDigit = Double::Parse(txtBox->Text);
		operators = Btnoper->Text;

		List = List + FirstDigit.ToString() + operators + " ";
		labelRes->Text = List;
		txtBox->Text = "";


	}
	private: System::Void btnequal_Click(System::Object^ sender, System::EventArgs^ e) {
		int  index_ = 0;
		String^ temp;
		char* ptr = 0;;
		Button^ Btnoper = safe_cast<Button^>(sender);
		SecondDigit = Double::Parse(txtBox->Text);
		FirstDigit = 0;
		operators = "+";
		while (1)
		{

			index_ = List->IndexOf(' ');
			if (index_ == -1)
				break;

			temp = List->Substring(0, index_ - 1);
			try {
				FirstDigit = Double::Parse(temp);
			}
			catch (...)
			{
				List = List->Substring(index_ - 1, List->Length - 1);
				continue;
			}
			if (operators == "+")
			{
				Result += FirstDigit;
			}
			else if (operators == "-")
			{
				Result -= FirstDigit;
			}
			else if (operators == "*")
			{
				if (Result == 0)
				{
					Result = 1;
					
				}
				Result *= FirstDigit;
			}
			else if (operators == "/")
			{
				Result /= FirstDigit;
			}
			operators = List->Substring(index_ - 1, 1);
			List = List->Substring(index_ + 1, (List->Length) - index_ - 1);
		}

		if (operators == "+")
		{
			Result += SecondDigit;
		}
		else if (operators == "-")
		{
			Result -= SecondDigit;
		}
		else if (operators == "*")
		{
			if (Result == 0)
			{
				Result = 1;
			}
			Result *= SecondDigit;
		}
		else if (operators == "/")
		{
			Result /= SecondDigit;
		}


		labelRes->Text = Result.ToString();
		if (flag == true)
		{
			Result = 0;
			flag = false;
		}

	}
	private: System::Void btnclear_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBox->Text = "0";
		labelRes->Text = "";
		List = "0+ ";
		Result = 0;
		FirstDigit = 0;
		SecondDigit = 0;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBox->Text = "0";
		labelRes->Text = "";
		List = "0+ ";
		Result = 0;
		FirstDigit = 0;
		SecondDigit = 0;
	}
	private: System::Void btnspace_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtBox->Text->Length > 0)
		{
			txtBox->Text = txtBox->Text->Remove(txtBox->Text->Length - 1, 1);
		}

	}
	private: System::Void result(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void labelRes_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	};
}





