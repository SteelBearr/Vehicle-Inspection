

#pragma once

namespace TechnicalInspection {

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
			pBBackground->Controls->Add(pBMachine);
			/*pBMachine->Location = Point(230, 250);
			Color^ color = gcnew Color;
			pBMachine->BackColor = color->Transparent;
			pBBackground->Controls->Add(pBTool);
			pBTool->Location = Point(-380, 100);
			pBTool->BackColor = color->Transparent;*/

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
	public: static System::Windows::Forms::PictureBox^  pBBackground;
	public: static System::Windows::Forms::PictureBox^  pBMachine;
	public: static System::Windows::Forms::PictureBox^  pBTool;
	public: static System::Windows::Forms::Button^  btnBegin;
	public: static System::Windows::Forms::Timer^  tspeed;
	public: static System::Windows::Forms::Label^  lSpeed;
	public: static System::Windows::Forms::ProgressBar^  progressBar1;
	public: static System::Windows::Forms::TrackBar^  tBSpeed;
	public: static System::Windows::Forms::Timer^  tPB;
	public: static System::Windows::Forms::Label^  lSpeedVal;
	public: static System::Windows::Forms::ComboBox^  cBMachine;
	public: static System::Windows::Forms::ComboBox^  cBColor;
	public: static System::Windows::Forms::Button^  btnCreate;
	public: static System::Windows::Forms::Button^  btnCreateRandom;
	public: static System::Windows::Forms::TextBox^  textBox1;
	public:















			/*public: static System::Windows::Forms::PictureBox^  pBBackground;
	public: static System::Windows::Forms::PictureBox^  pBMachine;
	public: static System::Windows::Forms::PictureBox^  pBTool;
	public: static System::Windows::Forms::Button^  btnBegin;
	public: static System::Windows::Forms::Timer^  tspeed;
	public: static System::Windows::Forms::Label^  lSpeed;
	public: static System::Windows::Forms::ProgressBar^  progressBar1;
	public: static System::Windows::Forms::TrackBar^  tBSpeed;
	public: static System::Windows::Forms::Timer^  tPB;
	public: static System::Windows::Forms::Label^  lSpeedVal;
	public: static System::Windows::Forms::ComboBox^  cBMachine;
	public: static System::Windows::Forms::ComboBox^  cBColor;
	public: static System::Windows::Forms::Button^  btnCreate;
	public: static System::Windows::Forms::Button^  btnCreateRandom;
	*/



	private: System::ComponentModel::IContainer^  components;

	protected:

