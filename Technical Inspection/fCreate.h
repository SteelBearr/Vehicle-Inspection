#include "MyForm.h";

#pragma once

namespace TechnicalInspection {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для fCreate
	/// </summary>
	public ref class fCreate : public System::Windows::Forms::Form
	{
	public:
		fCreate(MyForm^ parent)
		{
			InitializeComponent();
			parentForm = parent;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~fCreate()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		MyForm^ parentForm;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;



	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;


	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::Label^  label11;

	private: System::Windows::Forms::Label^  label12;


	private: System::Windows::Forms::Label^  label13;



	private: System::Windows::Forms::Label^  label15;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;

	private: System::Windows::Forms::Label^  label18;


	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TrackBar^  p1trackBar1;
	private: System::Windows::Forms::TrackBar^  p1trackBar3;
	private: System::Windows::Forms::TrackBar^  p2trackBar0;
	private: System::Windows::Forms::TrackBar^  p2trackBar1;
	private: System::Windows::Forms::TrackBar^  p2trackBar2;
	private: System::Windows::Forms::TrackBar^  p2trackBar3;
	private: System::Windows::Forms::TrackBar^  p2trackBar4;
	private: System::Windows::Forms::TrackBar^  p2trackBar5;
	private: System::Windows::Forms::TrackBar^  p3trackBar0;
	private: System::Windows::Forms::TrackBar^  p3trackBar1;
	private: System::Windows::Forms::TrackBar^  p3trackBar2;













	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TrackBar^  p3trackBar3;

	private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::TrackBar^  p3trackBar4;

	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Button^  btnApply;
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TrackBar^  p1trackBar5;

	private: System::Windows::Forms::TrackBar^  p1trackBar4;

	private: System::Windows::Forms::TrackBar^  p1trackBar2;

	private: System::Windows::Forms::TrackBar^  p1trackBar0;


	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;

			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
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
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->p1trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->p1trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->p2trackBar0 = (gcnew System::Windows::Forms::TrackBar());
			this->p2trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->p2trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->p2trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->p2trackBar4 = (gcnew System::Windows::Forms::TrackBar());
			this->p2trackBar5 = (gcnew System::Windows::Forms::TrackBar());
			this->p3trackBar0 = (gcnew System::Windows::Forms::TrackBar());
			this->p3trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->p3trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->p3trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->p3trackBar4 = (gcnew System::Windows::Forms::TrackBar());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->btnApply = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->p1trackBar5 = (gcnew System::Windows::Forms::TrackBar());
			this->p1trackBar4 = (gcnew System::Windows::Forms::TrackBar());
			this->p1trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->p1trackBar0 = (gcnew System::Windows::Forms::TrackBar());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1trackBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2trackBar0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2trackBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2trackBar4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2trackBar5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p3trackBar0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p3trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p3trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p3trackBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p3trackBar4))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1trackBar5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1trackBar4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1trackBar0))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Блок управления двигателем:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(16, 25);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(145, 17);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"Аккумулятор разряжен";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(16, 48);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(288, 17);
			this->checkBox2->TabIndex = 9;
			this->checkBox2->Text = L"Ошибка датчика положения дроссельной заслонки";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(16, 71);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(225, 17);
			this->checkBox3->TabIndex = 10;
			this->checkBox3->Text = L"Ошибка датчика положения коленвала";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(16, 95);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(236, 17);
			this->checkBox4->TabIndex = 11;
			this->checkBox4->Text = L"Ошибка передних подушек безопасности";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(16, 118);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(139, 17);
			this->checkBox5->TabIndex = 12;
			this->checkBox5->Text = L"Ошибка катализатора";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(16, 141);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(197, 17);
			this->checkBox6->TabIndex = 13;
			this->checkBox6->Text = L"Ошибка датчика расхода топлива";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(16, 164);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(265, 17);
			this->checkBox7->TabIndex = 14;
			this->checkBox7->Text = L"Неисправность муфты вентилятора радиатора";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(-3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Трансмиссия:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(2, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(349, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Давление воздуха в передних колёсах:                                         Бар";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(349, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Давление воздуха в задних колёсах:                                             Ба"
				L"р";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(2, 71);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(340, 13);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Износ протектора передних шин:                                                   "
				L" %";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 97);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(340, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Износ протектора задних шин:                                                     "
				L"   %";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(2, 123);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(342, 13);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Балансировка передних колёс:                                                     "
				L"   г.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1, 149);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(342, 13);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Балансировка задних колёс:                                                       "
				L"     г.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(-3, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 13);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Подвеска:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 19);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(339, 13);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Целостность передней подвески:                                                   "
				L"%";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 49);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(339, 13);
			this->label11->TabIndex = 31;
			this->label11->Text = L"Целостность задней подвески:                                                     "
				L"  %";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(3, 75);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(339, 13);
			this->label12->TabIndex = 33;
			this->label12->Text = L"Износ передних тормозных дисков:                                               %";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(3, 101);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(339, 13);
			this->label13->TabIndex = 35;
			this->label13->Text = L"Износ задних тормозных дисков:                                                   "
				L"%";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(3, 127);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(339, 13);
			this->label15->TabIndex = 39;
			this->label15->Text = L"Износ передних тормозных колодок:                                             %";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(3, 153);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(339, 13);
			this->label16->TabIndex = 41;
			this->label16->Text = L"Износ задних тормозных колодок:                                                 %"
				L"";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(-3, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(65, 13);
			this->label17->TabIndex = 43;
			this->label17->Text = L"Двигатель:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(3, 22);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(340, 13);
			this->label18->TabIndex = 44;
			this->label18->Text = L"Уровень масла:                                                                   "
				L"              %";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(3, 48);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(339, 13);
			this->label19->TabIndex = 46;
			this->label19->Text = L"Уровень жидкости ГУР:                                                            "
				L"       %";
			// 
			// p1trackBar1
			// 
			this->p1trackBar1->AutoSize = false;
			this->p1trackBar1->LargeChange = 3;
			this->p1trackBar1->Location = System::Drawing::Point(216, 45);
			this->p1trackBar1->Maximum = 25;
			this->p1trackBar1->Name = L"p1trackBar1";
			this->p1trackBar1->Size = System::Drawing::Size(100, 20);
			this->p1trackBar1->TabIndex = 48;
			this->p1trackBar1->Scroll += gcnew System::EventHandler(this, &fCreate::showState);
			// 
			// p1trackBar3
			// 
			this->p1trackBar3->AutoSize = false;
			this->p1trackBar3->Location = System::Drawing::Point(216, 97);
			this->p1trackBar3->Maximum = 100;
			this->p1trackBar3->Name = L"p1trackBar3";
			this->p1trackBar3->Size = System::Drawing::Size(100, 20);
			this->p1trackBar3->TabIndex = 49;
			this->p1trackBar3->Scroll += gcnew System::EventHandler(this, &fCreate::showState);
			// 
			// p2trackBar0
			// 
			this->p2trackBar0->AutoSize = false;
			this->p2trackBar0->Location = System::Drawing::Point(216, 19);
			this->p2trackBar0->Maximum = 100;
			this->p2trackBar0->Name = L"p2trackBar0";
			this->p2trackBar0->Size = System::Drawing::Size(100, 20);
			this->p2trackBar0->TabIndex = 50;
			this->p2trackBar0->Scroll += gcnew System::EventHandler(this, &fCreate::showState);
			// 
			// p2trackBar1
			// 
			this->p2trackBar1->AutoSize = false;
			this->p2trackBar1->Location = System::Drawing::Point(216, 45);
			this->p2trackBar1->Maximum = 100;
			this->p2trackBar1->Name = L"p2trackBar1";
			this->p2trackBar1->Size = System::Drawing::Size(100, 20);
			this->p2trackBar1->TabIndex = 51;
			this->p2trackBar1->Scroll += gcnew System::EventHandler(this, &fCreate::showState);
			// 
			// p2trackBar2
			// 
			this->p2trackBar2->AutoSize = false;
			this->p2trackBar2->Location = System::Drawing::Point(216, 71);
			this->p2trackBar2->Maximum = 100;
			this->p2trackBar2->Name = L"p2trackBar2";
			this->p2trackBar2->Size = System::Drawing::Size(100, 20);
			this->p2trackBar2->TabIndex = 52;
			this->p2trackBar2->Scroll += gcnew System::EventHandler(this, &fCreate::showState);
			// 
			// p2trackBar3
			// 
			this->p2trackBar3->AutoSize = false;
			this->p2trackBar3->Location = System::Drawing::Point(216, 97);
			this->p2trackBar3->Maximum = 100;
			this->p2trackBar3->Name = L"p2trackBar3";
			this->p2trackBar3->Size = System::Drawing::Size(100, 20);
			this->p2trackBar3->TabIndex = 53;
			this->p2trackBar3->Scroll += gcnew System::EventHandler(this, &fCreate::showState);
			// 
			// p2trackBar4
			// 
			this->p2trackBar4->AutoSize = false;
			this->p2trackBar4->Location = System::Drawing::Point(216, 123);
			this->p2trackBar4->Maximum = 100;
			this->p2trackBar4->Name = L"p2trackBar4";
			this->p2trackBar4->Size = System::Drawing::Size(100, 20);
			this->p2trackBar4->TabIndex = 55;
			this->p2trackBar4->Scroll += gcnew System::EventHandler(this, &fCreate::showState);
			// 
			// p2trackBar5
			// 
			this->p2trackBar5->AutoSize = false;
			this->p2trackBar5->Location = System::Drawing::Point(216, 149);
			this->p2trackBar5->Maximum = 100;
			this->p2trackBar5->Name = L"p2trackBar5";
			this->p2trackBar5->Size = System::Drawing::Size(100, 20);
			this->p2trackBar5->TabIndex = 56;
			this->p2trackBar5->Scroll += gcnew System::EventHandler(this, &fCreate::showState);
			// 
			// p3trackBar0
			// 
			this->p3trackBar0->AutoSize = false;
			this->p3trackBar0->Location = System::Drawing::Point(216, 20);
			this->p3trackBar0->Maximum = 100;
			this->p3trackBar0->Name = L"p3trackBar0";
			this->p3trackBar0->Size = System::Drawing::Size(100, 20);
			this->p3trackBar0->TabIndex = 57;
			this->p3trackBar0->Scroll += gcnew System::EventHandler(this, &fCreate::showState);
			// 
			// p3trackBar1
			// 
			this->p3trackBar1->AutoSize = false;
			this->p3trackBar1->Location = System::Drawing::Point(216, 46);
			this->p3trackBar1->Maximum = 100;
			this->p3trackBar1->Name = L"p3trackBar1";
			this->p3trackBar1->Size = System::Drawing::Size(100, 20);
			this->p3trackBar1->TabIndex = 58;
			this->p3trackBar1->Scroll += gcnew System::EventHandler(this, &fCreate::showState);
			// 
			// p3trackBar2
			// 
			this->p3trackBar2->AutoSize = false;
			this->p3trackBar2->Location = System::Drawing::Point(216, 72);
			this->p3trackBar2->Maximum = 100;
			this->p3trackBar2->Name = L"p3trackBar2";
			this->p3trackBar2->Size = System::Drawing::Size(100, 20);
			this->p3trackBar2->TabIndex = 60;
			this->p3trackBar2->Scroll += gcnew System::EventHandler(this, &fCreate::showState);
			this->p3trackBar2->SizeChanged += gcnew System::EventHandler(this, &fCreate::showState);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(3, 74);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(338, 13);
			this->label20->TabIndex = 59;
			this->label20->Text = L"Уровень стеклоомывающей жидкости:                                         %";
			// 
			// p3trackBar3
			// 
			this->p3trackBar3->AutoSize = false;
			this->p3trackBar3->Location = System::Drawing::Point(216, 98);
			this->p3trackBar3->Maximum = 100;
			this->p3trackBar3->Name = L"p3trackBar3";
			this->p3trackBar3->Size = System::Drawing::Size(100, 20);
			this->p3trackBar3->TabIndex = 62;
			this->p3trackBar3->Scroll += gcnew System::EventHandler(this, &fCreate::showState);
			this->p3trackBar3->SizeChanged += gcnew System::EventHandler(this, &fCreate::showState);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(3, 100);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(338, 13);
			this->label21->TabIndex = 61;
			this->label21->Text = L"Уровень хладогента:                                                              "
				L"          %";
			// 
			// p3trackBar4
			// 
			this->p3trackBar4->AutoSize = false;
			this->p3trackBar4->Location = System::Drawing::Point(216, 124);
			this->p3trackBar4->Maximum = 100;
			this->p3trackBar4->Name = L"p3trackBar4";
			this->p3trackBar4->Size = System::Drawing::Size(100, 20);
			this->p3trackBar4->TabIndex = 64;
			this->p3trackBar4->Scroll += gcnew System::EventHandler(this, &fCreate::showState);
			this->p3trackBar4->SizeChanged += gcnew System::EventHandler(this, &fCreate::showState);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(3, 126);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(337, 13);
			this->label22->TabIndex = 63;
			this->label22->Text = L"Целостность воздушного фильтра:                                                %";
			// 
			// btnApply
			// 
			this->btnApply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->btnApply->Location = System::Drawing::Point(12, 733);
			this->btnApply->Name = L"btnApply";
			this->btnApply->Size = System::Drawing::Size(150, 30);
			this->btnApply->TabIndex = 65;
			this->btnApply->Text = L"Применить";
			this->btnApply->UseVisualStyleBackColor = true;
			this->btnApply->Click += gcnew System::EventHandler(this, &fCreate::btnApply_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->btnCancel->Location = System::Drawing::Point(214, 733);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(150, 30);
			this->btnCancel->TabIndex = 66;
			this->btnCancel->Text = L"Отмена";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &fCreate::btnCancel_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->p1trackBar5);
			this->panel1->Controls->Add(this->p1trackBar4);
			this->panel1->Controls->Add(this->p1trackBar2);
			this->panel1->Controls->Add(this->p1trackBar0);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->p1trackBar1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->p1trackBar3);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Location = System::Drawing::Point(12, 191);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(352, 186);
			this->panel1->TabIndex = 67;
			// 
			// p1trackBar5
			// 
			this->p1trackBar5->AutoSize = false;
			this->p1trackBar5->Location = System::Drawing::Point(216, 149);
			this->p1trackBar5->Maximum = 75;
			this->p1trackBar5->Name = L"p1trackBar5";
			this->p1trackBar5->Size = System::Drawing::Size(100, 20);
			this->p1trackBar5->TabIndex = 52;
			this->p1trackBar5->Scroll += gcnew System::EventHandler(this, &fCreate::showState);
			// 
			// p1trackBar4
			// 
			this->p1trackBar4->AutoSize = false;
			this->p1trackBar4->Location = System::Drawing::Point(216, 123);
			this->p1trackBar4->Maximum = 75;
			this->p1trackBar4->Name = L"p1trackBar4";
			this->p1trackBar4->Size = System::Drawing::Size(100, 20);
			this->p1trackBar4->TabIndex = 51;
			this->p1trackBar4->Scroll += gcnew System::EventHandler(this, &fCreate::showState);
			// 
			// p1trackBar2
			// 
			this->p1trackBar2->AutoSize = false;
			this->p1trackBar2->Location = System::Drawing::Point(216, 71);
			this->p1trackBar2->Maximum = 100;
			this->p1trackBar2->Name = L"p1trackBar2";
			this->p1trackBar2->Size = System::Drawing::Size(100, 20);
			this->p1trackBar2->TabIndex = 50;
			this->p1trackBar2->Scroll += gcnew System::EventHandler(this, &fCreate::showState);
			// 
			// p1trackBar0
			// 
			this->p1trackBar0->AutoSize = false;
			this->p1trackBar0->LargeChange = 3;
			this->p1trackBar0->Location = System::Drawing::Point(216, 19);
			this->p1trackBar0->Maximum = 25;
			this->p1trackBar0->Name = L"p1trackBar0";
			this->p1trackBar0->Size = System::Drawing::Size(100, 20);
			this->p1trackBar0->TabIndex = 49;
			this->p1trackBar0->Scroll += gcnew System::EventHandler(this, &fCreate::showState);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->p2trackBar0);
			this->panel2->Controls->Add(this->p2trackBar1);
			this->panel2->Controls->Add(this->p2trackBar2);
			this->panel2->Controls->Add(this->p2trackBar3);
			this->panel2->Controls->Add(this->p2trackBar5);
			this->panel2->Controls->Add(this->p2trackBar4);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Location = System::Drawing::Point(12, 383);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(352, 181);
			this->panel2->TabIndex = 68;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label17);
			this->panel3->Controls->Add(this->p3trackBar0);
			this->panel3->Controls->Add(this->p3trackBar1);
			this->panel3->Controls->Add(this->p3trackBar4);
			this->panel3->Controls->Add(this->p3trackBar2);
			this->panel3->Controls->Add(this->p3trackBar3);
			this->panel3->Controls->Add(this->label18);
			this->panel3->Controls->Add(this->label19);
			this->panel3->Controls->Add(this->label20);
			this->panel3->Controls->Add(this->label22);
			this->panel3->Controls->Add(this->label21);
			this->panel3->Location = System::Drawing::Point(12, 570);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(351, 157);
			this->panel3->TabIndex = 69;
			// 
			// fCreate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(399, 561);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnApply);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"fCreate";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Задание свойств";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &fCreate::fCreate_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1trackBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2trackBar0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2trackBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2trackBar4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2trackBar5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p3trackBar0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p3trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p3trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p3trackBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p3trackBar4))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1trackBar5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1trackBar4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1trackBar0))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void fCreate_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
				 parentForm->Enabled = true;
	}
