#pragma once
#include "Employe.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ Commande;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TabPage^ Liste;
	private: System::Windows::Forms::TabPage^ Payement;
	private: System::Windows::Forms::Button^ but_del_com;
	private: System::Windows::Forms::Button^ but_upd_com;




	private: System::Windows::Forms::Button^ but_ins_com;


	private: System::Windows::Forms::Button^ but_act_com;
	private: System::Windows::Forms::TextBox^ txt_adr_fac_com;

	private: System::Windows::Forms::TextBox^ txt_adr_liv_com;




	private: System::Windows::Forms::TextBox^ txt_tot_HT_com;
	private: System::Windows::Forms::TextBox^ txt_ID_cli_com;














	private: System::Windows::Forms::TextBox^ txt_ref_com_com;



	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ but_del_lis;

	private: System::Windows::Forms::Button^ but_upd_lis;

	private: System::Windows::Forms::Button^ but_ins_lis;

	private: System::Windows::Forms::Button^ but_act_lis;

	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::TextBox^ txt_qua_com_lis;
	private: System::Windows::Forms::TextBox^ txt_tau_tva_lis;


	private: System::Windows::Forms::TextBox^ txt_pri_uni_rem_lis;
	private: System::Windows::Forms::TextBox^ txt_ref_art_lis;
	private: System::Windows::Forms::TextBox^ txt_ref_com_lis;








	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Button^ but_del_pay;

private: System::Windows::Forms::Button^ but_upt_pay;

private: System::Windows::Forms::Button^ but_ins_pay;

private: System::Windows::Forms::Button^ but_act_pay;

private: System::Windows::Forms::DataGridView^ dataGridView4;
private: System::Windows::Forms::TextBox^ txt_moy_pay;

private: System::Windows::Forms::TextBox^ txt_dat_pay;

private: System::Windows::Forms::TextBox^ txt_ID_pay;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ txt_ref_com_pay;

private: System::Windows::Forms::TextBox^ txt_mon_pay;
private: System::Windows::Forms::TabPage^ tabPage5;
private: System::Windows::Forms::Button^ but_del_cli;

private: System::Windows::Forms::Button^ but_upd_cli;

private: System::Windows::Forms::Button^ but_ins_cli;

private: System::Windows::Forms::Button^ but_act_cli;

private: System::Windows::Forms::DataGridView^ dataGridView5;
private: System::Windows::Forms::TextBox^ txt_pre_cli;
private: System::Windows::Forms::TextBox^ dat_1er_ach_cli;


private: System::Windows::Forms::TextBox^ txt_nom_cli;
private: System::Windows::Forms::TextBox^ txt_dat_nai_cli;



private: System::Windows::Forms::TextBox^ txt_ID_cli;

private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Button^ but_del_emp;


private: System::Windows::Forms::Button^ but_upd_emp;

private: System::Windows::Forms::Button^ but_ins_emp;

private: System::Windows::Forms::Button^ but_act_emp;

private: System::Windows::Forms::DataGridView^ dataGridView6;
private: System::Windows::Forms::TextBox^ txt_pre_emp;
private: System::Windows::Forms::TextBox^ txt_sup_hie_emp;


private: System::Windows::Forms::TextBox^ txt_nom_emp;
private: System::Windows::Forms::TextBox^ txt_dat_emb_emp;


private: System::Windows::Forms::TextBox^ txt_ID_emp;

private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ txt_ID_sup_hie_emp;

private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::DateTimePicker^ date_liv_com;
private: System::Windows::Forms::DateTimePicker^ date_fac_com;

