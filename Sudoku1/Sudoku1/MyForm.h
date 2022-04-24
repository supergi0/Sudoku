#pragma once
#include <vector>
#include <iostream>
#include <random>
#include <chrono>
#include <Windows.h>
#include <thread>
namespace Sudoku1 {
	using namespace System;
    using namespace std;
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
        static int seconds=0;
        static int minutes=0;

        static int temparray11 = 0;
        static int temparray12 = 0;
        static int temparray13 = 0;
        static int temparray14 = 0;
        static int temparray15 = 0;
        static int temparray16 = 0;
        static int temparray17 = 0;
        static int temparray18 = 0;
        static int temparray19 = 0;

     
        static int temparray21 = 0;
        static int temparray22 = 0;
        static int temparray23 = 0;
        static int temparray24 = 0;
        static int temparray25 = 0;
        static int temparray26 = 0;
        static int temparray27 = 0;
        static int temparray28 = 0;
        static int temparray29 = 0;

  
        static int temparray31 = 0;
        static int temparray32 = 0;
        static int temparray33 = 0;
        static int temparray34 = 0;
        static int temparray35 = 0;
        static int temparray36 = 0;
        static int temparray37 = 0;
        static int temparray38 = 0;
        static int temparray39 = 0;

        
        static int temparray41 = 0;
        static int temparray42 = 0;
        static int temparray43 = 0;
        static int temparray44 = 0;
        static int temparray45 = 0;
        static int temparray46 = 0;
        static int temparray47 = 0;
        static int temparray48 = 0;
        static int temparray49 = 0;

        
        static int temparray51 = 0;
        static int temparray52 = 0;
        static int temparray53 = 0;
        static int temparray54 = 0;
        static int temparray55 = 0;
        static int temparray56 = 0;
        static int temparray57 = 0;
        static int temparray58 = 0;
        static int temparray59 = 0;

        
        static int temparray61 = 0;
        static int temparray62 = 0;
        static int temparray63 = 0;
        static int temparray64 = 0;
        static int temparray65 = 0;
        static int temparray66 = 0;
        static int temparray67 = 0;
        static int temparray68 = 0;
        static int temparray69 = 0;

        
        static int temparray71 = 0;
        static int temparray72 = 0;
        static int temparray73 = 0;
        static int temparray74 = 0;
        static int temparray75 = 0;
        static int temparray76 = 0;
        static int temparray77 = 0;
        static int temparray78 = 0;
        static int temparray79 = 0;


       
        static int temparray81 = 0;
        static int temparray82 = 0;
        static int temparray83 = 0;
        static int temparray84 = 0;
        static int temparray85 = 0;
        static int temparray86 = 0;
        static int temparray87 = 0;
        static int temparray88 = 0;
        static int temparray89 = 0;


      
        static int temparray91 = 0;
        static int temparray92 = 0;
        static int temparray93 = 0;
        static int temparray94 = 0;
        static int temparray95 = 0;
        static int temparray96 = 0;
        static int temparray97 = 0;
        static int temparray98 = 0;
        static int temparray99 = 0;
        String^ sec;
        String^ min;
    private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Button^ CHECK;



    private: System::Windows::Forms::Timer^ timer1;
           

