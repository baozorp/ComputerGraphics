#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			KeyPreview = true;

		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ moveLeftButton;
	private: System::Windows::Forms::Button^ moveRightButton;
	private: System::Windows::Forms::Button^ moveTopButton;
	private: System::Windows::Forms::Button^ moveBottomButton;
	private: System::Windows::Forms::Button^ zoomPlusButton;
	private: System::Windows::Forms::Button^ zoomMinuseButton;
	private: System::Windows::Forms::Button^ FlipXButton;
	private: System::Windows::Forms::Button^ FlipYButton;
	private: System::Windows::Forms::Button^ FlipYXButton;
	private: System::Windows::Forms::Button^ RotateButton;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ resetButton;
	private: System::Windows::Forms::Label^ label2;


	protected:

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->moveLeftButton = (gcnew System::Windows::Forms::Button());
			this->moveRightButton = (gcnew System::Windows::Forms::Button());
			this->moveTopButton = (gcnew System::Windows::Forms::Button());
			this->moveBottomButton = (gcnew System::Windows::Forms::Button());
			this->zoomPlusButton = (gcnew System::Windows::Forms::Button());
			this->zoomMinuseButton = (gcnew System::Windows::Forms::Button());
			this->FlipXButton = (gcnew System::Windows::Forms::Button());
			this->FlipYButton = (gcnew System::Windows::Forms::Button());
			this->FlipYXButton = (gcnew System::Windows::Forms::Button());
			this->RotateButton = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->resetButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1017, 919);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			// 
			// moveLeftButton
			// 
			this->moveLeftButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"moveLeftButton.BackgroundImage")));
			this->moveLeftButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->moveLeftButton->Location = System::Drawing::Point(1028, 273);
			this->moveLeftButton->Name = L"moveLeftButton";
			this->moveLeftButton->Size = System::Drawing::Size(128, 128);
			this->moveLeftButton->TabIndex = 1;
			this->moveLeftButton->UseVisualStyleBackColor = true;
			this->moveLeftButton->Click += gcnew System::EventHandler(this, &MyForm::moveLeftButton_Click);
			// 
			// moveRightButton
			// 
			this->moveRightButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"moveRightButton.BackgroundImage")));
			this->moveRightButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->moveRightButton->Location = System::Drawing::Point(1296, 273);
			this->moveRightButton->Name = L"moveRightButton";
			this->moveRightButton->Size = System::Drawing::Size(128, 128);
			this->moveRightButton->TabIndex = 2;
			this->moveRightButton->UseVisualStyleBackColor = true;
			this->moveRightButton->Click += gcnew System::EventHandler(this, &MyForm::moveRightButton_Click);
			// 
			// moveTopButton
			// 
			this->moveTopButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"moveTopButton.BackgroundImage")));
			this->moveTopButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->moveTopButton->Location = System::Drawing::Point(1162, 139);
			this->moveTopButton->Name = L"moveTopButton";
			this->moveTopButton->Size = System::Drawing::Size(128, 128);
			this->moveTopButton->TabIndex = 3;
			this->moveTopButton->UseVisualStyleBackColor = true;
			this->moveTopButton->Click += gcnew System::EventHandler(this, &MyForm::moveTopButton_Click);
			// 
			// moveBottomButton
			// 
			this->moveBottomButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"moveBottomButton.BackgroundImage")));
			this->moveBottomButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->moveBottomButton->Location = System::Drawing::Point(1162, 273);
			this->moveBottomButton->Name = L"moveBottomButton";
			this->moveBottomButton->Size = System::Drawing::Size(128, 128);
			this->moveBottomButton->TabIndex = 4;
			this->moveBottomButton->UseVisualStyleBackColor = true;
			this->moveBottomButton->Click += gcnew System::EventHandler(this, &MyForm::moveBottomButton_Click);
			// 
			// zoomPlusButton
			// 
			this->zoomPlusButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zoomPlusButton.BackgroundImage")));
			this->zoomPlusButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->zoomPlusButton->Location = System::Drawing::Point(1028, 424);
			this->zoomPlusButton->Name = L"zoomPlusButton";
			this->zoomPlusButton->Size = System::Drawing::Size(128, 128);
			this->zoomPlusButton->TabIndex = 6;
			this->zoomPlusButton->UseVisualStyleBackColor = true;
			this->zoomPlusButton->Click += gcnew System::EventHandler(this, &MyForm::zoomPlusButton_Click);
			// 
			// zoomMinuseButton
			// 
			this->zoomMinuseButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zoomMinuseButton.BackgroundImage")));
			this->zoomMinuseButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->zoomMinuseButton->Location = System::Drawing::Point(1296, 424);
			this->zoomMinuseButton->Name = L"zoomMinuseButton";
			this->zoomMinuseButton->Size = System::Drawing::Size(128, 128);
			this->zoomMinuseButton->TabIndex = 7;
			this->zoomMinuseButton->UseVisualStyleBackColor = true;
			this->zoomMinuseButton->Click += gcnew System::EventHandler(this, &MyForm::zoomMinuseButton_Click);
			// 
			// FlipXButton
			// 
			this->FlipXButton->Location = System::Drawing::Point(1028, 580);
			this->FlipXButton->Name = L"FlipXButton";
			this->FlipXButton->Size = System::Drawing::Size(128, 64);
			this->FlipXButton->TabIndex = 8;
			this->FlipXButton->Text = L"Flip by X";
			this->FlipXButton->UseVisualStyleBackColor = true;
			this->FlipXButton->Click += gcnew System::EventHandler(this, &MyForm::FlipXButton_Click);
			// 
			// FlipYButton
			// 
			this->FlipYButton->Location = System::Drawing::Point(1162, 580);
			this->FlipYButton->Name = L"FlipYButton";
			this->FlipYButton->Size = System::Drawing::Size(128, 64);
			this->FlipYButton->TabIndex = 9;
			this->FlipYButton->Text = L"Flip by Y";
			this->FlipYButton->UseVisualStyleBackColor = true;
			this->FlipYButton->Click += gcnew System::EventHandler(this, &MyForm::FlipYButton_Click);
			// 
			// FlipYXButton
			// 
			this->FlipYXButton->Location = System::Drawing::Point(1296, 580);
			this->FlipYXButton->Name = L"FlipYXButton";
			this->FlipYXButton->Size = System::Drawing::Size(128, 64);
			this->FlipYXButton->TabIndex = 10;
			this->FlipYXButton->Text = L"Flip by XY";
			this->FlipYXButton->UseVisualStyleBackColor = true;
			this->FlipYXButton->Click += gcnew System::EventHandler(this, &MyForm::FlipYXButton_Click);
			// 
			// RotateButton
			// 
			this->RotateButton->Location = System::Drawing::Point(1028, 651);
			this->RotateButton->Name = L"RotateButton";
			this->RotateButton->Size = System::Drawing::Size(262, 64);
			this->RotateButton->TabIndex = 11;
			this->RotateButton->Text = L"Rotate in degrees";
			this->RotateButton->UseVisualStyleBackColor = true;
			this->RotateButton->Click += gcnew System::EventHandler(this, &MyForm::RotateButton_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(1296, 654);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(128, 56);
			this->textBox1->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1304, 713);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 25);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Entry field";
			// 
			// resetButton
			// 
			this->resetButton->Location = System::Drawing::Point(1023, 758);
			this->resetButton->Name = L"resetButton";
			this->resetButton->Size = System::Drawing::Size(401, 78);
			this->resetButton->TabIndex = 14;
			this->resetButton->Text = L"Reset";
			this->resetButton->UseVisualStyleBackColor = true;
			this->resetButton->Click += gcnew System::EventHandler(this, &MyForm::resetButton_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1040, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(400, 101);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Use WASD, Enter and Click on Picture";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1452, 885);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->resetButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->RotateButton);
			this->Controls->Add(this->FlipYXButton);
			this->Controls->Add(this->FlipYButton);
			this->Controls->Add(this->FlipXButton);
			this->Controls->Add(this->zoomMinuseButton);
			this->Controls->Add(this->zoomPlusButton);
			this->Controls->Add(this->moveBottomButton);
			this->Controls->Add(this->moveTopButton);
			this->Controls->Add(this->moveRightButton);
			this->Controls->Add(this->moveLeftButton);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"LR3";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		ref class Matrix {
		public:
			array<float, 2>^ elements = gcnew array<float, 2>(3, 3);

			static PointF operator*(PointF point, Matrix^ matrix)
			{
				point.X = matrix->elements[0, 0]* point.X + matrix->elements[1, 0] * point.Y + matrix->elements[0, 2];
				point.Y = matrix->elements[0, 1] * point.X + matrix->elements[1, 1] * point.Y + matrix->elements[1, 2];
				return point;
			}
			void resetMatrix() {
				elements[0, 0] = 1;
				elements[0, 1] = 0;
				elements[0, 2] = 0;
				elements[1, 0] = 0;
				elements[1, 1] = 1;
				elements[1, 2] = 0;
				elements[2, 0] = 0;
				elements[2, 1] = 0;
				elements[2, 2] = 1;

			}
			static PointF operator*(Matrix^ matrix, PointF point)
			{
				return point * matrix;
			}
		};

		array<PointF, 1>^ polygonPointsContur; //контур фигуры
		array<PointF>^ polygonPointsFill; //координаты заливки
		float xcenter, ycenter, dotSetY, dotSetX;
		float move; //размер для движения
		Matrix^ matrix = gcnew Matrix;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		xcenter = dotSetX = pictureBox1->Width / 2;
		ycenter = dotSetY = pictureBox1->Height / 2;
		move = pictureBox1->Width / 20;
		polygonPointsContur = gcnew array<PointF>(4);
		polygonPointsFill = gcnew array<PointF>(6);
		matrix->resetMatrix();
		CreateFigure();
	}

	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		pictureBox1->Image = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		Graphics^ gr = Graphics::FromImage(pictureBox1->Image);
		gr->Clear(Color::Azure);
		gr->DrawLine(gcnew Pen(Brushes::Black, 1), float(0), ycenter, float(pictureBox1->Width), ycenter);
		gr->DrawLine(gcnew Pen(Brushes::Black, 1), xcenter, float(0), xcenter, float(pictureBox1->Height));
		gr->FillPolygon(gcnew SolidBrush(Color::FromArgb(145, 173, 255, 47)), polygonPointsFill);
		gr->DrawPolygon(gcnew Pen(Brushes::Black, 2), polygonPointsContur);
		gr->DrawPolygon(gcnew Pen(Brushes::Black, 2), polygonPointsFill);
	}



	void CreateFigure() {
		//Задаем контур фигуры
		polygonPointsContur[0] = PointF(xcenter, ycenter + move * 2);
		polygonPointsContur[1] = PointF(xcenter + (move * 2), ycenter);
		polygonPointsContur[2] = PointF(xcenter, ycenter - move * 2);
		polygonPointsContur[3] = PointF(xcenter - (move * 2), ycenter);

		//Задаем границы заливки
		polygonPointsFill = gcnew array<PointF>(6);
		polygonPointsFill[0] = PointF(xcenter, ycenter + move * 2);
		polygonPointsFill[1] = PointF(xcenter + move, ycenter + move);
		polygonPointsFill[2] = PointF(xcenter + move, ycenter - move);
		polygonPointsFill[3] = PointF(xcenter, ycenter - move * 2);
		polygonPointsFill[4] = PointF(xcenter - move, ycenter - move);
		polygonPointsFill[5] = PointF(xcenter - move, ycenter + move);

	}

	void moveFunction() {
		for (int i = 0; i < polygonPointsContur->Length; i++) {
			polygonPointsContur[i] = polygonPointsContur[i] * matrix;
		}
		for (int i = 0; i < polygonPointsFill->Length; i++) {
			polygonPointsFill[i] = polygonPointsFill[i] * matrix;
		}
		pictureBox1->Invalidate();
		matrix->resetMatrix();
	}

	void zoomAndFlipFunction(float x, float y)
	{
		for (int i = 0; i < polygonPointsContur->Length; i++)
		{
			polygonPointsContur[i].X = polygonPointsContur[i].X - x;
			polygonPointsContur[i].Y = polygonPointsContur[i].Y - y;
			polygonPointsContur[i] = polygonPointsContur[i] * matrix;
			polygonPointsContur[i].X = polygonPointsContur[i].X + x;
			polygonPointsContur[i].Y = polygonPointsContur[i].Y + y;
		}
		for (int i = 0; i < polygonPointsFill->Length; i++)
		{
			polygonPointsFill[i].X = polygonPointsFill[i].X - x;
			polygonPointsFill[i].Y = polygonPointsFill[i].Y - y;
			polygonPointsFill[i] = polygonPointsFill[i] * matrix;
			polygonPointsFill[i].X = polygonPointsFill[i].X + x;
			polygonPointsFill[i].Y = polygonPointsFill[i].Y + y;
		}
		matrix->resetMatrix();
		pictureBox1->Invalidate();

	}

	private: System::Void moveTopButton_Click(System::Object^ sender, System::EventArgs^ e) {
		matrix->elements[1, 2] = -move;
		moveFunction();
	}

	private: System::Void moveBottomButton_Click(System::Object^ sender, System::EventArgs^ e) {
		matrix->elements[1, 2] = move;
		moveFunction();
	}

	private: System::Void moveRightButton_Click(System::Object^ sender, System::EventArgs^ e) {
		matrix->elements[0, 2] = move;
		moveFunction();
	}

	private: System::Void moveLeftButton_Click(System::Object^ sender, System::EventArgs^ e) {
		matrix->elements[0, 2] = -move;
		moveFunction();
	}

	private: System::Void zoomPlusButton_Click(System::Object^ sender, System::EventArgs^ e) {
		matrix->elements[0, 0] = 1.1;
		matrix->elements[1, 1] = 1.1;
		zoomAndFlipFunction(xcenter, ycenter);

	}

	private: System::Void zoomMinuseButton_Click(System::Object^ sender, System::EventArgs^ e){
		matrix->elements[0, 0] = 0.9;
		matrix->elements[1, 1] = 0.9;
		zoomAndFlipFunction(xcenter, ycenter);
	}
	private: System::Void FlipXButton_Click(System::Object^ sender, System::EventArgs^ e) {
		matrix->elements[1, 1] = -1;
		zoomAndFlipFunction(xcenter, ycenter);
	}
	private: System::Void FlipYButton_Click(System::Object^ sender, System::EventArgs^ e) {
		matrix->elements[0, 0] = -1;
		zoomAndFlipFunction(xcenter, ycenter);
	}
	private: System::Void FlipYXButton_Click(System::Object^ sender, System::EventArgs^ e) {
		matrix->elements[0, 0] = -1;
		matrix->elements[1, 1] = -1;
		zoomAndFlipFunction(xcenter, ycenter);
	}

	private: System::Void RotateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			//float degrees = float::Parse(textBox1->Text)/180 * Math::PI;
			int degrees = Convert::ToInt32(textBox1->Text);
			degrees = int(degrees * Math::PI) % 180;
			matrix->elements[0, 1] = -Math::Sin(degrees);
			matrix->elements[1, 0] = Math::Sin(degrees);
			zoomAndFlipFunction(dotSetX, dotSetY);
		}
		catch (Exception^ e) {
			MessageBox::Show("Try enter degrees again. Use int",
								"Not fatal Error",
								MessageBoxButtons::OK,
								MessageBoxIcon::Information,
								MessageBoxDefaultButton::Button1,
								MessageBoxOptions::DefaultDesktopOnly);
			textBox1->Text = "";
			moveTopButton->Focus();
		}

	}
private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dotSetX = e->X;
	dotSetY = e->Y;
}

private: System::Void resetButton_Click(System::Object^ sender, System::EventArgs^ e) {
	CreateFigure();
	dotSetX = xcenter;
	dotSetY = ycenter;
	pictureBox1->Invalidate();
}

private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::W)
	{
		moveTopButton_Click(sender, e);
	}

	if (e->KeyCode == Keys::S)
	{
		moveBottomButton_Click(sender, e);
	}

	if (e->KeyCode == Keys::D)
	{
		moveRightButton_Click(sender, e);
	}

	if (e->KeyCode == Keys::A)
	{
		moveLeftButton_Click(sender, e);
	}
}
};
}
