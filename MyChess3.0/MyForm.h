#pragma once

#include "Board.h"
#include "Pieces.h"

#include <string>
#include <windows.h>  
#include <memory>

namespace MyChess30 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ B00;
	private: System::Windows::Forms::PictureBox^ B01;
	private: System::Windows::Forms::PictureBox^ B02;
	private: System::Windows::Forms::PictureBox^ B03;
	private: System::Windows::Forms::PictureBox^ B07;
	protected:





	private: System::Windows::Forms::PictureBox^ B06;
	protected:






	private: System::Windows::Forms::PictureBox^ B05;


	private: System::Windows::Forms::PictureBox^ B04;


	private: System::Windows::Forms::PictureBox^ B10;
	private: System::Windows::Forms::PictureBox^ B17;



	private: System::Windows::Forms::PictureBox^ B16;

	private: System::Windows::Forms::PictureBox^ B15;

	private: System::Windows::Forms::PictureBox^ B14;

	private: System::Windows::Forms::PictureBox^ B13;

	private: System::Windows::Forms::PictureBox^ B12;

	private: System::Windows::Forms::PictureBox^ B11;
	private: System::Windows::Forms::PictureBox^ B30;
	private: System::Windows::Forms::PictureBox^ B37;




	private: System::Windows::Forms::PictureBox^ B36;

	private: System::Windows::Forms::PictureBox^ B35;

	private: System::Windows::Forms::PictureBox^ B34;

	private: System::Windows::Forms::PictureBox^ B33;

	private: System::Windows::Forms::PictureBox^ B32;

	private: System::Windows::Forms::PictureBox^ B31;

	private: System::Windows::Forms::PictureBox^ B27;
	private: System::Windows::Forms::PictureBox^ B26;



	private: System::Windows::Forms::PictureBox^ B25;



	private: System::Windows::Forms::PictureBox^ B24;


	private: System::Windows::Forms::PictureBox^ B23;


	private: System::Windows::Forms::PictureBox^ B22;


	private: System::Windows::Forms::PictureBox^ B21;


	private: System::Windows::Forms::PictureBox^ B20;
private: System::Windows::Forms::PictureBox^ B70;
private: System::Windows::Forms::PictureBox^ B77;








private: System::Windows::Forms::PictureBox^ B76;

private: System::Windows::Forms::PictureBox^ B75;

private: System::Windows::Forms::PictureBox^ B74;

private: System::Windows::Forms::PictureBox^ B73;

private: System::Windows::Forms::PictureBox^ B72;

private: System::Windows::Forms::PictureBox^ B71;

private: System::Windows::Forms::PictureBox^ B67;

private: System::Windows::Forms::PictureBox^ B66;

private: System::Windows::Forms::PictureBox^ B65;

private: System::Windows::Forms::PictureBox^ B64;

private: System::Windows::Forms::PictureBox^ B63;

private: System::Windows::Forms::PictureBox^ B62;

private: System::Windows::Forms::PictureBox^ B61;

private: System::Windows::Forms::PictureBox^ B60;

private: System::Windows::Forms::PictureBox^ B50;
private: System::Windows::Forms::PictureBox^ B57;


private: System::Windows::Forms::PictureBox^ B56;

private: System::Windows::Forms::PictureBox^ B55;

private: System::Windows::Forms::PictureBox^ B54;

private: System::Windows::Forms::PictureBox^ B53;

private: System::Windows::Forms::PictureBox^ B52;

private: System::Windows::Forms::PictureBox^ B51;

private: System::Windows::Forms::PictureBox^ B47;

private: System::Windows::Forms::PictureBox^ B46;

private: System::Windows::Forms::PictureBox^ B45;

private: System::Windows::Forms::PictureBox^ B44;

private: System::Windows::Forms::PictureBox^ B43;

private: System::Windows::Forms::PictureBox^ B42;

private: System::Windows::Forms::PictureBox^ B41;

private: System::Windows::Forms::PictureBox^ B40;

private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Button^ button1;

private: System::Windows::Forms::PictureBox^ ColorToMoveBox1;



















private: System::Windows::Forms::Label^ CapturedBlackQueens;
private: System::Windows::Forms::Label^ CapturedBlackRooks;
private: System::Windows::Forms::Label^ CapturedBlackBishops;
private: System::Windows::Forms::Label^ CapturedBlackKnights;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::Label^ CapturedBlackPawns;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::PictureBox^ ColorToMoveBox3;