	public:
		MyForm(void)
		{
			InitializeComponent();
			
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
    private: System::Windows::Forms::TextBox^ c11;
    private: System::Windows::Forms::TextBox^ c34;
    protected:
        
    protected:

    protected:

    private: System::Windows::Forms::TextBox^ c24;

    private: System::Windows::Forms::TextBox^ c14;
    private: System::Windows::Forms::TextBox^ c33;


    private: System::Windows::Forms::TextBox^ c32;

    private: System::Windows::Forms::TextBox^ c31;

    private: System::Windows::Forms::TextBox^ c23;

    private: System::Windows::Forms::TextBox^ c22;

    private: System::Windows::Forms::TextBox^ c21;

    private: System::Windows::Forms::TextBox^ c13;

    private: System::Windows::Forms::TextBox^ c12;
    private: System::Windows::Forms::TextBox^ c41;


    private: System::Windows::Forms::TextBox^ c39;

    private: System::Windows::Forms::TextBox^ c29;

    private: System::Windows::Forms::TextBox^ c19;
    private: System::Windows::Forms::TextBox^ c38;


    private: System::Windows::Forms::TextBox^ c28;

    private: System::Windows::Forms::TextBox^ c18;
    private: System::Windows::Forms::TextBox^ c37;


    private: System::Windows::Forms::TextBox^ c27;

    private: System::Windows::Forms::TextBox^ c17;
    private: System::Windows::Forms::TextBox^ c36;


    private: System::Windows::Forms::TextBox^ c26;

    private: System::Windows::Forms::TextBox^ c16;
    private: System::Windows::Forms::TextBox^ c35;


    private: System::Windows::Forms::TextBox^ c25;

    private: System::Windows::Forms::TextBox^ c15;
    private: System::Windows::Forms::TextBox^ c59;


    private: System::Windows::Forms::TextBox^ c58;

    private: System::Windows::Forms::TextBox^ c57;

    private: System::Windows::Forms::TextBox^ c56;

    private: System::Windows::Forms::TextBox^ c55;

    private: System::Windows::Forms::TextBox^ c54;

    private: System::Windows::Forms::TextBox^ c53;

    private: System::Windows::Forms::TextBox^ c52;

    private: System::Windows::Forms::TextBox^ c51;

    private: System::Windows::Forms::TextBox^ c49;

    private: System::Windows::Forms::TextBox^ c48;

    private: System::Windows::Forms::TextBox^ c47;

    private: System::Windows::Forms::TextBox^ c46;

    private: System::Windows::Forms::TextBox^ c45;

    private: System::Windows::Forms::TextBox^ c44;

    private: System::Windows::Forms::TextBox^ c43;

    private: System::Windows::Forms::TextBox^ c42;
private: System::Windows::Forms::TextBox^ c78;


private: System::Windows::Forms::TextBox^ c68;
private: System::Windows::Forms::TextBox^ c79;


private: System::Windows::Forms::TextBox^ c69;
private: System::Windows::Forms::TextBox^ c76;


private: System::Windows::Forms::TextBox^ c75;

private: System::Windows::Forms::TextBox^ c74;

private: System::Windows::Forms::TextBox^ c73;

private: System::Windows::Forms::TextBox^ c72;

private: System::Windows::Forms::TextBox^ c71;

private: System::Windows::Forms::TextBox^ c66;

private: System::Windows::Forms::TextBox^ c65;

private: System::Windows::Forms::TextBox^ c64;

private: System::Windows::Forms::TextBox^ c63;

private: System::Windows::Forms::TextBox^ c62;

private: System::Windows::Forms::TextBox^ c61;
private: System::Windows::Forms::TextBox^ c67;
private: System::Windows::Forms::TextBox^ c77;
private: System::Windows::Forms::TextBox^ c87;




private: System::Windows::Forms::TextBox^ c86;

private: System::Windows::Forms::TextBox^ c85;

private: System::Windows::Forms::TextBox^ c84;

private: System::Windows::Forms::TextBox^ c83;

private: System::Windows::Forms::TextBox^ c82;

private: System::Windows::Forms::TextBox^ c81;
private: System::Windows::Forms::TextBox^ c93;


private: System::Windows::Forms::TextBox^ c92;

private: System::Windows::Forms::TextBox^ c91;

private: System::Windows::Forms::TextBox^ c89;

private: System::Windows::Forms::TextBox^ c88;
private: System::Windows::Forms::TextBox^ c99;


private: System::Windows::Forms::TextBox^ c98;

private: System::Windows::Forms::TextBox^ c97;

private: System::Windows::Forms::TextBox^ c96;

private: System::Windows::Forms::TextBox^ c95;

private: System::Windows::Forms::TextBox^ c94;

private: System::Windows::Forms::Button^ difficulty;
private: System::Windows::Forms::Button^ create;

private: System::Windows::Forms::Button^ hint;
private: System::Windows::Forms::Button^ solve;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Button^ EXIT;
private: System::Windows::Forms::Panel^ panel3;

private: System::ComponentModel::IContainer^ components;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->components = (gcnew System::ComponentModel::Container());
            this->c11 = (gcnew System::Windows::Forms::TextBox());
            this->c34 = (gcnew System::Windows::Forms::TextBox());
            this->c24 = (gcnew System::Windows::Forms::TextBox());
            this->c14 = (gcnew System::Windows::Forms::TextBox());
            this->c33 = (gcnew System::Windows::Forms::TextBox());
            this->c32 = (gcnew System::Windows::Forms::TextBox());
            this->c31 = (gcnew System::Windows::Forms::TextBox());
            this->c23 = (gcnew System::Windows::Forms::TextBox());
            this->c22 = (gcnew System::Windows::Forms::TextBox());
            this->c21 = (gcnew System::Windows::Forms::TextBox());
            this->c13 = (gcnew System::Windows::Forms::TextBox());
            this->c12 = (gcnew System::Windows::Forms::TextBox());
            this->c41 = (gcnew System::Windows::Forms::TextBox());
            this->c39 = (gcnew System::Windows::Forms::TextBox());
            this->c29 = (gcnew System::Windows::Forms::TextBox());
            this->c19 = (gcnew System::Windows::Forms::TextBox());
            this->c38 = (gcnew System::Windows::Forms::TextBox());
            this->c28 = (gcnew System::Windows::Forms::TextBox());
            this->c18 = (gcnew System::Windows::Forms::TextBox());
            this->c37 = (gcnew System::Windows::Forms::TextBox());
            this->c27 = (gcnew System::Windows::Forms::TextBox());
            this->c17 = (gcnew System::Windows::Forms::TextBox());
            this->c36 = (gcnew System::Windows::Forms::TextBox());
            this->c26 = (gcnew System::Windows::Forms::TextBox());
            this->c16 = (gcnew System::Windows::Forms::TextBox());
            this->c35 = (gcnew System::Windows::Forms::TextBox());
            this->c25 = (gcnew System::Windows::Forms::TextBox());
            this->c15 = (gcnew System::Windows::Forms::TextBox());
            this->c59 = (gcnew System::Windows::Forms::TextBox());
            this->c58 = (gcnew System::Windows::Forms::TextBox());
            this->c57 = (gcnew System::Windows::Forms::TextBox());
            this->c56 = (gcnew System::Windows::Forms::TextBox());
            this->c55 = (gcnew System::Windows::Forms::TextBox());
            this->c54 = (gcnew System::Windows::Forms::TextBox());
            this->c53 = (gcnew System::Windows::Forms::TextBox());
            this->c52 = (gcnew System::Windows::Forms::TextBox());
            this->c51 = (gcnew System::Windows::Forms::TextBox());
            this->c49 = (gcnew System::Windows::Forms::TextBox());
            this->c48 = (gcnew System::Windows::Forms::TextBox());
            this->c47 = (gcnew System::Windows::Forms::TextBox());
            this->c46 = (gcnew System::Windows::Forms::TextBox());
            this->c45 = (gcnew System::Windows::Forms::TextBox());
            this->c44 = (gcnew System::Windows::Forms::TextBox());
            this->c43 = (gcnew System::Windows::Forms::TextBox());
            this->c42 = (gcnew System::Windows::Forms::TextBox());
            this->c78 = (gcnew System::Windows::Forms::TextBox());
            this->c68 = (gcnew System::Windows::Forms::TextBox());
            this->c79 = (gcnew System::Windows::Forms::TextBox());
            this->c69 = (gcnew System::Windows::Forms::TextBox());
            this->c76 = (gcnew System::Windows::Forms::TextBox());
            this->c75 = (gcnew System::Windows::Forms::TextBox());
            this->c74 = (gcnew System::Windows::Forms::TextBox());
            this->c73 = (gcnew System::Windows::Forms::TextBox());
            this->c72 = (gcnew System::Windows::Forms::TextBox());
            this->c71 = (gcnew System::Windows::Forms::TextBox());
            this->c66 = (gcnew System::Windows::Forms::TextBox());
            this->c65 = (gcnew System::Windows::Forms::TextBox());
            this->c64 = (gcnew System::Windows::Forms::TextBox());
            this->c63 = (gcnew System::Windows::Forms::TextBox());
            this->c62 = (gcnew System::Windows::Forms::TextBox());
            this->c61 = (gcnew System::Windows::Forms::TextBox());
            this->c67 = (gcnew System::Windows::Forms::TextBox());
            this->c77 = (gcnew System::Windows::Forms::TextBox());
            this->c87 = (gcnew System::Windows::Forms::TextBox());
            this->c86 = (gcnew System::Windows::Forms::TextBox());
            this->c85 = (gcnew System::Windows::Forms::TextBox());
            this->c84 = (gcnew System::Windows::Forms::TextBox());
            this->c83 = (gcnew System::Windows::Forms::TextBox());
            this->c82 = (gcnew System::Windows::Forms::TextBox());
            this->c81 = (gcnew System::Windows::Forms::TextBox());
            this->c93 = (gcnew System::Windows::Forms::TextBox());
            this->c92 = (gcnew System::Windows::Forms::TextBox());
            this->c91 = (gcnew System::Windows::Forms::TextBox());
            this->c89 = (gcnew System::Windows::Forms::TextBox());
            this->c88 = (gcnew System::Windows::Forms::TextBox());
            this->c99 = (gcnew System::Windows::Forms::TextBox());
            this->c98 = (gcnew System::Windows::Forms::TextBox());
            this->c97 = (gcnew System::Windows::Forms::TextBox());
            this->c96 = (gcnew System::Windows::Forms::TextBox());
            this->c95 = (gcnew System::Windows::Forms::TextBox());
            this->c94 = (gcnew System::Windows::Forms::TextBox());
            this->difficulty = (gcnew System::Windows::Forms::Button());
            this->create = (gcnew System::Windows::Forms::Button());
            this->hint = (gcnew System::Windows::Forms::Button());
            this->solve = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->CHECK = (gcnew System::Windows::Forms::Button());
            this->EXIT = (gcnew System::Windows::Forms::Button());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panel3->SuspendLayout();
            this->SuspendLayout();
            // 
            // c11
            // 
            this->c11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c11->Location = System::Drawing::Point(3, 4);
            this->c11->Margin = System::Windows::Forms::Padding(2);
            this->c11->Name = L"c11";
            this->c11->Size = System::Drawing::Size(32, 35);
            this->c11->TabIndex = 0;
            this->c11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c11->TextChanged += gcnew System::EventHandler(this, &MyForm::c11_TextChanged);
            // 
            // c34
            // 
            this->c34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c34->Location = System::Drawing::Point(117, 79);
            this->c34->Margin = System::Windows::Forms::Padding(2);
            this->c34->Name = L"c34";
            this->c34->Size = System::Drawing::Size(32, 35);
            this->c34->TabIndex = 1;
            this->c34->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c34->TextChanged += gcnew System::EventHandler(this, &MyForm::c34_TextChanged);
            // 
            // c24
            // 
            this->c24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c24->Location = System::Drawing::Point(117, 42);
            this->c24->Margin = System::Windows::Forms::Padding(2);
            this->c24->Name = L"c24";
            this->c24->Size = System::Drawing::Size(32, 35);
            this->c24->TabIndex = 2;
            this->c24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c24->TextChanged += gcnew System::EventHandler(this, &MyForm::c24_TextChanged);
            // 
            // c14
            // 
            this->c14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c14->Location = System::Drawing::Point(117, 3);
            this->c14->Margin = System::Windows::Forms::Padding(2);
            this->c14->Name = L"c14";
            this->c14->Size = System::Drawing::Size(32, 35);
            this->c14->TabIndex = 3;
            this->c14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c14->TextChanged += gcnew System::EventHandler(this, &MyForm::c14_TextChanged);
            // 
            // c33
            // 
            this->c33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c33->Location = System::Drawing::Point(74, 80);
            this->c33->Margin = System::Windows::Forms::Padding(2);
            this->c33->Name = L"c33";
            this->c33->Size = System::Drawing::Size(32, 35);
            this->c33->TabIndex = 4;
            this->c33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c33->TextChanged += gcnew System::EventHandler(this, &MyForm::c33_TextChanged);
            // 
            // c32
            // 
            this->c32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c32->Location = System::Drawing::Point(38, 80);
            this->c32->Margin = System::Windows::Forms::Padding(2);
            this->c32->Name = L"c32";
            this->c32->Size = System::Drawing::Size(32, 35);
            this->c32->TabIndex = 5;
            this->c32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c32->TextChanged += gcnew System::EventHandler(this, &MyForm::c32_TextChanged);
            // 
            // c31
            // 
            this->c31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c31->Location = System::Drawing::Point(3, 81);
            this->c31->Margin = System::Windows::Forms::Padding(2);
            this->c31->Name = L"c31";
            this->c31->Size = System::Drawing::Size(32, 35);
            this->c31->TabIndex = 6;
            this->c31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c31->TextChanged += gcnew System::EventHandler(this, &MyForm::c31_TextChanged);
            // 
            // c23
            // 
            this->c23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c23->Location = System::Drawing::Point(74, 42);
            this->c23->Margin = System::Windows::Forms::Padding(2);
            this->c23->Name = L"c23";
            this->c23->Size = System::Drawing::Size(32, 35);
            this->c23->TabIndex = 7;
            this->c23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c23->TextChanged += gcnew System::EventHandler(this, &MyForm::c23_TextChanged);
            // 
            // c22
            // 
            this->c22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c22->Location = System::Drawing::Point(38, 42);
            this->c22->Margin = System::Windows::Forms::Padding(2);
            this->c22->Name = L"c22";
            this->c22->Size = System::Drawing::Size(32, 35);
            this->c22->TabIndex = 8;
            this->c22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c22->TextChanged += gcnew System::EventHandler(this, &MyForm::c22_TextChanged);
            // 
            // c21
            // 
            this->c21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c21->Location = System::Drawing::Point(3, 42);
            this->c21->Margin = System::Windows::Forms::Padding(2);
            this->c21->Name = L"c21";
            this->c21->Size = System::Drawing::Size(32, 35);
            this->c21->TabIndex = 9;
            this->c21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c21->TextChanged += gcnew System::EventHandler(this, &MyForm::c21_TextChanged);
            // 
            // c13
            // 
            this->c13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c13->Location = System::Drawing::Point(74, 4);
            this->c13->Margin = System::Windows::Forms::Padding(2);
            this->c13->Name = L"c13";
            this->c13->Size = System::Drawing::Size(32, 35);
            this->c13->TabIndex = 10;
            this->c13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c13->TextChanged += gcnew System::EventHandler(this, &MyForm::c13_TextChanged);
            // 
            // c12
            // 
            this->c12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c12->Location = System::Drawing::Point(38, 4);
            this->c12->Margin = System::Windows::Forms::Padding(2);
            this->c12->Name = L"c12";
            this->c12->Size = System::Drawing::Size(32, 35);
            this->c12->TabIndex = 11;
            this->c12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c12->TextChanged += gcnew System::EventHandler(this, &MyForm::c12_TextChanged);
            // 
            // c41
            // 
            this->c41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c41->Location = System::Drawing::Point(3, 132);
            this->c41->Margin = System::Windows::Forms::Padding(2);
            this->c41->Name = L"c41";
            this->c41->Size = System::Drawing::Size(32, 35);
            this->c41->TabIndex = 12;
            this->c41->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c41->TextChanged += gcnew System::EventHandler(this, &MyForm::c41_TextChanged);
            // 
            // c39
            // 
            this->c39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c39->Location = System::Drawing::Point(306, 81);
            this->c39->Margin = System::Windows::Forms::Padding(2);
            this->c39->Name = L"c39";
            this->c39->Size = System::Drawing::Size(32, 35);
            this->c39->TabIndex = 13;
            this->c39->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c39->TextChanged += gcnew System::EventHandler(this, &MyForm::c39_TextChanged);
            // 
            // c29
            // 
            this->c29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c29->Location = System::Drawing::Point(306, 42);
            this->c29->Margin = System::Windows::Forms::Padding(2);
            this->c29->Name = L"c29";
            this->c29->Size = System::Drawing::Size(32, 35);
            this->c29->TabIndex = 14;
            this->c29->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c29->TextChanged += gcnew System::EventHandler(this, &MyForm::c29_TextChanged);
            // 
            // c19
            // 
            this->c19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c19->Location = System::Drawing::Point(306, 3);
            this->c19->Margin = System::Windows::Forms::Padding(2);
            this->c19->Name = L"c19";
            this->c19->Size = System::Drawing::Size(32, 35);
            this->c19->TabIndex = 15;
            this->c19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c19->TextChanged += gcnew System::EventHandler(this, &MyForm::c19_TextChanged);
            // 
            // c38
            // 
            this->c38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c38->Location = System::Drawing::Point(270, 80);
            this->c38->Margin = System::Windows::Forms::Padding(2);
            this->c38->Name = L"c38";
            this->c38->Size = System::Drawing::Size(32, 35);
            this->c38->TabIndex = 16;
            this->c38->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c38->TextChanged += gcnew System::EventHandler(this, &MyForm::c38_TextChanged);
            // 
            // c28
            // 
            this->c28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c28->Location = System::Drawing::Point(270, 42);
            this->c28->Margin = System::Windows::Forms::Padding(2);
            this->c28->Name = L"c28";
            this->c28->Size = System::Drawing::Size(32, 35);
            this->c28->TabIndex = 17;
            this->c28->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c28->TextChanged += gcnew System::EventHandler(this, &MyForm::c28_TextChanged);
            // 
            // c18
            // 
            this->c18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c18->Location = System::Drawing::Point(270, 4);
            this->c18->Margin = System::Windows::Forms::Padding(2);
            this->c18->Name = L"c18";
            this->c18->Size = System::Drawing::Size(32, 35);
            this->c18->TabIndex = 18;
            this->c18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c18->TextChanged += gcnew System::EventHandler(this, &MyForm::c18_TextChanged);
            // 
            // c37
            // 
            this->c37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c37->Location = System::Drawing::Point(234, 80);
            this->c37->Margin = System::Windows::Forms::Padding(2);
            this->c37->Name = L"c37";
            this->c37->Size = System::Drawing::Size(32, 35);
            this->c37->TabIndex = 19;
            this->c37->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c37->TextChanged += gcnew System::EventHandler(this, &MyForm::c37_TextChanged);
            // 
            // c27
            // 
            this->c27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c27->Location = System::Drawing::Point(234, 43);
            this->c27->Margin = System::Windows::Forms::Padding(2);
            this->c27->Name = L"c27";
            this->c27->Size = System::Drawing::Size(32, 35);
            this->c27->TabIndex = 20;
            this->c27->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c27->TextChanged += gcnew System::EventHandler(this, &MyForm::c27_TextChanged);
            // 
            // c17
            // 
            this->c17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c17->Location = System::Drawing::Point(234, 4);
            this->c17->Margin = System::Windows::Forms::Padding(2);
            this->c17->Name = L"c17";
            this->c17->Size = System::Drawing::Size(32, 35);
            this->c17->TabIndex = 21;
            this->c17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c17->TextChanged += gcnew System::EventHandler(this, &MyForm::c17_TextChanged);
            // 
            // c36
            // 
            this->c36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c36->Location = System::Drawing::Point(189, 80);
            this->c36->Margin = System::Windows::Forms::Padding(2);
            this->c36->Name = L"c36";
            this->c36->Size = System::Drawing::Size(32, 35);
            this->c36->TabIndex = 22;
            this->c36->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c36->TextChanged += gcnew System::EventHandler(this, &MyForm::c36_TextChanged);
            // 
            // c26
            // 
            this->c26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c26->Location = System::Drawing::Point(189, 42);
            this->c26->Margin = System::Windows::Forms::Padding(2);
            this->c26->Name = L"c26";
            this->c26->Size = System::Drawing::Size(32, 35);
            this->c26->TabIndex = 23;
            this->c26->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c26->TextChanged += gcnew System::EventHandler(this, &MyForm::c26_TextChanged);
            // 
            // c16
            // 
            this->c16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c16->Location = System::Drawing::Point(189, 4);
            this->c16->Margin = System::Windows::Forms::Padding(2);
            this->c16->Name = L"c16";
            this->c16->Size = System::Drawing::Size(32, 35);
            this->c16->TabIndex = 24;
            this->c16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c16->TextChanged += gcnew System::EventHandler(this, &MyForm::c16_TextChanged);
            // 
            // c35
            // 
            this->c35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c35->Location = System::Drawing::Point(153, 79);
            this->c35->Margin = System::Windows::Forms::Padding(2);
            this->c35->Name = L"c35";
            this->c35->Size = System::Drawing::Size(32, 35);
            this->c35->TabIndex = 25;
            this->c35->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c35->TextChanged += gcnew System::EventHandler(this, &MyForm::c35_TextChanged);
            // 
            // c25
            // 
            this->c25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c25->Location = System::Drawing::Point(153, 42);
            this->c25->Margin = System::Windows::Forms::Padding(2);
            this->c25->Name = L"c25";
            this->c25->Size = System::Drawing::Size(32, 35);
            this->c25->TabIndex = 26;
            this->c25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c25->TextChanged += gcnew System::EventHandler(this, &MyForm::c25_TextChanged);
            // 
            // c15
            // 
            this->c15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c15->Location = System::Drawing::Point(153, 3);
            this->c15->Margin = System::Windows::Forms::Padding(2);
            this->c15->Name = L"c15";
            this->c15->Size = System::Drawing::Size(32, 35);
            this->c15->TabIndex = 27;
            this->c15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c15->TextChanged += gcnew System::EventHandler(this, &MyForm::c15_TextChanged);
            // 
            // c59
            // 
            this->c59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c59->Location = System::Drawing::Point(306, 171);
            this->c59->Margin = System::Windows::Forms::Padding(2);
            this->c59->Name = L"c59";
            this->c59->Size = System::Drawing::Size(32, 35);
            this->c59->TabIndex = 28;
            this->c59->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c59->TextChanged += gcnew System::EventHandler(this, &MyForm::c59_TextChanged);
            // 
            // c58
            // 
            this->c58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c58->Location = System::Drawing::Point(270, 171);
            this->c58->Margin = System::Windows::Forms::Padding(2);
            this->c58->Name = L"c58";
            this->c58->Size = System::Drawing::Size(32, 35);
            this->c58->TabIndex = 29;
            this->c58->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c58->TextChanged += gcnew System::EventHandler(this, &MyForm::c58_TextChanged);
            // 
            // c57
            // 
            this->c57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c57->Location = System::Drawing::Point(234, 171);
            this->c57->Margin = System::Windows::Forms::Padding(2);
            this->c57->Name = L"c57";
            this->c57->Size = System::Drawing::Size(32, 35);
            this->c57->TabIndex = 30;
            this->c57->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c57->TextChanged += gcnew System::EventHandler(this, &MyForm::c57_TextChanged);
            // 
            // c56
            // 
            this->c56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c56->Location = System::Drawing::Point(189, 171);
            this->c56->Margin = System::Windows::Forms::Padding(2);
            this->c56->Name = L"c56";
            this->c56->Size = System::Drawing::Size(32, 35);
            this->c56->TabIndex = 31;
            this->c56->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c56->TextChanged += gcnew System::EventHandler(this, &MyForm::c56_TextChanged);
            // 
            // c55
            // 
            this->c55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c55->Location = System::Drawing::Point(153, 171);
            this->c55->Margin = System::Windows::Forms::Padding(2);
            this->c55->Name = L"c55";
            this->c55->Size = System::Drawing::Size(32, 35);
            this->c55->TabIndex = 32;
            this->c55->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c55->TextChanged += gcnew System::EventHandler(this, &MyForm::c55_TextChanged);
            // 
            // c54
            // 
            this->c54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c54->Location = System::Drawing::Point(117, 171);
            this->c54->Margin = System::Windows::Forms::Padding(2);
            this->c54->Name = L"c54";
            this->c54->Size = System::Drawing::Size(32, 35);
            this->c54->TabIndex = 33;
            this->c54->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c54->TextChanged += gcnew System::EventHandler(this, &MyForm::c54_TextChanged);
            // 
            // c53
            // 
            this->c53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c53->Location = System::Drawing::Point(74, 171);
            this->c53->Margin = System::Windows::Forms::Padding(2);
            this->c53->Name = L"c53";
            this->c53->Size = System::Drawing::Size(32, 35);
            this->c53->TabIndex = 34;
            this->c53->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c53->TextChanged += gcnew System::EventHandler(this, &MyForm::c53_TextChanged);
            // 
            // c52
            // 
            this->c52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c52->Location = System::Drawing::Point(39, 171);
            this->c52->Margin = System::Windows::Forms::Padding(2);
            this->c52->Name = L"c52";
            this->c52->Size = System::Drawing::Size(32, 35);
            this->c52->TabIndex = 35;
            this->c52->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c52->TextChanged += gcnew System::EventHandler(this, &MyForm::c52_TextChanged);
            // 
            // c51
            // 
            this->c51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c51->Location = System::Drawing::Point(3, 171);
            this->c51->Margin = System::Windows::Forms::Padding(2);
            this->c51->Name = L"c51";
            this->c51->Size = System::Drawing::Size(32, 35);
            this->c51->TabIndex = 36;
            this->c51->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c51->TextChanged += gcnew System::EventHandler(this, &MyForm::c51_TextChanged);
            // 
            // c49
            // 
            this->c49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c49->Location = System::Drawing::Point(306, 132);
            this->c49->Margin = System::Windows::Forms::Padding(2);
            this->c49->Name = L"c49";
            this->c49->Size = System::Drawing::Size(32, 35);
            this->c49->TabIndex = 37;
            this->c49->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c49->TextChanged += gcnew System::EventHandler(this, &MyForm::c49_TextChanged);
            // 
            // c48
            // 
            this->c48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c48->Location = System::Drawing::Point(270, 132);
            this->c48->Margin = System::Windows::Forms::Padding(2);
            this->c48->Name = L"c48";
            this->c48->Size = System::Drawing::Size(32, 35);
            this->c48->TabIndex = 38;
            this->c48->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c48->TextChanged += gcnew System::EventHandler(this, &MyForm::c48_TextChanged);
            // 
            // c47
            // 
            this->c47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c47->Location = System::Drawing::Point(234, 132);
            this->c47->Margin = System::Windows::Forms::Padding(2);
            this->c47->Name = L"c47";
            this->c47->Size = System::Drawing::Size(32, 35);
            this->c47->TabIndex = 39;
            this->c47->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c47->TextChanged += gcnew System::EventHandler(this, &MyForm::c47_TextChanged);
            // 
            // c46
            // 
            this->c46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c46->Location = System::Drawing::Point(189, 132);
            this->c46->Margin = System::Windows::Forms::Padding(2);
            this->c46->Name = L"c46";
            this->c46->Size = System::Drawing::Size(32, 35);
            this->c46->TabIndex = 40;
            this->c46->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c46->TextChanged += gcnew System::EventHandler(this, &MyForm::c46_TextChanged);
            // 
            // c45
            // 
            this->c45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c45->Location = System::Drawing::Point(153, 132);
            this->c45->Margin = System::Windows::Forms::Padding(2);
            this->c45->Name = L"c45";
            this->c45->Size = System::Drawing::Size(32, 35);
            this->c45->TabIndex = 41;
            this->c45->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c45->TextChanged += gcnew System::EventHandler(this, &MyForm::c45_TextChanged);
            // 
            // c44
            // 
            this->c44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c44->Location = System::Drawing::Point(117, 132);
            this->c44->Margin = System::Windows::Forms::Padding(2);
            this->c44->Name = L"c44";
            this->c44->Size = System::Drawing::Size(32, 35);
            this->c44->TabIndex = 42;
            this->c44->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c44->TextChanged += gcnew System::EventHandler(this, &MyForm::c44_TextChanged);
            // 
            // c43
            // 
            this->c43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c43->Location = System::Drawing::Point(74, 132);
            this->c43->Margin = System::Windows::Forms::Padding(2);
            this->c43->Name = L"c43";
            this->c43->Size = System::Drawing::Size(32, 35);
            this->c43->TabIndex = 43;
            this->c43->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c43->TextChanged += gcnew System::EventHandler(this, &MyForm::c43_TextChanged);
            // 
            // c42
            // 
            this->c42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c42->Location = System::Drawing::Point(38, 132);
            this->c42->Margin = System::Windows::Forms::Padding(2);
            this->c42->Name = L"c42";
            this->c42->Size = System::Drawing::Size(32, 35);
            this->c42->TabIndex = 44;
            this->c42->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c42->TextChanged += gcnew System::EventHandler(this, &MyForm::c42_TextChanged);
            // 
            // c78
            // 
            this->c78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c78->Location = System::Drawing::Point(270, 264);
            this->c78->Margin = System::Windows::Forms::Padding(2);
            this->c78->Name = L"c78";
            this->c78->Size = System::Drawing::Size(32, 35);
            this->c78->TabIndex = 45;
            this->c78->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c78->TextChanged += gcnew System::EventHandler(this, &MyForm::c78_TextChanged);
            // 
            // c68
            // 
            this->c68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c68->Location = System::Drawing::Point(270, 210);
            this->c68->Margin = System::Windows::Forms::Padding(2);
            this->c68->Name = L"c68";
            this->c68->Size = System::Drawing::Size(32, 35);
            this->c68->TabIndex = 46;
            this->c68->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c68->TextChanged += gcnew System::EventHandler(this, &MyForm::c68_TextChanged);
            // 
            // c79
            // 
            this->c79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c79->Location = System::Drawing::Point(306, 264);
            this->c79->Margin = System::Windows::Forms::Padding(2);
            this->c79->Name = L"c79";
            this->c79->Size = System::Drawing::Size(32, 35);
            this->c79->TabIndex = 47;
            this->c79->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c79->TextChanged += gcnew System::EventHandler(this, &MyForm::c79_TextChanged);
            // 
            // c69
            // 
            this->c69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c69->Location = System::Drawing::Point(306, 210);
            this->c69->Margin = System::Windows::Forms::Padding(2);
            this->c69->Name = L"c69";
            this->c69->Size = System::Drawing::Size(32, 35);
            this->c69->TabIndex = 48;
            this->c69->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c69->TextChanged += gcnew System::EventHandler(this, &MyForm::c69_TextChanged);
            // 
            // c76
            // 
            this->c76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c76->Location = System::Drawing::Point(189, 264);
            this->c76->Margin = System::Windows::Forms::Padding(2);
            this->c76->Name = L"c76";
            this->c76->Size = System::Drawing::Size(32, 35);
            this->c76->TabIndex = 49;
            this->c76->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c76->TextChanged += gcnew System::EventHandler(this, &MyForm::c76_TextChanged);
            // 
            // c75
            // 
            this->c75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c75->Location = System::Drawing::Point(153, 264);
            this->c75->Margin = System::Windows::Forms::Padding(2);
            this->c75->Name = L"c75";
            this->c75->Size = System::Drawing::Size(32, 35);
            this->c75->TabIndex = 50;
            this->c75->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c75->TextChanged += gcnew System::EventHandler(this, &MyForm::c75_TextChanged);
            // 
            // c74
            // 
            this->c74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c74->Location = System::Drawing::Point(117, 264);
            this->c74->Margin = System::Windows::Forms::Padding(2);
            this->c74->Name = L"c74";
            this->c74->Size = System::Drawing::Size(32, 35);
            this->c74->TabIndex = 51;
            this->c74->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c74->TextChanged += gcnew System::EventHandler(this, &MyForm::c74_TextChanged);
            // 
            // c73
            // 
            this->c73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c73->Location = System::Drawing::Point(74, 264);
            this->c73->Margin = System::Windows::Forms::Padding(2);
            this->c73->Name = L"c73";
            this->c73->Size = System::Drawing::Size(32, 35);
            this->c73->TabIndex = 52;
            this->c73->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c73->TextChanged += gcnew System::EventHandler(this, &MyForm::c73_TextChanged);
            // 
            // c72
            // 
            this->c72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c72->Location = System::Drawing::Point(38, 264);
            this->c72->Margin = System::Windows::Forms::Padding(2);
            this->c72->Name = L"c72";
            this->c72->Size = System::Drawing::Size(32, 35);
            this->c72->TabIndex = 53;
            this->c72->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c72->TextChanged += gcnew System::EventHandler(this, &MyForm::c72_TextChanged);
            // 
            // c71
            // 
            this->c71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c71->Location = System::Drawing::Point(2, 264);
            this->c71->Margin = System::Windows::Forms::Padding(2);
            this->c71->Name = L"c71";
            this->c71->Size = System::Drawing::Size(32, 35);
            this->c71->TabIndex = 54;
            this->c71->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c71->TextChanged += gcnew System::EventHandler(this, &MyForm::c71_TextChanged);
            // 
            // c66
            // 
            this->c66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c66->Location = System::Drawing::Point(189, 210);
            this->c66->Margin = System::Windows::Forms::Padding(2);
            this->c66->Name = L"c66";
            this->c66->Size = System::Drawing::Size(32, 35);
            this->c66->TabIndex = 55;
            this->c66->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c66->TextChanged += gcnew System::EventHandler(this, &MyForm::c66_TextChanged);
            // 
            // c65
            // 
            this->c65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c65->Location = System::Drawing::Point(153, 210);
            this->c65->Margin = System::Windows::Forms::Padding(2);
            this->c65->Name = L"c65";
            this->c65->Size = System::Drawing::Size(32, 35);
            this->c65->TabIndex = 56;
            this->c65->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c65->TextChanged += gcnew System::EventHandler(this, &MyForm::c65_TextChanged);
            // 
            // c64
            // 
            this->c64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c64->Location = System::Drawing::Point(117, 210);
            this->c64->Margin = System::Windows::Forms::Padding(2);
            this->c64->Name = L"c64";
            this->c64->Size = System::Drawing::Size(32, 35);
            this->c64->TabIndex = 57;
            this->c64->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c64->TextChanged += gcnew System::EventHandler(this, &MyForm::c64_TextChanged);
            // 
            // c63
            // 
            this->c63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c63->Location = System::Drawing::Point(74, 210);
            this->c63->Margin = System::Windows::Forms::Padding(2);
            this->c63->Name = L"c63";
            this->c63->Size = System::Drawing::Size(32, 35);
            this->c63->TabIndex = 58;
            this->c63->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c63->TextChanged += gcnew System::EventHandler(this, &MyForm::c63_TextChanged);
            // 
            // c62
            // 
            this->c62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c62->Location = System::Drawing::Point(38, 210);
            this->c62->Margin = System::Windows::Forms::Padding(2);
            this->c62->Name = L"c62";
            this->c62->Size = System::Drawing::Size(32, 35);
            this->c62->TabIndex = 59;
            this->c62->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c62->TextChanged += gcnew System::EventHandler(this, &MyForm::c62_TextChanged);
            // 
            // c61
            // 
            this->c61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c61->Location = System::Drawing::Point(3, 210);
            this->c61->Margin = System::Windows::Forms::Padding(2);
            this->c61->Name = L"c61";
            this->c61->Size = System::Drawing::Size(32, 35);
            this->c61->TabIndex = 60;
            this->c61->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c61->TextChanged += gcnew System::EventHandler(this, &MyForm::c61_TextChanged);
            // 
            // c67
            // 
            this->c67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c67->Location = System::Drawing::Point(234, 210);
            this->c67->Margin = System::Windows::Forms::Padding(2);
            this->c67->Name = L"c67";
            this->c67->Size = System::Drawing::Size(32, 35);
            this->c67->TabIndex = 61;
            this->c67->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c67->TextChanged += gcnew System::EventHandler(this, &MyForm::c67_TextChanged);
            // 
            // c77
            // 
            this->c77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c77->Location = System::Drawing::Point(234, 264);
            this->c77->Margin = System::Windows::Forms::Padding(2);
            this->c77->Name = L"c77";
            this->c77->Size = System::Drawing::Size(32, 35);
            this->c77->TabIndex = 62;
            this->c77->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c77->TextChanged += gcnew System::EventHandler(this, &MyForm::c77_TextChanged);
            // 
            // c87
            // 
            this->c87->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c87->Location = System::Drawing::Point(234, 303);
            this->c87->Margin = System::Windows::Forms::Padding(2);
            this->c87->Name = L"c87";
            this->c87->Size = System::Drawing::Size(32, 35);
            this->c87->TabIndex = 63;
            this->c87->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c87->TextChanged += gcnew System::EventHandler(this, &MyForm::c87_TextChanged);
            // 
            // c86
            // 
            this->c86->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c86->Location = System::Drawing::Point(189, 302);
            this->c86->Margin = System::Windows::Forms::Padding(2);
            this->c86->Name = L"c86";
            this->c86->Size = System::Drawing::Size(32, 35);
            this->c86->TabIndex = 64;
            this->c86->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c86->TextChanged += gcnew System::EventHandler(this, &MyForm::c86_TextChanged);
            // 
            // c85
            // 
            this->c85->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c85->Location = System::Drawing::Point(153, 303);
            this->c85->Margin = System::Windows::Forms::Padding(2);
            this->c85->Name = L"c85";
            this->c85->Size = System::Drawing::Size(32, 35);
            this->c85->TabIndex = 65;
            this->c85->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c85->TextChanged += gcnew System::EventHandler(this, &MyForm::c85_TextChanged);
            // 
            // c84
            // 
            this->c84->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c84->Location = System::Drawing::Point(117, 303);
            this->c84->Margin = System::Windows::Forms::Padding(2);
            this->c84->Name = L"c84";
            this->c84->Size = System::Drawing::Size(32, 35);
            this->c84->TabIndex = 66;
            this->c84->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c84->TextChanged += gcnew System::EventHandler(this, &MyForm::c84_TextChanged);
            // 
            // c83
            // 
            this->c83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c83->Location = System::Drawing::Point(75, 303);
            this->c83->Margin = System::Windows::Forms::Padding(2);
            this->c83->Name = L"c83";
            this->c83->Size = System::Drawing::Size(32, 35);
            this->c83->TabIndex = 67;
            this->c83->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c83->TextChanged += gcnew System::EventHandler(this, &MyForm::c83_TextChanged);
            // 
            // c82
            // 
            this->c82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c82->Location = System::Drawing::Point(38, 303);
            this->c82->Margin = System::Windows::Forms::Padding(2);
            this->c82->Name = L"c82";
            this->c82->Size = System::Drawing::Size(32, 35);
            this->c82->TabIndex = 68;
            this->c82->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c82->TextChanged += gcnew System::EventHandler(this, &MyForm::c82_TextChanged);
            // 
            // c81
            // 
            this->c81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c81->Location = System::Drawing::Point(2, 303);
            this->c81->Margin = System::Windows::Forms::Padding(2);
            this->c81->Name = L"c81";
            this->c81->Size = System::Drawing::Size(32, 35);
            this->c81->TabIndex = 69;
            this->c81->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c81->TextChanged += gcnew System::EventHandler(this, &MyForm::c81_TextChanged);
            // 
            // c93
            // 
            this->c93->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c93->Location = System::Drawing::Point(74, 341);
            this->c93->Margin = System::Windows::Forms::Padding(2);
            this->c93->Name = L"c93";
            this->c93->Size = System::Drawing::Size(32, 35);
            this->c93->TabIndex = 70;
            this->c93->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c93->TextChanged += gcnew System::EventHandler(this, &MyForm::c93_TextChanged);
            // 
            // c92
            // 
            this->c92->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c92->Location = System::Drawing::Point(38, 341);
            this->c92->Margin = System::Windows::Forms::Padding(2);
            this->c92->Name = L"c92";
            this->c92->Size = System::Drawing::Size(32, 35);
            this->c92->TabIndex = 71;
            this->c92->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c92->TextChanged += gcnew System::EventHandler(this, &MyForm::c92_TextChanged);
            // 
            // c91
            // 
            this->c91->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c91->Location = System::Drawing::Point(2, 341);
            this->c91->Margin = System::Windows::Forms::Padding(2);
            this->c91->Name = L"c91";
            this->c91->Size = System::Drawing::Size(32, 35);
            this->c91->TabIndex = 72;
            this->c91->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c91->TextChanged += gcnew System::EventHandler(this, &MyForm::c91_TextChanged);
            // 
            // c89
            // 
            this->c89->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c89->Location = System::Drawing::Point(306, 303);
            this->c89->Margin = System::Windows::Forms::Padding(2);
            this->c89->Name = L"c89";
            this->c89->Size = System::Drawing::Size(32, 35);
            this->c89->TabIndex = 73;
            this->c89->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c89->TextChanged += gcnew System::EventHandler(this, &MyForm::c89_TextChanged);
            // 
            // c88
            // 
            this->c88->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c88->Location = System::Drawing::Point(270, 303);
            this->c88->Margin = System::Windows::Forms::Padding(2);
            this->c88->Name = L"c88";
            this->c88->Size = System::Drawing::Size(32, 35);
            this->c88->TabIndex = 74;
            this->c88->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c88->TextChanged += gcnew System::EventHandler(this, &MyForm::c88_TextChanged);
            // 
            // c99
            // 
            this->c99->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c99->Location = System::Drawing::Point(306, 342);
            this->c99->Margin = System::Windows::Forms::Padding(2);
            this->c99->Name = L"c99";
            this->c99->Size = System::Drawing::Size(32, 35);
            this->c99->TabIndex = 76;
            this->c99->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c99->TextChanged += gcnew System::EventHandler(this, &MyForm::c99_TextChanged);
            // 
            // c98
            // 
            this->c98->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c98->Location = System::Drawing::Point(270, 341);
            this->c98->Margin = System::Windows::Forms::Padding(2);
            this->c98->Name = L"c98";
            this->c98->Size = System::Drawing::Size(32, 35);
            this->c98->TabIndex = 77;
            this->c98->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c98->TextChanged += gcnew System::EventHandler(this, &MyForm::c98_TextChanged);
            // 
            // c97
            // 
            this->c97->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c97->Location = System::Drawing::Point(234, 341);
            this->c97->Margin = System::Windows::Forms::Padding(2);
            this->c97->Name = L"c97";
            this->c97->Size = System::Drawing::Size(32, 35);
            this->c97->TabIndex = 78;
            this->c97->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c97->TextChanged += gcnew System::EventHandler(this, &MyForm::c97_TextChanged);
            // 
            // c96
            // 
            this->c96->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c96->Location = System::Drawing::Point(189, 341);
            this->c96->Margin = System::Windows::Forms::Padding(2);
            this->c96->Name = L"c96";
            this->c96->Size = System::Drawing::Size(32, 35);
            this->c96->TabIndex = 79;
            this->c96->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c96->TextChanged += gcnew System::EventHandler(this, &MyForm::c96_TextChanged);
            // 
            // c95
            // 
            this->c95->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c95->Location = System::Drawing::Point(153, 341);
            this->c95->Margin = System::Windows::Forms::Padding(2);
            this->c95->Name = L"c95";
            this->c95->Size = System::Drawing::Size(32, 35);
            this->c95->TabIndex = 80;
            this->c95->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c95->TextChanged += gcnew System::EventHandler(this, &MyForm::c95_TextChanged);
            // 
            // c94
            // 
            this->c94->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->c94->Location = System::Drawing::Point(117, 341);
            this->c94->Margin = System::Windows::Forms::Padding(2);
            this->c94->Name = L"c94";
            this->c94->Size = System::Drawing::Size(32, 35);
            this->c94->TabIndex = 81;
            this->c94->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->c94->TextChanged += gcnew System::EventHandler(this, &MyForm::c94_TextChanged);
            // 
            // difficulty
            // 
            this->difficulty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->difficulty->Location = System::Drawing::Point(16, 14);
            this->difficulty->Margin = System::Windows::Forms::Padding(2);
            this->difficulty->Name = L"difficulty";
            this->difficulty->Size = System::Drawing::Size(120, 43);
            this->difficulty->TabIndex = 83;
            this->difficulty->Text = L"EASY";
            this->difficulty->UseVisualStyleBackColor = true;
            this->difficulty->Click += gcnew System::EventHandler(this, &MyForm::difficulty_Click);
            // 
            // create
            // 
            this->create->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->create->Location = System::Drawing::Point(16, 61);
            this->create->Margin = System::Windows::Forms::Padding(2);
            this->create->Name = L"create";
            this->create->Size = System::Drawing::Size(120, 42);
            this->create->TabIndex = 84;
            this->create->Text = L"CREATE";
            this->create->UseVisualStyleBackColor = true;
            this->create->Click += gcnew System::EventHandler(this, &MyForm::create_Click);
            // 
            // hint
            // 
            this->hint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->hint->Location = System::Drawing::Point(18, 60);
            this->hint->Margin = System::Windows::Forms::Padding(2);
            this->hint->Name = L"hint";
            this->hint->Size = System::Drawing::Size(118, 44);
            this->hint->TabIndex = 86;
            this->hint->Text = L"HINT";
            this->hint->UseVisualStyleBackColor = true;
            this->hint->Click += gcnew System::EventHandler(this, &MyForm::hint_Click);
            // 
            // solve
            // 
            this->solve->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->solve->Location = System::Drawing::Point(16, 12);
            this->solve->Margin = System::Windows::Forms::Padding(2);
            this->solve->Name = L"solve";
            this->solve->Size = System::Drawing::Size(120, 45);
            this->solve->TabIndex = 87;
            this->solve->Text = L"SOLVE";
            this->solve->UseVisualStyleBackColor = true;
            this->solve->Click += gcnew System::EventHandler(this, &MyForm::solve_Click);
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
            this->panel1->Controls->Add(this->CHECK);
            this->panel1->Controls->Add(this->EXIT);
            this->panel1->Controls->Add(this->solve);
            this->panel1->Controls->Add(this->hint);
            this->panel1->Location = System::Drawing::Point(406, 180);
            this->panel1->Margin = System::Windows::Forms::Padding(2);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(150, 211);
            this->panel1->TabIndex = 88;
            // 
            // CHECK
            // 
            this->CHECK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CHECK->Location = System::Drawing::Point(18, 108);
            this->CHECK->Margin = System::Windows::Forms::Padding(2);
            this->CHECK->Name = L"CHECK";
            this->CHECK->Size = System::Drawing::Size(118, 42);
            this->CHECK->TabIndex = 89;
            this->CHECK->Text = L"CHECK";
            this->CHECK->UseVisualStyleBackColor = true;
            this->CHECK->Click += gcnew System::EventHandler(this, &MyForm::CHECK_Click);
            // 
            // EXIT
            // 
            this->EXIT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->EXIT->Location = System::Drawing::Point(18, 154);
            this->EXIT->Margin = System::Windows::Forms::Padding(2);
            this->EXIT->Name = L"EXIT";
            this->EXIT->Size = System::Drawing::Size(118, 42);
            this->EXIT->TabIndex = 88;
            this->EXIT->Text = L"EXIT";
            this->EXIT->UseVisualStyleBackColor = true;
            this->EXIT->Click += gcnew System::EventHandler(this, &MyForm::EXIT_Click);
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
            this->panel2->Controls->Add(this->difficulty);
            this->panel2->Controls->Add(this->create);
            this->panel2->Location = System::Drawing::Point(406, 9);
            this->panel2->Margin = System::Windows::Forms::Padding(2);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(150, 116);
            this->panel2->TabIndex = 89;
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
            this->panel3->Controls->Add(this->c94);
            this->panel3->Controls->Add(this->c95);
            this->panel3->Controls->Add(this->c96);
            this->panel3->Controls->Add(this->c97);
            this->panel3->Controls->Add(this->c98);
            this->panel3->Controls->Add(this->c99);
            this->panel3->Controls->Add(this->c88);
            this->panel3->Controls->Add(this->c89);
            this->panel3->Controls->Add(this->c91);
            this->panel3->Controls->Add(this->c92);
            this->panel3->Controls->Add(this->c93);
            this->panel3->Controls->Add(this->c81);
            this->panel3->Controls->Add(this->c82);
            this->panel3->Controls->Add(this->c83);
            this->panel3->Controls->Add(this->c84);
            this->panel3->Controls->Add(this->c85);
            this->panel3->Controls->Add(this->c86);
            this->panel3->Controls->Add(this->c87);
            this->panel3->Controls->Add(this->c77);
            this->panel3->Controls->Add(this->c67);
            this->panel3->Controls->Add(this->c61);
            this->panel3->Controls->Add(this->c62);
            this->panel3->Controls->Add(this->c63);
            this->panel3->Controls->Add(this->c64);
            this->panel3->Controls->Add(this->c65);
            this->panel3->Controls->Add(this->c66);
            this->panel3->Controls->Add(this->c71);
            this->panel3->Controls->Add(this->c72);
            this->panel3->Controls->Add(this->c73);
            this->panel3->Controls->Add(this->c74);
            this->panel3->Controls->Add(this->c75);
            this->panel3->Controls->Add(this->c76);
            this->panel3->Controls->Add(this->c69);
            this->panel3->Controls->Add(this->c79);
            this->panel3->Controls->Add(this->c68);
            this->panel3->Controls->Add(this->c78);
            this->panel3->Controls->Add(this->c42);
            this->panel3->Controls->Add(this->c43);
            this->panel3->Controls->Add(this->c44);
            this->panel3->Controls->Add(this->c45);
            this->panel3->Controls->Add(this->c46);
            this->panel3->Controls->Add(this->c47);
            this->panel3->Controls->Add(this->c48);
            this->panel3->Controls->Add(this->c49);
            this->panel3->Controls->Add(this->c51);
            this->panel3->Controls->Add(this->c52);
            this->panel3->Controls->Add(this->c53);
            this->panel3->Controls->Add(this->c54);
            this->panel3->Controls->Add(this->c55);
            this->panel3->Controls->Add(this->c56);
            this->panel3->Controls->Add(this->c57);
            this->panel3->Controls->Add(this->c58);
            this->panel3->Controls->Add(this->c59);
            this->panel3->Controls->Add(this->c15);
            this->panel3->Controls->Add(this->c25);
            this->panel3->Controls->Add(this->c35);
            this->panel3->Controls->Add(this->c16);
            this->panel3->Controls->Add(this->c26);
            this->panel3->Controls->Add(this->c36);
            this->panel3->Controls->Add(this->c17);
            this->panel3->Controls->Add(this->c27);
            this->panel3->Controls->Add(this->c37);
            this->panel3->Controls->Add(this->c18);
            this->panel3->Controls->Add(this->c28);
            this->panel3->Controls->Add(this->c38);
            this->panel3->Controls->Add(this->c19);
            this->panel3->Controls->Add(this->c29);
            this->panel3->Controls->Add(this->c39);
            this->panel3->Controls->Add(this->c41);
            this->panel3->Controls->Add(this->c12);
            this->panel3->Controls->Add(this->c13);
            this->panel3->Controls->Add(this->c21);
            this->panel3->Controls->Add(this->c22);
            this->panel3->Controls->Add(this->c23);
            this->panel3->Controls->Add(this->c31);
            this->panel3->Controls->Add(this->c32);
            this->panel3->Controls->Add(this->c33);
            this->panel3->Controls->Add(this->c14);
            this->panel3->Controls->Add(this->c24);
            this->panel3->Controls->Add(this->c34);
            this->panel3->Controls->Add(this->c11);
            this->panel3->Location = System::Drawing::Point(12, 9);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(342, 382);
            this->panel3->TabIndex = 90;
            // 
            // timer1
            // 
            this->timer1->Interval = 1000;
            this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(446, 132);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(70, 42);
            this->label1->TabIndex = 91;
            this->label1->Text = L"0:0";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
            this->ClientSize = System::Drawing::Size(582, 403);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->panel3);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel1);
            this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Margin = System::Windows::Forms::Padding(2);
            this->Name = L"MyForm";
            this->Text = L"Sudoku";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->panel1->ResumeLayout(false);
            this->panel2->ResumeLayout(false);
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        public:
           bool isValid(vector<vector<int>>& board, int row, int column, int n) {
               for (int i = 0; i < 9; i++) {
                   if (board[i][column] == n) 
                       return false;
                   
                   if (board[row][i] == n) 
                       return false;
                   
                   if (board[3 * (row / 3) + i / 3][3 * (column / 3) + i % 3] == n) 
                       return false;
                   
               }
               return true;
            }
           bool solveBoard(vector<vector<int>>& board) {
               int random = 0;
               for (int i = 0; i < board.size(); i++) {
                   for (int j = 0; j < board[0].size(); j++) {
                       if (board[i][j] == 0) {
                           for (int k = 1; k <= 9; k++) {
                               random = rand() % 9 + 1;
                               if (isValid(board, i, j, random)) {
                                   board[i][j] = random;
                                   if (solveBoard(board) == true) {
                                       return true;
                                   }
                                   else
                                       board[i][j] = 0;
                               }
                           }
                           return false;
                       }
                   }
               }
               return true;
           }
           bool solveBoard2(vector<vector<int>>& board) {
               
               for (int i = 0; i < board.size(); i++) {
                   for (int j = 0; j < board[0].size(); j++) {
                       if (board[i][j] == 0) {
                           for (int k = 1; k <= 9; k++) {
                               
                               if (isValid(board, i, j, k)) {
                                   board[i][j] = k;
                                   if (solveBoard2(board) == true) {
                                       return true;
                                   }
                                   else
                                       board[i][j] = 0;
                               }
                           }
                           return false;
                       }
                   }
               }
               return true;
           }
           void displayBoard(vector<vector<int>>& board) {
               if (board[0][0] != 0)
                   c11->Text = board[0][0] + "";
               else
                   c11->Text = "";
               if (board[0][1] != 0)
               c12->Text = board[0][1] + "";
               else
                   c12->Text = "";
               if (board[0][2] != 0)
               c13->Text = board[0][2] + "";
               else
                   c13->Text = "";
               if (board[0][3] != 0)
               c14->Text = board[0][3] + "";
               else
                   c14->Text = "";
               if (board[0][4] != 0)
               c15->Text = board[0][4] + "";
               else
                   c15->Text = "";
               if (board[0][5] != 0)
               c16->Text = board[0][5] + "";
               else
                   c16->Text = "";
               if (board[0][6] != 0)
               c17->Text = board[0][6] + "";
               else
                   c17->Text = "";
               if (board[0][7] != 0)
               c18->Text = board[0][7] + "";
               else
                   c18->Text = "";
               if (board[0][8] != 0)
               c19->Text = board[0][8] + "";
               else
                   c19->Text = "";
               if (board[1][0] != 0)
               c21->Text = board[1][0] + "";
               else
                   c21->Text = "";
               if (board[1][1] != 0)
               c22->Text = board[1][1] + "";
               else
                   c22->Text = "";
               if (board[1][2] != 0)
               c23->Text = board[1][2] + "";
               else
                   c23->Text = "";
               if (board[1][3] != 0)
               c24->Text = board[1][3] + "";
               else
                   c24->Text = "";
               if (board[1][4] != 0)
               c25->Text = board[1][4] + "";
               else
                   c25->Text = "";
               if (board[1][5] != 0)
               c26->Text = board[1][5] + "";
               else
                   c26->Text = "";
               if (board[1][6] != 0)
               c27->Text = board[1][6] + "";
               else
                   c27->Text = "";
               if (board[1][7] != 0)
               c28->Text = board[1][7] + "";
               else
                   c28->Text = "";
               if (board[1][8] != 0)
               c29->Text = board[1][8] + "";
               else
                   c29->Text = "";
               if (board[2][0] != 0)
               c31->Text = board[2][0] + "";
               else
                   c31->Text = "";
               if (board[2][1] != 0)
               c32->Text = board[2][1] + "";
               else
                   c32->Text = "";
               if (board[2][2] != 0)
               c33->Text = board[2][2] + "";
               else
                   c33->Text = "";
               if (board[2][3] != 0)
               c34->Text = board[2][3] + "";
               else
                   c34->Text = "";
               if (board[2][4] != 0)
               c35->Text = board[2][4] + "";
               else
                   c35->Text = "";
               if (board[2][5] != 0)
               c36->Text = board[2][5] + "";
               else
                   c36->Text = "";
               if (board[2][6] != 0)
               c37->Text = board[2][6] + "";
               else
                   c37->Text = "";
               if (board[2][7] != 0)
               c38->Text = board[2][7] + "";
               else
                   c38->Text = "";
               if (board[2][8] != 0)
               c39->Text = board[2][8] + "";
               else
                   c39->Text = "";
               if (board[3][0] != 0)
               c41->Text = board[3][0] + "";
               else
                   c41->Text = "";
               if (board[3][1] != 0)
               c42->Text = board[3][1] + "";
               else
                   c42->Text = "";
               if (board[3][2] != 0)
               c43->Text = board[3][2] + "";
               else
                   c43->Text = "";
               if (board[3][3] != 0)
               c44->Text = board[3][3] + "";
               else
                   c44->Text = "";
               if (board[3][4] != 0)
               c45->Text = board[3][4] + "";
               else
                   c45->Text = "";
               if (board[3][5] != 0)
               c46->Text = board[3][5] + "";
               else
                   c46->Text = "";
               if (board[3][6] != 0)
               c47->Text = board[3][6] + "";
               else
                   c47->Text = "";
               if (board[3][7] != 0)
               c48->Text = board[3][7] + "";
               else
                   c48->Text = "";
               if (board[3][8] != 0)
               c49->Text = board[3][8] + "";
               else
                   c49->Text = "";
               if (board[4][0] != 0)
               c51->Text = board[4][0] + "";
               else
                   c51->Text = "";
               if (board[4][1] != 0)
               c52->Text = board[4][1] + "";
               else
                   c52->Text = "";
               if (board[4][2] != 0)
               c53->Text = board[4][2] + "";
               else
                   c53->Text = "";
               if (board[4][3] != 0)
               c54->Text = board[4][3] + "";
               else
                   c54->Text = "";
               if (board[4][4] != 0)
               c55->Text = board[4][4] + "";
               else
                   c55->Text = "";
               if (board[4][5] != 0)
               c56->Text = board[4][5] + "";
               else
                   c56->Text = "";
               if (board[4][6] != 0)
               c57->Text = board[4][6] + "";
               else
                   c57->Text = "";
               if (board[4][7] != 0)
               c58->Text = board[4][7] + "";
               else
                   c58->Text = "";
               if (board[4][8] != 0)
               c59->Text = board[4][8] + "";
               else
                   c59->Text = "";
               if (board[5][0] != 0)
               c61->Text = board[5][0] + "";
               else
                   c61->Text = "";
               if (board[5][1] != 0)
               c62->Text = board[5][1] + "";
               else
                   c62->Text = "";
               if (board[5][2] != 0)
               c63->Text = board[5][2] + "";
               else
                   c63->Text = "";
               if (board[5][3] != 0)
               c64->Text = board[5][3] + "";
               else
                   c64->Text = "";
               if (board[5][4] != 0)
               c65->Text = board[5][4] + "";
               else
                   c65->Text = "";
               if (board[5][5] != 0)
               c66->Text = board[5][5] + "";
               else
                   c66->Text = "";
               if (board[5][6] != 0)
               c67->Text = board[5][6] + "";
               else
                   c67->Text = "";
               if (board[5][7] != 0)
               c68->Text = board[5][7] + "";
               else
                   c68->Text = "";
               if (board[5][8] != 0)
               c69->Text = board[5][8] + "";
               else
                   c69->Text = "";
               if (board[6][0] != 0)
               c71->Text = board[6][0] + "";
               else
                   c71->Text = "";
               if (board[6][1] != 0)
               c72->Text = board[6][1] + "";
               else
                   c72->Text = "";
               if (board[6][2] != 0)
               c73->Text = board[6][2] + "";
               else
                   c73->Text = "";
               if (board[6][3] != 0)
               c74->Text = board[6][3] + "";
               else
                   c74->Text = "";
               if (board[6][4] != 0)
               c75->Text = board[6][4] + "";
               else
                   c75->Text = "";
               if (board[6][5] != 0)
               c76->Text = board[6][5] + "";
               else
                   c76->Text = "";
               if (board[6][6] != 0)
               c77->Text = board[6][6] + "";
               else
                   c77->Text = "";
               if (board[6][7] != 0)
               c78->Text = board[6][7] + "";
               else
                   c78->Text = "";
               if (board[6][8] != 0)
               c79->Text = board[6][8] + "";
               else
                   c79->Text = "";
               if (board[7][0] != 0)
               c81->Text = board[7][0] + "";
               else
                   c81->Text = "";
               if (board[7][1] != 0)
               c82->Text = board[7][1] + "";
               else
                   c82->Text = "";
               if (board[7][2] != 0)
               c83->Text = board[7][2] + "";
               else
                   c83->Text = "";
               if (board[7][3] != 0)
               c84->Text = board[7][3] + "";
               else
                   c84->Text = "";
               if (board[7][4] != 0)
               c85->Text = board[7][4] + "";
               else
                   c85->Text = "";
               if (board[7][5] != 0)
               c86->Text = board[7][5] + "";
               else
                   c86->Text = "";
               if (board[7][6] != 0)
               c87->Text = board[7][6] + "";
               else
                   c87->Text = "";
               if (board[7][7] != 0)
               c88->Text = board[7][7] + "";
               else
                   c88->Text = "";
               if (board[7][8] != 0)
               c89->Text = board[7][8] + "";
               else
                   c89->Text = "";
               if (board[8][0] != 0)
               c91->Text = board[8][0] + "";
               else
                   c91->Text = "";
               if (board[8][1] != 0)
               c92->Text = board[8][1] + "";
               else
                   c92->Text = "";
               if (board[8][2] != 0)
               c93->Text = board[8][2] + "";
               else
                   c93->Text = "";
               if (board[8][3] != 0)
               c94->Text = board[8][3] + "";
               else
                   c94->Text = "";
               if (board[8][4] != 0)
               c95->Text = board[8][4] + "";
               else
                   c95->Text = "";
               if (board[8][5] != 0)
               c96->Text = board[8][5] + "";
               else
                   c96->Text = "";
               if (board[8][6] != 0)
               c97->Text = board[8][6] + "";
               else
                   c97->Text = "";
               if (board[8][7] != 0)
               c98->Text = board[8][7] + "";
               else
                   c98->Text = "";
               if (board[8][8] != 0)
               c99->Text = board[8][8] + "";
               else
                   c99->Text = "";
           }
           void storeBoard(vector<vector<int>>& board) {
               if ((c11->Text)->Length != 0)
                   board[0][0] = System::Convert::ToInt16(c11->Text);
               else
                   board[0][0] = 0;

               if ((c12->Text)->Length != 0)
                   board[0][1] = System::Convert::ToInt16(c12->Text);
               else
                   board[0][1] = 0;

               if ((c13->Text)->Length != 0)
                   board[0][2] = System::Convert::ToInt16(c13->Text);
               else
                   board[0][2] = 0;

               if ((c14->Text)->Length != 0)
                   board[0][3] = System::Convert::ToInt16(c14->Text);
               else
                   board[0][3] = 0;

               if ((c15->Text)->Length != 0)
                   board[0][4] = System::Convert::ToInt16(c15->Text);
               else
                   board[0][4] = 0;

               if ((c16->Text)->Length != 0)
                   board[0][5] = System::Convert::ToInt16(c16->Text);
               else
                   board[0][5] = 0;

               if ((c17->Text)->Length != 0)
                   board[0][6] = System::Convert::ToInt16(c17->Text);
               else
                   board[0][6] = 0;

               if ((c18->Text)->Length != 0)
                   board[0][7] = System::Convert::ToInt16(c18->Text);
               else
                   board[0][7] = 0;

               if ((c19->Text)->Length != 0)
                   board[0][8] = System::Convert::ToInt16(c19->Text);
               else
                   board[0][8] = 0;

               if ((c21->Text)->Length != 0)
                   board[1][0] = System::Convert::ToInt16(c21->Text);
               else
                   board[1][0] = 0;

               if ((c22->Text)->Length != 0)
                   board[1][1] = System::Convert::ToInt16(c22->Text);
               else
                   board[1][1] = 0;
               if ((c23->Text)->Length != 0)
                   board[1][2] = System::Convert::ToInt16(c23->Text);
               else
                   board[1][2] = 0;

               if ((c24->Text)->Length != 0)
                   board[1][3] = System::Convert::ToInt16(c24->Text);
               else
                   board[1][3] = 0;

               if ((c25->Text)->Length != 0)
                   board[1][4] = System::Convert::ToInt16(c25->Text);
               else
                   board[1][4] = 0;

               if ((c26->Text)->Length != 0)
                   board[1][5] = System::Convert::ToInt16(c26->Text);
               else
                   board[1][5] = 0;

               if ((c27->Text)->Length != 0)
                   board[1][6] = System::Convert::ToInt16(c27->Text);
               else
                   board[1][6] = 0;

               if ((c28->Text)->Length != 0)
                   board[1][7] = System::Convert::ToInt16(c28->Text);
               else
                   board[1][7] = 0;

               if ((c29->Text)->Length != 0)
                   board[1][8] = System::Convert::ToInt16(c29->Text);
               else
                   board[1][8] = 0;

               if ((c31->Text)->Length != 0)
                   board[2][0] = System::Convert::ToInt16(c31->Text);
               else
                   board[2][0] = 0;

               if ((c32->Text)->Length != 0)
                   board[2][1] = System::Convert::ToInt16(c32->Text);
               else
                   board[2][1] = 0;
               if ((c33->Text)->Length != 0)
                   board[2][2] = System::Convert::ToInt16(c33->Text);
               else
                   board[2][2] = 0;

               if ((c34->Text)->Length != 0)
                   board[2][3] = System::Convert::ToInt16(c34->Text);
               else
                   board[2][3] = 0;

               if ((c35->Text)->Length != 0)
                   board[2][4] = System::Convert::ToInt16(c35->Text);
               else
                   board[2][4] = 0;

               if ((c36->Text)->Length != 0)
                   board[2][5] = System::Convert::ToInt16(c36->Text);
               else
                   board[2][5] = 0;

               if ((c37->Text)->Length != 0)
                   board[2][6] = System::Convert::ToInt16(c37->Text);
               else
                   board[2][6] = 0;

               if ((c38->Text)->Length != 0)
                   board[2][7] = System::Convert::ToInt16(c38->Text);
               else
                   board[2][7] = 0;

               if ((c39->Text)->Length != 0)
                   board[2][8] = System::Convert::ToInt16(c39->Text);
               else
                   board[2][8] = 0;

               if ((c41->Text)->Length != 0)
                   board[3][0] = System::Convert::ToInt16(c41->Text);
               else
                   board[3][0] = 0;

               if ((c42->Text)->Length != 0)
                   board[3][1] = System::Convert::ToInt16(c42->Text);
               else
                   board[3][1] = 0;
               if ((c43->Text)->Length != 0)
                   board[3][2] = System::Convert::ToInt16(c43->Text);
               else
                   board[3][2] = 0;

               if ((c44->Text)->Length != 0)
                   board[3][3] = System::Convert::ToInt16(c44->Text);
               else
                   board[3][3] = 0;

               if ((c45->Text)->Length != 0)
                   board[3][4] = System::Convert::ToInt16(c45->Text);
               else
                   board[3][4] = 0;

               if ((c46->Text)->Length != 0)
                   board[3][5] = System::Convert::ToInt16(c46->Text);
               else
                   board[3][5] = 0;

               if ((c47->Text)->Length != 0)
                   board[3][6] = System::Convert::ToInt16(c47->Text);
               else
                   board[3][6] = 0;

               if ((c48->Text)->Length != 0)
                   board[3][7] = System::Convert::ToInt16(c48->Text);
               else
                   board[3][7] = 0;

               if ((c49->Text)->Length != 0)
                   board[3][8] = System::Convert::ToInt16(c49->Text);
               else
                   board[3][8] = 0;
 
               if ((c51->Text)->Length != 0)
                   board[4][0] = System::Convert::ToInt16(c51->Text);
               else
                   board[4][0] = 0;

               if ((c52->Text)->Length != 0)
                   board[4][1] = System::Convert::ToInt16(c52->Text);
               else
                   board[4][1] = 0;
               if ((c53->Text)->Length != 0)
                   board[4][2] = System::Convert::ToInt16(c53->Text);
               else
                   board[4][2] = 0;

               if ((c54->Text)->Length != 0)
                   board[4][3] = System::Convert::ToInt16(c54->Text);
               else
                   board[4][3] = 0;

               if ((c55->Text)->Length != 0)
                   board[4][4] = System::Convert::ToInt16(c55->Text);
               else
                   board[4][4] = 0;

               if ((c56->Text)->Length != 0)
                   board[4][5] = System::Convert::ToInt16(c56->Text);
               else
                   board[4][5] = 0;

               if ((c57->Text)->Length != 0)
                   board[4][6] = System::Convert::ToInt16(c57->Text);
               else
                   board[4][6] = 0;

               if ((c58->Text)->Length != 0)
                   board[4][7] = System::Convert::ToInt16(c58->Text);
               else
                   board[4][7] = 0;

               if ((c59->Text)->Length != 0)
                   board[4][8] = System::Convert::ToInt16(c59->Text);
               else
                   board[4][8] = 0;

               if ((c61->Text)->Length != 0)
                   board[5][0] = System::Convert::ToInt16(c61->Text);
               else
                   board[5][0] = 0;

               if ((c62->Text)->Length != 0)
                   board[5][1] = System::Convert::ToInt16(c62->Text);
               else
                   board[5][1] = 0;
               if ((c63->Text)->Length != 0)
                   board[5][2] = System::Convert::ToInt16(c63->Text);
               else
                   board[5][2] = 0;

               if ((c64->Text)->Length != 0)
                   board[5][3] = System::Convert::ToInt16(c64->Text);
               else
                   board[5][3] = 0;

               if ((c65->Text)->Length != 0)
                   board[5][4] = System::Convert::ToInt16(c65->Text);
               else
                   board[5][4] = 0;

               if ((c66->Text)->Length != 0)
                   board[5][5] = System::Convert::ToInt16(c66->Text);
               else
                   board[5][5] = 0;

               if ((c67->Text)->Length != 0)
                   board[5][6] = System::Convert::ToInt16(c67->Text);
               else
                   board[5][6] = 0;

               if ((c68->Text)->Length != 0)
                   board[5][7] = System::Convert::ToInt16(c68->Text);
               else
                   board[5][7] = 0;

               if ((c69->Text)->Length != 0)
                   board[5][8] = System::Convert::ToInt16(c69->Text);
               else
                   board[5][8] = 0;

               if ((c71->Text)->Length != 0)
                   board[6][0] = System::Convert::ToInt16(c71->Text);
               else
                   board[6][0] = 0;

               if ((c72->Text)->Length != 0)
                   board[6][1] = System::Convert::ToInt16(c72->Text);
               else
                   board[6][1] = 0;
               if ((c73->Text)->Length != 0)
                   board[6][2] = System::Convert::ToInt16(c73->Text);
               else
                   board[6][2] = 0;

               if ((c74->Text)->Length != 0)
                   board[6][3] = System::Convert::ToInt16(c74->Text);
               else
                   board[6][3] = 0;

               if ((c75->Text)->Length != 0)
                   board[6][4] = System::Convert::ToInt16(c75->Text);
               else
                   board[6][4] = 0;

               if ((c76->Text)->Length != 0)
                   board[6][5] = System::Convert::ToInt16(c76->Text);
               else
                   board[6][5] = 0;

               if ((c77->Text)->Length != 0)
                   board[6][6] = System::Convert::ToInt16(c77->Text);
               else
                   board[6][6] = 0;

               if ((c78->Text)->Length != 0)
                   board[6][7] = System::Convert::ToInt16(c78->Text);
               else
                   board[6][7] = 0;

               if ((c79->Text)->Length != 0)
                   board[6][8] = System::Convert::ToInt16(c79->Text);
               else
                   board[6][8] = 0;
               if ((c81->Text)->Length != 0)
                   board[7][0] = System::Convert::ToInt16(c81->Text);
               else
                   board[7][0] = 0;

               if ((c82->Text)->Length != 0)
                   board[7][1] = System::Convert::ToInt16(c82->Text);
               else
                   board[7][1] = 0;
               if ((c83->Text)->Length != 0)
                   board[7][2] = System::Convert::ToInt16(c83->Text);
               else
                   board[7][2] = 0;

               if ((c84->Text)->Length != 0)
                   board[7][3] = System::Convert::ToInt16(c84->Text);
               else
                   board[7][3] = 0;

               if ((c85->Text)->Length != 0)
                   board[7][4] = System::Convert::ToInt16(c85->Text);
               else
                   board[7][4] = 0;

               if ((c86->Text)->Length != 0)
                   board[7][5] = System::Convert::ToInt16(c86->Text);
               else
                   board[7][5] = 0;

               if ((c87->Text)->Length != 0)
                   board[7][6] = System::Convert::ToInt16(c87->Text);
               else
                   board[7][6] = 0;

               if ((c88->Text)->Length != 0)
                   board[7][7] = System::Convert::ToInt16(c88->Text);
               else
                   board[7][7] = 0;

               if ((c89->Text)->Length != 0)
                   board[7][8] = System::Convert::ToInt16(c89->Text);
               else
                   board[7][8] = 0;
               if ((c91->Text)->Length != 0)
                   board[8][0] = System::Convert::ToInt16(c91->Text);
               else
                   board[8][0] = 0;

               if ((c92->Text)->Length != 0)
                   board[8][1] = System::Convert::ToInt16(c92->Text);
               else
                   board[8][1] = 0;
               if ((c93->Text)->Length != 0)
                   board[8][2] = System::Convert::ToInt16(c93->Text);
               else
                   board[8][2] = 0;

               if ((c94->Text)->Length != 0)
                   board[8][3] = System::Convert::ToInt16(c94->Text);
               else
                   board[8][3] = 0;

               if ((c95->Text)->Length != 0)
                   board[8][4] = System::Convert::ToInt16(c95->Text);
               else
                   board[8][4] = 0;

               if ((c96->Text)->Length != 0)
                   board[8][5] = System::Convert::ToInt16(c96->Text);
               else
                   board[8][5] = 0;

               if ((c97->Text)->Length != 0)
                   board[8][6] = System::Convert::ToInt16(c97->Text);
               else
                   board[8][6] = 0;

               if ((c98->Text)->Length != 0)
                   board[8][7] = System::Convert::ToInt16(c98->Text);
               else
                   board[8][7] = 0;

               if ((c99->Text)->Length != 0)
                   board[8][8] = System::Convert::ToInt16(c99->Text);
               else
                   board[8][8] = 0;
           }
           void readonlyBoard() {
               vector<vector<int>> board(9, vector<int>(9));
               storeBoard(board);
               if (board[0][0]!=0) {
                   c11->ReadOnly = true;
               }
               if (board[0][1] != 0) {
                   c12->ReadOnly = true;
               }
               if (board[0][2] != 0) {
                   c13->ReadOnly = true;
               }
               if (board[0][3] != 0) {
                   c14->ReadOnly = true;
               }
               if (board[0][4] != 0) {
                   c15->ReadOnly = true;
               }
               if (board[0][5] != 0) {
                   c16->ReadOnly = true;
               }
               if (board[0][6] != 0) {
                   c17->ReadOnly = true;
               }
               if (board[0][7] != 0) {
                   c18->ReadOnly = true;
               }
               if (board[0][8] != 0) {
                   c19->ReadOnly = true;
               }
               if (board[1][0] != 0) {
                   c21->ReadOnly = true;
               }
               if (board[1][1] != 0) {
                   c22->ReadOnly = true;
               }
               if (board[1][2] != 0) {
                   c23->ReadOnly = true;
               }
               if (board[1][3] != 0) {
                   c24->ReadOnly = true;
               }
               if (board[1][4] != 0) {
                   c25->ReadOnly = true;
               }
               if (board[1][5] != 0) {
                   c26->ReadOnly = true;
               }
               if (board[1][6] != 0) {
                   c27->ReadOnly = true;
               }
               if (board[1][7] != 0) {
                   c28->ReadOnly = true;
               }
               if (board[1][8] != 0) {
                   c29->ReadOnly = true;
               }
               if (board[2][0] != 0) {
                   c31->ReadOnly = true;
               }
               if (board[2][1] != 0) {
                   c32->ReadOnly = true;
               }
               if (board[2][2] != 0) {
                   c33->ReadOnly = true;
               }
               if (board[2][3] != 0) {
                   c34->ReadOnly = true;
               }
               if (board[2][4] != 0) {
                   c35->ReadOnly = true;
               }
               if (board[2][5] != 0) {
                   c36->ReadOnly = true;
               }
               if (board[2][6] != 0) {
                   c37->ReadOnly = true;
               }
               if (board[2][7] != 0) {
                   c38->ReadOnly = true;
               }
               if (board[2][8] != 0) {
                   c39->ReadOnly = true;
               }
               if (board[3][0] != 0) {
                   c41->ReadOnly = true;
               }
               if (board[3][1] != 0) {
                   c42->ReadOnly = true;
               }
               if (board[3][2] != 0) {
                   c43->ReadOnly = true;
               }
               if (board[3][3] != 0) {
                   c44->ReadOnly = true;
               }
               if (board[3][4] != 0) {
                   c45->ReadOnly = true;
               }
               if (board[3][5] != 0) {
                   c46->ReadOnly = true;
               }
               if (board[3][6] != 0) {
                   c47->ReadOnly = true;
               }
               if (board[3][7] != 0) {
                   c48->ReadOnly = true;
               }
               if (board[3][8] != 0) {
                   c49->ReadOnly = true;
               }
               if (board[4][0] != 0) {
                   c51->ReadOnly = true;
               }
               if (board[4][1] != 0) {
                   c52->ReadOnly = true;
               }
               if (board[4][2] != 0) {
                   c53->ReadOnly = true;
               }
               if (board[4][3] != 0) {
                   c54->ReadOnly = true;
               }
               if (board[4][4] != 0) {
                   c55->ReadOnly = true;
               }
               if (board[4][5] != 0) {
                   c56->ReadOnly = true;
               }
               if (board[4][6] != 0) {
                   c57->ReadOnly = true;
               }
               if (board[4][7] != 0) {
                   c58->ReadOnly = true;
               }
               if (board[4][8] != 0) {
                   c59->ReadOnly = true;
               }
               if (board[5][0] != 0) {
                   c61->ReadOnly = true;
               }
               if (board[5][1] != 0) {
                   c62->ReadOnly = true;
               }
               if (board[5][2] != 0) {
                   c63->ReadOnly = true;
               }
               if (board[5][3] != 0) {
                   c64->ReadOnly = true;
               }
               if (board[5][4] != 0) {
                   c65->ReadOnly = true;
               }
               if (board[5][5] != 0) {
                   c66->ReadOnly = true;
               }
               if (board[5][6] != 0) {
                   c67->ReadOnly = true;
               }
               if (board[5][7] != 0) {
                   c68->ReadOnly = true;
               }
               if (board[5][8] != 0) {
                   c69->ReadOnly = true;
               }
               if (board[6][0] != 0) {
                   c71->ReadOnly = true;
               }
               if (board[6][1] != 0) {
                   c72->ReadOnly = true;
               }
               if (board[6][2] != 0) {
                   c73->ReadOnly = true;
               }
               if (board[6][3] != 0) {
                   c74->ReadOnly = true;
               }
               if (board[6][4] != 0) {
                   c75->ReadOnly = true;
               }
               if (board[6][5] != 0) {
                   c76->ReadOnly = true;
               }
               if (board[6][6] != 0) {
                   c77->ReadOnly = true;
               }
               if (board[6][7] != 0) {
                   c78->ReadOnly = true;
               }
               if (board[6][8] != 0) {
                   c79->ReadOnly = true;
               }
               if (board[7][0] != 0) {
                   c81->ReadOnly = true;
               }
               if (board[7][1] != 0) {
                   c82->ReadOnly = true;
               }
               if (board[7][2] != 0) {
                   c83->ReadOnly = true;
               }
               if (board[7][3] != 0) {
                   c84->ReadOnly = true;
               }
               if (board[7][4] != 0) {
                   c85->ReadOnly = true;
               }
               if (board[7][5] != 0) {
                   c86->ReadOnly = true;
               }
               if (board[7][6] != 0) {
                   c87->ReadOnly = true;
               }
               if (board[7][7] != 0) {
                   c88->ReadOnly = true;
               }
               if (board[7][8] != 0) {
                   c89->ReadOnly = true;
               }
               if (board[8][0] != 0) {
                   c91->ReadOnly = true;
               }
               if (board[8][1] != 0) {
                   c92->ReadOnly = true;
               }
               if (board[8][2] != 0) {
                   c93->ReadOnly = true;
               }
               if (board[8][3] != 0) {
                   c94->ReadOnly = true;
               }
               if (board[8][4] != 0) {
                   c95->ReadOnly = true;
               }
               if (board[8][5] != 0) {
                   c96->ReadOnly = true;
               }
               if (board[8][6] != 0) {
                   c97->ReadOnly = true;
               }
               if (board[8][7] != 0) {
                   c98->ReadOnly = true;
               }
               if (board[8][8] != 0) {
                   c99->ReadOnly = true;
               }
           }
           void allowBoard() {
               c11->ReadOnly = false;
               c12->ReadOnly = false;
               c13->ReadOnly = false;
               c14->ReadOnly = false;
               c15->ReadOnly = false;
               c16->ReadOnly = false;
               c17->ReadOnly = false;
               c18->ReadOnly = false;
               c19->ReadOnly = false;
               c21->ReadOnly = false;
               c22->ReadOnly = false;
               c23->ReadOnly = false;
               c24->ReadOnly = false;
               c25->ReadOnly = false;
               c26->ReadOnly = false;
               c27->ReadOnly = false;
               c28->ReadOnly = false;
               c29->ReadOnly = false;
               c31->ReadOnly = false;
               c32->ReadOnly = false;
               c33->ReadOnly = false;
               c34->ReadOnly = false;
               c35->ReadOnly = false;
               c36->ReadOnly = false;
               c37->ReadOnly = false;
               c38->ReadOnly = false;
               c39->ReadOnly = false;
               c41->ReadOnly = false;
               c42->ReadOnly = false;
               c43->ReadOnly = false;
               c44->ReadOnly = false;
               c45->ReadOnly = false;
               c46->ReadOnly = false;
               c47->ReadOnly = false;
               c48->ReadOnly = false;
               c49->ReadOnly = false;
               c51->ReadOnly = false;
               c52->ReadOnly = false;
               c53->ReadOnly = false;
               c54->ReadOnly = false;
               c55->ReadOnly = false;
               c56->ReadOnly = false;
               c57->ReadOnly = false;
               c58->ReadOnly = false;
               c59->ReadOnly = false;
               c61->ReadOnly = false;
               c62->ReadOnly = false;
               c63->ReadOnly = false;
               c64->ReadOnly = false;
               c65->ReadOnly = false;
               c66->ReadOnly = false;
               c67->ReadOnly = false;
               c68->ReadOnly = false;
               c69->ReadOnly = false;
               c71->ReadOnly = false;
               c72->ReadOnly = false;
               c73->ReadOnly = false;
               c74->ReadOnly = false;
               c75->ReadOnly = false;
               c76->ReadOnly = false;
               c77->ReadOnly = false;
               c78->ReadOnly = false;
               c79->ReadOnly = false;
               c81->ReadOnly = false;
               c82->ReadOnly = false;
               c83->ReadOnly = false;
               c84->ReadOnly = false;
               c85->ReadOnly = false;
               c86->ReadOnly = false;
               c87->ReadOnly = false;
               c88->ReadOnly = false;
               c89->ReadOnly = false;
               c91->ReadOnly = false;
               c92->ReadOnly = false;
               c93->ReadOnly = false;
               c94->ReadOnly = false;
               c95->ReadOnly = false;
               c96->ReadOnly = false;
               c97->ReadOnly = false;
               c98->ReadOnly = false;
               c99->ReadOnly = false;
           }
           void temparraystore(vector<vector<int>>& board) {
               temparray11 = board[0][0];
               temparray12 = board[0][1];
               temparray13 = board[0][2];
               temparray14 = board[0][3];
               temparray15 = board[0][4];
               temparray16 = board[0][5];
               temparray17 = board[0][6];
               temparray18 = board[0][7];
               temparray19 = board[0][8];

               temparray21 = board[1][0];
               temparray22 = board[1][1];
               temparray23 = board[1][2];
               temparray24 = board[1][3];
               temparray25 = board[1][4];
               temparray26 = board[1][5];
               temparray27 = board[1][6];
               temparray28 = board[1][7];
               temparray29 = board[1][8];

               temparray31 = board[2][0];
               temparray32 = board[2][1];
               temparray33 = board[2][2];
               temparray34 = board[2][3];
               temparray35 = board[2][4];
               temparray36 = board[2][5];
               temparray37 = board[2][6];
               temparray38 = board[2][7];
               temparray39 = board[2][8];

               temparray41 = board[3][0];
               temparray42 = board[3][1];
               temparray43 = board[3][2];
               temparray44 = board[3][3];
               temparray45 = board[3][4];
               temparray46 = board[3][5];
               temparray47 = board[3][6];
               temparray48 = board[3][7];
               temparray49 = board[3][8];

               temparray51 = board[4][0];
               temparray52 = board[4][1];
               temparray53 = board[4][2];
               temparray54 = board[4][3];
               temparray55 = board[4][4];
               temparray56 = board[4][5];
               temparray57 = board[4][6];
               temparray58 = board[4][7];
               temparray59 = board[4][8];

               temparray61 = board[5][0];
               temparray62 = board[5][1];
               temparray63 = board[5][2];
               temparray64 = board[5][3];
               temparray65 = board[5][4];
               temparray66 = board[5][5];
               temparray67 = board[5][6];
               temparray68 = board[5][7];
               temparray69 = board[5][8];

               temparray71 = board[6][0];
               temparray72 = board[6][1];
               temparray73 = board[6][2];
               temparray74 = board[6][3];
               temparray75 = board[6][4];
               temparray76 = board[6][5];
               temparray77 = board[6][6];
               temparray78 = board[6][7];
               temparray79 = board[6][8];

               temparray81 = board[7][0];
               temparray82 = board[7][1];
               temparray83 = board[7][2];
               temparray84 = board[7][3];
               temparray85 = board[7][4];
               temparray86 = board[7][5];
               temparray87 = board[7][6];
               temparray88 = board[7][7];
               temparray89 = board[7][8];

               temparray91 = board[8][0];
               temparray92 = board[8][1];
               temparray93 = board[8][2];
               temparray94 = board[8][3];
               temparray95 = board[8][4];
               temparray96 = board[8][5];
               temparray97 = board[8][6];
               temparray98 = board[8][7];
               temparray99 = board[8][8];


           }
           void temparrayget(vector<vector<int>>& board) {
               board[0][0] = temparray11;
               board[0][1] = temparray12;
               board[0][2] = temparray13;
               board[0][3] = temparray14;
               board[0][4] = temparray15;
               board[0][5] = temparray16;
               board[0][6] = temparray17;
               board[0][7] = temparray18;
               board[0][8] = temparray19;

               board[1][0] = temparray21;
               board[1][1] = temparray22;
               board[1][2] = temparray23;
               board[1][3] = temparray24;
               board[1][4] = temparray25;
               board[1][5] = temparray26;
               board[1][6] = temparray27;
               board[1][7] = temparray28;
               board[1][8] = temparray29;

               board[2][0] = temparray31;
               board[2][1] = temparray32;
               board[2][2] = temparray33;
               board[2][3] = temparray34;
               board[2][4] = temparray35;
               board[2][5] = temparray36;
               board[2][6] = temparray37;
               board[2][7] = temparray38;
               board[2][8] = temparray39;

               board[3][0] = temparray41;
               board[3][1] = temparray42;
               board[3][2] = temparray43;
               board[3][3] = temparray44;
               board[3][4] = temparray45;
               board[3][5] = temparray46;
               board[3][6] = temparray47;
               board[3][7] = temparray48;
               board[3][8] = temparray49;

               board[4][0] = temparray51;
               board[4][1] = temparray52;
               board[4][2] = temparray53;
               board[4][3] = temparray54;
               board[4][4] = temparray55;
               board[4][5] = temparray56;
               board[4][6] = temparray57;
               board[4][7] = temparray58;
               board[4][8] = temparray59;

               board[5][0] = temparray61;
               board[5][1] = temparray62;
               board[5][2] = temparray63;
               board[5][3] = temparray64;
               board[5][4] = temparray65;
               board[5][5] = temparray66;
               board[5][6] = temparray67;
               board[5][7] = temparray68;
               board[5][8] = temparray69;

               board[6][0] = temparray71;
               board[6][1] = temparray72;
               board[6][2] = temparray73;
               board[6][3] = temparray74;
               board[6][4] = temparray75;
               board[6][5] = temparray76;
               board[6][6] = temparray77;
               board[6][7] = temparray78;
               board[6][8] = temparray79;

               board[7][0] = temparray81;
               board[7][1] = temparray82;
               board[7][2] = temparray83;
               board[7][3] = temparray84;
               board[7][4] = temparray85;
               board[7][5] = temparray86;
               board[7][6] = temparray87;
               board[7][7] = temparray88;
               board[7][8] = temparray89;

               board[8][0] = temparray91;
               board[8][1] = temparray92;
               board[8][2] = temparray93;
               board[8][3] = temparray94;
               board[8][4] = temparray95;
               board[8][5] = temparray96;
               board[8][6] = temparray97;
               board[8][7] = temparray98;
               board[8][8] = temparray99;
           }
           bool checkboard(vector<vector<int>>& board) {
               vector<vector<int>> solvedboard(9, vector<int>(9));
               temparrayget(solvedboard);
               for (int i = 0; i < 9; i++) {
                   for (int j = 0; j < 9; j++) {
                       if (board[i][j] != 0) {
                           if (board[i][j] != solvedboard[i][j]) {
                                return false;
                           }
                       }
                   }
               }
               return true;
           }