private: System::Windows::Forms::DateTimePicker^ date_emi_com;


















	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle19 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle20 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle21 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle22 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle23 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle24 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle25 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle26 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle27 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->Commande = (gcnew System::Windows::Forms::TabPage());
			this->Liste = (gcnew System::Windows::Forms::TabPage());
			this->Payement = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->but_act_com = (gcnew System::Windows::Forms::Button());
			this->but_ins_com = (gcnew System::Windows::Forms::Button());
			this->but_upd_com = (gcnew System::Windows::Forms::Button());
			this->but_del_com = (gcnew System::Windows::Forms::Button());
			this->txt_ref_com_com = (gcnew System::Windows::Forms::TextBox());
			this->txt_ID_cli_com = (gcnew System::Windows::Forms::TextBox());
			this->txt_tot_HT_com = (gcnew System::Windows::Forms::TextBox());
			this->txt_adr_liv_com = (gcnew System::Windows::Forms::TextBox());
			this->txt_adr_fac_com = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->but_act_lis = (gcnew System::Windows::Forms::Button());
			this->but_ins_lis = (gcnew System::Windows::Forms::Button());
			this->but_upd_lis = (gcnew System::Windows::Forms::Button());
			this->but_del_lis = (gcnew System::Windows::Forms::Button());
			this->txt_ref_com_lis = (gcnew System::Windows::Forms::TextBox());
			this->txt_ref_art_lis = (gcnew System::Windows::Forms::TextBox());
			this->txt_pri_uni_rem_lis = (gcnew System::Windows::Forms::TextBox());
			this->txt_tau_tva_lis = (gcnew System::Windows::Forms::TextBox());
			this->txt_qua_com_lis = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->but_act_pay = (gcnew System::Windows::Forms::Button());
			this->but_ins_pay = (gcnew System::Windows::Forms::Button());
			this->but_upt_pay = (gcnew System::Windows::Forms::Button());
			this->but_del_pay = (gcnew System::Windows::Forms::Button());
			this->txt_ID_pay = (gcnew System::Windows::Forms::TextBox());
			this->txt_dat_pay = (gcnew System::Windows::Forms::TextBox());
			this->txt_moy_pay = (gcnew System::Windows::Forms::TextBox());
			this->txt_mon_pay = (gcnew System::Windows::Forms::TextBox());
			this->txt_ref_com_pay = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->but_act_cli = (gcnew System::Windows::Forms::Button());
			this->but_ins_cli = (gcnew System::Windows::Forms::Button());
			this->but_upd_cli = (gcnew System::Windows::Forms::Button());
			this->but_del_cli = (gcnew System::Windows::Forms::Button());
			this->txt_ID_cli = (gcnew System::Windows::Forms::TextBox());
			this->txt_dat_nai_cli = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom_cli = (gcnew System::Windows::Forms::TextBox());
			this->dat_1er_ach_cli = (gcnew System::Windows::Forms::TextBox());
			this->txt_pre_cli = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->but_act_emp = (gcnew System::Windows::Forms::Button());
			this->but_ins_emp = (gcnew System::Windows::Forms::Button());
			this->but_upd_emp = (gcnew System::Windows::Forms::Button());
			this->but_del_emp = (gcnew System::Windows::Forms::Button());
			this->txt_ID_emp = (gcnew System::Windows::Forms::TextBox());
			this->txt_dat_emb_emp = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom_emp = (gcnew System::Windows::Forms::TextBox());
			this->txt_sup_hie_emp = (gcnew System::Windows::Forms::TextBox());
			this->txt_pre_emp = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->txt_ID_sup_hie_emp = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->date_liv_com = (gcnew System::Windows::Forms::DateTimePicker());
			this->date_emi_com = (gcnew System::Windows::Forms::DateTimePicker());
			this->date_fac_com = (gcnew System::Windows::Forms::DateTimePicker());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl2->SuspendLayout();
			this->Commande->SuspendLayout();
			this->Liste->SuspendLayout();
			this->Payement->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(-1, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1147, 503);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 39);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1139, 460);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Commandes";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label23);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->txt_pre_cli);
			this->tabPage2->Controls->Add(this->dat_1er_ach_cli);
			this->tabPage2->Controls->Add(this->txt_nom_cli);
			this->tabPage2->Controls->Add(this->txt_dat_nai_cli);
			this->tabPage2->Controls->Add(this->txt_ID_cli);
			this->tabPage2->Controls->Add(this->but_del_cli);
			this->tabPage2->Controls->Add(this->but_upd_cli);
			this->tabPage2->Controls->Add(this->but_ins_cli);
			this->tabPage2->Controls->Add(this->but_act_cli);
			this->tabPage2->Controls->Add(this->dataGridView5);
			this->tabPage2->Location = System::Drawing::Point(4, 39);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1139, 460);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Clients";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label29);
			this->tabPage3->Controls->Add(this->txt_ID_sup_hie_emp);
			this->tabPage3->Controls->Add(this->label28);
			this->tabPage3->Controls->Add(this->label27);
			this->tabPage3->Controls->Add(this->label26);
			this->tabPage3->Controls->Add(this->label25);
			this->tabPage3->Controls->Add(this->label24);
			this->tabPage3->Controls->Add(this->txt_pre_emp);
			this->tabPage3->Controls->Add(this->txt_sup_hie_emp);
			this->tabPage3->Controls->Add(this->txt_nom_emp);
			this->tabPage3->Controls->Add(this->txt_dat_emb_emp);
			this->tabPage3->Controls->Add(this->txt_ID_emp);
			this->tabPage3->Controls->Add(this->but_del_emp);
			this->tabPage3->Controls->Add(this->but_upd_emp);
			this->tabPage3->Controls->Add(this->but_ins_emp);
			this->tabPage3->Controls->Add(this->but_act_emp);
			this->tabPage3->Controls->Add(this->dataGridView6);
			this->tabPage3->Location = System::Drawing::Point(4, 39);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(857, 460);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Employes";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Controls->Add(this->button3);
			this->tabPage4->Controls->Add(this->button2);
			this->tabPage4->Controls->Add(this->button1);
			this->tabPage4->Controls->Add(this->dataGridView1);
			this->tabPage4->Location = System::Drawing::Point(4, 39);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(857, 460);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Articles";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1135, 178);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->Commande);
			this->tabControl2->Controls->Add(this->Liste);
			this->tabControl2->Controls->Add(this->Payement);
			this->tabControl2->Location = System::Drawing::Point(0, 0);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(1143, 464);
			this->tabControl2->TabIndex = 0;
			// 
			// Commande
			// 
			this->Commande->Controls->Add(this->date_fac_com);
			this->Commande->Controls->Add(this->date_emi_com);
			this->Commande->Controls->Add(this->date_liv_com);
			this->Commande->Controls->Add(this->label8);
			this->Commande->Controls->Add(this->label7);
			this->Commande->Controls->Add(this->label6);
			this->Commande->Controls->Add(this->label5);
			this->Commande->Controls->Add(this->label4);
			this->Commande->Controls->Add(this->label3);
			this->Commande->Controls->Add(this->label2);
			this->Commande->Controls->Add(this->label1);
			this->Commande->Controls->Add(this->txt_adr_fac_com);
			this->Commande->Controls->Add(this->txt_adr_liv_com);
			this->Commande->Controls->Add(this->txt_tot_HT_com);
			this->Commande->Controls->Add(this->txt_ID_cli_com);
			this->Commande->Controls->Add(this->txt_ref_com_com);
			this->Commande->Controls->Add(this->but_del_com);
			this->Commande->Controls->Add(this->but_upd_com);
			this->Commande->Controls->Add(this->but_ins_com);
			this->Commande->Controls->Add(this->but_act_com);
			this->Commande->Controls->Add(this->dataGridView2);
			this->Commande->Location = System::Drawing::Point(4, 25);
			this->Commande->Name = L"Commande";
			this->Commande->Padding = System::Windows::Forms::Padding(3);
			this->Commande->Size = System::Drawing::Size(1135, 435);
			this->Commande->TabIndex = 0;
			this->Commande->Text = L"Commande";
			this->Commande->UseVisualStyleBackColor = true;
			// 
			// Liste
			// 
			this->Liste->Controls->Add(this->label13);
			this->Liste->Controls->Add(this->label12);
			this->Liste->Controls->Add(this->label11);
			this->Liste->Controls->Add(this->label10);
			this->Liste->Controls->Add(this->label9);
			this->Liste->Controls->Add(this->txt_qua_com_lis);
			this->Liste->Controls->Add(this->txt_tau_tva_lis);
			this->Liste->Controls->Add(this->txt_pri_uni_rem_lis);
			this->Liste->Controls->Add(this->txt_ref_art_lis);
			this->Liste->Controls->Add(this->txt_ref_com_lis);
			this->Liste->Controls->Add(this->but_del_lis);
			this->Liste->Controls->Add(this->but_upd_lis);
			this->Liste->Controls->Add(this->but_ins_lis);
			this->Liste->Controls->Add(this->but_act_lis);
			this->Liste->Controls->Add(this->dataGridView3);
			this->Liste->Location = System::Drawing::Point(4, 25);
			this->Liste->Name = L"Liste";
			this->Liste->Padding = System::Windows::Forms::Padding(3);
			this->Liste->Size = System::Drawing::Size(1135, 435);
			this->Liste->TabIndex = 1;
			this->Liste->Text = L"Liste";
			this->Liste->UseVisualStyleBackColor = true;
			// 
			// Payement
			// 
			this->Payement->Controls->Add(this->label18);
			this->Payement->Controls->Add(this->label17);
			this->Payement->Controls->Add(this->label16);
			this->Payement->Controls->Add(this->label15);
			this->Payement->Controls->Add(this->label14);
			this->Payement->Controls->Add(this->txt_ref_com_pay);
			this->Payement->Controls->Add(this->txt_mon_pay);
			this->Payement->Controls->Add(this->txt_moy_pay);
			this->Payement->Controls->Add(this->txt_dat_pay);
			this->Payement->Controls->Add(this->txt_ID_pay);
			this->Payement->Controls->Add(this->but_del_pay);
			this->Payement->Controls->Add(this->but_upt_pay);
			this->Payement->Controls->Add(this->but_ins_pay);
			this->Payement->Controls->Add(this->but_act_pay);
			this->Payement->Controls->Add(this->dataGridView4);
			this->Payement->Location = System::Drawing::Point(4, 25);
			this->Payement->Name = L"Payement";
			this->Payement->Padding = System::Windows::Forms::Padding(3);
			this->Payement->Size = System::Drawing::Size(950, 435);
			this->Payement->TabIndex = 2;
			this->Payement->Text = L"Payement";
			this->Payement->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			dataGridViewCellStyle19->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle19->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle19->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle19->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle19->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle19->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle19;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle20->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle20->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle20->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle20->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle20->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle20->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle20;
			this->dataGridView2->Location = System::Drawing::Point(0, 0);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			dataGridViewCellStyle21->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle21->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle21->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle21->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle21->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle21->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle21;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(794, 178);
			this->dataGridView2->TabIndex = 0;
			// 
			// but_act_com
			// 
			this->but_act_com->Location = System::Drawing::Point(6, 184);
			this->but_act_com->Name = L"but_act_com";
			this->but_act_com->Size = System::Drawing::Size(125, 42);
			this->but_act_com->TabIndex = 1;
			this->but_act_com->Text = L"Actualiser";
			this->but_act_com->UseVisualStyleBackColor = true;
			// 
			// but_ins_com
			// 
			this->but_ins_com->Location = System::Drawing::Point(6, 232);
			this->but_ins_com->Name = L"but_ins_com";
			this->but_ins_com->Size = System::Drawing::Size(125, 39);
			this->but_ins_com->TabIndex = 2;
			this->but_ins_com->Text = L"Inserer";
			this->but_ins_com->UseVisualStyleBackColor = true;
			this->but_ins_com->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// but_upd_com
			// 
			this->but_upd_com->Location = System::Drawing::Point(6, 277);
			this->but_upd_com->Name = L"but_upd_com";
			this->but_upd_com->Size = System::Drawing::Size(125, 39);
			this->but_upd_com->TabIndex = 3;
			this->but_upd_com->Text = L"Modifier";
			this->but_upd_com->UseVisualStyleBackColor = true;
			// 
			// but_del_com
			// 
			this->but_del_com->Location = System::Drawing::Point(6, 322);
			this->but_del_com->Name = L"but_del_com";
			this->but_del_com->Size = System::Drawing::Size(125, 40);
			this->but_del_com->TabIndex = 4;
			this->but_del_com->Text = L"Supprimer";
			this->but_del_com->UseVisualStyleBackColor = true;
			// 
			// txt_ref_com_com
			// 
			this->txt_ref_com_com->Location = System::Drawing::Point(161, 204);
			this->txt_ref_com_com->Name = L"txt_ref_com_com";
			this->txt_ref_com_com->Size = System::Drawing::Size(217, 22);
			this->txt_ref_com_com->TabIndex = 5;
			// 
			// txt_ID_cli_com
			// 
			this->txt_ID_cli_com->Location = System::Drawing::Point(161, 307);
			this->txt_ID_cli_com->Name = L"txt_ID_cli_com";
			this->txt_ID_cli_com->Size = System::Drawing::Size(217, 22);
			this->txt_ID_cli_com->TabIndex = 9;
			this->txt_ID_cli_com->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// txt_tot_HT_com
			// 
			this->txt_tot_HT_com->Location = System::Drawing::Point(161, 258);
			this->txt_tot_HT_com->Name = L"txt_tot_HT_com";
			this->txt_tot_HT_com->Size = System::Drawing::Size(217, 22);
			this->txt_tot_HT_com->TabIndex = 10;
			// 
			// txt_adr_liv_com
			// 
			this->txt_adr_liv_com->Location = System::Drawing::Point(161, 364);
			this->txt_adr_liv_com->Name = L"txt_adr_liv_com";
			this->txt_adr_liv_com->Size = System::Drawing::Size(217, 22);
			this->txt_adr_liv_com->TabIndex = 11;
			// 
			// txt_adr_fac_com
			// 
			this->txt_adr_fac_com->Location = System::Drawing::Point(717, 252);
			this->txt_adr_fac_com->Name = L"txt_adr_fac_com";
			this->txt_adr_fac_com->Size = System::Drawing::Size(214, 22);
			this->txt_adr_fac_com->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(161, 184);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 17);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Reference de la commande";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(656, 277);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(210, 17);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Date de livraison (AAAA-MM-JJ)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(656, 325);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(204, 17);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Date d\'emission (AAAA-MM-JJ)";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(656, 370);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(225, 17);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Date de facturation (AAAA-MM-JJ)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(161, 236);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 17);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Montant total HT";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(161, 285);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 17);
			this->label6->TabIndex = 18;
			this->label6->Text = L"ID du client";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(161, 336);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(178, 17);
			this->label7->TabIndex = 19;
			this->label7->Text = L"ID de l\'adresse de livraison";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(714, 232);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(193, 17);
			this->label8->TabIndex = 20;
			this->label8->Text = L"ID de l\'adresse de facturation";
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			dataGridViewCellStyle22->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle22->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle22->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle22->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle22->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle22->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle22;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle23->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle23->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle23->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle23->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle23->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle23->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle23;
			this->dataGridView3->Location = System::Drawing::Point(0, 0);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			dataGridViewCellStyle24->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle24->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle24->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle24->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle24->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle24->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->RowHeadersDefaultCellStyle = dataGridViewCellStyle24;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(848, 178);
			this->dataGridView3->TabIndex = 0;
			// 
			// but_act_lis
			// 
			this->but_act_lis->Location = System::Drawing::Point(6, 184);
			this->but_act_lis->Name = L"but_act_lis";
			this->but_act_lis->Size = System::Drawing::Size(125, 42);
			this->but_act_lis->TabIndex = 1;
			this->but_act_lis->Text = L"Actualiser";
			this->but_act_lis->UseVisualStyleBackColor = true;
			this->but_act_lis->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// but_ins_lis
			// 
			this->but_ins_lis->Location = System::Drawing::Point(6, 232);
			this->but_ins_lis->Name = L"but_ins_lis";
			this->but_ins_lis->Size = System::Drawing::Size(125, 42);
			this->but_ins_lis->TabIndex = 2;
			this->but_ins_lis->Text = L"Ajouter";
			this->but_ins_lis->UseVisualStyleBackColor = true;
			this->but_ins_lis->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// but_upd_lis
			// 
			this->but_upd_lis->Location = System::Drawing::Point(6, 280);
			this->but_upd_lis->Name = L"but_upd_lis";
			this->but_upd_lis->Size = System::Drawing::Size(125, 42);
			this->but_upd_lis->TabIndex = 3;
			this->but_upd_lis->Text = L"Modifier";
			this->but_upd_lis->UseVisualStyleBackColor = true;
			this->but_upd_lis->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// but_del_lis
			// 
			this->but_del_lis->Location = System::Drawing::Point(6, 328);
			this->but_del_lis->Name = L"but_del_lis";
			this->but_del_lis->Size = System::Drawing::Size(125, 42);
			this->but_del_lis->TabIndex = 4;
			this->but_del_lis->Text = L"Supprimer";
			this->but_del_lis->UseVisualStyleBackColor = true;
			// 
			// txt_ref_com_lis
			// 
			this->txt_ref_com_lis->Location = System::Drawing::Point(388, 215);
			this->txt_ref_com_lis->Name = L"txt_ref_com_lis";
			this->txt_ref_com_lis->Size = System::Drawing::Size(335, 22);
			this->txt_ref_com_lis->TabIndex = 5;
			// 
			// txt_ref_art_lis
			// 
			this->txt_ref_art_lis->Location = System::Drawing::Point(388, 289);
			this->txt_ref_art_lis->Name = L"txt_ref_art_lis";
			this->txt_ref_art_lis->Size = System::Drawing::Size(335, 22);
			this->txt_ref_art_lis->TabIndex = 6;
			// 
			// txt_pri_uni_rem_lis
			// 
			this->txt_pri_uni_rem_lis->Location = System::Drawing::Point(388, 363);
			this->txt_pri_uni_rem_lis->Name = L"txt_pri_uni_rem_lis";
			this->txt_pri_uni_rem_lis->Size = System::Drawing::Size(335, 22);
			this->txt_pri_uni_rem_lis->TabIndex = 7;
			this->txt_pri_uni_rem_lis->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// txt_tau_tva_lis
			// 
			this->txt_tau_tva_lis->Location = System::Drawing::Point(765, 289);
			this->txt_tau_tva_lis->Name = L"txt_tau_tva_lis";
			this->txt_tau_tva_lis->Size = System::Drawing::Size(335, 22);
			this->txt_tau_tva_lis->TabIndex = 8;
			this->txt_tau_tva_lis->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_tau_tva_lis_TextChanged);
			// 
			// txt_qua_com_lis
			// 
			this->txt_qua_com_lis->Location = System::Drawing::Point(765, 215);
			this->txt_qua_com_lis->Name = L"txt_qua_com_lis";
			this->txt_qua_com_lis->Size = System::Drawing::Size(335, 22);
			this->txt_qua_com_lis->TabIndex = 9;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(385, 269);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(142, 17);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Reference de l\'article";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(388, 340);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(128, 17);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Prix unitaire remise";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(385, 195);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(182, 17);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Reference de la commande";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(765, 192);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(135, 17);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Quantite commande";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(765, 263);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(109, 17);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Taux de la TVA ";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->AllowUserToDeleteRows = false;
			dataGridViewCellStyle25->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle25->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle25->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle25->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle25->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle25->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView4->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle25;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle26->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle26->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle26->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle26->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle26->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle26->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView4->DefaultCellStyle = dataGridViewCellStyle26;
			this->dataGridView4->Location = System::Drawing::Point(0, 0);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->ReadOnly = true;
			dataGridViewCellStyle27->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle27->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle27->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle27->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle27->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle27->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView4->RowHeadersDefaultCellStyle = dataGridViewCellStyle27;
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(1135, 178);
			this->dataGridView4->TabIndex = 0;
			// 
			// but_act_pay
			// 
			this->but_act_pay->Location = System::Drawing::Point(28, 215);
			this->but_act_pay->Name = L"but_act_pay";
			this->but_act_pay->Size = System::Drawing::Size(125, 65);
			this->but_act_pay->TabIndex = 1;
			this->but_act_pay->Text = L"Actualiser";
			this->but_act_pay->UseVisualStyleBackColor = true;
			this->but_act_pay->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// but_ins_pay
			// 
			this->but_ins_pay->Location = System::Drawing::Point(180, 215);
			this->but_ins_pay->Name = L"but_ins_pay";
			this->but_ins_pay->Size = System::Drawing::Size(125, 65);
			this->but_ins_pay->TabIndex = 2;
			this->but_ins_pay->Text = L"Ajouter";
			this->but_ins_pay->UseVisualStyleBackColor = true;
			this->but_ins_pay->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_2);
			// 
			// but_upt_pay
			// 
			this->but_upt_pay->Location = System::Drawing::Point(28, 306);
			this->but_upt_pay->Name = L"but_upt_pay";
			this->but_upt_pay->Size = System::Drawing::Size(125, 65);
			this->but_upt_pay->TabIndex = 3;
			this->but_upt_pay->Text = L"Modifier";
			this->but_upt_pay->UseVisualStyleBackColor = true;
			this->but_upt_pay->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// but_del_pay
			// 
			this->but_del_pay->Location = System::Drawing::Point(180, 306);
			this->but_del_pay->Name = L"but_del_pay";
			this->but_del_pay->Size = System::Drawing::Size(125, 65);
			this->but_del_pay->TabIndex = 4;
			this->but_del_pay->Text = L"Supprimer";
			this->but_del_pay->UseVisualStyleBackColor = true;
			this->but_del_pay->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// txt_ID_pay
			// 
			this->txt_ID_pay->Location = System::Drawing::Point(398, 215);
			this->txt_ID_pay->Name = L"txt_ID_pay";
			this->txt_ID_pay->Size = System::Drawing::Size(324, 22);
			this->txt_ID_pay->TabIndex = 5;
			// 
			// txt_dat_pay
			// 
			this->txt_dat_pay->Location = System::Drawing::Point(398, 280);
			this->txt_dat_pay->Name = L"txt_dat_pay";
			this->txt_dat_pay->Size = System::Drawing::Size(324, 22);
			this->txt_dat_pay->TabIndex = 6;
			// 
			// txt_moy_pay
			// 
			this->txt_moy_pay->Location = System::Drawing::Point(398, 348);
			this->txt_moy_pay->Name = L"txt_moy_pay";
			this->txt_moy_pay->Size = System::Drawing::Size(324, 22);
			this->txt_moy_pay->TabIndex = 7;
			// 
			// txt_mon_pay
			// 
			this->txt_mon_pay->Location = System::Drawing::Point(769, 215);
			this->txt_mon_pay->Name = L"txt_mon_pay";
			this->txt_mon_pay->Size = System::Drawing::Size(324, 22);
			this->txt_mon_pay->TabIndex = 8;
			// 
			// txt_ref_com_pay
			// 
			this->txt_ref_com_pay->Location = System::Drawing::Point(769, 280);
			this->txt_ref_com_pay->Name = L"txt_ref_com_pay";
			this->txt_ref_com_pay->Size = System::Drawing::Size(324, 22);
			this->txt_ref_com_pay->TabIndex = 9;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(398, 192);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(107, 17);
			this->label14->TabIndex = 10;
			this->label14->Text = L"ID du payement";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(398, 257);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(124, 17);
			this->label15->TabIndex = 11;
			this->label15->Text = L"Date du payement";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(398, 325);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(235, 17);
			this->label16->TabIndex = 12;
			this->label16->Text = L"Moyen de payement (CB ou Paypal)";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(769, 192);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(187, 17);
			this->label17->TabIndex = 13;
			this->label17->Text = L"Montant du payement (en €)";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(769, 257);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(182, 17);
			this->label18->TabIndex = 14;
			this->label18->Text = L"Reference de la commande";
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 39);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(857, 460);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Adresses";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// dataGridView5
			// 
			this->dataGridView5->AllowUserToAddRows = false;
			this->dataGridView5->AllowUserToDeleteRows = false;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(0, 0);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->ReadOnly = true;
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->Size = System::Drawing::Size(1135, 178);
			this->dataGridView5->TabIndex = 0;
			// 
			// but_act_cli
			// 
			this->but_act_cli->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_act_cli->Location = System::Drawing::Point(25, 216);
			this->but_act_cli->Name = L"but_act_cli";
			this->but_act_cli->Size = System::Drawing::Size(125, 65);
			this->but_act_cli->TabIndex = 1;
			this->but_act_cli->Text = L"Actualiser";
			this->but_act_cli->UseVisualStyleBackColor = true;
			// 
			// but_ins_cli
			// 
			this->but_ins_cli->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_ins_cli->Location = System::Drawing::Point(178, 216);
			this->but_ins_cli->Name = L"but_ins_cli";
			this->but_ins_cli->Size = System::Drawing::Size(125, 65);
			this->but_ins_cli->TabIndex = 2;
			this->but_ins_cli->Text = L"Ajouter";
			this->but_ins_cli->UseVisualStyleBackColor = true;
			this->but_ins_cli->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_3);
			// 
			// but_upd_cli
			// 
			this->but_upd_cli->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_upd_cli->Location = System::Drawing::Point(25, 305);
			this->but_upd_cli->Name = L"but_upd_cli";
			this->but_upd_cli->Size = System::Drawing::Size(125, 65);
			this->but_upd_cli->TabIndex = 3;
			this->but_upd_cli->Text = L"Modifier";
			this->but_upd_cli->UseVisualStyleBackColor = true;
			// 
			// but_del_cli
			// 
			this->but_del_cli->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_del_cli->Location = System::Drawing::Point(178, 305);
			this->but_del_cli->Name = L"but_del_cli";
			this->but_del_cli->Size = System::Drawing::Size(125, 65);
			this->but_del_cli->TabIndex = 4;
			this->but_del_cli->Text = L"Supprimer";
			this->but_del_cli->UseVisualStyleBackColor = true;
			// 
			// txt_ID_cli
			// 
			this->txt_ID_cli->Location = System::Drawing::Point(362, 216);
			this->txt_ID_cli->Name = L"txt_ID_cli";
			this->txt_ID_cli->Size = System::Drawing::Size(350, 27);
			this->txt_ID_cli->TabIndex = 5;
			// 
			// txt_dat_nai_cli
			// 
			this->txt_dat_nai_cli->Location = System::Drawing::Point(752, 216);
			this->txt_dat_nai_cli->Name = L"txt_dat_nai_cli";
			this->txt_dat_nai_cli->Size = System::Drawing::Size(350, 27);
			this->txt_dat_nai_cli->TabIndex = 6;
			this->txt_dat_nai_cli->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// txt_nom_cli
			// 
			this->txt_nom_cli->Location = System::Drawing::Point(362, 305);
			this->txt_nom_cli->Name = L"txt_nom_cli";
			this->txt_nom_cli->Size = System::Drawing::Size(350, 27);
			this->txt_nom_cli->TabIndex = 7;
			// 
			// dat_1er_ach_cli
			// 
			this->dat_1er_ach_cli->Location = System::Drawing::Point(752, 305);
			this->dat_1er_ach_cli->Name = L"dat_1er_ach_cli";
			this->dat_1er_ach_cli->Size = System::Drawing::Size(350, 27);
			this->dat_1er_ach_cli->TabIndex = 8;
			// 
			// txt_pre_cli
			// 
			this->txt_pre_cli->Location = System::Drawing::Point(362, 390);
			this->txt_pre_cli->Name = L"txt_pre_cli";
			this->txt_pre_cli->Size = System::Drawing::Size(350, 27);
			this->txt_pre_cli->TabIndex = 9;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(362, 193);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(78, 17);
			this->label19->TabIndex = 10;
			this->label19->Text = L"ID du client";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(362, 282);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(94, 17);
			this->label20->TabIndex = 11;
			this->label20->Text = L"Nom du client";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(362, 367);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(114, 17);
			this->label21->TabIndex = 12;
			this->label21->Text = L"Prenom du client";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(752, 193);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(183, 17);
			this->label22->TabIndex = 13;
			this->label22->Text = L"Date de naissance du client";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(752, 282);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(122, 17);
			this->label23->TabIndex = 14;
			this->label23->Text = L"Date du 1er achat";
			// 
			// dataGridView6
			// 
			this->dataGridView6->AllowUserToAddRows = false;
			this->dataGridView6->AllowUserToDeleteRows = false;
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(-4, 0);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->ReadOnly = true;
			this->dataGridView6->RowHeadersWidth = 51;
			this->dataGridView6->RowTemplate->Height = 24;
			this->dataGridView6->Size = System::Drawing::Size(1135, 178);
			this->dataGridView6->TabIndex = 0;
			// 
			// but_act_emp
			// 
			this->but_act_emp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_act_emp->Location = System::Drawing::Point(25, 215);
			this->but_act_emp->Name = L"but_act_emp";
			this->but_act_emp->Size = System::Drawing::Size(125, 65);
			this->but_act_emp->TabIndex = 1;
			this->but_act_emp->Text = L"Actualiser";
			this->but_act_emp->UseVisualStyleBackColor = true;
			// 
			// but_ins_emp
			// 
			this->but_ins_emp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_ins_emp->Location = System::Drawing::Point(178, 215);
			this->but_ins_emp->Name = L"but_ins_emp";
			this->but_ins_emp->Size = System::Drawing::Size(125, 65);
			this->but_ins_emp->TabIndex = 2;
			this->but_ins_emp->Text = L"Ajouter";
			this->but_ins_emp->UseVisualStyleBackColor = true;
			// 
			// but_upd_emp
			// 
			this->but_upd_emp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_upd_emp->Location = System::Drawing::Point(25, 312);
			this->but_upd_emp->Name = L"but_upd_emp";
			this->but_upd_emp->Size = System::Drawing::Size(125, 65);
			this->but_upd_emp->TabIndex = 3;
			this->but_upd_emp->Text = L"Modifier";
			this->but_upd_emp->UseVisualStyleBackColor = true;
			// 
			// but_del_emp
			// 
			this->but_del_emp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_del_emp->Location = System::Drawing::Point(178, 312);
			this->but_del_emp->Name = L"but_del_emp";
			this->but_del_emp->Size = System::Drawing::Size(125, 65);
			this->but_del_emp->TabIndex = 4;
			this->but_del_emp->Text = L"Supprimer";
			this->but_del_emp->UseVisualStyleBackColor = true;
			// 
			// txt_ID_emp
			// 
			this->txt_ID_emp->Location = System::Drawing::Point(370, 215);
			this->txt_ID_emp->Name = L"txt_ID_emp";
			this->txt_ID_emp->Size = System::Drawing::Size(354, 27);
			this->txt_ID_emp->TabIndex = 5;
			// 
			// txt_dat_emb_emp
			// 
			this->txt_dat_emb_emp->Location = System::Drawing::Point(756, 215);
			this->txt_dat_emb_emp->Name = L"txt_dat_emb_emp";
			this->txt_dat_emb_emp->Size = System::Drawing::Size(354, 27);
			this->txt_dat_emb_emp->TabIndex = 6;
			// 
			// txt_nom_emp
			// 
			this->txt_nom_emp->Location = System::Drawing::Point(370, 301);
			this->txt_nom_emp->Name = L"txt_nom_emp";
			this->txt_nom_emp->Size = System::Drawing::Size(354, 27);
			this->txt_nom_emp->TabIndex = 7;
			// 
			// txt_sup_hie_emp
			// 
			this->txt_sup_hie_emp->Location = System::Drawing::Point(756, 301);
			this->txt_sup_hie_emp->Name = L"txt_sup_hie_emp";
			this->txt_sup_hie_emp->Size = System::Drawing::Size(354, 27);
			this->txt_sup_hie_emp->TabIndex = 8;
			// 
			// txt_pre_emp
			// 
			this->txt_pre_emp->Location = System::Drawing::Point(370, 389);
			this->txt_pre_emp->Name = L"txt_pre_emp";
			this->txt_pre_emp->Size = System::Drawing::Size(354, 27);
			this->txt_pre_emp->TabIndex = 9;
			this->txt_pre_emp->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged_1);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(370, 192);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(104, 17);
			this->label24->TabIndex = 10;
			this->label24->Text = L"ID de l\'employe";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(370, 278);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(120, 17);
			this->label25->TabIndex = 11;
			this->label25->Text = L"Nom de l\'employe";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(366, 366);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(140, 17);
			this->label26->TabIndex = 12;
			this->label26->Text = L"Prenom de l\'employe";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(756, 192);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(202, 17);
			this->label27->TabIndex = 13;
			this->label27->Text = L"Date d\'embauche de l\'employe";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(756, 278);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(324, 17);
			this->label28->TabIndex = 14;
			this->label28->Text = L"Superieur hierarchique (1 pour oui ou 0 pour non)";
			// 
			// txt_ID_sup_hie_emp
			// 
			this->txt_ID_sup_hie_emp->Location = System::Drawing::Point(755, 389);
			this->txt_ID_sup_hie_emp->Name = L"txt_ID_sup_hie_emp";
			this->txt_ID_sup_hie_emp->Size = System::Drawing::Size(355, 27);
			this->txt_ID_sup_hie_emp->TabIndex = 15;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(756, 366);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(188, 17);
			this->label29->TabIndex = 16;
			this->label29->Text = L"ID du superieur hierarchique";
			this->label29->Click += gcnew System::EventHandler(this, &MyForm::label29_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(25, 215);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 65);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Actualiser";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(176, 215);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 65);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Ajouter";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(25, 317);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 65);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Modifier";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(176, 317);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(125, 65);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Supprimer";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// date_liv_com
			// 
			this->date_liv_com->Location = System::Drawing::Point(659, 297);
			this->date_liv_com->Name = L"date_liv_com";
			this->date_liv_com->Size = System::Drawing::Size(248, 22);
			this->date_liv_com->TabIndex = 22;
			// 
			// date_emi_com
			// 
			this->date_emi_com->Location = System::Drawing::Point(659, 345);
			this->date_emi_com->Name = L"date_emi_com";
			this->date_emi_com->Size = System::Drawing::Size(248, 22);
			this->date_emi_com->TabIndex = 23;
			// 
			// date_fac_com
			// 
			this->date_fac_com->Location = System::Drawing::Point(659, 390);
			this->date_fac_com->Name = L"date_fac_com";
			this->date_fac_com->Size = System::Drawing::Size(248, 22);
			this->date_fac_com->TabIndex = 24;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1147, 502);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"BugsBunny Fortnite";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl2->ResumeLayout(false);
			this->Commande->ResumeLayout(false);
			this->Commande->PerformLayout();
			this->Liste->ResumeLayout(false);
			this->Liste->PerformLayout();
			this->Payement->ResumeLayout(false);
			this->Payement->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_tau_tva_lis_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_3(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