private: System::Windows::Forms::PictureBox^ ColorToMoveBox2;
private: System::Windows::Forms::PictureBox^ ColorToMoveBox4;
private: System::Windows::Forms::Label^ CapturedWhiteQueens;
private: System::Windows::Forms::Label^ CapturedWhiteRooks;
private: System::Windows::Forms::Label^ CapturedWhiteBishops;
private: System::Windows::Forms::Label^ CapturedWhiteKnights;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Label^ CapturedWhitePawns;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::PictureBox^ Q;
private: System::Windows::Forms::PictureBox^ R;
private: System::Windows::Forms::PictureBox^ B;
private: System::Windows::Forms::PictureBox^ K;
private: System::Windows::Forms::Label^ NewPieceText;






























	protected:


	protected:



	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->B00 = (gcnew System::Windows::Forms::PictureBox());
            this->B01 = (gcnew System::Windows::Forms::PictureBox());
            this->B02 = (gcnew System::Windows::Forms::PictureBox());
            this->B03 = (gcnew System::Windows::Forms::PictureBox());
            this->B07 = (gcnew System::Windows::Forms::PictureBox());
            this->B06 = (gcnew System::Windows::Forms::PictureBox());
            this->B05 = (gcnew System::Windows::Forms::PictureBox());
            this->B04 = (gcnew System::Windows::Forms::PictureBox());
            this->B10 = (gcnew System::Windows::Forms::PictureBox());
            this->B17 = (gcnew System::Windows::Forms::PictureBox());
            this->B16 = (gcnew System::Windows::Forms::PictureBox());
            this->B15 = (gcnew System::Windows::Forms::PictureBox());
            this->B14 = (gcnew System::Windows::Forms::PictureBox());
            this->B13 = (gcnew System::Windows::Forms::PictureBox());
            this->B12 = (gcnew System::Windows::Forms::PictureBox());
            this->B11 = (gcnew System::Windows::Forms::PictureBox());
            this->B30 = (gcnew System::Windows::Forms::PictureBox());
            this->B37 = (gcnew System::Windows::Forms::PictureBox());
            this->B36 = (gcnew System::Windows::Forms::PictureBox());
            this->B35 = (gcnew System::Windows::Forms::PictureBox());
            this->B34 = (gcnew System::Windows::Forms::PictureBox());
            this->B33 = (gcnew System::Windows::Forms::PictureBox());
            this->B32 = (gcnew System::Windows::Forms::PictureBox());
            this->B31 = (gcnew System::Windows::Forms::PictureBox());
            this->B27 = (gcnew System::Windows::Forms::PictureBox());
            this->B26 = (gcnew System::Windows::Forms::PictureBox());
            this->B25 = (gcnew System::Windows::Forms::PictureBox());
            this->B24 = (gcnew System::Windows::Forms::PictureBox());
            this->B23 = (gcnew System::Windows::Forms::PictureBox());
            this->B22 = (gcnew System::Windows::Forms::PictureBox());
            this->B21 = (gcnew System::Windows::Forms::PictureBox());
            this->B20 = (gcnew System::Windows::Forms::PictureBox());
            this->B70 = (gcnew System::Windows::Forms::PictureBox());
            this->B77 = (gcnew System::Windows::Forms::PictureBox());
            this->B76 = (gcnew System::Windows::Forms::PictureBox());
            this->B75 = (gcnew System::Windows::Forms::PictureBox());
            this->B74 = (gcnew System::Windows::Forms::PictureBox());
            this->B73 = (gcnew System::Windows::Forms::PictureBox());
            this->B72 = (gcnew System::Windows::Forms::PictureBox());
            this->B71 = (gcnew System::Windows::Forms::PictureBox());
            this->B67 = (gcnew System::Windows::Forms::PictureBox());
            this->B66 = (gcnew System::Windows::Forms::PictureBox());
            this->B65 = (gcnew System::Windows::Forms::PictureBox());
            this->B64 = (gcnew System::Windows::Forms::PictureBox());
            this->B63 = (gcnew System::Windows::Forms::PictureBox());
            this->B62 = (gcnew System::Windows::Forms::PictureBox());
            this->B61 = (gcnew System::Windows::Forms::PictureBox());
            this->B60 = (gcnew System::Windows::Forms::PictureBox());
            this->B50 = (gcnew System::Windows::Forms::PictureBox());
            this->B57 = (gcnew System::Windows::Forms::PictureBox());
            this->B56 = (gcnew System::Windows::Forms::PictureBox());
            this->B55 = (gcnew System::Windows::Forms::PictureBox());
            this->B54 = (gcnew System::Windows::Forms::PictureBox());
            this->B53 = (gcnew System::Windows::Forms::PictureBox());
            this->B52 = (gcnew System::Windows::Forms::PictureBox());
            this->B51 = (gcnew System::Windows::Forms::PictureBox());
            this->B47 = (gcnew System::Windows::Forms::PictureBox());
            this->B46 = (gcnew System::Windows::Forms::PictureBox());
            this->B45 = (gcnew System::Windows::Forms::PictureBox());
            this->B44 = (gcnew System::Windows::Forms::PictureBox());
            this->B43 = (gcnew System::Windows::Forms::PictureBox());
            this->B42 = (gcnew System::Windows::Forms::PictureBox());
            this->B41 = (gcnew System::Windows::Forms::PictureBox());
            this->B40 = (gcnew System::Windows::Forms::PictureBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->ColorToMoveBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->CapturedBlackQueens = (gcnew System::Windows::Forms::Label());
            this->CapturedBlackRooks = (gcnew System::Windows::Forms::Label());
            this->CapturedBlackBishops = (gcnew System::Windows::Forms::Label());
            this->CapturedBlackKnights = (gcnew System::Windows::Forms::Label());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
            this->CapturedBlackPawns = (gcnew System::Windows::Forms::Label());
            this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->ColorToMoveBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->ColorToMoveBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->ColorToMoveBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->CapturedWhiteQueens = (gcnew System::Windows::Forms::Label());
            this->CapturedWhiteRooks = (gcnew System::Windows::Forms::Label());
            this->CapturedWhiteBishops = (gcnew System::Windows::Forms::Label());
            this->CapturedWhiteKnights = (gcnew System::Windows::Forms::Label());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->CapturedWhitePawns = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->Q = (gcnew System::Windows::Forms::PictureBox());
            this->R = (gcnew System::Windows::Forms::PictureBox());
            this->B = (gcnew System::Windows::Forms::PictureBox());
            this->K = (gcnew System::Windows::Forms::PictureBox());
            this->NewPieceText = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B00))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B01))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B02))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B03))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B07))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B06))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B05))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B04))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B10))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B17))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B16))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B15))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B14))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B13))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B12))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B11))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B30))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B37))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B36))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B35))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B34))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B33))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B32))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B31))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B27))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B26))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B25))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B24))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B23))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B22))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B21))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B20))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B70))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B77))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B76))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B75))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B74))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B73))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B72))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B71))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B67))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B66))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B65))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B64))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B63))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B62))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B61))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B60))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B50))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B57))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B56))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B55))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B54))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B53))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B52))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B51))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B47))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B46))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B45))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B44))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B43))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B42))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B41))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B40))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ColorToMoveBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ColorToMoveBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ColorToMoveBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ColorToMoveBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->R))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K))->BeginInit();
            this->SuspendLayout();
            // 
            // B00
            // 
            this->B00->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B00->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B00->Location = System::Drawing::Point(344, 84);
            this->B00->Name = L"B00";
            this->B00->Size = System::Drawing::Size(60, 60);
            this->B00->TabIndex = 5;
            this->B00->TabStop = false;
            this->B00->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B01
            // 
            this->B01->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B01->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B01->Location = System::Drawing::Point(404, 84);
            this->B01->Name = L"B01";
            this->B01->Size = System::Drawing::Size(60, 60);
            this->B01->TabIndex = 6;
            this->B01->TabStop = false;
            this->B01->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B02
            // 
            this->B02->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B02->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B02->Location = System::Drawing::Point(464, 84);
            this->B02->Name = L"B02";
            this->B02->Size = System::Drawing::Size(60, 60);
            this->B02->TabIndex = 7;
            this->B02->TabStop = false;
            this->B02->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B03
            // 
            this->B03->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B03->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B03->Location = System::Drawing::Point(524, 84);
            this->B03->Name = L"B03";
            this->B03->Size = System::Drawing::Size(60, 60);
            this->B03->TabIndex = 8;
            this->B03->TabStop = false;
            this->B03->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B07
            // 
            this->B07->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B07->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B07->Location = System::Drawing::Point(764, 84);
            this->B07->Name = L"B07";
            this->B07->Size = System::Drawing::Size(60, 60);
            this->B07->TabIndex = 12;
            this->B07->TabStop = false;
            this->B07->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B06
            // 
            this->B06->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B06->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B06->Location = System::Drawing::Point(704, 84);
            this->B06->Name = L"B06";
            this->B06->Size = System::Drawing::Size(60, 60);
            this->B06->TabIndex = 11;
            this->B06->TabStop = false;
            this->B06->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B05
            // 
            this->B05->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B05->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B05->Location = System::Drawing::Point(644, 84);
            this->B05->Name = L"B05";
            this->B05->Size = System::Drawing::Size(60, 60);
            this->B05->TabIndex = 10;
            this->B05->TabStop = false;
            this->B05->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B04
            // 
            this->B04->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B04->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B04->Location = System::Drawing::Point(584, 84);
            this->B04->Name = L"B04";
            this->B04->Size = System::Drawing::Size(60, 60);
            this->B04->TabIndex = 9;
            this->B04->TabStop = false;
            this->B04->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B10
            // 
            this->B10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B10->Location = System::Drawing::Point(344, 144);
            this->B10->Name = L"B10";
            this->B10->Size = System::Drawing::Size(60, 60);
            this->B10->TabIndex = 20;
            this->B10->TabStop = false;
            this->B10->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B17
            // 
            this->B17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B17->Location = System::Drawing::Point(764, 144);
            this->B17->Name = L"B17";
            this->B17->Size = System::Drawing::Size(60, 60);
            this->B17->TabIndex = 19;
            this->B17->TabStop = false;
            this->B17->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B16
            // 
            this->B16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B16->Location = System::Drawing::Point(704, 144);
            this->B16->Name = L"B16";
            this->B16->Size = System::Drawing::Size(60, 60);
            this->B16->TabIndex = 18;
            this->B16->TabStop = false;
            this->B16->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B15
            // 
            this->B15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B15->Location = System::Drawing::Point(644, 144);
            this->B15->Name = L"B15";
            this->B15->Size = System::Drawing::Size(60, 60);
            this->B15->TabIndex = 17;
            this->B15->TabStop = false;
            this->B15->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B14
            // 
            this->B14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B14->Location = System::Drawing::Point(584, 144);
            this->B14->Name = L"B14";
            this->B14->Size = System::Drawing::Size(60, 60);
            this->B14->TabIndex = 16;
            this->B14->TabStop = false;
            this->B14->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B13
            // 
            this->B13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B13->Location = System::Drawing::Point(524, 144);
            this->B13->Name = L"B13";
            this->B13->Size = System::Drawing::Size(60, 60);
            this->B13->TabIndex = 15;
            this->B13->TabStop = false;
            this->B13->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B12
            // 
            this->B12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B12->Location = System::Drawing::Point(464, 144);
            this->B12->Name = L"B12";
            this->B12->Size = System::Drawing::Size(60, 60);
            this->B12->TabIndex = 14;
            this->B12->TabStop = false;
            this->B12->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B11
            // 
            this->B11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B11->Location = System::Drawing::Point(404, 144);
            this->B11->Name = L"B11";
            this->B11->Size = System::Drawing::Size(60, 60);
            this->B11->TabIndex = 13;
            this->B11->TabStop = false;
            this->B11->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B30
            // 
            this->B30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B30->Location = System::Drawing::Point(344, 264);
            this->B30->Name = L"B30";
            this->B30->Size = System::Drawing::Size(60, 60);
            this->B30->TabIndex = 36;
            this->B30->TabStop = false;
            this->B30->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B37
            // 
            this->B37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B37->Location = System::Drawing::Point(764, 264);
            this->B37->Name = L"B37";
            this->B37->Size = System::Drawing::Size(60, 60);
            this->B37->TabIndex = 35;
            this->B37->TabStop = false;
            this->B37->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B36
            // 
            this->B36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B36->Location = System::Drawing::Point(704, 264);
            this->B36->Name = L"B36";
            this->B36->Size = System::Drawing::Size(60, 60);
            this->B36->TabIndex = 34;
            this->B36->TabStop = false;
            this->B36->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B35
            // 
            this->B35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B35->Location = System::Drawing::Point(644, 264);
            this->B35->Name = L"B35";
            this->B35->Size = System::Drawing::Size(60, 60);
            this->B35->TabIndex = 33;
            this->B35->TabStop = false;
            this->B35->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B34
            // 
            this->B34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B34->Location = System::Drawing::Point(584, 264);
            this->B34->Name = L"B34";
            this->B34->Size = System::Drawing::Size(60, 60);
            this->B34->TabIndex = 32;
            this->B34->TabStop = false;
            this->B34->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B33
            // 
            this->B33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B33->Location = System::Drawing::Point(524, 264);
            this->B33->Name = L"B33";
            this->B33->Size = System::Drawing::Size(60, 60);
            this->B33->TabIndex = 31;
            this->B33->TabStop = false;
            this->B33->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B32
            // 
            this->B32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B32->Location = System::Drawing::Point(464, 264);
            this->B32->Name = L"B32";
            this->B32->Size = System::Drawing::Size(60, 60);
            this->B32->TabIndex = 30;
            this->B32->TabStop = false;
            this->B32->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B31
            // 
            this->B31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B31->Location = System::Drawing::Point(404, 264);
            this->B31->Name = L"B31";
            this->B31->Size = System::Drawing::Size(60, 60);
            this->B31->TabIndex = 29;
            this->B31->TabStop = false;
            this->B31->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B27
            // 
            this->B27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B27->Location = System::Drawing::Point(764, 204);
            this->B27->Name = L"B27";
            this->B27->Size = System::Drawing::Size(60, 60);
            this->B27->TabIndex = 28;
            this->B27->TabStop = false;
            this->B27->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B26
            // 
            this->B26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B26->Location = System::Drawing::Point(704, 204);
            this->B26->Name = L"B26";
            this->B26->Size = System::Drawing::Size(60, 60);
            this->B26->TabIndex = 27;
            this->B26->TabStop = false;
            this->B26->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B25
            // 
            this->B25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B25->Location = System::Drawing::Point(644, 204);
            this->B25->Name = L"B25";
            this->B25->Size = System::Drawing::Size(60, 60);
            this->B25->TabIndex = 26;
            this->B25->TabStop = false;
            this->B25->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B24
            // 
            this->B24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B24->Location = System::Drawing::Point(584, 204);
            this->B24->Name = L"B24";
            this->B24->Size = System::Drawing::Size(60, 60);
            this->B24->TabIndex = 25;
            this->B24->TabStop = false;
            this->B24->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B23
            // 
            this->B23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B23->Location = System::Drawing::Point(524, 204);
            this->B23->Name = L"B23";
            this->B23->Size = System::Drawing::Size(60, 60);
            this->B23->TabIndex = 24;
            this->B23->TabStop = false;
            this->B23->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B22
            // 
            this->B22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B22->Location = System::Drawing::Point(464, 204);
            this->B22->Name = L"B22";
            this->B22->Size = System::Drawing::Size(60, 60);
            this->B22->TabIndex = 23;
            this->B22->TabStop = false;
            this->B22->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B21
            // 
            this->B21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B21->Location = System::Drawing::Point(404, 204);
            this->B21->Name = L"B21";
            this->B21->Size = System::Drawing::Size(60, 60);
            this->B21->TabIndex = 22;
            this->B21->TabStop = false;
            this->B21->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B20
            // 
            this->B20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B20->Location = System::Drawing::Point(344, 204);
            this->B20->Name = L"B20";
            this->B20->Size = System::Drawing::Size(60, 60);
            this->B20->TabIndex = 21;
            this->B20->TabStop = false;
            this->B20->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B70
            // 
            this->B70->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B70->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B70->Location = System::Drawing::Point(344, 504);
            this->B70->Name = L"B70";
            this->B70->Size = System::Drawing::Size(60, 60);
            this->B70->TabIndex = 68;
            this->B70->TabStop = false;
            this->B70->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B77
            // 
            this->B77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B77->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B77->Location = System::Drawing::Point(764, 504);
            this->B77->Name = L"B77";
            this->B77->Size = System::Drawing::Size(60, 60);
            this->B77->TabIndex = 67;
            this->B77->TabStop = false;
            this->B77->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B76
            // 
            this->B76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B76->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B76->Location = System::Drawing::Point(704, 504);
            this->B76->Name = L"B76";
            this->B76->Size = System::Drawing::Size(60, 60);
            this->B76->TabIndex = 66;
            this->B76->TabStop = false;
            this->B76->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B75
            // 
            this->B75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B75->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B75->Location = System::Drawing::Point(644, 504);
            this->B75->Name = L"B75";
            this->B75->Size = System::Drawing::Size(60, 60);
            this->B75->TabIndex = 65;
            this->B75->TabStop = false;
            this->B75->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B74
            // 
            this->B74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B74->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B74->Location = System::Drawing::Point(584, 504);
            this->B74->Name = L"B74";
            this->B74->Size = System::Drawing::Size(60, 60);
            this->B74->TabIndex = 64;
            this->B74->TabStop = false;
            this->B74->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B73
            // 
            this->B73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B73->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B73->Location = System::Drawing::Point(524, 504);
            this->B73->Name = L"B73";
            this->B73->Size = System::Drawing::Size(60, 60);
            this->B73->TabIndex = 63;
            this->B73->TabStop = false;
            this->B73->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B72
            // 
            this->B72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B72->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B72->Location = System::Drawing::Point(464, 504);
            this->B72->Name = L"B72";
            this->B72->Size = System::Drawing::Size(60, 60);
            this->B72->TabIndex = 62;
            this->B72->TabStop = false;
            this->B72->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B71
            // 
            this->B71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B71->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B71->Location = System::Drawing::Point(404, 504);
            this->B71->Name = L"B71";
            this->B71->Size = System::Drawing::Size(60, 60);
            this->B71->TabIndex = 61;
            this->B71->TabStop = false;
            this->B71->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B67
            // 
            this->B67->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B67->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B67->Location = System::Drawing::Point(764, 444);
            this->B67->Name = L"B67";
            this->B67->Size = System::Drawing::Size(60, 60);
            this->B67->TabIndex = 60;
            this->B67->TabStop = false;
            this->B67->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B66
            // 
            this->B66->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B66->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B66->Location = System::Drawing::Point(704, 444);
            this->B66->Name = L"B66";
            this->B66->Size = System::Drawing::Size(60, 60);
            this->B66->TabIndex = 59;
            this->B66->TabStop = false;
            this->B66->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B65
            // 
            this->B65->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B65->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B65->Location = System::Drawing::Point(644, 444);
            this->B65->Name = L"B65";
            this->B65->Size = System::Drawing::Size(60, 60);
            this->B65->TabIndex = 58;
            this->B65->TabStop = false;
            this->B65->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B64
            // 
            this->B64->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B64->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B64->Location = System::Drawing::Point(584, 444);
            this->B64->Name = L"B64";
            this->B64->Size = System::Drawing::Size(60, 60);
            this->B64->TabIndex = 57;
            this->B64->TabStop = false;
            this->B64->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B63
            // 
            this->B63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B63->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B63->Location = System::Drawing::Point(524, 444);
            this->B63->Name = L"B63";
            this->B63->Size = System::Drawing::Size(60, 60);
            this->B63->TabIndex = 56;
            this->B63->TabStop = false;
            this->B63->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B62
            // 
            this->B62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B62->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B62->Location = System::Drawing::Point(464, 444);
            this->B62->Name = L"B62";
            this->B62->Size = System::Drawing::Size(60, 60);
            this->B62->TabIndex = 55;
            this->B62->TabStop = false;
            this->B62->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B61
            // 
            this->B61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B61->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B61->Location = System::Drawing::Point(404, 444);
            this->B61->Name = L"B61";
            this->B61->Size = System::Drawing::Size(60, 60);
            this->B61->TabIndex = 54;
            this->B61->TabStop = false;
            this->B61->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B60
            // 
            this->B60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B60->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B60->Location = System::Drawing::Point(344, 444);
            this->B60->Name = L"B60";
            this->B60->Size = System::Drawing::Size(60, 60);
            this->B60->TabIndex = 53;
            this->B60->TabStop = false;
            this->B60->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B50
            // 
            this->B50->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B50->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B50->Location = System::Drawing::Point(344, 384);
            this->B50->Name = L"B50";
            this->B50->Size = System::Drawing::Size(60, 60);
            this->B50->TabIndex = 52;
            this->B50->TabStop = false;
            this->B50->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B57
            // 
            this->B57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B57->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B57->Location = System::Drawing::Point(764, 384);
            this->B57->Name = L"B57";
            this->B57->Size = System::Drawing::Size(60, 60);
            this->B57->TabIndex = 51;
            this->B57->TabStop = false;
            this->B57->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B56
            // 
            this->B56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B56->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B56->Location = System::Drawing::Point(704, 384);
            this->B56->Name = L"B56";
            this->B56->Size = System::Drawing::Size(60, 60);
            this->B56->TabIndex = 50;
            this->B56->TabStop = false;
            this->B56->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B55
            // 
            this->B55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B55->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B55->Location = System::Drawing::Point(644, 384);
            this->B55->Name = L"B55";
            this->B55->Size = System::Drawing::Size(60, 60);
            this->B55->TabIndex = 49;
            this->B55->TabStop = false;
            this->B55->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B54
            // 
            this->B54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B54->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B54->Location = System::Drawing::Point(584, 384);
            this->B54->Name = L"B54";
            this->B54->Size = System::Drawing::Size(60, 60);
            this->B54->TabIndex = 48;
            this->B54->TabStop = false;
            this->B54->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B53
            // 
            this->B53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B53->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B53->Location = System::Drawing::Point(524, 384);
            this->B53->Name = L"B53";
            this->B53->Size = System::Drawing::Size(60, 60);
            this->B53->TabIndex = 47;
            this->B53->TabStop = false;
            this->B53->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B52
            // 
            this->B52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B52->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B52->Location = System::Drawing::Point(464, 384);
            this->B52->Name = L"B52";
            this->B52->Size = System::Drawing::Size(60, 60);
            this->B52->TabIndex = 46;
            this->B52->TabStop = false;
            this->B52->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B51
            // 
            this->B51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B51->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B51->Location = System::Drawing::Point(404, 384);
            this->B51->Name = L"B51";
            this->B51->Size = System::Drawing::Size(60, 60);
            this->B51->TabIndex = 45;
            this->B51->TabStop = false;
            this->B51->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B47
            // 
            this->B47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B47->Location = System::Drawing::Point(764, 324);
            this->B47->Name = L"B47";
            this->B47->Size = System::Drawing::Size(60, 60);
            this->B47->TabIndex = 44;
            this->B47->TabStop = false;
            this->B47->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B46
            // 
            this->B46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B46->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B46->Location = System::Drawing::Point(704, 324);
            this->B46->Name = L"B46";
            this->B46->Size = System::Drawing::Size(60, 60);
            this->B46->TabIndex = 43;
            this->B46->TabStop = false;
            this->B46->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B45
            // 
            this->B45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B45->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B45->Location = System::Drawing::Point(644, 324);
            this->B45->Name = L"B45";
            this->B45->Size = System::Drawing::Size(60, 60);
            this->B45->TabIndex = 42;
            this->B45->TabStop = false;
            this->B45->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B44
            // 
            this->B44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B44->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B44->Location = System::Drawing::Point(584, 324);
            this->B44->Name = L"B44";
            this->B44->Size = System::Drawing::Size(60, 60);
            this->B44->TabIndex = 41;
            this->B44->TabStop = false;
            this->B44->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B43
            // 
            this->B43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B43->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B43->Location = System::Drawing::Point(524, 324);
            this->B43->Name = L"B43";
            this->B43->Size = System::Drawing::Size(60, 60);
            this->B43->TabIndex = 40;
            this->B43->TabStop = false;
            this->B43->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B42
            // 
            this->B42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B42->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B42->Location = System::Drawing::Point(464, 324);
            this->B42->Name = L"B42";
            this->B42->Size = System::Drawing::Size(60, 60);
            this->B42->TabIndex = 39;
            this->B42->TabStop = false;
            this->B42->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B41
            // 
            this->B41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B41->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B41->Location = System::Drawing::Point(404, 324);
            this->B41->Name = L"B41";
            this->B41->Size = System::Drawing::Size(60, 60);
            this->B41->TabIndex = 38;
            this->B41->TabStop = false;
            this->B41->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // B40
            // 
            this->B40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->B40->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B40->Location = System::Drawing::Point(344, 324);
            this->B40->Name = L"B40";
            this->B40->Size = System::Drawing::Size(60, 60);
            this->B40->TabIndex = 37;
            this->B40->TabStop = false;
            this->B40->Click += gcnew System::EventHandler(this, &MyForm::Board_Click);
            // 
            // label1
            // 
            this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(344, 564);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(60, 20);
            this->label1->TabIndex = 70;
            this->label1->Text = L"A";
            this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label2
            // 
            this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(404, 564);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(60, 20);
            this->label2->TabIndex = 71;
            this->label2->Text = L"B";
            this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label3
            // 
            this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(464, 564);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(60, 20);
            this->label3->TabIndex = 72;
            this->label3->Text = L"C";
            this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label4
            // 
            this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(524, 564);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(60, 20);
            this->label4->TabIndex = 73;
            this->label4->Text = L"D";
            this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label5
            // 
            this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->Location = System::Drawing::Point(584, 564);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(60, 20);
            this->label5->TabIndex = 74;
            this->label5->Text = L"E";
            this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label6
            // 
            this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label6->Location = System::Drawing::Point(644, 564);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(60, 20);
            this->label6->TabIndex = 75;
            this->label6->Text = L"F";
            this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label7
            // 
            this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label7->Location = System::Drawing::Point(704, 564);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(60, 20);
            this->label7->TabIndex = 76;
            this->label7->Text = L"G";
            this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label8
            // 
            this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label8->Location = System::Drawing::Point(764, 564);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(60, 20);
            this->label8->TabIndex = 77;
            this->label8->Text = L"H";
            this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label9
            // 
            this->label9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label9->Location = System::Drawing::Point(324, 84);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(20, 60);
            this->label9->TabIndex = 78;
            this->label9->Text = L"8";
            this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label10
            // 
            this->label10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label10->Location = System::Drawing::Point(324, 144);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(20, 60);
            this->label10->TabIndex = 79;
            this->label10->Text = L"7";
            this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label11
            // 
            this->label11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label11->Location = System::Drawing::Point(324, 204);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(20, 60);
            this->label11->TabIndex = 80;
            this->label11->Text = L"6";
            this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label12
            // 
            this->label12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label12->Location = System::Drawing::Point(324, 264);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(20, 60);
            this->label12->TabIndex = 81;
            this->label12->Text = L"5";
            this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label13
            // 
            this->label13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label13->Location = System::Drawing::Point(324, 324);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(20, 60);
            this->label13->TabIndex = 82;
            this->label13->Text = L"4";
            this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label14
            // 
            this->label14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label14->Location = System::Drawing::Point(324, 384);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(20, 60);
            this->label14->TabIndex = 83;
            this->label14->Text = L"3";
            this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label15
            // 
            this->label15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label15->Location = System::Drawing::Point(324, 444);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(20, 60);
            this->label15->TabIndex = 84;
            this->label15->Text = L"2";
            this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label16
            // 
            this->label16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label16->Location = System::Drawing::Point(324, 504);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(20, 60);
            this->label16->TabIndex = 85;
            this->label16->Text = L"1";
            this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Location = System::Drawing::Point(123, 606);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(117, 58);
            this->button1->TabIndex = 86;
            this->button1->Text = L"START";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::Start_Click);
            // 
            // ColorToMoveBox1
            // 
            this->ColorToMoveBox1->BackColor = System::Drawing::Color::Transparent;
            this->ColorToMoveBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->ColorToMoveBox1->Location = System::Drawing::Point(29, 12);
            this->ColorToMoveBox1->Name = L"ColorToMoveBox1";
            this->ColorToMoveBox1->Size = System::Drawing::Size(1080, 10);
            this->ColorToMoveBox1->TabIndex = 88;
            this->ColorToMoveBox1->TabStop = false;
            // 
            // CapturedBlackQueens
            // 
            this->CapturedBlackQueens->BackColor = System::Drawing::Color::Transparent;
            this->CapturedBlackQueens->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->CapturedBlackQueens->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->CapturedBlackQueens->Location = System::Drawing::Point(962, 193);
            this->CapturedBlackQueens->Name = L"CapturedBlackQueens";
            this->CapturedBlackQueens->Size = System::Drawing::Size(35, 33);
            this->CapturedBlackQueens->TabIndex = 100;
            this->CapturedBlackQueens->Text = L"0";
            this->CapturedBlackQueens->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // CapturedBlackRooks
            // 
            this->CapturedBlackRooks->BackColor = System::Drawing::Color::Transparent;
            this->CapturedBlackRooks->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->CapturedBlackRooks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->CapturedBlackRooks->Location = System::Drawing::Point(962, 264);
            this->CapturedBlackRooks->Name = L"CapturedBlackRooks";
            this->CapturedBlackRooks->Size = System::Drawing::Size(35, 33);
            this->CapturedBlackRooks->TabIndex = 99;
            this->CapturedBlackRooks->Text = L"0";
            this->CapturedBlackRooks->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // CapturedBlackBishops
            // 
            this->CapturedBlackBishops->BackColor = System::Drawing::Color::Transparent;
            this->CapturedBlackBishops->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->CapturedBlackBishops->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->CapturedBlackBishops->Location = System::Drawing::Point(962, 335);
            this->CapturedBlackBishops->Name = L"CapturedBlackBishops";
            this->CapturedBlackBishops->Size = System::Drawing::Size(35, 33);
            this->CapturedBlackBishops->TabIndex = 98;
            this->CapturedBlackBishops->Text = L"0";
            this->CapturedBlackBishops->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // CapturedBlackKnights
            // 
            this->CapturedBlackKnights->BackColor = System::Drawing::Color::Transparent;
            this->CapturedBlackKnights->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->CapturedBlackKnights->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->CapturedBlackKnights->Location = System::Drawing::Point(962, 407);
            this->CapturedBlackKnights->Name = L"CapturedBlackKnights";
            this->CapturedBlackKnights->Size = System::Drawing::Size(35, 33);
            this->CapturedBlackKnights->TabIndex = 97;
            this->CapturedBlackKnights->Text = L"0";
            this->CapturedBlackKnights->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox7
            // 
            this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
            this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox7->Location = System::Drawing::Point(962, 158);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(35, 35);
            this->pictureBox7->TabIndex = 96;
            this->pictureBox7->TabStop = false;
            // 
            // pictureBox8
            // 
            this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
            this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox8->Location = System::Drawing::Point(962, 229);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(35, 35);
            this->pictureBox8->TabIndex = 95;
            this->pictureBox8->TabStop = false;
            // 
            // pictureBox9
            // 
            this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
            this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox9->Location = System::Drawing::Point(962, 300);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(35, 35);
            this->pictureBox9->TabIndex = 94;
            this->pictureBox9->TabStop = false;
            // 
            // pictureBox10
            // 
            this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
            this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox10->Location = System::Drawing::Point(962, 372);
            this->pictureBox10->Name = L"pictureBox10";
            this->pictureBox10->Size = System::Drawing::Size(35, 35);
            this->pictureBox10->TabIndex = 93;
            this->pictureBox10->TabStop = false;
            // 
            // CapturedBlackPawns
            // 
            this->CapturedBlackPawns->BackColor = System::Drawing::Color::Transparent;
            this->CapturedBlackPawns->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->CapturedBlackPawns->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->CapturedBlackPawns->Location = System::Drawing::Point(962, 479);
            this->CapturedBlackPawns->Name = L"CapturedBlackPawns";
            this->CapturedBlackPawns->Size = System::Drawing::Size(35, 33);
            this->CapturedBlackPawns->TabIndex = 92;
            this->CapturedBlackPawns->Text = L"0";
            this->CapturedBlackPawns->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox11
            // 
            this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
            this->pictureBox11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox11->Location = System::Drawing::Point(962, 444);
            this->pictureBox11->Name = L"pictureBox11";
            this->pictureBox11->Size = System::Drawing::Size(35, 35);
            this->pictureBox11->TabIndex = 91;
            this->pictureBox11->TabStop = false;
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Location = System::Drawing::Point(918, 606);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(117, 58);
            this->button2->TabIndex = 103;
            this->button2->Text = L"RESTART";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::Restart_Click);
            // 
            // ColorToMoveBox3
            // 
            this->ColorToMoveBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->ColorToMoveBox3->Location = System::Drawing::Point(29, 689);
            this->ColorToMoveBox3->Name = L"ColorToMoveBox3";
            this->ColorToMoveBox3->Size = System::Drawing::Size(1080, 10);
            this->ColorToMoveBox3->TabIndex = 104;
            this->ColorToMoveBox3->TabStop = false;
            // 
            // ColorToMoveBox2
            // 
            this->ColorToMoveBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->ColorToMoveBox2->Location = System::Drawing::Point(1115, 24);
            this->ColorToMoveBox2->Name = L"ColorToMoveBox2";
            this->ColorToMoveBox2->Size = System::Drawing::Size(10, 664);
            this->ColorToMoveBox2->TabIndex = 105;
            this->ColorToMoveBox2->TabStop = false;
            // 
            // ColorToMoveBox4
            // 
            this->ColorToMoveBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->ColorToMoveBox4->Location = System::Drawing::Point(13, 24);
            this->ColorToMoveBox4->Name = L"ColorToMoveBox4";
            this->ColorToMoveBox4->Size = System::Drawing::Size(10, 664);
            this->ColorToMoveBox4->TabIndex = 106;
            this->ColorToMoveBox4->TabStop = false;
            // 
            // CapturedWhiteQueens
            // 
            this->CapturedWhiteQueens->BackColor = System::Drawing::Color::Transparent;
            this->CapturedWhiteQueens->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->CapturedWhiteQueens->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->CapturedWhiteQueens->Location = System::Drawing::Point(165, 193);
            this->CapturedWhiteQueens->Name = L"CapturedWhiteQueens";
            this->CapturedWhiteQueens->Size = System::Drawing::Size(35, 33);
            this->CapturedWhiteQueens->TabIndex = 116;
            this->CapturedWhiteQueens->Text = L"0";
            this->CapturedWhiteQueens->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // CapturedWhiteRooks
            // 
            this->CapturedWhiteRooks->BackColor = System::Drawing::Color::Transparent;
            this->CapturedWhiteRooks->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->CapturedWhiteRooks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->CapturedWhiteRooks->Location = System::Drawing::Point(165, 264);
            this->CapturedWhiteRooks->Name = L"CapturedWhiteRooks";
            this->CapturedWhiteRooks->Size = System::Drawing::Size(35, 33);
            this->CapturedWhiteRooks->TabIndex = 115;
            this->CapturedWhiteRooks->Text = L"0";
            this->CapturedWhiteRooks->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // CapturedWhiteBishops
            // 
            this->CapturedWhiteBishops->BackColor = System::Drawing::Color::Transparent;
            this->CapturedWhiteBishops->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->CapturedWhiteBishops->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->CapturedWhiteBishops->Location = System::Drawing::Point(165, 335);
            this->CapturedWhiteBishops->Name = L"CapturedWhiteBishops";
            this->CapturedWhiteBishops->Size = System::Drawing::Size(35, 33);
            this->CapturedWhiteBishops->TabIndex = 114;
            this->CapturedWhiteBishops->Text = L"0";
            this->CapturedWhiteBishops->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // CapturedWhiteKnights
            // 
            this->CapturedWhiteKnights->BackColor = System::Drawing::Color::Transparent;
            this->CapturedWhiteKnights->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->CapturedWhiteKnights->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->CapturedWhiteKnights->Location = System::Drawing::Point(165, 407);
            this->CapturedWhiteKnights->Name = L"CapturedWhiteKnights";
            this->CapturedWhiteKnights->Size = System::Drawing::Size(35, 33);
            this->CapturedWhiteKnights->TabIndex = 113;
            this->CapturedWhiteKnights->Text = L"0";
            this->CapturedWhiteKnights->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox6
            // 
            this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
            this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox6->Location = System::Drawing::Point(165, 158);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(35, 35);
            this->pictureBox6->TabIndex = 112;
            this->pictureBox6->TabStop = false;
            // 
            // pictureBox5
            // 
            this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
            this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox5->Location = System::Drawing::Point(165, 229);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(35, 35);
            this->pictureBox5->TabIndex = 111;
            this->pictureBox5->TabStop = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
            this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox4->Location = System::Drawing::Point(165, 300);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(35, 35);
            this->pictureBox4->TabIndex = 110;
            this->pictureBox4->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
            this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox3->Location = System::Drawing::Point(165, 372);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(35, 35);
            this->pictureBox3->TabIndex = 109;
            this->pictureBox3->TabStop = false;
            // 
            // CapturedWhitePawns
            // 
            this->CapturedWhitePawns->BackColor = System::Drawing::Color::Transparent;
            this->CapturedWhitePawns->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->CapturedWhitePawns->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->CapturedWhitePawns->Location = System::Drawing::Point(165, 479);
            this->CapturedWhitePawns->Name = L"CapturedWhitePawns";
            this->CapturedWhitePawns->Size = System::Drawing::Size(35, 33);
            this->CapturedWhitePawns->TabIndex = 108;
            this->CapturedWhitePawns->Text = L"0";
            this->CapturedWhitePawns->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
            this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox2->Location = System::Drawing::Point(165, 444);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(35, 35);
            this->pictureBox2->TabIndex = 107;
            this->pictureBox2->TabStop = false;
            // 
            // label17
            // 
            this->label17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label17->Location = System::Drawing::Point(764, 64);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(60, 20);
            this->label17->TabIndex = 124;
            this->label17->Text = L"H";
            this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label18
            // 
            this->label18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label18->Location = System::Drawing::Point(704, 64);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(60, 20);
            this->label18->TabIndex = 123;
            this->label18->Text = L"G";
            this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label19
            // 
            this->label19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label19->Location = System::Drawing::Point(644, 64);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(60, 20);
            this->label19->TabIndex = 122;
            this->label19->Text = L"F";
            this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label20
            // 
            this->label20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label20->Location = System::Drawing::Point(584, 64);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(60, 20);
            this->label20->TabIndex = 121;
            this->label20->Text = L"E";
            this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label21
            // 
            this->label21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label21->Location = System::Drawing::Point(524, 64);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(60, 20);
            this->label21->TabIndex = 120;
            this->label21->Text = L"D";
            this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label22
            // 
            this->label22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label22->Location = System::Drawing::Point(464, 64);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(60, 20);
            this->label22->TabIndex = 119;
            this->label22->Text = L"C";
            this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label23
            // 
            this->label23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label23->Location = System::Drawing::Point(404, 64);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(60, 20);
            this->label23->TabIndex = 118;
            this->label23->Text = L"B";
            this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label24
            // 
            this->label24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label24->Location = System::Drawing::Point(344, 64);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(60, 20);
            this->label24->TabIndex = 117;
            this->label24->Text = L"A";
            this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label25
            // 
            this->label25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label25->Location = System::Drawing::Point(824, 504);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(20, 60);
            this->label25->TabIndex = 132;
            this->label25->Text = L"1";
            this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label26
            // 
            this->label26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label26->Location = System::Drawing::Point(824, 444);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(20, 60);
            this->label26->TabIndex = 131;
            this->label26->Text = L"2";
            this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label27
            // 
            this->label27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label27->Location = System::Drawing::Point(824, 384);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(20, 60);
            this->label27->TabIndex = 130;
            this->label27->Text = L"3";
            this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label28
            // 
            this->label28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label28->Location = System::Drawing::Point(824, 324);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(20, 60);
            this->label28->TabIndex = 129;
            this->label28->Text = L"4";
            this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label29
            // 
            this->label29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label29->Location = System::Drawing::Point(824, 264);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(20, 60);
            this->label29->TabIndex = 128;
            this->label29->Text = L"5";
            this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label30
            // 
            this->label30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label30->Location = System::Drawing::Point(824, 204);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(20, 60);
            this->label30->TabIndex = 127;
            this->label30->Text = L"6";
            this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label31
            // 
            this->label31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label31->Location = System::Drawing::Point(824, 144);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(20, 60);
            this->label31->TabIndex = 126;
            this->label31->Text = L"7";
            this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label32
            // 
            this->label32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label32->Location = System::Drawing::Point(824, 84);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(20, 60);
            this->label32->TabIndex = 125;
            this->label32->Text = L"8";
            this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // Q
            // 
            this->Q->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->Q->Location = System::Drawing::Point(663, 637);
            this->Q->Name = L"Q";
            this->Q->Size = System::Drawing::Size(35, 35);
            this->Q->TabIndex = 133;
            this->Q->TabStop = false;
            this->Q->Click += gcnew System::EventHandler(this, &MyForm::PieceChanging_Click);
            // 
            // R
            // 
            this->R->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->R->Location = System::Drawing::Point(663, 595);
            this->R->Name = L"R";
            this->R->Size = System::Drawing::Size(35, 35);
            this->R->TabIndex = 134;
            this->R->TabStop = false;
            this->R->Click += gcnew System::EventHandler(this, &MyForm::PieceChanging_Click);
            // 
            // B
            // 
            this->B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->B->Location = System::Drawing::Point(704, 595);
            this->B->Name = L"B";
            this->B->Size = System::Drawing::Size(35, 35);
            this->B->TabIndex = 135;
            this->B->TabStop = false;
            this->B->Click += gcnew System::EventHandler(this, &MyForm::PieceChanging_Click);
            // 
            // K
            // 
            this->K->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->K->Location = System::Drawing::Point(704, 636);
            this->K->Name = L"K";
            this->K->Size = System::Drawing::Size(35, 35);
            this->K->TabIndex = 136;
            this->K->TabStop = false;
            this->K->Click += gcnew System::EventHandler(this, &MyForm::PieceChanging_Click);
            // 
            // NewPieceText
            // 
            this->NewPieceText->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->NewPieceText->Location = System::Drawing::Point(455, 595);
            this->NewPieceText->Name = L"NewPieceText";
            this->NewPieceText->Size = System::Drawing::Size(189, 76);
            this->NewPieceText->TabIndex = 137;
            this->NewPieceText->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->ClientSize = System::Drawing::Size(1134, 711);
            this->Controls->Add(this->NewPieceText);
            this->Controls->Add(this->K);
            this->Controls->Add(this->B);
            this->Controls->Add(this->R);
            this->Controls->Add(this->Q);
            this->Controls->Add(this->label25);
            this->Controls->Add(this->label26);
            this->Controls->Add(this->label27);
            this->Controls->Add(this->label28);
            this->Controls->Add(this->label29);
            this->Controls->Add(this->label30);
            this->Controls->Add(this->label31);
            this->Controls->Add(this->label32);
            this->Controls->Add(this->label17);
            this->Controls->Add(this->label18);
            this->Controls->Add(this->label19);
            this->Controls->Add(this->label20);
            this->Controls->Add(this->label21);
            this->Controls->Add(this->label22);
            this->Controls->Add(this->label23);
            this->Controls->Add(this->label24);
            this->Controls->Add(this->CapturedBlackPawns);
            this->Controls->Add(this->CapturedBlackKnights);
            this->Controls->Add(this->pictureBox11);
            this->Controls->Add(this->CapturedBlackBishops);
            this->Controls->Add(this->pictureBox10);
            this->Controls->Add(this->CapturedBlackRooks);
            this->Controls->Add(this->CapturedBlackQueens);
            this->Controls->Add(this->pictureBox9);
            this->Controls->Add(this->CapturedWhiteQueens);
            this->Controls->Add(this->CapturedWhiteRooks);
            this->Controls->Add(this->pictureBox8);
            this->Controls->Add(this->CapturedWhiteBishops);
            this->Controls->Add(this->CapturedWhiteKnights);
            this->Controls->Add(this->pictureBox7);
            this->Controls->Add(this->pictureBox6);
            this->Controls->Add(this->pictureBox5);
            this->Controls->Add(this->pictureBox4);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->CapturedWhitePawns);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->ColorToMoveBox4);
            this->Controls->Add(this->ColorToMoveBox2);
            this->Controls->Add(this->ColorToMoveBox3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->ColorToMoveBox1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label16);
            this->Controls->Add(this->label15);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->label13);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->B70);
            this->Controls->Add(this->B77);
            this->Controls->Add(this->B76);
            this->Controls->Add(this->B75);
            this->Controls->Add(this->B74);
            this->Controls->Add(this->B73);
            this->Controls->Add(this->B72);
            this->Controls->Add(this->B71);
            this->Controls->Add(this->B67);
            this->Controls->Add(this->B66);
            this->Controls->Add(this->B65);
            this->Controls->Add(this->B64);
            this->Controls->Add(this->B63);
            this->Controls->Add(this->B62);
            this->Controls->Add(this->B61);
            this->Controls->Add(this->B60);
            this->Controls->Add(this->B50);
            this->Controls->Add(this->B57);
            this->Controls->Add(this->B56);
            this->Controls->Add(this->B55);
            this->Controls->Add(this->B54);
            this->Controls->Add(this->B53);
            this->Controls->Add(this->B52);
            this->Controls->Add(this->B51);
            this->Controls->Add(this->B47);
            this->Controls->Add(this->B46);
            this->Controls->Add(this->B45);
            this->Controls->Add(this->B44);
            this->Controls->Add(this->B43);
            this->Controls->Add(this->B42);
            this->Controls->Add(this->B41);
            this->Controls->Add(this->B40);
            this->Controls->Add(this->B30);
            this->Controls->Add(this->B37);
            this->Controls->Add(this->B36);
            this->Controls->Add(this->B35);
            this->Controls->Add(this->B34);
            this->Controls->Add(this->B33);
            this->Controls->Add(this->B32);
            this->Controls->Add(this->B31);
            this->Controls->Add(this->B27);
            this->Controls->Add(this->B26);
            this->Controls->Add(this->B25);
            this->Controls->Add(this->B24);
            this->Controls->Add(this->B23);
            this->Controls->Add(this->B22);
            this->Controls->Add(this->B21);
            this->Controls->Add(this->B20);
            this->Controls->Add(this->B10);
            this->Controls->Add(this->B17);
            this->Controls->Add(this->B16);
            this->Controls->Add(this->B15);
            this->Controls->Add(this->B14);
            this->Controls->Add(this->B13);
            this->Controls->Add(this->B12);
            this->Controls->Add(this->B11);
            this->Controls->Add(this->B07);
            this->Controls->Add(this->B06);
            this->Controls->Add(this->B05);
            this->Controls->Add(this->B04);
            this->Controls->Add(this->B03);
            this->Controls->Add(this->B02);
            this->Controls->Add(this->B01);
            this->Controls->Add(this->B00);
            this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Your Chess";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B00))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B01))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B02))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B03))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B07))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B06))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B05))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B04))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B10))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B17))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B16))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B15))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B14))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B13))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B12))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B11))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B30))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B37))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B36))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B35))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B34))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B33))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B32))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B31))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B27))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B26))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B25))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B24))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B23))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B22))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B21))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B20))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B70))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B77))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B76))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B75))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B74))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B73))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B72))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B71))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B67))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B66))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B65))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B64))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B63))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B62))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B61))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B60))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B50))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B57))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B56))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B55))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B54))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B53))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B52))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B51))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B47))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B46))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B45))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B44))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B43))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B42))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B41))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B40))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ColorToMoveBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ColorToMoveBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ColorToMoveBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ColorToMoveBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->R))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion 

        int colorNumber = 1;
        String^ ImagePath;
        private:
            static array<int, 2>^ StartBoardPosition;

	int clickcount = 0;
    private: System::Void Start_Click(System::Object^ sender, System::EventArgs^ e) {   //Board start, drawing pieces
        clickcount++;                                                                   // Buttons Start & Exit
        ColorToMoveBox1->BackColor = Color::NavajoWhite;
        ColorToMoveBox2->BackColor = Color::NavajoWhite;
        ColorToMoveBox3->BackColor = Color::NavajoWhite;
        ColorToMoveBox4->BackColor = Color::NavajoWhite;
        if (clickcount == 1)
        {
            this->button1->BackColor = Color::Red;
            this->button1->Text = "EXIT";
            StartBoardPosition = gcnew array<int, 2>(8, 8)      // Start board position in dynamic matrix in C# style
            {
                { 41, 21, 31, 51, 61, 32, 22, 42 },
                { 11, 12, 13, 14, 15, 16, 17, 18 },
                { 0,  0,  0,  0,  0,  0,  0,  0 },
                { 0,  0,  0,  0,  0,  0,  0,  0 },
                { 0,  0,  0,  0,  0,  0,  0,  0 },
                { 0,  0,  0,  0,  0,  0,  0,  0 },
                { 111, 112, 113, 114, 115, 116, 117, 118 },
                { 141, 121, 131, 151, 161, 132, 122, 142 }
            };
                        
            for(int i = 0; i < 8; i++)      // Cycles for drawing every single piece from matrix
                for (int j = 0; j < 8; j++)
                {
                    String^ cellName = String::Format("B{0}{1}", i, j); // Converting i and j to the cell name for changing BackgroundImage
                    PictureBox^ pictureBox = (PictureBox^)this->Controls[cellName];
                    ImagePath = nullptr;
                    ImagePath = FindPiece(StartBoardPosition[i, j]);
                    if (ImagePath != nullptr)
                        pictureBox->BackgroundImage = Image::FromFile(ImagePath);
                    else
                        pictureBox->BackgroundImage = nullptr;
                }
        }
        if (clickcount == 2)
        {
            delete SpecX;
            delete SpecY;
            Close();
        }
    }
           bool moveSide = true;        // Changing color of moving pieces          true - white    false - black
           bool NewPieceMaking = false;
           bool wasCheck = false;


           String^ cellName;
           PictureBox^ kingCell;
           PictureBox^ Oldcell;
           Color OldColor;
           Color OldColorKing;

           // integers for cheking rooks and kings for staying in the start positions to help castling conditions to be checked
           // (1: w - white, b - balck; 2: r - right, l - left, k - king; 3: r - rook)
           // System::Int32^ - type with auto delete from heap;
           Int32^ wk = 1;
           Int32^ bk = 1;
           Int32^ wrr = 1;
           Int32^ wlr = 1;
           Int32^ brr = 1;
           Int32^ blr = 1;
           Int32^ castling = 0;
           Int32^ check = 0;
           Int32^ mate = 0;

           // integers for new pieces in case of pawns that changing
           // (1: w - white, b - balck; 2: q - queen, r - rook, b - bishop, k - knight; 3: k - default integer like i in for() loop)
           int wqk = 0, wrk = 0, wbk = 0, wkk = 0, bqk = 0, brk = 0, bbk = 0, bkk = 0;

           int PawnDoubleMoveSign = 0;
           int clickcountboard = 0;
           int OldCoordinatesX = -2;
           int OldCoordinatesY = -2;
           int PieceToMove;
           int* SpecX = new int(0);
           int* SpecY = new int(0);
           int cellCoordinatesX = -1;
           int cellCoordinatesY = -1;
           
           Pawn NewPawn;
           Knight NewKnight;
           Bishop NewBishop;
           Rook NewRook;
           Queen NewQueen;
           King NewKing;