private: System::Void difficulty_Click(System::Object^ sender, System::EventArgs^ e) {
    if (difficulty->Text == "EASY") {
        difficulty->Text = "MEDIUM";
    }
    else if (difficulty->Text == "MEDIUM") {
        difficulty->Text = "HARD";
    }
    else if(difficulty->Text=="HARD") {
        difficulty->Text = "EASY";

    }
    
}
private: System::Void create_Click(System::Object^ sender, System::EventArgs^ e) {
    allowBoard();
    int random1 = 0;
    int random2 = 0;
    srand(time(0));
    vector<vector<int>> board(9, vector<int>(9));
    solveBoard(board);
    temparraystore(board);
    if (difficulty->Text == "EASY") {
        for (int i = 0; i < 25;) {
            random1 = rand() % 9;
                random2 = rand() % 9;
                if (board[random1][random2] != 0) {
                    board[random1][random2] = 0;
                    i++;
                }
 
        }
    }
    if (difficulty->Text == "MEDIUM") {
        for (int i = 0; i < 35;) {
            random1 = rand() % 9;
            random2 = rand() % 9;
            if (board[random1][random2] != 0) {
                board[random1][random2] = 0;
                i++;
            }

        }
    }
    if (difficulty->Text == "HARD") {
        for (int i = 0; i < 45;) {
            random1 = rand() % 9;
            random2 = rand() % 9;
            if (board[random1][random2] != 0) {
                board[random1][random2] = 0;
                i++;
            }

        }
    }
    displayBoard(board);
    readonlyBoard();
    timer1->Enabled = true;
    seconds = 0;
    minutes = 0;
}
private: System::Void solve_Click(System::Object^ sender, System::EventArgs^ e) {
    vector<vector<int>> board2(9, vector<int>(9));
    vector<vector<int>> board(9, vector<int>(9));
    storeBoard(board);
    if (temparray11 == 0) {
        String^ s = "Click on create first !!";
        MessageBox::Show(s);
    }
    else if (checkboard(board) == true) {
        solveBoard2(board);
        displayBoard(board);
        readonlyBoard();
        timer1->Enabled = false;
        seconds = 0;
        minutes = 0;
    }
    else
    {
        String^ s = "Sudoku Incorrect !!";
        MessageBox::Show(s);
    }
}
private: System::Void hint_Click(System::Object^ sender, System::EventArgs^ e) {
    vector<vector<int>> board(9, vector<int>(9));
    vector<vector<int>> boardsolved(9, vector<int>(9));
    storeBoard(board);
    storeBoard(boardsolved);
    solveBoard2(boardsolved);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[i][j] == 0) {
                board[i][j] = boardsolved[i][j];
                goto hello;
            }
        }
    }