	protected:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pBBackground = (gcnew System::Windows::Forms::PictureBox());
			this->pBMachine = (gcnew System::Windows::Forms::PictureBox());
			this->pBTool = (gcnew System::Windows::Forms::PictureBox());
			this->cBMachine = (gcnew System::Windows::Forms::ComboBox());
			this->cBColor = (gcnew System::Windows::Forms::ComboBox());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->btnCreateRandom = (gcnew System::Windows::Forms::Button());
			this->btnBegin = (gcnew System::Windows::Forms::Button());
			this->tspeed = (gcnew System::Windows::Forms::Timer(this->components));
			this->tBSpeed = (gcnew System::Windows::Forms::TrackBar());
			this->lSpeed = (gcnew System::Windows::Forms::Label());
			this->lSpeedVal = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->tPB = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBBackground))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBMachine))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBTool))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tBSpeed))->BeginInit();
			this->SuspendLayout();
			// 
			// pBBackground
			// 
			this->pBBackground->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pBBackground.Image")));
			this->pBBackground->Location = System::Drawing::Point(-4000, 137);
			this->pBBackground->Name = L"pBBackground";
			this->pBBackground->Size = System::Drawing::Size(5000, 563);
			this->pBBackground->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pBBackground->TabIndex = 0;
			this->pBBackground->TabStop = false;
			// 
			// pBMachine
			// 
			this->pBMachine->BackColor = System::Drawing::Color::Transparent;
			this->pBMachine->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pBMachine.Image")));
			this->pBMachine->Location = System::Drawing::Point(0, 137);
			this->pBMachine->Name = L"pBMachine";
			this->pBMachine->Size = System::Drawing::Size(750, 682);
			this->pBMachine->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pBMachine->TabIndex = 1;
			this->pBMachine->TabStop = false;
			this->pBMachine->Visible = false;
			// 
			// pBTool
			// 
			this->pBTool->BackColor = System::Drawing::Color::Transparent;
			this->pBTool->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pBTool.Image")));
			this->pBTool->Location = System::Drawing::Point(0, 137);
			this->pBTool->Name = L"pBTool";
			this->pBTool->Size = System::Drawing::Size(1000, 563);
			this->pBTool->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pBTool->TabIndex = 2;
			this->pBTool->TabStop = false;
			this->pBTool->Visible = false;
			// 
			// cBMachine
			// 
			this->cBMachine->FormattingEnabled = true;
			this->cBMachine->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Mitsubishi Lancer X 2008", L"Jaguar XF 2014" });
			this->cBMachine->Location = System::Drawing::Point(13, 12);
			this->cBMachine->Name = L"cBMachine";
			this->cBMachine->Size = System::Drawing::Size(221, 21);
			this->cBMachine->TabIndex = 5;
			this->cBMachine->Text = L"Модель автомобиля";
			this->cBMachine->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cBMachine_SelectedIndexChanged);
			// 
			// cBColor
			// 
			this->cBColor->FormattingEnabled = true;
			this->cBColor->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Белый", L"Чёрный" });
			this->cBColor->Location = System::Drawing::Point(13, 42);
			this->cBColor->Name = L"cBColor";
			this->cBColor->Size = System::Drawing::Size(221, 21);
			this->cBColor->TabIndex = 6;
			this->cBColor->Text = L"Цвет";
			this->cBColor->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cBColor_SelectedIndexChanged);
			// 
			// btnCreate
			// 
			this->btnCreate->Enabled = false;
			this->btnCreate->Location = System::Drawing::Point(13, 105);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(221, 30);
			this->btnCreate->TabIndex = 7;
			this->btnCreate->Text = L"Автомобиль с заданным состоянем";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &MyForm::btnCreate_Click);
			// 
			// btnCreateRandom
			// 
			this->btnCreateRandom->Enabled = false;
			this->btnCreateRandom->Location = System::Drawing::Point(13, 69);
			this->btnCreateRandom->Name = L"btnCreateRandom";
			this->btnCreateRandom->Size = System::Drawing::Size(221, 30);
			this->btnCreateRandom->TabIndex = 8;
			this->btnCreateRandom->Text = L"Автомобиль со случайным состоянием";
			this->btnCreateRandom->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCreateRandom->UseVisualStyleBackColor = true;
			this->btnCreateRandom->Click += gcnew System::EventHandler(this, &MyForm::btnCreateRandom_Click);
			// 
			// btnBegin
			// 
			this->btnBegin->Location = System::Drawing::Point(507, 12);
			this->btnBegin->Name = L"btnBegin";
			this->btnBegin->Size = System::Drawing::Size(220, 30);
			this->btnBegin->TabIndex = 9;
			this->btnBegin->Text = L"Начать техосмотр";
			this->btnBegin->UseVisualStyleBackColor = true;
			this->btnBegin->Visible = false;
			this->btnBegin->Click += gcnew System::EventHandler(this, &MyForm::btnBegin_Click);
			// 
			// tspeed
			// 
			this->tspeed->Interval = 50;
			this->tspeed->Tick += gcnew System::EventHandler(this, &MyForm::tspeed_Tick);
			// 
			// tBSpeed
			// 
			this->tBSpeed->AutoSize = false;
			this->tBSpeed->LargeChange = 1;
			this->tBSpeed->Location = System::Drawing::Point(507, 69);
			this->tBSpeed->Minimum = 1;
			this->tBSpeed->Name = L"tBSpeed";
			this->tBSpeed->Size = System::Drawing::Size(220, 30);
			this->tBSpeed->TabIndex = 10;
			this->tBSpeed->Value = 1;
			this->tBSpeed->Visible = false;
			this->tBSpeed->Scroll += gcnew System::EventHandler(this, &MyForm::tBSpeed_Scroll);
			// 
			// lSpeed
			// 
			this->lSpeed->AutoSize = true;
			this->lSpeed->Location = System::Drawing::Point(507, 49);
			this->lSpeed->Name = L"lSpeed";
			this->lSpeed->Size = System::Drawing::Size(122, 13);
			this->lSpeed->TabIndex = 11;
			this->lSpeed->Text = L"Cкорость автомобиля:";
			this->lSpeed->Visible = false;
			// 
			// lSpeedVal
			// 
			this->lSpeedVal->AutoSize = true;
			this->lSpeedVal->Location = System::Drawing::Point(611, 105);
			this->lSpeedVal->Name = L"lSpeedVal";
			this->lSpeedVal->Size = System::Drawing::Size(13, 13);
			this->lSpeedVal->TabIndex = 12;
			this->lSpeedVal->Text = L"1";
			this->lSpeedVal->Visible = false;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(507, 12);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(220, 30);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 13;
			this->progressBar1->Visible = false;
			// 
			// tPB
			// 
			this->tPB->Interval = 250;
			this->tPB->Tick += gcnew System::EventHandler(this, &MyForm::tPB_Tick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(310, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 14;
			this->textBox1->Visible = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 661);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->pBTool);
			this->Controls->Add(this->lSpeedVal);
			this->Controls->Add(this->lSpeed);
			this->Controls->Add(this->tBSpeed);
			this->Controls->Add(this->btnBegin);
			this->Controls->Add(this->btnCreateRandom);
			this->Controls->Add(this->btnCreate);
			this->Controls->Add(this->cBColor);
			this->Controls->Add(this->cBMachine);
			this->Controls->Add(this->pBMachine);
			this->Controls->Add(this->pBBackground);
			this->Name = L"MyForm";
			this->Text = L"Технический осмотр автомобиля";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBBackground))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBMachine))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBTool))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tBSpeed))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: static String^ Machine;
		public: static String^ color;
		public:	static int cb1 = 0;
		public:	static int cb2 = 0;
				delegate void inspection();
				delegate void movement();
				static int currentTool = 4;
	private: System::Void cBMachine_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 cb1 = 1;
				 Machine = cBMachine->Text;
				 if (cb1 == 1 && cb2 == 1){
					 btnCreate->Enabled = true;
					 btnCreateRandom->Enabled = true;
				 }
}
private: System::Void cBColor_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 color = " " + cBColor->Text + ".png";
			 cb2 = 1;
			 Machine = cBMachine->Text;
			 if (cb1 == 1 && cb2 == 1){
				 btnCreate->Enabled = true;
				 btnCreateRandom->Enabled = true;
			 }
}
		 public: static ref class ECB{
					 String^ errors;
		 public: static event inspection^ inspect;
		 public: static event movement^ mov;
		 public:ECB(){
					this->errors = "";
		 }
		 public: void check(int a){
					 if (a == 100) {
						 car->getECB()->inspect -= gcnew inspection(tPB, &Timer::Start);
						 car->getECB()->inspect += gcnew inspection(tPB, &Timer::Stop);
						 inspect();
						 car->getTrans()->mov += gcnew movement(tspeed, &Timer::Stop);
						 car->getTrans()->inspect += gcnew inspection(tPB, &Timer::Start);
						 lSpeed->Text = "Скорость передвижения";
						 tBSpeed->Value = 1;
						 lSpeedVal->Text = "1";
						 progressBar1->Value = 0;
						 progressBar1->Visible = false;
						 currentTool--;
						 mov();
					 }
		 }
		 public: void drive(int a){
					 car->moveX(car->getX() - a);
					 if (car->getX() <= 4230){
						 mov();
						 car->getECB()->mov -= gcnew movement(tspeed, &Timer::Stop);
						 car->getECB()->mov += gcnew movement(tspeed, &Timer::Start);
						 tBSpeed->Visible = true;
						 lSpeed->Text = "Скорость проверки";
						 tBSpeed->Value = 1;
						 lSpeedVal->Text = "1";
						 progressBar1->Visible = true;
						 progressBar1->Location = Point(166, 358);
						 progressBar1->Size = Drawing::Size(39, 29);
						 inspect();
					 }
					 
		 }
		 public: String^ getErrors(){
					 return this->errors;
		 }
		 public: Void addError(String^ a){
					 this->errors += a + Environment::NewLine + Environment::NewLine;
		 }
		 };



		 public: static ref class Trans{
					 array<float>^ sts;
		 public: static event inspection^ inspect;
		 public: static event movement^ mov;
		 public:Trans(){
					this->sts = gcnew array<float>(6);
		 }
		 public: void check(int a){
					 if (a == 100) {
						 car->getTrans()->inspect -= gcnew inspection(tPB, &Timer::Start);
						 car->getTrans()->inspect += gcnew inspection(tPB, &Timer::Stop);
						 inspect();
						 car->getSusp()->mov += gcnew movement(tspeed, &Timer::Stop);
						 car->getSusp()->inspect += gcnew inspection(tPB, &Timer::Start);
						 lSpeed->Text = "Скорость передвижения";
						 progressBar1->Value = 0;
						 tBSpeed->Value = 1;
						 lSpeedVal->Text = "1";
						 progressBar1->Visible = false;
						 currentTool--;
						 mov();
					 }
		 }
		 public: void drive(int a){
					 int b = car->getX();
					 car->moveX(car->getX() - a);
					 if (car->getX() <= 3230){
						 mov();
						 pBBackground->Location = Point(-3000, 137);
						 pBMachine->Location = Point(3230, 250);
						 car->getTrans()->mov -= gcnew movement(tspeed, &Timer::Stop);
						 car->getTrans()->mov += gcnew movement(tspeed, &Timer::Start);
						 tBSpeed->Value = 1;
						 lSpeedVal->Text = "1";
						 lSpeed->Text = "Скорость проверки";
						 progressBar1->Visible = true;
						 progressBar1->Location = Point(87, 399);
						 progressBar1->Size = Drawing::Size(28, 19);
						 inspect();
					 }
		 }
		 public: float getStat(int a){
					 return this->sts[a];
		 }
		 public: Void setStat(int a, float b){
					 this->sts[a] = b;
		 }
		 };


		public: static ref class Susp{
					array<float>^ sts;
		public: static event inspection^ inspect;
		public: static event movement^ mov;
		public:Susp(){
				   this->sts = gcnew array<float>(6);
		}
		public: void check(int a){
					if (a == 100) {
						pBTool->Visible = false;
						pBMachine->Location = Point(2230, 250);
						car->getSusp()->inspect -= gcnew inspection(tPB, &Timer::Start);
						car->getSusp()->inspect += gcnew inspection(tPB, &Timer::Stop);
						inspect();
						car->getEngine()->mov += gcnew movement(tspeed, &Timer::Stop);
						car->getEngine()->inspect += gcnew inspection(tPB, &Timer::Start);
						lSpeed->Text = "Скорость передвижения";
						progressBar1->Value = 0;
						tBSpeed->Value = 1;
						lSpeedVal->Text = "1";
						progressBar1->Visible = false;
						currentTool--;
						mov();
					}
		}
		public: void drive(int a){
					car->moveX(car->getX() - a);
					if (car->getX() <= 2230){
						mov();
						pBBackground->Location = Point(-2000, 137);
						pBMachine->Location = Point(2230, 250);
						car->getSusp()->mov -= gcnew movement(tspeed, &Timer::Stop);
						car->getSusp()->mov += gcnew movement(tspeed, &Timer::Start);
						tBSpeed->Value = 1;
						lSpeedVal->Text = "1";
						lSpeed->Text = "Скорость проверки";
						progressBar1->Visible = true;
						progressBar1->Location = Point(507, 12);
						progressBar1->Size = Drawing::Size(220, 30);
						pBMachine->Location = Point(2125, 0);
						pBTool->Image = gcnew Bitmap(System::IO::Directory::GetCurrentDirectory()->Replace('\\', '/') + "/Image/Lift.png");
						pBMachine->Controls->Add(pBTool);
						pBTool->BackColor = Color::Transparent;
						pBTool->Location = Point(-125, -50);
						pBTool->Visible = true;
						inspect();
					}
		}
		public: float getStat(int a){
					return this->sts[a];
		}
		public: Void setStat(int a, float b){
					this->sts[a] = b;
		}
		};



		public: static ref class Engine{
					array<float>^ sts;
		public: static event inspection^ inspect;
		public: static event movement^ mov;
		public:Engine(){
				   this->sts = gcnew array<float>(5);
		}
		public: void check(int a){
					if (a == 100) {
						car->getEngine()->inspect -= gcnew inspection(tPB, &Timer::Start);
						car->getEngine()->inspect += gcnew inspection(tPB, &Timer::Stop);
						inspect();					
						progressBar1->Visible = false;
						progressBar1->Value = 0;
						textBox1->Text += "0";
						
					}
		}
		public: void drive(int a){
					car->moveX(car->getX() - a);
					if (car->getX() <= 1230){
						mov();
						pBBackground->Location = Point(-1000, 137);
						pBMachine->Location = Point(1230, 250);
						car->getEngine()->mov -= gcnew movement(tspeed, &Timer::Stop);
						car->getEngine()->mov += gcnew movement(tspeed, &Timer::Start);
						tBSpeed->Value = 1;
						lSpeedVal->Text = "1";
						lSpeed->Text = "Скорость проверки";
						progressBar1->Visible = true;
						progressBar1->Location = Point(507, 12);
						progressBar1->Size = Drawing::Size(220, 30);
						pBBackground->Location = Point(-0, 137);
						pBMachine->Visible = false;
						pBBackground->Controls->Add(pBTool);
						pBTool->Image = gcnew Bitmap(System::IO::Directory::GetCurrentDirectory()->Replace('\\', '/') + "/Image/Engine " + car->getType() + car->getColor());
						pBTool->Location = Point(0, 0);
						pBTool->Visible = true;
						inspect();
					}
		}
		public: float getStat(int a){
					return this->sts[a];
		}
		public: Void setStat(int a, float b){
					this->sts[a] = b;
		}
		};



		 public: static ref class Car{
					 ECB^ ecb;
					 Trans^ trans;
					 Susp^ susp;
					 Engine^ engine;
					 String^ type;
					 String^ mcolor;
					 int x;
					 int y;
		 public:Car(ECB^ a, Trans^ b, Susp^ c, Engine^ d, String^ e, String^ f){
					this->ecb = a;
					this->trans = b;
					this->susp = c;
					this->engine = d;
					this->type = e;
					this->mcolor = f;
					this->x = 4230;
					this->y = 0;
		 }
		 public: ECB^ getECB(){
					 return this->ecb;
		 }
		 public: Trans^ getTrans(){
					 return this->trans;
		 }
		 public: Susp^ getSusp(){
					 return this->susp;
		 }
		 public: Engine^ getEngine(){
					 return this->engine;
		 }
		 public: String^ getType(){
					 return this->type;
		 }
		 public: String^ getColor(){
					 return this->mcolor;
		 }
				void moveX(int a){
					this->x = a;
				 }
				void moveY(int a){
					this->y = a;
				}
		 public: int getX(){
					 return this->x;
		 }
		 public: int getY(){
					 return this->y;
		 }
		 };
		public: static Car^ car;