private: void CheckMateDrawStealmate()   // Func for changing color of king cell in case of check and checking for mate, draw or stealmare. In case of game end - creating MassegeBox.
{
    int KingX;
    int KingY;

    if (*check != 0)         // Check, red color for king
    {
        wasCheck = true;
        int kingNumber;

        if (*check == 1)
        {
            kingNumber = 161;
        }
        else kingNumber = 61;
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)
                if (StartBoardPosition[i, j] == kingNumber)
                {
                    KingX = i;
                    KingY = j;
                    goto HERE;
                }
    HERE:
        String^ tmpCellName = String::Format("B{0}{1}", KingX, KingY);
        kingCell = (PictureBox^)this->Controls[tmpCellName];
        OldColorKing = kingCell->BackColor;
        kingCell->BackColor = Color::Red;

        mate = IsMate(check, StartBoardPosition, NewPawn, NewKnight, NewBishop, NewRook, NewQueen, NewKing, moveSide);

        if (*mate != 0)
        {
            //massege box with text of mate
            if (*mate == 1)
                MessageBox::Show(this, "Black has won, checkmate!", "CHECK AND MATE", MessageBoxButtons::OK, MessageBoxIcon::Information);
            else MessageBox::Show(this, "White has won, checkmate!", "CHECK AND MATE", MessageBoxButtons::OK, MessageBoxIcon::Information);
            clickcountboard = 3;
            return;
        }
    }
    else
    {
        bool tmp = false;

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if ((moveSide && StartBoardPosition[i, j] > 100) || (moveSide == false && StartBoardPosition[i, j] < 100 && StartBoardPosition[i, j] != 0))
                    tmp = IsPieceAbleToMove(StartBoardPosition[i, j], StartBoardPosition, NewPawn, NewKnight, NewBishop, NewRook, NewQueen, NewKing, i, j, moveSide);
                if (tmp)
                    break;
            }
            if (tmp)
                break;
        }

        if (tmp == false)
        {
            MessageBox::Show(this, "Draw by stealmate\n  (-_-*)", "STEALMATE", MessageBoxButtons::OK, MessageBoxIcon::Information);
            clickcountboard = 3;
            return;
        }

        int Sum = 0;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                Sum += StartBoardPosition[i, j];
            }
        }

        if (Sum == 222)
        {
            MessageBox::Show(this, "Two kings draw!", "DRAW", MessageBoxButtons::OK, MessageBoxIcon::Information);
            clickcountboard = 3;
            return;
        }
    }
}

