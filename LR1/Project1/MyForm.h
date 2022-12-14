#pragma once
#include <list>
#include <iostream>
#include <cmath>  
#include "windows.h"

# define M_PI           3.14159265358979323846

namespace Project1 {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

		}

	protected:

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;



	protected:
	protected:


	private: System::ComponentModel::IContainer^ components;

	private:



#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			System::Drawing::Graphics^ gr = pictureBox1->CreateGraphics();
			gr->Clear(Color::White);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1225, 15);
			this->button1->Margin = System::Windows::Forms::Padding(6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(400, 109);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Location = System::Drawing::Point(1225, 136);
			this->groupBox2->Margin = System::Windows::Forms::Padding(6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(6);
			this->groupBox2->Size = System::Drawing::Size(400, 188);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"k = 4";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(226, 113);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(101, 43);
			this->button7->TabIndex = 4;
			this->button7->Text = L"5,5";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(89, 113);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(101, 43);
			this->button6->TabIndex = 3;
			this->button6->Text = L"2,1";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(281, 33);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 43);
			this->button5->TabIndex = 2;
			this->button5->Text = L"6";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(19, 33);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 43);
			this->button3->TabIndex = 1;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(154, 33);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 43);
			this->button4->TabIndex = 0;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(15, 15);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1198, 691);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(1225, 333);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(400, 109);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Stop";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1656, 731);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Project1";
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
		}

#pragma endregion

		float Centrex, Centrey;
		float R = 100;
		float r = 25;
		float koef;
		double t = 0;
		float x, y, first_x, first_y;
		PointF next_curve = *new PointF();
		PointF curr_curve = *new PointF();

		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{

			System::Drawing::Graphics^ gr = pictureBox1->CreateGraphics();
			gr->Clear(Color::White);
			t = M_PI / 64;
			Centrex = pictureBox1->Width / 2;
			Centrey = pictureBox1->Height / 2;
			koef = R / r;
			first_x = (Centrex + cos(t) * (koef - 1) * r + cos((koef - 1) * t) * r);
			first_y = (Centrey + sin(t) * (koef - 1) * r - sin((koef - 1) * t) * r);
			buttons_DiEnable();

			timer1->Enabled = true;
		}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = false;
		buttons_DiEnable();
	}

	private: System::Void timer(System::Object^ sender, System::EventArgs^ e) {
		System::Drawing::Graphics^ gr = pictureBox1->CreateGraphics();
		x = Centrex + cos(t) * (koef - 1) * r + cos((koef - 1) * t) * r;
		y = Centrey + sin(t) * (koef - 1) * r - sin((koef - 1) * t) * r;
		next_curve = *new PointF(x, y);
		gr->DrawEllipse(gcnew Pen(Color::Red, 1), x - r / 2, y - r / 2, r, r);
		if (first_x - x < 0.001 && abs(first_y - y) < 0.001) {
			gr->Clear(Color::White);
		}
		t += M_PI / 64;
		if (t > 1000) {
			buttons_DiEnable();
			timer1->Enabled = false;
		}
	}

	void buttons_DiEnable() {
		button1->Enabled = !button1->Enabled;
		button2->Enabled = !button2->Enabled;
		button3->Enabled = !button3->Enabled;
		button4->Enabled = !button4->Enabled;
		button5->Enabled = !button5->Enabled;
		button6->Enabled = !button6->Enabled;
		button7->Enabled = !button7->Enabled;
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		R = 90.0;
		r = 30.0;
		groupBox2->Text = L"k = 3";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		R = 100.0;
		r = 25.0;
		groupBox2->Text = L"k = 4";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		R = 102.0;
		r = 17.0;
		groupBox2->Text = L"k = 6";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		R = 105.0;
		r = 50.0;
		groupBox2->Text = L"k = 2,1";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		R = 99.0;
		r = 18.0;
		groupBox2->Text = L"k = 5,5";
	}
	};
}