private: System::Void btnCreate_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void btnCreateRandom_Click(System::Object^  sender, System::EventArgs^  e) {
			 ECB^ iecb = gcnew ECB();
			 Trans^ itrans = gcnew Trans();
			 Susp^ isusp = gcnew Susp();
			 Engine^ iengine = gcnew Engine();
			 array<String^>^ errs = gcnew array<String^>(7){ "Ошибка датчика положения дроссельной заслонки", "Ошибка датчика положения коленвала", "Ошибка передних подушек безопасности", "Ошибка катализатора", "Ошибка датчика расхода топлива", "Неисправность муфты вентилятора радиатора"};
			 Random^ rnd = gcnew Random();
			 for (int i = 0; i < 7; i++)
				 if (rnd->Next(0, 9) == 0)
					 iecb->addError(errs[i]);
				 for (int i = 0; i < 6; i++){
					 if (i<2)
						 itrans->setStat(i, (float)rnd->Next(0, 25) / 10);
					 else if (i>3)
						 itrans->setStat(i,rnd->Next(0, 75));
					 else
						 itrans->setStat(i, rnd->Next(0, 100));
				 }
				 for (int i = 0; i < 6; i++)
					 isusp->setStat(i, rnd->Next(0, 100));
				 for (int i = 0; i < 5; i++)
					 iengine->setStat(i, rnd->Next(0, 100));
				 car = gcnew Car(dynamic_cast<ECB^>(iecb), dynamic_cast<Trans^>(itrans), dynamic_cast<Susp^>(isusp), dynamic_cast<Engine^>(iengine), Machine, color);
				 pBMachine->Visible = true;
				 btnBegin->Visible = true;
				 pBMachine->Image = gcnew Bitmap(System::IO::Directory::GetCurrentDirectory()->Replace('\\', '/') + "/Image/" + car->getType() + car->getColor());
				 pBMachine->Location = Point(4230, 250);
}
private: System::Void tspeed_Tick(System::Object^  sender, System::EventArgs^  e) {
			 switch (currentTool)
			 {
			 case 4:
				 car->getECB()->drive(tBSpeed->Value);
				 break;
			 case 3:
				 car->getTrans()->drive(tBSpeed->Value);
				 break;
			 case 2:
				 car->getSusp()->drive(tBSpeed->Value);
				 break;
			 case 1:
				 car->getEngine()->drive(tBSpeed->Value);
				 break;
			 default:
				 break;
			 }
			 Point^ pos = pBBackground->Location;
			 pBBackground->Location = Point(pos->X + tBSpeed->Value, pos->Y);
			 Point^ pos2 = pBMachine->Location;
			 pBMachine->Location = Point(pos2->X - tBSpeed->Value, pos2->Y);
			 
}
		 static System::Object^ obj;
		 static System::EventArgs^  ea;