private: System::Void Board_Click(System::Object^ sender, System::EventArgs^ e) {

    if (clickcount == 0 || clickcountboard == 3)    // cheking start button state
        return;

        clickcountboard++;
        PictureBox^ cell = safe_cast<PictureBox^>(sender);  // new temporary picterBox for clicked cell
        cellName = cell->Name;
        
        std::string tmp1 = "0";     // Name of cell converting to coordinates of matrix
        std::string tmp2 = "0";
        tmp1 = cellName[1];
        tmp2 = cellName[2];
        cellCoordinatesX = std::stoi(tmp1);
        cellCoordinatesY = std::stoi(tmp2);
        
        if (StartBoardPosition[cellCoordinatesX, cellCoordinatesY] == 0 && clickcountboard == 1) // Cheking if cell empty or not at first click
        {
            clickcountboard = 0;
            return;
        }

        if (clickcountboard == 2 && OldCoordinatesX == cellCoordinatesX && OldCoordinatesY == cellCoordinatesY) // Cheking if cell is same at second click
        {
            clickcountboard = 0;
            Oldcell->BackColor = OldColor;

            if (*check != 0)                        //If was check than king cell will stay red colored
                kingCell->BackColor = Color::Red;

            Oldcell = nullptr;
            return;
        }

        else if (clickcountboard == 2 && (StartBoardPosition[OldCoordinatesX, OldCoordinatesY] > 100 && StartBoardPosition[cellCoordinatesX, cellCoordinatesY] < 100 && moveSide == true || StartBoardPosition[OldCoordinatesX, OldCoordinatesY] < 100 && (StartBoardPosition[cellCoordinatesX, cellCoordinatesY] > 100 || StartBoardPosition[cellCoordinatesX, cellCoordinatesY] == 0) && moveSide == false))
        {
            ImagePath = nullptr;                    // If its second click and piece color is right finding piece image to change it
            ImagePath = FindPiece(PieceToMove);

            //check = 0;

            String^ tmpString = nullptr;

            if (ImagePath->IndexOf("Pawn") > 0) //Pawns moves
            {
                if (NewPawn.CheckForPossibleMove(StartBoardPosition[OldCoordinatesX, OldCoordinatesY], StartBoardPosition, cellCoordinatesX, cellCoordinatesY, OldCoordinatesX, OldCoordinatesY, tmpString, SpecX, SpecY) != true)
                {
                    Oldcell->BackColor = OldColor;
                    clickcountboard = 0;
                    Oldcell = nullptr;
                    return;
                }
                check = NewPawn.IsCheck(StartBoardPosition[OldCoordinatesX, OldCoordinatesY], StartBoardPosition, cellCoordinatesX, cellCoordinatesY);

                if (*check == 0)
                {
                    int tmpPiecenumber = StartBoardPosition[cellCoordinatesX, cellCoordinatesY];
                    StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = StartBoardPosition[OldCoordinatesX, OldCoordinatesY];
                    StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = 0;

                    for (int i = 0; i < 8; i++)
                    {
                        for (int j = 0; j < 8; j++)
                        {
                            String^ TmpPieceName = nullptr;
                            if ((moveSide && StartBoardPosition[i, j] > 100) || (moveSide == false && StartBoardPosition[i, j] < 100 && StartBoardPosition[i, j] > 0))
                            {
                                TmpPieceName = FindPiece(StartBoardPosition[i, j]);
                                if (TmpPieceName->IndexOf("Bishop") > 0)
                                    check = NewBishop.IsCheck(StartBoardPosition[i, j], StartBoardPosition, i, j);
                                else if (TmpPieceName->IndexOf("Rook") > 0)
                                    check = NewRook.IsCheck(StartBoardPosition[i, j], StartBoardPosition, i, j);
                                else if (TmpPieceName->IndexOf("Queen") > 0)
                                    check = NewQueen.IsCheck(StartBoardPosition[i, j], StartBoardPosition, i, j);
                            }
                            if (*check != 0)
                                break;
                        }
                        if (*check != 0)
                            break;
                    }

                    StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = StartBoardPosition[cellCoordinatesX, cellCoordinatesY];
                    StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = tmpPiecenumber;
                }

            }
            
            if (ImagePath->IndexOf("Knight") > 0)   //Knight moves
            {
                if (NewKnight.CheckForPossibleMove(StartBoardPosition[OldCoordinatesX, OldCoordinatesY], StartBoardPosition, cellCoordinatesX, cellCoordinatesY, OldCoordinatesX, OldCoordinatesY, tmpString) != true)
                {
                    Oldcell->BackColor = OldColor;
                    clickcountboard = 0;
                    Oldcell = nullptr;
                    return;
                }
                check = NewKnight.IsCheck(StartBoardPosition[OldCoordinatesX, OldCoordinatesY], StartBoardPosition, cellCoordinatesX, cellCoordinatesY);

                if (*check == 0)
                {
                    int tmpPiecenumber = StartBoardPosition[cellCoordinatesX, cellCoordinatesY];
                    StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = StartBoardPosition[OldCoordinatesX, OldCoordinatesY];
                    StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = 0;

                    for (int i = 0; i < 8; i++)
                    {
                        for (int j = 0; j < 8; j++)
                        {
                            String^ TmpPieceName = nullptr;
                            if ((moveSide && StartBoardPosition[i, j] > 100) || (moveSide == false && StartBoardPosition[i, j] < 100 && StartBoardPosition[i, j] > 0))
                            {
                                TmpPieceName = FindPiece(StartBoardPosition[i, j]);
                                if (TmpPieceName->IndexOf("Bishop") > 0)
                                    check = NewBishop.IsCheck(StartBoardPosition[i, j], StartBoardPosition, i, j);
                                else if (TmpPieceName->IndexOf("Rook") > 0)
                                    check = NewRook.IsCheck(StartBoardPosition[i, j], StartBoardPosition, i, j);
                                else if (TmpPieceName->IndexOf("Queen") > 0)
                                    check = NewQueen.IsCheck(StartBoardPosition[i, j], StartBoardPosition, i, j);
                            }
                            if (*check != 0)
                                break;
                        }
                        if (*check != 0)
                            break;
                    }

                    StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = StartBoardPosition[cellCoordinatesX, cellCoordinatesY];
                    StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = tmpPiecenumber;
                }
                    
            }

            if (ImagePath->IndexOf("Bishop") > 0)   // Bishop moves
            {
                if (NewBishop.CheckForPossibleMove(StartBoardPosition[OldCoordinatesX, OldCoordinatesY], StartBoardPosition, cellCoordinatesX, cellCoordinatesY, OldCoordinatesX, OldCoordinatesY, tmpString) != true)
                {
                    Oldcell->BackColor = OldColor;
                    clickcountboard = 0;
                    Oldcell = nullptr;
                    return;
                }
                check = NewBishop.IsCheck(StartBoardPosition[OldCoordinatesX, OldCoordinatesY], StartBoardPosition, cellCoordinatesX, cellCoordinatesY);

                if (*check == 0)
                {
                    int tmpPiecenumber = StartBoardPosition[cellCoordinatesX, cellCoordinatesY];
                    StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = StartBoardPosition[OldCoordinatesX, OldCoordinatesY];
                    StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = 0;

                    for (int i = 0; i < 8; i++)
                    {
                        for (int j = 0; j < 8; j++)
                        {
                            String^ TmpPieceName = nullptr;
                            if ((moveSide && StartBoardPosition[i, j] > 100) || (moveSide == false && StartBoardPosition[i, j] < 100 && StartBoardPosition[i, j] > 0))
                            {
                                TmpPieceName = FindPiece(StartBoardPosition[i, j]);
                                if (TmpPieceName->IndexOf("Rook") > 0)
                                    check = NewRook.IsCheck(StartBoardPosition[i, j], StartBoardPosition, i, j);
                                else if (TmpPieceName->IndexOf("Queen") > 0)
                                    check = NewQueen.IsCheck(StartBoardPosition[i, j], StartBoardPosition, i, j);
                            }
                            if (*check != 0)
                                break;
                        }
                        if (*check != 0)
                            break;
                    }

                    StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = StartBoardPosition[cellCoordinatesX, cellCoordinatesY];
                    StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = tmpPiecenumber;
                }

            }

            if (ImagePath->IndexOf("Rook") > 0) // Rook moves
            {
                if (NewRook.CheckForPossibleMove(StartBoardPosition[OldCoordinatesX, OldCoordinatesY], StartBoardPosition, cellCoordinatesX, cellCoordinatesY, OldCoordinatesX, OldCoordinatesY, tmpString, wrr, wlr, brr, blr) != true)
                {
                    Oldcell->BackColor = OldColor;
                    clickcountboard = 0;
                    Oldcell = nullptr;
                    return;
                }
                check = NewRook.IsCheck(StartBoardPosition[OldCoordinatesX, OldCoordinatesY], StartBoardPosition, cellCoordinatesX, cellCoordinatesY);

                if (*check == 0)
                {
                    int tmpPiecenumber = StartBoardPosition[cellCoordinatesX, cellCoordinatesY];
                    StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = StartBoardPosition[OldCoordinatesX, OldCoordinatesY];
                    StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = 0;

                    for (int i = 0; i < 8; i++)
                    {
                        for (int j = 0; j < 8; j++)
                        {
                            String^ TmpPieceName = nullptr;
                            if ((moveSide && StartBoardPosition[i, j] > 100) || (moveSide == false && StartBoardPosition[i, j] < 100 && StartBoardPosition[i, j] > 0))
                            {
                                TmpPieceName = FindPiece(StartBoardPosition[i, j]);
                                if (TmpPieceName->IndexOf("Bishop") > 0)
                                    check = NewBishop.IsCheck(StartBoardPosition[i, j], StartBoardPosition, i, j);
                                else if (TmpPieceName->IndexOf("Queen") > 0)
                                    check = NewQueen.IsCheck(StartBoardPosition[i, j], StartBoardPosition, i, j);
                            }
                            if (*check != 0)
                                break;
                        }
                        if (*check != 0)
                            break;
                    }

                    StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = StartBoardPosition[cellCoordinatesX, cellCoordinatesY];
                    StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = tmpPiecenumber;
                }

            }

            if (ImagePath->IndexOf("Queen") > 0)   // Queen moves
            {
                if (NewQueen.CheckForPossibleMove(StartBoardPosition[OldCoordinatesX, OldCoordinatesY], StartBoardPosition, cellCoordinatesX, cellCoordinatesY, OldCoordinatesX, OldCoordinatesY, tmpString) != true)
                {
                    Oldcell->BackColor = OldColor;
                    clickcountboard = 0;
                    Oldcell = nullptr;
                    return;
                }
                check = NewQueen.IsCheck(StartBoardPosition[OldCoordinatesX, OldCoordinatesY], StartBoardPosition, cellCoordinatesX, cellCoordinatesY);

                if (*check == 0)
                {
                    int tmpPiecenumber = StartBoardPosition[cellCoordinatesX, cellCoordinatesY];
                    StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = StartBoardPosition[OldCoordinatesX, OldCoordinatesY];
                    StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = 0;

                    for (int i = 0; i < 8; i++)
                    {
                        for (int j = 0; j < 8; j++)
                        {
                            String^ TmpPieceName = nullptr;
                            if ((moveSide && StartBoardPosition[i, j] > 100) || (moveSide == false && StartBoardPosition[i, j] < 100 && StartBoardPosition[i, j] > 0))
                            {
                                TmpPieceName = FindPiece(StartBoardPosition[i, j]);
                                if (TmpPieceName->IndexOf("Bishop") > 0)
                                    check = NewBishop.IsCheck(StartBoardPosition[i, j], StartBoardPosition, i, j);
                                else if (TmpPieceName->IndexOf("Rook") > 0)
                                    check = NewRook.IsCheck(StartBoardPosition[i, j], StartBoardPosition, i, j);
                            }
                            if (*check != 0)
                                break;
                        }
                        if (*check != 0)
                            break;
                    }

                    StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = StartBoardPosition[cellCoordinatesX, cellCoordinatesY];
                    StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = tmpPiecenumber;
                }

            }

            if (ImagePath->IndexOf("King") > 0)   // King moves
            {
                bool CloseToKing = NewKing.IsNextToKing(StartBoardPosition, cellCoordinatesX, cellCoordinatesY, OldCoordinatesX, OldCoordinatesY);

                if (NewKing.CheckForPossibleMove(StartBoardPosition[OldCoordinatesX, OldCoordinatesY], StartBoardPosition, cellCoordinatesX, cellCoordinatesY, OldCoordinatesX, OldCoordinatesY, wasCheck, moveSide ,tmpString, NewPawn, NewKnight, NewBishop, NewRook, NewQueen, NewKing, castling ,wk, bk ,wrr, wlr, brr, blr) != true || CloseToKing)
                {
                    Oldcell->BackColor = OldColor;
                    clickcountboard = 0;
                    Oldcell = nullptr;
                    return;
                }

                int tmpPiecenumber = StartBoardPosition[cellCoordinatesX, cellCoordinatesY];
                StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = StartBoardPosition[OldCoordinatesX, OldCoordinatesY];
                StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = 0;

                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 8; j++)
                    {
                        String^ TmpPieceName = nullptr;
                        if ((moveSide && StartBoardPosition[i, j] > 100) || (moveSide == false && StartBoardPosition[i, j] < 100 && StartBoardPosition[i, j] > 0))
                        {
                            TmpPieceName = FindPiece(StartBoardPosition[i, j]);
                            if (TmpPieceName->IndexOf("Bishop") > 0)
                                check = NewBishop.IsCheck(StartBoardPosition[i, j], StartBoardPosition, i, j);
                            else if (TmpPieceName->IndexOf("Rook") > 0)
                                check = NewRook.IsCheck(StartBoardPosition[i, j], StartBoardPosition, i, j);
                            else if (TmpPieceName->IndexOf("Queen") > 0)
                                check = NewQueen.IsCheck(StartBoardPosition[i, j], StartBoardPosition, i, j);
                        }
                        if (*check != 0)
                            break;
                    }
                    if (*check != 0)
                        break;
                }

                StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = StartBoardPosition[cellCoordinatesX, cellCoordinatesY];
                StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = tmpPiecenumber;
            }

            bool PossibleMove = IsMovePossible(StartBoardPosition, cellCoordinatesX, cellCoordinatesY, OldCoordinatesX, OldCoordinatesY, moveSide, NewPawn, NewKnight, NewBishop, NewRook, NewQueen, NewKing);
            if (PossibleMove == false)          //If move is not possible return nothing.
            {
                clickcountboard = 0;
                Oldcell->BackColor = OldColor;

                if (*check != 0)
                    kingCell->BackColor = Color::Red;

                return;
            }

            if (tmpString != nullptr) //Captured piece calculating
            {
                Label^ Temp = dynamic_cast<Label^>(this->Controls->Find(tmpString, true)[0]);
                int temp = System::Convert::ToInt64(Temp->Text);
                temp += 1;
                Temp->Text = System::Convert::ToString(temp);
            }

            if(*castling != 0) // Castling for both teams
            {
                if (*castling == 1)
                {
                    String^ tmpCellName = String::Format("B{0}{1}", cellCoordinatesX, cellCoordinatesY + 1);    // Changing matrix and board for white
                    PictureBox^ tmpcell = (PictureBox^)this->Controls[tmpCellName];

                    Drawing::Image^ TmpImage = tmpcell->BackgroundImage;
                    tmpcell->BackgroundImage = nullptr;

                    tmpCellName = String::Format("B{0}{1}", cellCoordinatesX, cellCoordinatesY - 1);
                    tmpcell = (PictureBox^)this->Controls[tmpCellName];

                    int tmp = StartBoardPosition[cellCoordinatesX, cellCoordinatesY + 1];
                    StartBoardPosition[cellCoordinatesX, cellCoordinatesY + 1] = 0;
                    StartBoardPosition[cellCoordinatesX, cellCoordinatesY - 1] = tmp;

                    tmpcell->BackgroundImage = TmpImage;
                    *castling = 0;
                }
                if (*castling == 2)
                {
                    String^ tmpCellName = String::Format("B{0}{1}", cellCoordinatesX, cellCoordinatesY - 2);    // Changing matrix and board for black
                    PictureBox^ tmpcell = (PictureBox^)this->Controls[tmpCellName];

                    Drawing::Image^ TmpImage = tmpcell->BackgroundImage;
                    tmpcell->BackgroundImage = nullptr;

                    tmpCellName = String::Format("B{0}{1}", cellCoordinatesX, cellCoordinatesY + 1);
                    tmpcell = (PictureBox^)this->Controls[tmpCellName];

                    int tmp = StartBoardPosition[cellCoordinatesX, cellCoordinatesY - 2];
                    StartBoardPosition[cellCoordinatesX, cellCoordinatesY - 2] = 0;
                    StartBoardPosition[cellCoordinatesX, cellCoordinatesY + 1] = tmp;

                    tmpcell->BackgroundImage = TmpImage;
                    *castling = 0;
                }
            }

            if ((cellCoordinatesX == *SpecX + 1 && cellCoordinatesY == *SpecY || cellCoordinatesX == *SpecX - 1 && cellCoordinatesY == *SpecY) && StartBoardPosition[cellCoordinatesX, cellCoordinatesY] == 0 && (StartBoardPosition[OldCoordinatesX, OldCoordinatesY] > 10 && StartBoardPosition[OldCoordinatesX, OldCoordinatesY] < 20 || StartBoardPosition[OldCoordinatesX, OldCoordinatesY] > 110 && StartBoardPosition[OldCoordinatesX, OldCoordinatesY] < 120))
            {
                String^ tmpCellName = String::Format("B{0}{1}", *SpecX, *SpecY);    // Special takes for double pawn moves
                PictureBox^ tmpcell = (PictureBox^)this->Controls[tmpCellName];
                tmpcell->BackgroundImage = nullptr;
                StartBoardPosition[*SpecX, *SpecY] = 0;
            }

            cell->BackgroundImage = Image::FromFile(ImagePath);     // Changing image of cell piece
            Oldcell->BackgroundImage = nullptr;

            if (*check == 0)        //Changing color of King cell after check is over
            {
                if (wasCheck && (StartBoardPosition[OldCoordinatesX, OldCoordinatesY] == 161 || StartBoardPosition[OldCoordinatesX, OldCoordinatesY] == 61))
                {
                    OldColor = OldColorKing;
                    wasCheck = false;
                }
                else if (wasCheck)
                {
                    kingCell->BackColor = OldColorKing;
                    wasCheck = false;
                }
            }

            Oldcell->BackColor = OldColor;

            if ((cellCoordinatesX == 0 && StartBoardPosition[OldCoordinatesX, OldCoordinatesY] > 110 && StartBoardPosition[OldCoordinatesX, OldCoordinatesY] < 120) || (cellCoordinatesX == 7 && StartBoardPosition[OldCoordinatesX, OldCoordinatesY] > 10 && StartBoardPosition[OldCoordinatesX, OldCoordinatesY] < 20))
            {           // Condition for changing pawn that made it in the real boy
                NewPieceMaking = true;
                Q->BackgroundImage = Image::FromFile(".\\Pieces\\NeutralQueen.png");
                R->BackgroundImage = Image::FromFile(".\\Pieces\\NeutralRook.png");
                B->BackgroundImage = Image::FromFile(".\\Pieces\\NeutralBishop.png");
                K->BackgroundImage = Image::FromFile(".\\Pieces\\NeutralKnight.png");
                NewPieceText->Text = "Choose new piece: ";

                clickcountboard = 3;

                return;
            }

            StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = StartBoardPosition[OldCoordinatesX, OldCoordinatesY];   // Changing matrix after piece move or capture
            StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = 0;

            clickcountboard = 0;
            Oldcell = nullptr;
            moveSide = !moveSide;

            if (*SpecX != 0)        // Changing special double pawn move sign after next move
            {
                PawnDoubleMoveSign++;
                if (PawnDoubleMoveSign == 2)
                {
                    PawnDoubleMoveSign = 0;
                    *SpecX = 0;
                    *SpecY = 0;
                }
            }
            
            CheckMateDrawStealmate(); // Important function to check for mates or draws

            colorNumber++;
            if (colorNumber % 2 == 0)                       // Changing color of PictureBox which indicate color of moving pieces
            {
                ColorToMoveBox1->BackColor = Color::SaddleBrown;
                ColorToMoveBox2->BackColor = Color::SaddleBrown;
                ColorToMoveBox3->BackColor = Color::SaddleBrown;
                ColorToMoveBox4->BackColor = Color::SaddleBrown;
            }
            else 
            {
                ColorToMoveBox1->BackColor = Color::NavajoWhite;
                ColorToMoveBox2->BackColor = Color::NavajoWhite;
                ColorToMoveBox3->BackColor = Color::NavajoWhite;
                ColorToMoveBox4->BackColor = Color::NavajoWhite;
            }

            *check = 0;

            return;
        } 

        else if(clickcountboard == 2)       // If move is not possible or no move after click at all
        {
            Oldcell->BackColor = OldColor;

            if (*check != 0)
                kingCell->BackColor = Color::Red;

            clickcountboard = 0;
            Oldcell = nullptr;
            return;
        }

        PieceToMove = StartBoardPosition[cellCoordinatesX, cellCoordinatesY];   
        OldCoordinatesX = cellCoordinatesX;
        OldCoordinatesY = cellCoordinatesY;

        if (StartBoardPosition[cellCoordinatesX, cellCoordinatesY] > 100 && moveSide == true || StartBoardPosition[cellCoordinatesX, cellCoordinatesY] < 100 && moveSide == false) 
        {                                   // If first click and piece in cell is right color
            OldColor = cell->BackColor;
            cell->BackColor = Color::Linen;
            Oldcell = cell;
        }
        else
        {
            clickcountboard = 0;
            Oldcell = nullptr;
            return;
        }
}

