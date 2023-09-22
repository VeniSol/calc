#pragma once

namespace calc {

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private:float first_num;
	private:char user_action = ' ';
	private:bool is_equal = false;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(296, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(326, 68);
			this->label1->TabIndex = 1;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(12, 147);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(65, 65);
			this->button2->TabIndex = 2;
			this->button2->Text = L"AC";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(273, 147);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(65, 65);
			this->button3->TabIndex = 3;
			this->button3->Text = L"/";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(98, 147);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(65, 65);
			this->button4->TabIndex = 4;
			this->button4->Text = L"+/-";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(185, 147);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(65, 65);
			this->button5->TabIndex = 5;
			this->button5->Text = L"%";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(12, 234);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(65, 65);
			this->button6->TabIndex = 6;
			this->button6->Text = L"7";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(98, 234);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 65);
			this->button7->TabIndex = 7;
			this->button7->Text = L"8";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(185, 234);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(65, 65);
			this->button8->TabIndex = 8;
			this->button8->Text = L"9";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(273, 234);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(65, 65);
			this->button9->TabIndex = 9;
			this->button9->Text = L"*";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(12, 319);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(65, 65);
			this->button10->TabIndex = 10;
			this->button10->Text = L"4";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(98, 319);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(65, 65);
			this->button11->TabIndex = 11;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(185, 319);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(65, 65);
			this->button12->TabIndex = 12;
			this->button12->Text = L"6";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(273, 319);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(65, 65);
			this->button13->TabIndex = 13;
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(12, 405);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(65, 65);
			this->button14->TabIndex = 14;
			this->button14->Text = L"1";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(98, 405);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(65, 65);
			this->button15->TabIndex = 15;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(185, 405);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(65, 65);
			this->button16->TabIndex = 16;
			this->button16->Text = L"3";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(273, 405);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(65, 65);
			this->button17->TabIndex = 17;
			this->button17->Text = L"+";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(12, 489);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(65, 65);
			this->button18->TabIndex = 18;
			this->button18->Text = L"0";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(98, 489);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(65, 65);
			this->button20->TabIndex = 20;
			this->button20->Text = L".";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(185, 489);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(153, 65);
			this->button21->TabIndex = 21;
			this->button21->Text = L"=";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(350, 566);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Кулькулятор";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->ForeColor = Color::White;
		Button^ button = safe_cast<Button^>(sender);
		if (this->label1->Text == "0" || is_equal) {
			this->label1->Text = button->Text;
			is_equal = false;
		}
		else {
			this->label1->Text = this->label1->Text + button->Text;
		}
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		math('+');
	}

	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		math('-');
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		math('*');
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		math('/');
	}
	private: System::Void math(char action) {
		this->first_num = System::Convert::ToDouble(this->label1->Text);
		this->user_action = action;
		this->label1->Text = "0";
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_action == ' ')
			return;
		Double second = System::Convert::ToDouble(this->label1->Text);
		Double res;
		switch (this->user_action)
		{
		case'+':res = this->first_num + second; break;
		case'-':res = this->first_num - second; break;
		case'*':res = this->first_num * second; break;
		case'%':res = this->first_num * second / 100; break;
		case'/':
			if (second == 0) {
				this->label1->ForeColor = Color::IndianRed;
				res = 0;
				MessageBox::Show(this, "На 0 делить нельзя", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
				res = this->first_num / second;
			break;

		}
		this->is_equal = true;

		this->label1->Text = System::Convert::ToString(res);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "0";
		this->label1->ForeColor = Color::White;
		this->first_num = 0;
		this->user_action = ' ';
		this->is_equal = false;
		;




	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Double  num = System::Convert::ToDouble(this->label1->Text);
		num *= -1;
		this->label1->Text = System::Convert::ToString(num);

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		math('%');
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->label1->Text;
		if (!text->Contains(","))
			this->label1->Text = text + ",";
	}
	};
}