hello:
    displayBoard(board);
    readonlyBoard();
}
private: System::Void EXIT_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}
private: System::Void c39_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c39->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c39->Text = "";
    }
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
    seconds++;
    if (seconds == 60) {
        seconds = 0;
        minutes++;
    }
    sec = Convert::ToString(seconds);
    min = Convert::ToString(minutes);
    label1->Text = min + ":" + sec;
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void c11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call=false;
    for (int i = 1; i < 10; i++) {
        if (c11->Text == ""+i) {
            call = true;
        }
    }
    if (call != true) {
        c11->Text = "";
    }
}
private: System::Void c12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c12->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c12->Text = "";
    }
}
private: System::Void c13_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c13->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c13->Text = "";
    }
}
private: System::Void c14_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c14->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c14->Text = "";
    }
}
private: System::Void c15_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c15->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c15->Text = "";
    }
}
private: System::Void c16_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c16->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c16->Text = "";
    }
}
private: System::Void c17_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c17->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c17->Text = "";
    }
}
private: System::Void c18_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c18->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c18->Text = "";
    }
}
private: System::Void c19_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c19->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c19->Text = "";
    }
}
private: System::Void c21_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c21->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c21->Text = "";
    }
}
private: System::Void c22_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c22->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c22->Text = "";
    }
}
private: System::Void c23_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c23->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c23->Text = "";
    }
}
private: System::Void c24_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c24->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c24->Text = "";
    }
}
private: System::Void c25_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c25->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c25->Text = "";
    }
}
private: System::Void c26_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c26->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c26->Text = "";
    }
}
private: System::Void c27_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c27->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c27->Text = "";
    }
}
private: System::Void c28_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c28->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c28->Text = "";
    }
}
private: System::Void c29_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c29->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c29->Text = "";
    }
}
private: System::Void c31_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c31->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c31->Text = "";
    }
}
private: System::Void c32_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c32->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c32->Text = "";
    }
}
private: System::Void c33_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c33->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c33->Text = "";
    }
}
private: System::Void c34_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c34->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c34->Text = "";
    }
}
private: System::Void c35_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c35->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c35->Text = "";
    }
}
private: System::Void c36_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c36->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c36->Text = "";
    }
}
private: System::Void c37_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c37->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c37->Text = "";
    }
}
private: System::Void c38_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c38->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c38->Text = "";
    }
}
private: System::Void c41_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c41->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c41->Text = "";
    }
}
private: System::Void c42_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c42->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c42->Text = "";
    }
}
private: System::Void c43_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c43->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c43->Text = "";
    }
}
private: System::Void c44_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c45->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c45->Text = "";
    }
}
private: System::Void c45_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c45->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c45->Text = "";
    }
}
private: System::Void c46_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c46->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c46->Text = "";
    }
}
private: System::Void c47_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c47->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c47->Text = "";
    }
}
private: System::Void c48_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c48->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c48->Text = "";
    }
}
private: System::Void c49_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c49->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c49->Text = "";
    }
}
private: System::Void c51_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c51->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c51->Text = "";
    }
}
private: System::Void c52_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c52->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c52->Text = "";
    }
}
private: System::Void c53_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c53->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c53->Text = "";
    }
}
private: System::Void c54_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c54->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c54->Text = "";
    }
}
private: System::Void c55_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c55->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c55->Text = "";
    }
}
private: System::Void c56_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c56->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c56->Text = "";
    }
}
private: System::Void c57_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c57->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c57->Text = "";
    }
}
private: System::Void c58_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c58->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c58->Text = "";
    }
}
private: System::Void c59_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c59->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c59->Text = "";
    }
}
private: System::Void c61_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c61->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c61->Text = "";
    }
}
private: System::Void c62_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c62->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c62->Text = "";
    }
}
private: System::Void c63_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c63->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c63->Text = "";
    }
}
private: System::Void c64_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c64->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c64->Text = "";
    }
}
private: System::Void c65_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c65->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c65->Text = "";
    }
}
private: System::Void c66_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c66->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c66->Text = "";
    }
}
private: System::Void c67_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c67->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c67->Text = "";
    }
}
private: System::Void c68_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c68->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c68->Text = "";
    }
}
private: System::Void c69_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c69->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c69->Text = "";
    }
}
private: System::Void c71_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c71->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c71->Text = "";
    }
}
private: System::Void c72_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c72->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c72->Text = "";
    }
}
private: System::Void c73_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c73->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c73->Text = "";
    }
}
private: System::Void c74_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c74->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c74->Text = "";
    }
}
private: System::Void c75_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c75->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c75->Text = "";
    }
}
private: System::Void c76_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c76->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c76->Text = "";
    }
}
private: System::Void c77_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c77->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c77->Text = "";
    }
}
private: System::Void c78_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c78->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c78->Text = "";
    }
}
private: System::Void c79_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c79->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c79->Text = "";
    }
}
private: System::Void c81_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c81->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c81->Text = "";
    }
}
private: System::Void c82_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c82->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c82->Text = "";
    }
}
private: System::Void c83_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c83->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c83->Text = "";
    }
}
private: System::Void c84_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c84->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c84->Text = "";
    }
}
private: System::Void c85_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c85->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c85->Text = "";
    }
}
private: System::Void c86_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c86->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c86->Text = "";
    }
}
private: System::Void c87_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c87->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c87->Text = "";
    }
}
private: System::Void c88_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c88->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c88->Text = "";
    }
}
private: System::Void c89_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c89->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c89->Text = "";
    }
}
private: System::Void c91_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c91->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c91->Text = "";
    }
}
private: System::Void c92_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c92->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c92->Text = "";
    }
}
private: System::Void c93_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c93->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c93->Text = "";
    }
}
private: System::Void c94_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c94->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c94->Text = "";
    }
}
private: System::Void c95_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c95->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c95->Text = "";
    }
}
private: System::Void c96_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c96->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c96->Text = "";
    }
}
private: System::Void c97_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c97->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c97->Text = "";
    }
}
private: System::Void c98_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c98->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c98->Text = "";
    }
}
private: System::Void c99_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    boolean call = false;
    for (int i = 1; i < 10; i++) {
        if (c99->Text == "" + i) {
            call = true;
        }
    }
    if (call != true) {
        c99->Text = "";
    }
}
private: System::Void CHECK_Click(System::Object^ sender, System::EventArgs^ e) {
    vector<vector<int>> board(9, vector<int>(9));
    vector<vector<int>> board2(9, vector<int>(9));
    storeBoard(board);
    board2 = board;
    solveBoard2(board);
    if(board==board2){
        String^ s = "Congrats on solving !!";
        MessageBox::Show(s);
        timer1->Stop();
        minutes = 0;
        seconds = 0;
    }
    else if (temparray11 == 0) {
        String^ s = "Click on create first !!";
        MessageBox::Show(s);
    }
    else if (checkboard(board) == true) {
        String^ s = "Sudoku is correct !!";
        MessageBox::Show(s);
    }
    else {
        String^ s = "Sudoku is incorrect !!";
        MessageBox::Show(s);
    }
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