private: System::Void Restart_Click(System::Object^ sender, System::EventArgs^ e) { // Button Restart
    if (clickcount == 1)
    {
        if (wasCheck)
            kingCell->BackColor = OldColorKing;

        Q->BackgroundImage = nullptr;
        R->BackgroundImage = nullptr;
        B->BackgroundImage = nullptr;
        K->BackgroundImage = nullptr;
        NewPieceText->Text = "";

        this->CapturedWhiteKnights->Text = "0";
        this->CapturedWhiteBishops->Text = "0";
        this->CapturedWhiteRooks->Text = "0";
        this->CapturedWhiteQueens->Text = "0";
        this->CapturedBlackQueens->Text = "0";
        this->CapturedBlackRooks->Text = "0";
        this->CapturedBlackBishops->Text = "0";
        this->CapturedBlackKnights->Text = "0";
        this->CapturedBlackPawns->Text = "0";
        this->CapturedWhitePawns->Text = "0";

        check = 0;
        mate = 0;
        clickcount = 0;
        wqk = 0, wrk = 0, wbk = 0, wkk = 0, bqk = 0, brk = 0, bbk = 0, bkk = 0;

        if (clickcountboard == 1)
            Oldcell->BackColor = OldColor;
        clickcountboard = 0;

        colorNumber = 1;
        moveSide = true;
        NewPieceMaking = false;

        Start_Click(sender, e);
    }
}