private: System::Void btnBegin_Click(System::Object^  sender, System::EventArgs^  e) {
			 obj = sender;
			 ea = e;
			 btnBegin->Visible = false;
			 lSpeed->Visible = true;
			 tBSpeed->Visible = true;
			 lSpeedVal->Visible = true;
			 cBMachine->Enabled = false;
			 cBColor->Enabled = false;
			 btnCreate->Enabled = false;
			 btnCreateRandom->Enabled = false;
			 car->getECB()->mov += gcnew movement(tspeed, &Timer::Stop);
			 car->getECB()->inspect += gcnew inspection(tPB, &Timer::Start);
			 tspeed->Start();
			
				 
			 
}
private: System::Void tBSpeed_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 lSpeedVal->Text = Convert::ToString(tBSpeed->Value);
}
private: System::Void tPB_Tick(System::Object^  sender, System::EventArgs^  e) {
			 
			 if (progressBar1->Value + tBSpeed->Value > 100){
				 progressBar1->Value = 100;
			 }
			 else progressBar1->Value += tBSpeed->Value;
			 switch (currentTool)
			 {
			 case 4:
				 car->getECB()->check(progressBar1->Value);
				 break;
			 case 3:
				 car->getTrans()->check(progressBar1->Value);
				 break;
			 case 2:
				 car->getSusp()->check(progressBar1->Value);
				 break;
			 case 1:
				 car->getEngine()->check(progressBar1->Value);
				 break;
			 default:
				 break;
			 };
}
		
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e);
};

}
