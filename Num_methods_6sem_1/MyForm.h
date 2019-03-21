#pragma once
#include "tasks.h"

namespace Nummethods6sem1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

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

			GraphPane^ pane1_1 = zedGraphControl1_1->GraphPane;
			GraphPane^ pane1_2 = zedGraphControl1_2->GraphPane;
			GraphPane^ pane1_3 = zedGraphControl1_3->GraphPane;
			GraphPane^ pane2_1 = zedGraphControl2_1->GraphPane;
			GraphPane^ pane2_2 = zedGraphControl2_2->GraphPane;
			GraphPane^ pane2_3 = zedGraphControl2_3->GraphPane;
			//pane1_1->XAxis->Title->Text = "Ось X";
			//pane1_1->YAxis->Title->Text = "Ось Y";
			pane1_1->Title->Text = "Функция";
			pane1_2->Title->Text = "Первая производная";
			pane1_3->Title->Text = "Вторая производная";
			pane2_1->Title->Text = "Функция";
			pane2_2->Title->Text = "Первая производная";
			pane2_3->Title->Text = "Вторая производная";

			
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
	private: ZedGraph::ZedGraphControl^  zedGraphControl1_1;
	protected:

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TextBox^  textBox1_n;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1_1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1_factor;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1_GP;




	private: System::Windows::Forms::DataGridView^  dataGridView1_2;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column12;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DataGridView^  dataGridView2_2;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::TextBox^  textBox2_GP;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox2_factor;

	private: System::Windows::Forms::DataGridView^  dataGridView2_1;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2_n;

	private: System::Windows::Forms::Label^  label8;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2_1;

	private: ZedGraph::ZedGraphControl^  zedGraphControl1_2;
	private: ZedGraph::ZedGraphControl^  zedGraphControl1_3;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2_2;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2_3;
	private: System::Windows::Forms::TextBox^  textBox1_der2;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox1_der1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox2_der2;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox2_der1;

	private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::RadioButton^  radioButton2_2;