private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
		 private: System::Void showState(System::Object^ sender, System::EventArgs^ e){
					  ToolTip^ t = gcnew ToolTip;
					  String^ val;
					  TrackBar^ tb = dynamic_cast<TrackBar^>(sender);
					  if (tb->TabIndex == 48 || tb->TabIndex == 49)
					  val = Convert::ToString((float)tb->Value/10);
					  else
					  val = Convert::ToString(tb->Value);
					  t->AutoPopDelay = 500;
					  t->SetToolTip(tb, val);

		 }
				public: static MyForm::ECB^ iecb;
				public: static MyForm::Trans^ itrans;
				public: static MyForm::Susp^ isusp;
				public: static MyForm::Engine^ iengine;
				
	private: System::Void btnApply_Click(System::Object^  sender, System::EventArgs^  e) {
				 iecb = gcnew  MyForm::ECB();
				 itrans = gcnew  MyForm::Trans();
				 isusp = gcnew  MyForm::Susp();
				 iengine = gcnew  MyForm::Engine();
				 for (int i = 1; i < 8; i++)
				 if (dynamic_cast<CheckBox^>(this->Controls["checkBox" + Convert::ToString(i)])->Checked)
					 iecb->addError(dynamic_cast<CheckBox^>(this->Controls["checkBox" + Convert::ToString(i)])->Text);
				 for (int i = 0; i < 6; i++){
					if (i>1)
						itrans->setStat(i, dynamic_cast<TrackBar^>(this->panel1->Controls["p1trackBar" + Convert::ToString(i)])->Value);
					else
						itrans->setStat(i, (float)dynamic_cast<TrackBar^>(this->panel1->Controls["p1trackBar" + Convert::ToString(i)])->Value / 10);
					isusp->setStat(i, dynamic_cast<TrackBar^>(this->panel2->Controls["p2trackBar" + Convert::ToString(i)])->Value);
				 }
				 for (int i = 0; i < 5;i++)
					 iengine->setStat(i, dynamic_cast<TrackBar^>(this->panel3->Controls["p3trackBar" + Convert::ToString(i)])->Value);
				 MyForm::car = gcnew MyForm::Car(dynamic_cast<MyForm::ECB^>(iecb), dynamic_cast<MyForm::Trans^>(itrans), dynamic_cast<MyForm::Susp^>(isusp), dynamic_cast<MyForm::Engine^>(iengine),MyForm::Machine, MyForm::color);
				 MyForm::pBMachine->Visible = true;
				 MyForm::btnBegin->Visible = true;
				 MyForm::pBMachine->Image = gcnew Bitmap(System::IO::Directory::GetCurrentDirectory()->Replace('\\', '/') + "/Image/" + MyForm::car->getType() + MyForm::car->getColor());
				 MyForm::pBBackground->Controls->Add(MyForm::pBMachine);
				 MyForm::pBMachine->Location = Point(4230, 250);
				 MyForm::pBMachine->BackColor = (gcnew Color)->Transparent;
				 String^ e = "";	
				 this->Close();
}
};
}