private: System::Void PieceChanging_Click(System::Object^ sender, System::EventArgs^ e) {       // Function to change pawn after click on piece
    if (NewPieceMaking)
    {
        PictureBox^ ChangingPieces = safe_cast<PictureBox^>(sender);
        String^ Name = ChangingPieces->Name;

        String^ TmpName = String::Format("B{0}{1}", cellCoordinatesX, cellCoordinatesY);
        ChangingPieces = (PictureBox^)this->Controls[TmpName];

        if (StartBoardPosition[OldCoordinatesX, OldCoordinatesY] > 100)
        {
            if (Name == "Q")
            {
                StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = 151 + wqk;
                wqk++;
                StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = 0;

                ChangingPieces->BackgroundImage = Image::FromFile(".\\Pieces\\WhiteQueen.png");
            }
            else if (Name == "R")
            {
                StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = 142 + wrk;
                wqk++;
                StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = 0;

                ChangingPieces->BackgroundImage = Image::FromFile(".\\Pieces\\WhiteRook.png");
            }
            else if (Name == "B")
            {
                StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = 132 + wbk;
                wqk++;
                StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = 0;

                ChangingPieces->BackgroundImage = Image::FromFile(".\\Pieces\\WhiteBishop.png");
            }
            else if (Name == "K")
            {
                StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = 122 + wkk;
                wqk++;
                StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = 0;

                ChangingPieces->BackgroundImage = Image::FromFile(".\\Pieces\\WhiteKnight.png");
            }
        }
        else
        {
            if (Name == "Q")
            {
                StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = 51 + bqk;
                wqk++;
                StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = 0;

                ChangingPieces->BackgroundImage = Image::FromFile(".\\Pieces\\BlackQueen.png");
            }
            else if (Name == "R")
            {
                StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = 42 + brk;
                wqk++;
                StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = 0;

                ChangingPieces->BackgroundImage = Image::FromFile(".\\Pieces\\BlackRook.png");
            }
            else if (Name == "B")
            {
                StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = 32 + bqk;
                wqk++;
                StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = 0;

                ChangingPieces->BackgroundImage = Image::FromFile(".\\Pieces\\BlackBishop.png");
            }
            else if (Name == "K")
            {
                StartBoardPosition[cellCoordinatesX, cellCoordinatesY] = 22 + bqk;
                wqk++;
                StartBoardPosition[OldCoordinatesX, OldCoordinatesY] = 0;

                ChangingPieces->BackgroundImage = Image::FromFile(".\\Pieces\\BlackKnight.png");
            }
        }

        Q->BackgroundImage = nullptr;
        R->BackgroundImage = nullptr;
        B->BackgroundImage = nullptr;
        K->BackgroundImage = nullptr;
        NewPieceText->Text = "";

        moveSide = !moveSide;
        clickcountboard = 0;

        NewPieceMaking = false;
        
        if(Name == "K")
            check = NewKnight.IsCheck(StartBoardPosition[cellCoordinatesX, cellCoordinatesY], StartBoardPosition, cellCoordinatesX, cellCoordinatesY);
        if(Name == "B")
            check = NewBishop.IsCheck(StartBoardPosition[cellCoordinatesX, cellCoordinatesY], StartBoardPosition, cellCoordinatesX, cellCoordinatesY);
        if (Name == "R")
            check = NewRook.IsCheck(StartBoardPosition[cellCoordinatesX, cellCoordinatesY], StartBoardPosition, cellCoordinatesX, cellCoordinatesY);
        if (Name == "Q")
            check = NewQueen.IsCheck(StartBoardPosition[cellCoordinatesX, cellCoordinatesY], StartBoardPosition, cellCoordinatesX, cellCoordinatesY);

        CheckMateDrawStealmate();
    }
}
};
}