private: System::Windows::Forms::RadioButton^  radioButton2_1;



























	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1_1 = (gcnew ZedGraph::ZedGraphControl());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox1_der2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1_der1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl1_2 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl1_3 = (gcnew ZedGraph::ZedGraphControl());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1_2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1_GP = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1_factor = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1_1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1_n = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2_2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2_1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox2_der2 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox2_der1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl2_2 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl2_3 = (gcnew ZedGraph::ZedGraphControl());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2_2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox2_GP = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2_factor = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2_1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2_n = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl2_1 = (gcnew ZedGraph::ZedGraphControl());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1_1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2_1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1_1
			// 
			this->zedGraphControl1_1->Location = System::Drawing::Point(5, 6);
			this->zedGraphControl1_1->Name = L"zedGraphControl1_1";
			this->zedGraphControl1_1->ScrollGrace = 0;
			this->zedGraphControl1_1->ScrollMaxX = 0;
			this->zedGraphControl1_1->ScrollMaxY = 0;
			this->zedGraphControl1_1->ScrollMaxY2 = 0;
			this->zedGraphControl1_1->ScrollMinX = 0;
			this->zedGraphControl1_1->ScrollMinY = 0;
			this->zedGraphControl1_1->ScrollMinY2 = 0;
			this->zedGraphControl1_1->Size = System::Drawing::Size(424, 350);
			this->zedGraphControl1_1->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(2, 10);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1283, 734);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox1_der2);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->textBox1_der1);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->zedGraphControl1_2);
			this->tabPage1->Controls->Add(this->zedGraphControl1_3);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->dataGridView1_2);
			this->tabPage1->Controls->Add(this->textBox1_GP);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox1_factor);
			this->tabPage1->Controls->Add(this->dataGridView1_1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox1_n);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->zedGraphControl1_1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(1275, 708);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Test task";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox1_der2
			// 
			this->textBox1_der2->Location = System::Drawing::Point(917, 215);
			this->textBox1_der2->Margin = System::Windows::Forms::Padding(2);
			this->textBox1_der2->Name = L"textBox1_der2";
			this->textBox1_der2->ReadOnly = true;
			this->textBox1_der2->Size = System::Drawing::Size(134, 20);
			this->textBox1_der2->TabIndex = 18;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(914, 200);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(132, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Max GP second derivative";
			// 
			// textBox1_der1
			// 
			this->textBox1_der1->Location = System::Drawing::Point(917, 173);
			this->textBox1_der1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1_der1->Name = L"textBox1_der1";
			this->textBox1_der1->ReadOnly = true;
			this->textBox1_der1->Size = System::Drawing::Size(134, 20);
			this->textBox1_der1->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(914, 158);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(113, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Max GP first derivative";
			// 
			// zedGraphControl1_2
			// 
			this->zedGraphControl1_2->Location = System::Drawing::Point(435, 5);
			this->zedGraphControl1_2->Name = L"zedGraphControl1_2";
			this->zedGraphControl1_2->ScrollGrace = 0;
			this->zedGraphControl1_2->ScrollMaxX = 0;
			this->zedGraphControl1_2->ScrollMaxY = 0;
			this->zedGraphControl1_2->ScrollMaxY2 = 0;
			this->zedGraphControl1_2->ScrollMinX = 0;
			this->zedGraphControl1_2->ScrollMinY = 0;
			this->zedGraphControl1_2->ScrollMinY2 = 0;
			this->zedGraphControl1_2->Size = System::Drawing::Size(424, 351);
			this->zedGraphControl1_2->TabIndex = 14;
			// 
			// zedGraphControl1_3
			// 
			this->zedGraphControl1_3->Location = System::Drawing::Point(5, 362);
			this->zedGraphControl1_3->Name = L"zedGraphControl1_3";
			this->zedGraphControl1_3->ScrollGrace = 0;
			this->zedGraphControl1_3->ScrollMaxX = 0;
			this->zedGraphControl1_3->ScrollMaxY = 0;
			this->zedGraphControl1_3->ScrollMaxY2 = 0;
			this->zedGraphControl1_3->ScrollMinX = 0;
			this->zedGraphControl1_3->ScrollMinY = 0;
			this->zedGraphControl1_3->ScrollMinY2 = 0;
			this->zedGraphControl1_3->Size = System::Drawing::Size(424, 340);
			this->zedGraphControl1_3->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1075, 140);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(10, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L".";
			// 
			// dataGridView1_2
			// 
			this->dataGridView1_2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1_2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView1_2->Location = System::Drawing::Point(855, 362);
			this->dataGridView1_2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1_2->Name = L"dataGridView1_2";
			this->dataGridView1_2->RowTemplate->Height = 24;
			this->dataGridView1_2->Size = System::Drawing::Size(407, 340);
			this->dataGridView1_2->TabIndex = 11;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"i";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"x(i-1)";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"x(i)";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"ai";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"bi";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"ci";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"di";
			this->Column8->Name = L"Column8";
			// 
			// textBox1_GP
			// 
			this->textBox1_GP->Location = System::Drawing::Point(917, 133);
			this->textBox1_GP->Margin = System::Windows::Forms::Padding(2);
			this->textBox1_GP->Name = L"textBox1_GP";
			this->textBox1_GP->ReadOnly = true;
			this->textBox1_GP->Size = System::Drawing::Size(134, 20);
			this->textBox1_GP->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(914, 118);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Max GP";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1116, 186);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"NN";
			// 
			// textBox1_factor
			// 
			this->textBox1_factor->Location = System::Drawing::Point(1142, 184);
			this->textBox1_factor->Margin = System::Windows::Forms::Padding(2);
			this->textBox1_factor->Name = L"textBox1_factor";
			this->textBox1_factor->Size = System::Drawing::Size(76, 20);
			this->textBox1_factor->TabIndex = 5;
			this->textBox1_factor->Text = L"2";
			// 
			// dataGridView1_1
			// 
			this->dataGridView1_1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1_1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column9, this->Column10, this->Column11, this->Column12
			});
			this->dataGridView1_1->Location = System::Drawing::Point(434, 362);
			this->dataGridView1_1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1_1->Name = L"dataGridView1_1";
			this->dataGridView1_1->RowTemplate->Height = 24;
			this->dataGridView1_1->Size = System::Drawing::Size(407, 340);
			this->dataGridView1_1->TabIndex = 4;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"j";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 30;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"xj";
			this->Column9->Name = L"Column9";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"F(xj)";
			this->Column10->Name = L"Column10";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"S(xj)";
			this->Column11->Name = L"Column11";
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"F(xj)-S(xj)";
			this->Column12->Name = L"Column12";
			this->Column12->Width = 150;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1119, 261);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 73);
			this->button1->TabIndex = 3;
			this->button1->Text = L"пуск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1_n
			// 
			this->textBox1_n->Location = System::Drawing::Point(1142, 152);
			this->textBox1_n->Margin = System::Windows::Forms::Padding(2);
			this->textBox1_n->Name = L"textBox1_n";
			this->textBox1_n->Size = System::Drawing::Size(76, 20);
			this->textBox1_n->TabIndex = 2;
			this->textBox1_n->Text = L"3";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1124, 152);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"n";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Controls->Add(this->textBox2_der2);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->textBox2_der1);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->zedGraphControl2_2);
			this->tabPage2->Controls->Add(this->zedGraphControl2_3);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->dataGridView2_2);
			this->tabPage2->Controls->Add(this->textBox2_GP);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->textBox2_factor);
			this->tabPage2->Controls->Add(this->dataGridView2_1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->textBox2_n);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->zedGraphControl2_1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(1275, 708);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Main task 1";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2_2);
			this->groupBox1->Controls->Add(this->radioButton2_1);
			this->groupBox1->Location = System::Drawing::Point(928, 263);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(144, 85);
			this->groupBox1->TabIndex = 30;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Выбор ГУ";
			// 
			// radioButton2_2
			// 
			this->radioButton2_2->AutoSize = true;
			this->radioButton2_2->Location = System::Drawing::Point(16, 57);
			this->radioButton2_2->Name = L"radioButton2_2";
			this->radioButton2_2->Size = System::Drawing::Size(121, 17);
			this->radioButton2_2->TabIndex = 1;
			this->radioButton2_2->Text = L"Совпадение 2-х пр.";
			this->radioButton2_2->UseVisualStyleBackColor = true;
			// 
			// radioButton2_1
			// 
			this->radioButton2_1->AutoSize = true;
			this->radioButton2_1->Checked = true;
			this->radioButton2_1->Location = System::Drawing::Point(16, 29);
			this->radioButton2_1->Name = L"radioButton2_1";
			this->radioButton2_1->Size = System::Drawing::Size(46, 17);
			this->radioButton2_1->TabIndex = 0;
			this->radioButton2_1->TabStop = true;
			this->radioButton2_1->Text = L"ЕГУ";
			this->radioButton2_1->UseVisualStyleBackColor = true;
			// 
			// textBox2_der2
			// 
			this->textBox2_der2->Location = System::Drawing::Point(928, 223);
			this->textBox2_der2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2_der2->Name = L"textBox2_der2";
			this->textBox2_der2->ReadOnly = true;
			this->textBox2_der2->Size = System::Drawing::Size(134, 20);
			this->textBox2_der2->TabIndex = 29;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(925, 208);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(132, 13);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Max GP second derivative";
			// 
			// textBox2_der1
			// 
			this->textBox2_der1->Location = System::Drawing::Point(928, 181);
			this->textBox2_der1->Margin = System::Windows::Forms::Padding(2);
			this->textBox2_der1->Name = L"textBox2_der1";
			this->textBox2_der1->ReadOnly = true;
			this->textBox2_der1->Size = System::Drawing::Size(134, 20);
			this->textBox2_der1->TabIndex = 27;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(925, 166);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(113, 13);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Max GP first derivative";
			// 
			// zedGraphControl2_2
			// 
			this->zedGraphControl2_2->Location = System::Drawing::Point(453, 5);
			this->zedGraphControl2_2->Name = L"zedGraphControl2_2";
			this->zedGraphControl2_2->ScrollGrace = 0;
			this->zedGraphControl2_2->ScrollMaxX = 0;
			this->zedGraphControl2_2->ScrollMaxY = 0;
			this->zedGraphControl2_2->ScrollMaxY2 = 0;
			this->zedGraphControl2_2->ScrollMinX = 0;
			this->zedGraphControl2_2->ScrollMinY = 0;
			this->zedGraphControl2_2->ScrollMinY2 = 0;
			this->zedGraphControl2_2->Size = System::Drawing::Size(445, 343);
			this->zedGraphControl2_2->TabIndex = 25;
			// 
			// zedGraphControl2_3
			// 
			this->zedGraphControl2_3->Location = System::Drawing::Point(11, 360);
			this->zedGraphControl2_3->Name = L"zedGraphControl2_3";
			this->zedGraphControl2_3->ScrollGrace = 0;
			this->zedGraphControl2_3->ScrollMaxX = 0;
			this->zedGraphControl2_3->ScrollMaxY = 0;
			this->zedGraphControl2_3->ScrollMaxY2 = 0;
			this->zedGraphControl2_3->ScrollMinX = 0;
			this->zedGraphControl2_3->ScrollMinY = 0;
			this->zedGraphControl2_3->ScrollMinY2 = 0;
			this->zedGraphControl2_3->Size = System::Drawing::Size(437, 343);
			this->zedGraphControl2_3->TabIndex = 24;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1084, 141);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(10, 13);
			this->label5->TabIndex = 23;
			this->label5->Text = L".";
			// 
			// dataGridView2_2
			// 
			this->dataGridView2_2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2_2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7
			});
			this->dataGridView2_2->Location = System::Drawing::Point(866, 360);
			this->dataGridView2_2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView2_2->Name = L"dataGridView2_2";
			this->dataGridView2_2->RowTemplate->Height = 24;
			this->dataGridView2_2->Size = System::Drawing::Size(407, 343);
			this->dataGridView2_2->TabIndex = 22;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"i";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"x(i-1)";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"x(i)";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"ai";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"bi";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"ci";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"di";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			// 
			// textBox2_GP
			// 
			this->textBox2_GP->Location = System::Drawing::Point(928, 138);
			this->textBox2_GP->Margin = System::Windows::Forms::Padding(2);
			this->textBox2_GP->Name = L"textBox2_GP";
			this->textBox2_GP->ReadOnly = true;
			this->textBox2_GP->Size = System::Drawing::Size(134, 20);
			this->textBox2_GP->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(925, 123);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Max GP";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1114, 195);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(23, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"NN";
			// 
			// textBox2_factor
			// 
			this->textBox2_factor->Location = System::Drawing::Point(1140, 192);
			this->textBox2_factor->Margin = System::Windows::Forms::Padding(2);
			this->textBox2_factor->Name = L"textBox2_factor";
			this->textBox2_factor->Size = System::Drawing::Size(76, 20);
			this->textBox2_factor->TabIndex = 18;
			this->textBox2_factor->Text = L"2";
			// 
			// dataGridView2_1
			// 
			this->dataGridView2_1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2_1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn8,
					this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12
			});
			this->dataGridView2_1->Location = System::Drawing::Point(453, 360);
			this->dataGridView2_1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView2_1->Name = L"dataGridView2_1";
			this->dataGridView2_1->RowTemplate->Height = 24;
			this->dataGridView2_1->Size = System::Drawing::Size(407, 343);
			this->dataGridView2_1->TabIndex = 17;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"j";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 30;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"xj";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"F(xj)";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"S(xj)";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"F(xj)-S(xj)";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Width = 150;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1108, 264);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 73);
			this->button2->TabIndex = 16;
			this->button2->Text = L"пуск";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2_n
			// 
			this->textBox2_n->Location = System::Drawing::Point(1140, 160);
			this->textBox2_n->Margin = System::Windows::Forms::Padding(2);
			this->textBox2_n->Name = L"textBox2_n";
			this->textBox2_n->Size = System::Drawing::Size(76, 20);
			this->textBox2_n->TabIndex = 15;
			this->textBox2_n->Text = L"3";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1122, 160);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"n";
			// 
			// zedGraphControl2_1
			// 
			this->zedGraphControl2_1->Location = System::Drawing::Point(11, 5);
			this->zedGraphControl2_1->Name = L"zedGraphControl2_1";
			this->zedGraphControl2_1->ScrollGrace = 0;
			this->zedGraphControl2_1->ScrollMaxX = 0;
			this->zedGraphControl2_1->ScrollMaxY = 0;
			this->zedGraphControl2_1->ScrollMaxY2 = 0;
			this->zedGraphControl2_1->ScrollMinX = 0;
			this->zedGraphControl2_1->ScrollMinY = 0;
			this->zedGraphControl2_1->ScrollMinY2 = 0;
			this->zedGraphControl2_1->Size = System::Drawing::Size(436, 352);
			this->zedGraphControl2_1->TabIndex = 13;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1288, 746);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Численные методы. 6 семестр. ЛАБА № 1";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1_1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2_1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {  //   TEST   TASK

		/*label4->Text = "C";
		label6->Text = "D1";
		label7->Text = "D2";
		label8->Text = "D3";
		label9->Text = "B";
		label10->Text = "F(xi)";
		label12->Text = "a";
		label13->Text = "b";
		label14->Text = "d";*/
		/*label9->Text = "с";
		label10->Text = "d";*/


		dataGridView1_1->Rows->Clear();
		dataGridView1_2->Rows->Clear();
		GraphPane^ panel1 = zedGraphControl1_1->GraphPane;
		GraphPane^ panel2 = zedGraphControl1_2->GraphPane;
		GraphPane^ panel3 = zedGraphControl1_3->GraphPane;
		panel1->CurveList->Clear();
		panel2->CurveList->Clear();
		panel3->CurveList->Clear();
		PointPairList^ point_list_numeric1 = gcnew ZedGraph::PointPairList();
		//PointPairList^ point_list_numeric2 = gcnew ZedGraph::PointPairList();
		PointPairList^ point_list_accurate = gcnew ZedGraph::PointPairList();
		PointPairList^ p_list_deriv_num_1 = gcnew ZedGraph::PointPairList();
		PointPairList^ p_list_deriv_num_2 = gcnew ZedGraph::PointPairList();
		PointPairList^ p_list_deriv_acc_1 = gcnew ZedGraph::PointPairList();
		PointPairList^ p_list_deriv_acc_2 = gcnew ZedGraph::PointPairList();

		int n = Convert::ToInt32(textBox1_n->Text);
		int factor = Convert::ToInt32(textBox1_factor->Text);
		int NN = factor * n;
		double a = -1;
		double b = 1;

		//int new_n = n*2;
		//label11->Text = "new_n = " + Convert::ToString(new_n);

		Task_test task(n);
		task.Init_coefs();
		//Task_test task2(new_n);

		double h = 2.0 / NN;

		double x_curr = 0;
		double temp;
		int curr_S_xi = 0;
		//	curr_S_xi2 = 0;
		double accurate = 0;
		double numeric1 = 0;
		double der_num_1 = 0;
		double der_num_2 = 0;
		double der_acc_1 = 0;
		double der_acc_2 = 0;

		//double numeric2 = 0;
		double GP = 0,
			maxGP = 0,
			GP_der_1 = 0,
			maxGP_der_1 = 0,
			GP_der_2 = 0,
			maxGP_der_2 = 0;
		if (n < NN)
		for (int i = 0; i < NN+1; i++)
		{
			x_curr = a + h * i;
			accurate = task.Function(x_curr);
			der_acc_1 = task.FunctionDerivative_1(x_curr);
			der_acc_2 = task.FunctionDerivative_2(x_curr);
			point_list_accurate->Add(x_curr, accurate);
			p_list_deriv_acc_1->Add(x_curr, der_acc_1);
			p_list_deriv_acc_2->Add(x_curr, der_acc_2);
			if (i % (NN / n) == 0 && curr_S_xi < n) curr_S_xi++;
			//if (i % (NN / new_n) == 0 && curr_S_xi2 < new_n) curr_S_xi2++;

			numeric1 = task.S_xi(curr_S_xi, x_curr);
			der_num_1 = task.S_xi_derivative_1(curr_S_xi,x_curr);
			der_num_2 = task.S_xi_derivative_2(curr_S_xi,x_curr);
			//numeric2 = task2.S_xi(curr_S_xi2, x_curr);
			point_list_numeric1->Add(x_curr, numeric1);
			p_list_deriv_num_1->Add(x_curr, der_num_1);
			p_list_deriv_num_2->Add(x_curr, der_num_2);
			//point_list_numeric2->Add(x_curr, numeric2);

			GP = abs(accurate - numeric1);
			GP_der_1 = abs(der_acc_1 - der_num_1);
			GP_der_2 = abs(der_acc_2 - der_num_2);
			//LP = abs(numeric2 - numeric1);
			if (GP > maxGP) { maxGP = GP; temp = x_curr; }
			if (GP_der_1 > maxGP_der_1) { maxGP_der_1 = GP_der_1; }
			if (GP_der_2 > maxGP_der_2) { maxGP_der_2 = GP_der_2; }
			//if (LP > maxLP) maxLP = LP;
			dataGridView1_1->Rows->Add();
			dataGridView1_1->Rows[i]->Cells[0]->Value = i;
			dataGridView1_1->Rows[i]->Cells[1]->Value = x_curr;
			dataGridView1_1->Rows[i]->Cells[2]->Value = accurate;
			dataGridView1_1->Rows[i]->Cells[3]->Value = numeric1;
			dataGridView1_1->Rows[i]->Cells[4]->Value = abs(accurate - numeric1);


			
		}
		label4->Text = Convert::ToString(temp);
		textBox1_GP->Text = Convert::ToString(maxGP);
		textBox1_der1->Text = Convert::ToString(maxGP_der_1);
		textBox1_der2->Text = Convert::ToString(maxGP_der_2);
		//textBoxLP->Text = Convert::ToString(maxLP);

		for (int i = 1; i < task.a_coef.size(); i++)
		{
			dataGridView1_2->Rows->Add();
			dataGridView1_2->Rows[i - 1]->Cells[0]->Value = i;
			dataGridView1_2->Rows[i - 1]->Cells[1]->Value = task.Xgrid[i - 1];
			dataGridView1_2->Rows[i - 1]->Cells[2]->Value = task.Xgrid[i];
			dataGridView1_2->Rows[i - 1]->Cells[3]->Value = task.a_coef[i];
			dataGridView1_2->Rows[i - 1]->Cells[4]->Value = task.b_coef[i];
			dataGridView1_2->Rows[i - 1]->Cells[5]->Value = task.c_coef[i];
			dataGridView1_2->Rows[i - 1]->Cells[6]->Value = task.d_coef[i];
		}

		/*for (int i = 0; i < task.c_coef.size(); i++)
		{
			label9->Text += " " + task.c_coef[i];
		}*/
		/*for (int i = 0; i < task.a_coef.size(); i++)
		{
			label12->Text += " " + task.a_coef[i];
		}
		for (int i = 0; i < task.b_coef.size(); i++)
		{
			label13->Text += " " + task.b_coef[i];
		}*/
		/*for (int i = 0; i < task.d_coef.size(); i++)
		{
			label10->Text += " " + task.d_coef[i];
		}*/

		/*for (int i = 0; i < task.D1.size(); i++)
		{
			label6->Text += " " + task.D1[i];
		}
		for (int i = 0; i < task.D2.size(); i++)
		{
			label7->Text += " " + task.D2[i];
		}
		for (int i = 0; i < task.D3.size(); i++)
		{
			label8->Text += " " + task.D3[i];
		}
		for (int i = 0; i < task.F.size(); i++)
		{
			label9->Text += " " + task.F[i];
		}
		for (int i = 0; i < task.Ygrid.size(); i++)
		{
			label10->Text += " " + task.Ygrid[i];
		}*/

		LineItem^ Curve1 = panel1->AddCurve("accurate trajectory", point_list_accurate, Color::Blue, SymbolType::None);
		LineItem^ Curve2 = panel1->AddCurve("numeric trajectory", point_list_numeric1, Color::Red, SymbolType::None);
		LineItem^ Curve3 = panel2->AddCurve("accurate trajectory", p_list_deriv_acc_1, Color::Blue, SymbolType::None);
		LineItem^ Curve4 = panel2->AddCurve("numeric trajectory", p_list_deriv_num_1, Color::Red, SymbolType::None);
		LineItem^ Curve5 = panel3->AddCurve("accurate trajectory", p_list_deriv_acc_2, Color::Blue, SymbolType::None);
		LineItem^ Curve6 = panel3->AddCurve("numeric trajectory", p_list_deriv_num_2, Color::Red, SymbolType::None);
		//LineItem^ Curve3 = panel1->AddCurve("numeric2 trajectory", point_list_numeric2, Color::Blue, SymbolType::None);

		zedGraphControl1_1->AxisChange();
		zedGraphControl1_1->Invalidate();
		zedGraphControl1_2->AxisChange();
		zedGraphControl1_2->Invalidate();
		zedGraphControl1_3->AxisChange();
		zedGraphControl1_3->Invalidate();

	}    // END  TEST  TASK



	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {  //  MAIN  TASK  1
		double const PI = 3.141592653589793238462643383279502884197169399375105820974944;

		dataGridView2_1->Rows->Clear();
		dataGridView2_2->Rows->Clear();
		GraphPane^ panel1 = zedGraphControl2_1->GraphPane;
		GraphPane^ panel2 = zedGraphControl2_2->GraphPane;
		GraphPane^ panel3 = zedGraphControl2_3->GraphPane;
		panel1->CurveList->Clear();
		panel2->CurveList->Clear();
		panel3->CurveList->Clear();
		PointPairList^ point_list_numeric1 = gcnew ZedGraph::PointPairList();
		//PointPairList^ point_list_numeric2 = gcnew ZedGraph::PointPairList();
		PointPairList^ point_list_accurate = gcnew ZedGraph::PointPairList();
		PointPairList^ p_list_deriv_num_1 = gcnew ZedGraph::PointPairList();
		PointPairList^ p_list_deriv_num_2 = gcnew ZedGraph::PointPairList();
		PointPairList^ p_list_deriv_acc_1 = gcnew ZedGraph::PointPairList();
		PointPairList^ p_list_deriv_acc_2 = gcnew ZedGraph::PointPairList();

		int n = Convert::ToInt32(textBox2_n->Text);
		int factor = Convert::ToInt32(textBox2_factor->Text);
		int NN = factor * n;
		double a = 1;
		double b = PI;

		Task_main_1 task(n);
		if (radioButton2_1->Checked)	
			task.Init_coefs();
		else
			task.Init_coefs(1);

		double h = ((double)(b - a)) / NN;

		double x_curr = 0,
			temp = 0;
		int curr_S_xi = 0;
		double accurate = 0;
		double numeric1 = 0;
		double der_num_1 = 0;
		double der_num_2 = 0;
		double der_acc_1 = 0;
		double der_acc_2 = 0;
		double GP = 0,
			maxGP = 0,
			GP_der_1 = 0,
			maxGP_der_1 = 0,
			GP_der_2 = 0,
			maxGP_der_2 = 0;


		if (n < NN)
			for (int i = 0; i < NN + 1; i++)
			{
				x_curr = a + h * i;
				accurate = task.Function(x_curr);
				der_acc_1 = task.FunctionDerivative_1(x_curr);
				der_acc_2 = task.FunctionDerivative_2(x_curr);
				point_list_accurate->Add(x_curr, accurate);
				p_list_deriv_acc_1->Add(x_curr, der_acc_1);
				p_list_deriv_acc_2->Add(x_curr, der_acc_2);
				if (i % (NN / n) == 0 && curr_S_xi < n) curr_S_xi++;

				numeric1 = task.S_xi(curr_S_xi, x_curr);
				der_num_1 = task.S_xi_derivative_1(curr_S_xi, x_curr);
				der_num_2 = task.S_xi_derivative_2(curr_S_xi, x_curr);

				point_list_numeric1->Add(x_curr, numeric1);
				p_list_deriv_num_1->Add(x_curr, der_num_1);
				p_list_deriv_num_2->Add(x_curr, der_num_2);

				GP = abs(accurate - numeric1);
				GP_der_1 = abs(der_acc_1 - der_num_1);
				GP_der_2 = abs(der_acc_2 - der_num_2);
				if (GP > maxGP) { maxGP = GP; temp = x_curr; }
				if (GP_der_1 > maxGP_der_1) { maxGP_der_1 = GP_der_1; }
				if (GP_der_2 > maxGP_der_2) { maxGP_der_2 = GP_der_2; }

				dataGridView2_1->Rows->Add();
				dataGridView2_1->Rows[i]->Cells[0]->Value = i;
				dataGridView2_1->Rows[i]->Cells[1]->Value = x_curr;
				dataGridView2_1->Rows[i]->Cells[2]->Value = accurate;
				dataGridView2_1->Rows[i]->Cells[3]->Value = numeric1;
				dataGridView2_1->Rows[i]->Cells[4]->Value = abs(accurate - numeric1);



			}
		label5->Text = Convert::ToString(temp);
		textBox2_GP->Text = Convert::ToString(maxGP);
		textBox2_der1->Text = Convert::ToString(maxGP_der_1);
		textBox2_der2->Text = Convert::ToString(maxGP_der_2);

		for (int i = 1; i < task.c_coef.size(); i++)
		{
			dataGridView2_2->Rows->Add();
			dataGridView2_2->Rows[i - 1]->Cells[0]->Value = i;
			dataGridView2_2->Rows[i - 1]->Cells[1]->Value = task.Xgrid[i - 1];
			dataGridView2_2->Rows[i - 1]->Cells[2]->Value = task.Xgrid[i];
			dataGridView2_2->Rows[i - 1]->Cells[3]->Value = task.a_coef[i];
			dataGridView2_2->Rows[i - 1]->Cells[4]->Value = task.b_coef[i];
			dataGridView2_2->Rows[i - 1]->Cells[5]->Value = task.c_coef[i];
			dataGridView2_2->Rows[i - 1]->Cells[6]->Value = task.d_coef[i];
		}

		LineItem^ Curve1 = panel1->AddCurve("accurate trajectory", point_list_accurate, Color::Blue, SymbolType::None);
		LineItem^ Curve2 = panel1->AddCurve("numeric trajectory", point_list_numeric1, Color::Red, SymbolType::None);
		LineItem^ Curve3 = panel2->AddCurve("accurate trajectory", p_list_deriv_acc_1, Color::Blue, SymbolType::None);
		LineItem^ Curve4 = panel2->AddCurve("numeric trajectory", p_list_deriv_num_1, Color::Red, SymbolType::None);
		LineItem^ Curve5 = panel3->AddCurve("accurate trajectory", p_list_deriv_acc_2, Color::Blue, SymbolType::None);
		LineItem^ Curve6 = panel3->AddCurve("numeric trajectory", p_list_deriv_num_2, Color::Red, SymbolType::None);

		zedGraphControl2_1->AxisChange();
		zedGraphControl2_1->Invalidate();
		zedGraphControl2_2->AxisChange();
		zedGraphControl2_2->Invalidate();
		zedGraphControl2_3->AxisChange();
		zedGraphControl2_3->Invalidate();
	} //  END   MAIN  TASK   1
};
}
