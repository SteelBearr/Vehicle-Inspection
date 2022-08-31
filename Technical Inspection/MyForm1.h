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
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(MyForm^ parent)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
		MyForm^ parentForm;
	private: System::Windows::Forms::Panel^  panel0;
	protected:

	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::Label^  p1l5;

	private: System::Windows::Forms::Label^  p1l4;

	private: System::Windows::Forms::Label^  p1l3;

	private: System::Windows::Forms::Label^  p1l2;

	private: System::Windows::Forms::Label^  p1l1;

	private: System::Windows::Forms::Label^  p1l0;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;


	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  p2l5;

	private: System::Windows::Forms::Label^  p2l4;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  p2l3;

	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  p2l2;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  p2l1;

	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  p2l0;

	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  p3l4;

	private: System::Windows::Forms::Label^  p3l3;

	private: System::Windows::Forms::Label^  p3l2;

	private: System::Windows::Forms::Label^  p3l1;

	private: System::Windows::Forms::Label^  p3l0;








	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel0 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->p1l5 = (gcnew System::Windows::Forms::Label());
			this->p1l4 = (gcnew System::Windows::Forms::Label());
			this->p1l3 = (gcnew System::Windows::Forms::Label());
			this->p1l2 = (gcnew System::Windows::Forms::Label());
			this->p1l1 = (gcnew System::Windows::Forms::Label());
			this->p1l0 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->p2l5 = (gcnew System::Windows::Forms::Label());
			this->p2l4 = (gcnew System::Windows::Forms::Label());
			this->p2l3 = (gcnew System::Windows::Forms::Label());
			this->p2l2 = (gcnew System::Windows::Forms::Label());
			this->p2l1 = (gcnew System::Windows::Forms::Label());
			this->p2l0 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->p3l4 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->p3l3 = (gcnew System::Windows::Forms::Label());
			this->p3l2 = (gcnew System::Windows::Forms::Label());
			this->p3l1 = (gcnew System::Windows::Forms::Label());
			this->p3l0 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->panel0->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel0
			// 
			this->panel0->Controls->Add(this->label2);
			this->panel0->Controls->Add(this->label1);
			this->panel0->Location = System::Drawing::Point(13, 13);
			this->panel0->Name = L"panel0";
			this->panel0->Size = System::Drawing::Size(368, 200);
			this->panel0->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(23, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ошибок не обнаружено";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(208, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ошибки блока управления двигателем:";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->p1l5);
			this->panel1->Controls->Add(this->p1l4);
			this->panel1->Controls->Add(this->p1l3);
			this->panel1->Controls->Add(this->p1l2);
			this->panel1->Controls->Add(this->p1l1);
			this->panel1->Controls->Add(this->p1l0);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Location = System::Drawing::Point(13, 219);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(368, 200);
			this->panel1->TabIndex = 1;
			// 
			// p1l5
			// 
			this->p1l5->AutoSize = true;
			this->p1l5->Location = System::Drawing::Point(256, 159);
			this->p1l5->Name = L"p1l5";
			this->p1l5->Size = System::Drawing::Size(35, 13);
			this->p1l5->TabIndex = 8;
			this->p1l5->Text = L"label9";
			// 
			// p1l4
			// 
			this->p1l4->AutoSize = true;
			this->p1l4->Location = System::Drawing::Point(256, 133);
			this->p1l4->Name = L"p1l4";
			this->p1l4->Size = System::Drawing::Size(35, 13);
			this->p1l4->TabIndex = 7;
			this->p1l4->Text = L"label8";
			// 
			// p1l3
			// 
			this->p1l3->AutoSize = true;
			this->p1l3->Location = System::Drawing::Point(256, 107);
			this->p1l3->Name = L"p1l3";
			this->p1l3->Size = System::Drawing::Size(35, 13);
			this->p1l3->TabIndex = 6;
			this->p1l3->Text = L"label7";
			// 
			// p1l2
			// 
			this->p1l2->AutoSize = true;
			this->p1l2->Location = System::Drawing::Point(256, 81);
			this->p1l2->Name = L"p1l2";
			this->p1l2->Size = System::Drawing::Size(35, 13);
			this->p1l2->TabIndex = 5;
			this->p1l2->Text = L"label6";
			// 
			// p1l1
			// 
			this->p1l1->AutoSize = true;
			this->p1l1->Location = System::Drawing::Point(256, 55);
			this->p1l1->Name = L"p1l1";
			this->p1l1->Size = System::Drawing::Size(35, 13);
			this->p1l1->TabIndex = 4;
			this->p1l1->Text = L"label5";
			// 
			// p1l0
			// 
			this->p1l0->AutoSize = true;
			this->p1l0->Location = System::Drawing::Point(256, 29);
			this->p1l0->Name = L"p1l0";
			this->p1l0->Size = System::Drawing::Size(35, 13);
			this->p1l0->TabIndex = 3;
			this->p1l0->Text = L"label4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Трансмиссия:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(10, 29);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(349, 13);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Давление воздуха в передних колёсах:                                         Бар";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(11, 55);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(349, 13);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Давление воздуха в задних колёсах:                                             Ба"
				L"р";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(10, 81);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(340, 13);
			this->label12->TabIndex = 29;
			this->label12->Text = L"Износ протектора передних шин:                                                   "
				L" %";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(11, 107);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(340, 13);
			this->label13->TabIndex = 30;
			this->label13->Text = L"Износ протектора задних шин:                                                     "
				L"   %";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(10, 133);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(342, 13);
			this->label14->TabIndex = 31;
			this->label14->Text = L"Балансировка передних колёс:                                                     "
				L"   г.";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(11, 159);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(342, 13);
			this->label15->TabIndex = 32;
			this->label15->Text = L"Балансировка задних колёс:                                                       "
				L"     г.";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->p2l5);
			this->panel2->Controls->Add(this->p2l4);
			this->panel2->Controls->Add(this->p2l3);
			this->panel2->Controls->Add(this->p2l2);
			this->panel2->Controls->Add(this->p2l1);
			this->panel2->Controls->Add(this->p2l0);
			this->panel2->Controls->Add(this->label22);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->label21);
			this->panel2->Location = System::Drawing::Point(13, 425);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(368, 200);
			this->panel2->TabIndex = 2;
			// 
			// p2l5
			// 
			this->p2l5->AutoSize = true;
			this->p2l5->Location = System::Drawing::Point(250, 165);
			this->p2l5->Name = L"p2l5";
			this->p2l5->Size = System::Drawing::Size(41, 13);
			this->p2l5->TabIndex = 38;
			this->p2l5->Text = L"label23";
			// 
			// p2l4
			// 
			this->p2l4->AutoSize = true;
			this->p2l4->Location = System::Drawing::Point(250, 139);
			this->p2l4->Name = L"p2l4";
			this->p2l4->Size = System::Drawing::Size(41, 13);
			this->p2l4->TabIndex = 37;
			this->p2l4->Text = L"label24";
			// 
			// p2l3
			// 
			this->p2l3->AutoSize = true;
			this->p2l3->Location = System::Drawing::Point(250, 113);
			this->p2l3->Name = L"p2l3";
			this->p2l3->Size = System::Drawing::Size(41, 13);
			this->p2l3->TabIndex = 36;
			this->p2l3->Text = L"label25";
			// 
			// p2l2
			// 
			this->p2l2->AutoSize = true;
			this->p2l2->Location = System::Drawing::Point(250, 87);
			this->p2l2->Name = L"p2l2";
			this->p2l2->Size = System::Drawing::Size(41, 13);
			this->p2l2->TabIndex = 35;
			this->p2l2->Text = L"label26";
			// 
			// p2l1
			// 
			this->p2l1->AutoSize = true;
			this->p2l1->Location = System::Drawing::Point(250, 61);
			this->p2l1->Name = L"p2l1";
			this->p2l1->Size = System::Drawing::Size(41, 13);
			this->p2l1->TabIndex = 34;
			this->p2l1->Text = L"label27";
			// 
			// p2l0
			// 
			this->p2l0->AutoSize = true;
			this->p2l0->Location = System::Drawing::Point(250, 31);
			this->p2l0->Name = L"p2l0";
			this->p2l0->Size = System::Drawing::Size(41, 13);
			this->p2l0->TabIndex = 33;
			this->p2l0->Text = L"label28";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(60, 13);
			this->label22->TabIndex = 33;
			this->label22->Text = L"Подвеска:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(11, 31);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(339, 13);
			this->label16->TabIndex = 42;
			this->label16->Text = L"Целостность передней подвески:                                                   "
				L"%";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(11, 61);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(339, 13);
			this->label17->TabIndex = 43;
			this->label17->Text = L"Целостность задней подвески:                                                     "
				L"  %";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(11, 87);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(339, 13);
			this->label18->TabIndex = 44;
			this->label18->Text = L"Износ передних тормозных дисков:                                               %";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(11, 113);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(339, 13);
			this->label19->TabIndex = 45;
			this->label19->Text = L"Износ задних тормозных дисков:                                                   "
				L"%";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(11, 139);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(339, 13);
			this->label20->TabIndex = 46;
			this->label20->Text = L"Износ передних тормозных колодок:                                             %";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(11, 165);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(339, 13);
			this->label21->TabIndex = 47;
			this->label21->Text = L"Износ задних тормозных колодок:                                                 %"
				L"";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->p3l4);
			this->panel3->Controls->Add(this->label34);
			this->panel3->Controls->Add(this->p3l3);
			this->panel3->Controls->Add(this->p3l2);
			this->panel3->Controls->Add(this->p3l1);
			this->panel3->Controls->Add(this->p3l0);
			this->panel3->Controls->Add(this->label29);
			this->panel3->Controls->Add(this->label30);
			this->panel3->Controls->Add(this->label31);
			this->panel3->Controls->Add(this->label32);
			this->panel3->Controls->Add(this->label33);
			this->panel3->Location = System::Drawing::Point(13, 631);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(368, 171);
			this->panel3->TabIndex = 3;
			// 
			// p3l4
			// 
			this->p3l4->AutoSize = true;
			this->p3l4->Location = System::Drawing::Point(250, 137);
			this->p3l4->Name = L"p3l4";
			this->p3l4->Size = System::Drawing::Size(41, 13);
			this->p3l4->TabIndex = 52;
			this->p3l4->Text = L"label35";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(4, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(65, 13);
			this->label34->TabIndex = 48;
			this->label34->Text = L"Двигатель:";
			// 
			// p3l3
			// 
			this->p3l3->AutoSize = true;
			this->p3l3->Location = System::Drawing::Point(250, 111);
			this->p3l3->Name = L"p3l3";
			this->p3l3->Size = System::Drawing::Size(41, 13);
			this->p3l3->TabIndex = 51;
			this->p3l3->Text = L"label36";
			// 
			// p3l2
			// 
			this->p3l2->AutoSize = true;
			this->p3l2->Location = System::Drawing::Point(250, 85);
			this->p3l2->Name = L"p3l2";
			this->p3l2->Size = System::Drawing::Size(41, 13);
			this->p3l2->TabIndex = 50;
			this->p3l2->Text = L"label37";
			// 
			// p3l1
			// 
			this->p3l1->AutoSize = true;
			this->p3l1->Location = System::Drawing::Point(250, 59);
			this->p3l1->Name = L"p3l1";
			this->p3l1->Size = System::Drawing::Size(41, 13);
			this->p3l1->TabIndex = 49;
			this->p3l1->Text = L"label38";
			// 
			// p3l0
			// 
			this->p3l0->AutoSize = true;
			this->p3l0->Location = System::Drawing::Point(250, 33);
			this->p3l0->Name = L"p3l0";
			this->p3l0->Size = System::Drawing::Size(41, 13);
			this->p3l0->TabIndex = 48;
			this->p3l0->Text = L"label39";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(11, 33);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(340, 13);
			this->label29->TabIndex = 64;
			this->label29->Text = L"Уровень масла:                                                                   "
				L"              %";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(11, 59);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(339, 13);
			this->label30->TabIndex = 65;
			this->label30->Text = L"Уровень жидкости ГУР:                                                            "
				L"       %";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(11, 85);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(338, 13);
			this->label31->TabIndex = 66;
			this->label31->Text = L"Уровень стеклоомывающей жидкости:                                         %";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(11, 137);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(337, 13);
			this->label32->TabIndex = 68;
			this->label32->Text = L"Целостность воздушного фильтра:                                                %";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(11, 111);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(338, 13);
			this->label33->TabIndex = 67;
			this->label33->Text = L"Уровень хладогента:                                                              "
				L"          %";
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClose->Location = System::Drawing::Point(13, 808);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(368, 35);
			this->btnClose->TabIndex = 4;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm1::btnClose_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(399, 561);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel0);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm1";
			this->Text = L"Результаты техосмотра";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm1::MyForm1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->panel0->ResumeLayout(false);
			this->panel0->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
			 if (MyForm::car->getECB()->getErrors() != ""){
				 label2->Text = MyForm::car->getECB()->getErrors();
				 label2->ForeColor = Color::Red;
			 }
			 for (int i = 0; i < 6; i++){
				 (dynamic_cast<Label^>(this->panel1->Controls["p1l" + Convert::ToString(i)])->Text) = Convert::ToString(MyForm::car->getTrans()->getStat(i));
				 if (i<2 && (MyForm::car->getTrans()->getStat(i) > 2 || MyForm::car->getTrans()->getStat(i) < 1.8))
					 (dynamic_cast<Label^>(this->panel1->Controls["p1l" + Convert::ToString(i)])->ForeColor) = Color::Red;
				 if (i>1 && i<4 && (MyForm::car->getTrans()->getStat(i) > 70))
					 (dynamic_cast<Label^>(this->panel1->Controls["p1l" + Convert::ToString(i)])->ForeColor) = Color::Red;
				 if (i>3 && (MyForm::car->getTrans()->getStat(i) > 50 || MyForm::car->getTrans()->getStat(i) < 5))
					 (dynamic_cast<Label^>(this->panel1->Controls["p1l" + Convert::ToString(i)])->ForeColor) = Color::Red;
			 }
			 for (int i = 0; i < 6; i++){
				 (dynamic_cast<Label^>(this->panel2->Controls["p2l" + Convert::ToString(i)])->Text) = Convert::ToString(MyForm::car->getSusp()->getStat(i));
				 if (i>1 && MyForm::car->getSusp()->getStat(i) > 70)
					 (dynamic_cast<Label^>(this->panel2->Controls["p2l" + Convert::ToString(i)])->ForeColor) = Color::Red;
				 if (i<2 && MyForm::car->getSusp()->getStat(i) < 30)
					 (dynamic_cast<Label^>(this->panel2->Controls["p2l" + Convert::ToString(i)])->ForeColor) = Color::Red;
			 }
			 for (int i = 0; i < 5; i++){
				 (dynamic_cast<Label^>(this->panel3->Controls["p3l" + Convert::ToString(i)])->Text) = Convert::ToString(MyForm::car->getEngine()->getStat(i));
				 if (MyForm::car->getEngine()->getStat(i) < 30)
					 (dynamic_cast<Label^>(this->panel3->Controls["p3l" + Convert::ToString(i)])->ForeColor) = Color::Red;
			 }
}
private: System::Void MyForm1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 MyForm::pBTool->Visible = false;
			 MyForm::pBBackground->Location = Point(-4000, 137);
			 MyForm::cBColor->Enabled = true;
			 MyForm::cBMachine->Enabled = true;
			 MyForm::progressBar1->Visible = false;
			 MyForm::tBSpeed->Visible = false;
			 MyForm::lSpeed->Visible = false;
			 MyForm::lSpeedVal->Visible = false;
			 MyForm::btnCreateRandom->Enabled = true;
			 MyForm::btnCreate->Enabled = true;
			 MyForm::currentTool = 4;
			 parentForm->Enabled = true;
}
};
}
