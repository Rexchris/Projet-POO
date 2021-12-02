#pragma once
#include "Clservice.h"
#include "CLserviceStat.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de MyForm
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
			//this->oService = gcnew NS_Comp_Service::Clservice();
			this->oService_Commande = gcnew NS_Comp_Service::Clservice();
			this->oService_Commande_Liste = gcnew NS_Comp_Service::Clservice();
			this->oService_Commande_RefCommande = gcnew NS_Comp_Service::Clservice();
			this->oService_Client = gcnew NS_Comp_Service::Clservice();
			this->oService_Adresse = gcnew NS_Comp_Service::Clservice();
			this->oService_Employe = gcnew NS_Comp_Service::Clservice();
			this->oService_Article = gcnew NS_Comp_Service::Clservice();
			this->oService_Article_Stock = gcnew NS_Comp_Service::Clservice();
			this->oService_Couleur = gcnew NS_Comp_Service::Clservice();
			this->oService_Payement = gcnew NS_Comp_Service::Clservice();
			this->oService_Stat_PanierMoyen = gcnew NS_Comp_Service_Stat::ClserviceStat();
			this->oService_Stat_ChiffreAffaire = gcnew NS_Comp_Service_Stat::ClserviceStat();
			this->oService_Stat_SousSeuil = gcnew NS_Comp_Service_Stat::ClserviceStat();
			this->oService_Stat_MontantAchatClient = gcnew NS_Comp_Service_Stat::ClserviceStat();
			this->oService_Stat_10PlusVendus = gcnew NS_Comp_Service_Stat::ClserviceStat();
			this->oService_Stat_10MoinsVendus = gcnew NS_Comp_Service_Stat::ClserviceStat();
			this->oService_Stat_ValeurCommercialeStock = gcnew NS_Comp_Service_Stat::ClserviceStat();
			this->oService_Stat_ValeurAchatStock = gcnew NS_Comp_Service_Stat::ClserviceStat();
			this->oService_Adresse_Ville = gcnew NS_Comp_Service::Clservice();
			this->oService_Adresse_Ville2 = gcnew NS_Comp_Service::Clservice();
			this->oService_Stat_AllMonth = gcnew NS_Comp_Service_Stat::ClserviceStat();
			this->oService_Stat_AllYear = gcnew NS_Comp_Service_Stat::ClserviceStat();

			this->dataGridView2->Refresh();
			this->oDs_Commande = this->oService_Commande->AfficherCommandes();
			this->dataGridView2->DataSource = this->oDs_Commande;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
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



	private: System::Windows::Forms::TextBox^ txt_nom_cli;





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




	private: System::Windows::Forms::TextBox^ txt_nom_emp;




	private: System::Windows::Forms::TextBox^ txt_ID_emp;

	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::TextBox^ txt_ID_sup_hie_emp;

	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;




	private: System::Windows::Forms::DateTimePicker^ date_liv_com;
	private: System::Windows::Forms::DateTimePicker^ date_fac_com;

	private: System::Windows::Forms::DateTimePicker^ date_emi_com;
	private: System::Windows::Forms::TabControl^ tabControl3;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ but_del_art;

	private: System::Windows::Forms::Button^ but_upd_art;

	private: System::Windows::Forms::Button^ but_ins_act;

	private: System::Windows::Forms::Button^ but_act_art;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::TextBox^ txt_nom_cou;
	private: System::Windows::Forms::TextBox^ txt_ID_cou;
	private: System::Windows::Forms::Button^ but_del_cou;
	private: System::Windows::Forms::Button^ but_upd_cou;
	private: System::Windows::Forms::Button^ but_ins_cou;
	private: System::Windows::Forms::Button^ but_act_cou;
	private: System::Windows::Forms::DataGridView^ dataGridView7;
	private: System::Windows::Forms::Button^ but_del_adr;


	private: System::Windows::Forms::Button^ but_upd_adr;

	private: System::Windows::Forms::Button^ but_ins_adr;

	private: System::Windows::Forms::Button^ but_act_adr;

	private: System::Windows::Forms::DataGridView^ dataGridView8;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label40;



	private: System::Windows::Forms::TextBox^ txt_nom_rue_adr;

	private: System::Windows::Forms::TextBox^ txt_num_adr;

	private: System::Windows::Forms::TextBox^ txt_ID_adr;
	private: System::Windows::Forms::DateTimePicker^ dat_pay;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DateTimePicker^ er_ach_cli;

	private: System::Windows::Forms::DateTimePicker^ dat_nai_cli;
	private: System::Windows::Forms::DateTimePicker^ dat_emb_emp;
	private: System::Windows::Forms::ComboBox^ txt_sup_hie_emp;



	private: NS_Comp_Service::Clservice^ oService;
	private: System::Data::DataTable^ oDs;
	//Commande
	private: NS_Comp_Service::Clservice^ oService_Commande;
	private: System::Data::DataTable^ oDs_Commande;
	//Commande_Liste
	private: NS_Comp_Service::Clservice^ oService_Commande_Liste;
	private: System::Data::DataTable^ oDs_Commande_Liste;
	//oService_Commande_RefCommande
	private: NS_Comp_Service::Clservice^ oService_Commande_RefCommande;
	private: System::Data::DataTable^ oDs_Commande_RefCommande;

	//Client
	private: NS_Comp_Service::Clservice^ oService_Client;
	private: System::Data::DataTable^ oDs_Client;
	//Adresse
	private: NS_Comp_Service::Clservice^ oService_Adresse;
	private: System::Data::DataTable^ oDs_Adresse;
	//Employe
	private: NS_Comp_Service::Clservice^ oService_Employe;
	private: System::Data::DataTable^ oDs_Employe;
	//Article
	private: NS_Comp_Service::Clservice^ oService_Article;
	private: System::Data::DataTable^ oDs_Article;
	//oService_Article_Stock
	private: NS_Comp_Service::Clservice^ oService_Article_Stock;
	private: System::Data::DataTable^ oDs_Article_Stock;
	//Couleur
	private: NS_Comp_Service::Clservice^ oService_Couleur;
	private: System::Data::DataTable^ oDs_Couleur;
	//Payement
	private: NS_Comp_Service::Clservice^ oService_Payement;
	private: System::Data::DataTable^ oDs_Payement;
	//Adresse Ville
	private: NS_Comp_Service::Clservice^ oService_Adresse_Ville;
	private: System::Data::DataTable^ oDs_Adresse_Ville;
	//Adresse Ville 2
	private: NS_Comp_Service::Clservice^ oService_Adresse_Ville2;
	private: System::Data::DataTable^ oDs_Adresse_Ville2;
	//Panier Moyen
	private: NS_Comp_Service_Stat::ClserviceStat^ oService_Stat_PanierMoyen;
	private: System::Data::DataTable^ oDs_Stat_PanierMoyen;
	//Chiffre Affaire
	private: NS_Comp_Service_Stat::ClserviceStat^ oService_Stat_ChiffreAffaire;
	private: System::Data::DataTable^ oDs_Stat_ChiffreAffaire;
    //Sous Seuil
	private: NS_Comp_Service_Stat::ClserviceStat^ oService_Stat_SousSeuil;
	private: System::Data::DataTable^ oDs_Stat_SousSeuil;
	//Montant Achat Client
	private: NS_Comp_Service_Stat::ClserviceStat^ oService_Stat_MontantAchatClient;
	private: System::Data::DataTable^ oDs_Stat_MontantAchatClient;
	//10 Plus Vendus
	private: NS_Comp_Service_Stat::ClserviceStat^ oService_Stat_10PlusVendus;
	private: System::Data::DataTable^ oDs_Stat_10PlusVendus;
	//10 Moins Vendus
	private: NS_Comp_Service_Stat::ClserviceStat^ oService_Stat_10MoinsVendus;
	private: System::Data::DataTable^ oDs_Stat_10MoinsVendus;
	//Valeur Commerciale Stock
	private: NS_Comp_Service_Stat::ClserviceStat^ oService_Stat_ValeurCommercialeStock;
	private: System::Data::DataTable^ oDs_Stat_ValeurCommercialeStock;
	//Valeur Achat Stock
	private: NS_Comp_Service_Stat::ClserviceStat^ oService_Stat_ValeurAchatStock;
	private: System::Data::DataTable^ oDs_Stat_ValeurAchatStock;
	//Valeur Stat_AllMonth
	private: NS_Comp_Service_Stat::ClserviceStat^ oService_Stat_AllMonth;
	private: System::Data::DataTable^ oDs_Stat_AllMonth;
	//Valeur Stat_AllYear
	private: NS_Comp_Service_Stat::ClserviceStat^ oService_Stat_AllYear;
	private: System::Data::DataTable^ oDs_Stat_AllYear;


private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::TextBox^ txt_ID_adr_emp;
private: System::Windows::Forms::TabPage^ tabPage8;
private: System::Windows::Forms::ComboBox^ comboBox_Stat;
private: System::Windows::Forms::DataGridView^ dataGridView9;
private: System::Windows::Forms::ComboBox^ txt_nom_ville_adr;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::ComboBox^ txt_moi_stat;
private: System::Windows::Forms::Label^ lab_moi_stat;
private: System::Windows::Forms::Label^ lab_ann_stat;



private: System::Windows::Forms::ComboBox^ txt_ann_stat;






















	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->Commande = (gcnew System::Windows::Forms::TabPage());
			this->date_fac_com = (gcnew System::Windows::Forms::DateTimePicker());
			this->date_emi_com = (gcnew System::Windows::Forms::DateTimePicker());
			this->date_liv_com = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_adr_fac_com = (gcnew System::Windows::Forms::TextBox());
			this->txt_adr_liv_com = (gcnew System::Windows::Forms::TextBox());
			this->txt_tot_HT_com = (gcnew System::Windows::Forms::TextBox());
			this->txt_ID_cli_com = (gcnew System::Windows::Forms::TextBox());
			this->txt_ref_com_com = (gcnew System::Windows::Forms::TextBox());
			this->but_del_com = (gcnew System::Windows::Forms::Button());
			this->but_upd_com = (gcnew System::Windows::Forms::Button());
			this->but_ins_com = (gcnew System::Windows::Forms::Button());
			this->but_act_com = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Liste = (gcnew System::Windows::Forms::TabPage());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt_qua_com_lis = (gcnew System::Windows::Forms::TextBox());
			this->txt_tau_tva_lis = (gcnew System::Windows::Forms::TextBox());
			this->txt_pri_uni_rem_lis = (gcnew System::Windows::Forms::TextBox());
			this->txt_ref_art_lis = (gcnew System::Windows::Forms::TextBox());
			this->txt_ref_com_lis = (gcnew System::Windows::Forms::TextBox());
			this->but_del_lis = (gcnew System::Windows::Forms::Button());
			this->but_upd_lis = (gcnew System::Windows::Forms::Button());
			this->but_ins_lis = (gcnew System::Windows::Forms::Button());
			this->but_act_lis = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Payement = (gcnew System::Windows::Forms::TabPage());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dat_pay = (gcnew System::Windows::Forms::DateTimePicker());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txt_ref_com_pay = (gcnew System::Windows::Forms::TextBox());
			this->txt_mon_pay = (gcnew System::Windows::Forms::TextBox());
			this->txt_ID_pay = (gcnew System::Windows::Forms::TextBox());
			this->but_del_pay = (gcnew System::Windows::Forms::Button());
			this->but_upt_pay = (gcnew System::Windows::Forms::Button());
			this->but_ins_pay = (gcnew System::Windows::Forms::Button());
			this->but_act_pay = (gcnew System::Windows::Forms::Button());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->er_ach_cli = (gcnew System::Windows::Forms::DateTimePicker());
			this->dat_nai_cli = (gcnew System::Windows::Forms::DateTimePicker());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->txt_pre_cli = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom_cli = (gcnew System::Windows::Forms::TextBox());
			this->txt_ID_cli = (gcnew System::Windows::Forms::TextBox());
			this->but_del_cli = (gcnew System::Windows::Forms::Button());
			this->but_upd_cli = (gcnew System::Windows::Forms::Button());
			this->but_ins_cli = (gcnew System::Windows::Forms::Button());
			this->but_act_cli = (gcnew System::Windows::Forms::Button());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->txt_ID_adr_emp = (gcnew System::Windows::Forms::TextBox());
			this->txt_sup_hie_emp = (gcnew System::Windows::Forms::ComboBox());
			this->dat_emb_emp = (gcnew System::Windows::Forms::DateTimePicker());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->txt_ID_sup_hie_emp = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->txt_pre_emp = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom_emp = (gcnew System::Windows::Forms::TextBox());
			this->txt_ID_emp = (gcnew System::Windows::Forms::TextBox());
			this->but_del_emp = (gcnew System::Windows::Forms::Button());
			this->but_upd_emp = (gcnew System::Windows::Forms::Button());
			this->but_ins_emp = (gcnew System::Windows::Forms::Button());
			this->but_act_emp = (gcnew System::Windows::Forms::Button());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->but_del_art = (gcnew System::Windows::Forms::Button());
			this->but_upd_art = (gcnew System::Windows::Forms::Button());
			this->but_ins_act = (gcnew System::Windows::Forms::Button());
			this->but_act_art = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->txt_nom_cou = (gcnew System::Windows::Forms::TextBox());
			this->txt_ID_cou = (gcnew System::Windows::Forms::TextBox());
			this->but_del_cou = (gcnew System::Windows::Forms::Button());
			this->but_upd_cou = (gcnew System::Windows::Forms::Button());
			this->but_ins_cou = (gcnew System::Windows::Forms::Button());
			this->but_act_cou = (gcnew System::Windows::Forms::Button());
			this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->txt_nom_ville_adr = (gcnew System::Windows::Forms::ComboBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->txt_nom_rue_adr = (gcnew System::Windows::Forms::TextBox());
			this->txt_num_adr = (gcnew System::Windows::Forms::TextBox());
			this->txt_ID_adr = (gcnew System::Windows::Forms::TextBox());
			this->but_del_adr = (gcnew System::Windows::Forms::Button());
			this->but_upd_adr = (gcnew System::Windows::Forms::Button());
			this->but_ins_adr = (gcnew System::Windows::Forms::Button());
			this->but_act_adr = (gcnew System::Windows::Forms::Button());
			this->dataGridView8 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->txt_ann_stat = (gcnew System::Windows::Forms::ComboBox());
			this->lab_ann_stat = (gcnew System::Windows::Forms::Label());
			this->lab_moi_stat = (gcnew System::Windows::Forms::Label());
			this->txt_moi_stat = (gcnew System::Windows::Forms::ComboBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->comboBox_Stat = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView9 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->Commande->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->Liste->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->Payement->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->BeginInit();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView9))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(-1, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(837, 371);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->Selected += gcnew System::Windows::Forms::TabControlEventHandler(this, &MyForm::tabControl1_Selected);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(829, 345);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Commandes";
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->Commande);
			this->tabControl2->Controls->Add(this->Liste);
			this->tabControl2->Controls->Add(this->Payement);
			this->tabControl2->Location = System::Drawing::Point(0, 0);
			this->tabControl2->Margin = System::Windows::Forms::Padding(2);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(833, 349);
			this->tabControl2->TabIndex = 0;
			this->tabControl2->Selected += gcnew System::Windows::Forms::TabControlEventHandler(this, &MyForm::tabControl2_Selected);
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
			this->Commande->Location = System::Drawing::Point(4, 22);
			this->Commande->Margin = System::Windows::Forms::Padding(2);
			this->Commande->Name = L"Commande";
			this->Commande->Padding = System::Windows::Forms::Padding(2);
			this->Commande->Size = System::Drawing::Size(825, 323);
			this->Commande->TabIndex = 0;
			this->Commande->Text = L"Commande";
			this->Commande->UseVisualStyleBackColor = true;
			// 
			// date_fac_com
			// 
			this->date_fac_com->Location = System::Drawing::Point(302, 297);
			this->date_fac_com->Margin = System::Windows::Forms::Padding(2);
			this->date_fac_com->Name = L"date_fac_com";
			this->date_fac_com->Size = System::Drawing::Size(164, 19);
			this->date_fac_com->TabIndex = 24;
			// 
			// date_emi_com
			// 
			this->date_emi_com->Location = System::Drawing::Point(302, 254);
			this->date_emi_com->Margin = System::Windows::Forms::Padding(2);
			this->date_emi_com->Name = L"date_emi_com";
			this->date_emi_com->Size = System::Drawing::Size(164, 19);
			this->date_emi_com->TabIndex = 23;
			// 
			// date_liv_com
			// 
			this->date_liv_com->Location = System::Drawing::Point(302, 211);
			this->date_liv_com->Margin = System::Windows::Forms::Padding(2);
			this->date_liv_com->Name = L"date_liv_com";
			this->date_liv_com->Size = System::Drawing::Size(164, 19);
			this->date_liv_com->TabIndex = 22;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(302, 151);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(145, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"ID de l\'adresse de facturation";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(115, 280);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(133, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"ID de l\'adresse de livraison";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(115, 237);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"ID du client";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(115, 194);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Montant total HT";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(302, 280);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Date de facturation";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(302, 237);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Date d\'emission";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(302, 194);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Date de livraison";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(115, 151);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"ID de la commande";
			// 
			// txt_adr_fac_com
			// 
			this->txt_adr_fac_com->Location = System::Drawing::Point(302, 168);
			this->txt_adr_fac_com->Margin = System::Windows::Forms::Padding(2);
			this->txt_adr_fac_com->Name = L"txt_adr_fac_com";
			this->txt_adr_fac_com->Size = System::Drawing::Size(164, 19);
			this->txt_adr_fac_com->TabIndex = 12;
			// 
			// txt_adr_liv_com
			// 
			this->txt_adr_liv_com->Location = System::Drawing::Point(115, 297);
			this->txt_adr_liv_com->Margin = System::Windows::Forms::Padding(2);
			this->txt_adr_liv_com->Name = L"txt_adr_liv_com";
			this->txt_adr_liv_com->Size = System::Drawing::Size(164, 19);
			this->txt_adr_liv_com->TabIndex = 11;
			// 
			// txt_tot_HT_com
			// 
			this->txt_tot_HT_com->Location = System::Drawing::Point(115, 211);
			this->txt_tot_HT_com->Margin = System::Windows::Forms::Padding(2);
			this->txt_tot_HT_com->Name = L"txt_tot_HT_com";
			this->txt_tot_HT_com->Size = System::Drawing::Size(164, 19);
			this->txt_tot_HT_com->TabIndex = 10;
			// 
			// txt_ID_cli_com
			// 
			this->txt_ID_cli_com->Location = System::Drawing::Point(115, 254);
			this->txt_ID_cli_com->Margin = System::Windows::Forms::Padding(2);
			this->txt_ID_cli_com->Name = L"txt_ID_cli_com";
			this->txt_ID_cli_com->Size = System::Drawing::Size(164, 19);
			this->txt_ID_cli_com->TabIndex = 9;
			// 
			// txt_ref_com_com
			// 
			this->txt_ref_com_com->Location = System::Drawing::Point(115, 168);
			this->txt_ref_com_com->Margin = System::Windows::Forms::Padding(2);
			this->txt_ref_com_com->Name = L"txt_ref_com_com";
			this->txt_ref_com_com->Size = System::Drawing::Size(164, 19);
			this->txt_ref_com_com->TabIndex = 5;
			// 
			// but_del_com
			// 
			this->but_del_com->Location = System::Drawing::Point(5, 274);
			this->but_del_com->Margin = System::Windows::Forms::Padding(2);
			this->but_del_com->Name = L"but_del_com";
			this->but_del_com->Size = System::Drawing::Size(94, 34);
			this->but_del_com->TabIndex = 4;
			this->but_del_com->Text = L"Supprimer";
			this->but_del_com->UseVisualStyleBackColor = true;
			this->but_del_com->Click += gcnew System::EventHandler(this, &MyForm::but_del_com_Click);
			// 
			// but_upd_com
			// 
			this->but_upd_com->Location = System::Drawing::Point(5, 234);
			this->but_upd_com->Margin = System::Windows::Forms::Padding(2);
			this->but_upd_com->Name = L"but_upd_com";
			this->but_upd_com->Size = System::Drawing::Size(94, 34);
			this->but_upd_com->TabIndex = 3;
			this->but_upd_com->Text = L"Modifier";
			this->but_upd_com->UseVisualStyleBackColor = true;
			this->but_upd_com->Click += gcnew System::EventHandler(this, &MyForm::but_upd_com_Click);
			// 
			// but_ins_com
			// 
			this->but_ins_com->Location = System::Drawing::Point(5, 194);
			this->but_ins_com->Margin = System::Windows::Forms::Padding(2);
			this->but_ins_com->Name = L"but_ins_com";
			this->but_ins_com->Size = System::Drawing::Size(94, 34);
			this->but_ins_com->TabIndex = 2;
			this->but_ins_com->Text = L"Ins�rer";
			this->but_ins_com->UseVisualStyleBackColor = true;
			this->but_ins_com->Click += gcnew System::EventHandler(this, &MyForm::but_ins_com_Click);
			// 
			// but_act_com
			// 
			this->but_act_com->Location = System::Drawing::Point(5, 154);
			this->but_act_com->Margin = System::Windows::Forms::Padding(2);
			this->but_act_com->Name = L"but_act_com";
			this->but_act_com->Size = System::Drawing::Size(94, 34);
			this->but_act_com->TabIndex = 1;
			this->but_act_com->Text = L"Actualiser";
			this->but_act_com->UseVisualStyleBackColor = true;
			this->but_act_com->Click += gcnew System::EventHandler(this, &MyForm::but_act_com_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(0, 0);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(823, 145);
			this->dataGridView2->TabIndex = 0;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
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
			this->Liste->Location = System::Drawing::Point(4, 22);
			this->Liste->Margin = System::Windows::Forms::Padding(2);
			this->Liste->Name = L"Liste";
			this->Liste->Padding = System::Windows::Forms::Padding(2);
			this->Liste->Size = System::Drawing::Size(825, 323);
			this->Liste->TabIndex = 1;
			this->Liste->Text = L"Liste";
			this->Liste->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(302, 194);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(84, 13);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Taux de la TVA ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(302, 151);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(102, 13);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Quantite commande";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(115, 151);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(138, 13);
			this->label11->TabIndex = 13;
			this->label11->Text = L"R�f�rence de la commande";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(115, 237);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(94, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Prix unitaire remis�";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(115, 194);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(107, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"R�f�rence de l\'article";
			// 
			// txt_qua_com_lis
			// 
			this->txt_qua_com_lis->Location = System::Drawing::Point(302, 168);
			this->txt_qua_com_lis->Margin = System::Windows::Forms::Padding(2);
			this->txt_qua_com_lis->Name = L"txt_qua_com_lis";
			this->txt_qua_com_lis->Size = System::Drawing::Size(164, 19);
			this->txt_qua_com_lis->TabIndex = 9;
			// 
			// txt_tau_tva_lis
			// 
			this->txt_tau_tva_lis->Location = System::Drawing::Point(302, 211);
			this->txt_tau_tva_lis->Margin = System::Windows::Forms::Padding(2);
			this->txt_tau_tva_lis->Name = L"txt_tau_tva_lis";
			this->txt_tau_tva_lis->Size = System::Drawing::Size(164, 19);
			this->txt_tau_tva_lis->TabIndex = 8;
			// 
			// txt_pri_uni_rem_lis
			// 
			this->txt_pri_uni_rem_lis->Location = System::Drawing::Point(115, 254);
			this->txt_pri_uni_rem_lis->Margin = System::Windows::Forms::Padding(2);
			this->txt_pri_uni_rem_lis->Name = L"txt_pri_uni_rem_lis";
			this->txt_pri_uni_rem_lis->Size = System::Drawing::Size(164, 19);
			this->txt_pri_uni_rem_lis->TabIndex = 7;
			// 
			// txt_ref_art_lis
			// 
			this->txt_ref_art_lis->Location = System::Drawing::Point(115, 211);
			this->txt_ref_art_lis->Margin = System::Windows::Forms::Padding(2);
			this->txt_ref_art_lis->Name = L"txt_ref_art_lis";
			this->txt_ref_art_lis->Size = System::Drawing::Size(164, 19);
			this->txt_ref_art_lis->TabIndex = 6;
			// 
			// txt_ref_com_lis
			// 
			this->txt_ref_com_lis->Location = System::Drawing::Point(115, 168);
			this->txt_ref_com_lis->Margin = System::Windows::Forms::Padding(2);
			this->txt_ref_com_lis->Name = L"txt_ref_com_lis";
			this->txt_ref_com_lis->Size = System::Drawing::Size(164, 19);
			this->txt_ref_com_lis->TabIndex = 5;
			// 
			// but_del_lis
			// 
			this->but_del_lis->Location = System::Drawing::Point(5, 274);
			this->but_del_lis->Margin = System::Windows::Forms::Padding(2);
			this->but_del_lis->Name = L"but_del_lis";
			this->but_del_lis->Size = System::Drawing::Size(94, 34);
			this->but_del_lis->TabIndex = 4;
			this->but_del_lis->Text = L"Supprimer";
			this->but_del_lis->UseVisualStyleBackColor = true;
			this->but_del_lis->Click += gcnew System::EventHandler(this, &MyForm::but_del_lis_Click);
			// 
			// but_upd_lis
			// 
			this->but_upd_lis->Location = System::Drawing::Point(5, 234);
			this->but_upd_lis->Margin = System::Windows::Forms::Padding(2);
			this->but_upd_lis->Name = L"but_upd_lis";
			this->but_upd_lis->Size = System::Drawing::Size(94, 34);
			this->but_upd_lis->TabIndex = 3;
			this->but_upd_lis->Text = L"Modifier";
			this->but_upd_lis->UseVisualStyleBackColor = true;
			this->but_upd_lis->Click += gcnew System::EventHandler(this, &MyForm::but_upd_lis_Click);
			// 
			// but_ins_lis
			// 
			this->but_ins_lis->Location = System::Drawing::Point(5, 194);
			this->but_ins_lis->Margin = System::Windows::Forms::Padding(2);
			this->but_ins_lis->Name = L"but_ins_lis";
			this->but_ins_lis->Size = System::Drawing::Size(94, 34);
			this->but_ins_lis->TabIndex = 2;
			this->but_ins_lis->Text = L"Ins�rer";
			this->but_ins_lis->UseVisualStyleBackColor = true;
			this->but_ins_lis->Click += gcnew System::EventHandler(this, &MyForm::but_ins_lis_Click);
			// 
			// but_act_lis
			// 
			this->but_act_lis->Location = System::Drawing::Point(5, 154);
			this->but_act_lis->Margin = System::Windows::Forms::Padding(2);
			this->but_act_lis->Name = L"but_act_lis";
			this->but_act_lis->Size = System::Drawing::Size(94, 34);
			this->but_act_lis->TabIndex = 1;
			this->but_act_lis->Text = L"Actualiser";
			this->but_act_lis->UseVisualStyleBackColor = true;
			this->but_act_lis->Click += gcnew System::EventHandler(this, &MyForm::but_act_lis_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(0, 0);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(823, 145);
			this->dataGridView3->TabIndex = 0;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellContentClick);
			// 
			// Payement
			// 
			this->Payement->Controls->Add(this->comboBox1);
			this->Payement->Controls->Add(this->dat_pay);
			this->Payement->Controls->Add(this->label18);
			this->Payement->Controls->Add(this->label17);
			this->Payement->Controls->Add(this->label16);
			this->Payement->Controls->Add(this->label15);
			this->Payement->Controls->Add(this->label14);
			this->Payement->Controls->Add(this->txt_ref_com_pay);
			this->Payement->Controls->Add(this->txt_mon_pay);
			this->Payement->Controls->Add(this->txt_ID_pay);
			this->Payement->Controls->Add(this->but_del_pay);
			this->Payement->Controls->Add(this->but_upt_pay);
			this->Payement->Controls->Add(this->but_ins_pay);
			this->Payement->Controls->Add(this->but_act_pay);
			this->Payement->Controls->Add(this->dataGridView4);
			this->Payement->Location = System::Drawing::Point(4, 22);
			this->Payement->Margin = System::Windows::Forms::Padding(2);
			this->Payement->Name = L"Payement";
			this->Payement->Padding = System::Windows::Forms::Padding(2);
			this->Payement->Size = System::Drawing::Size(825, 323);
			this->Payement->TabIndex = 2;
			this->Payement->Text = L"Payement";
			this->Payement->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"CB", L"PayPal" });
			this->comboBox1->Location = System::Drawing::Point(115, 254);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(164, 21);
			this->comboBox1->TabIndex = 16;
			// 
			// dat_pay
			// 
			this->dat_pay->Location = System::Drawing::Point(115, 211);
			this->dat_pay->Name = L"dat_pay";
			this->dat_pay->Size = System::Drawing::Size(164, 19);
			this->dat_pay->TabIndex = 15;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(302, 194);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(138, 13);
			this->label18->TabIndex = 14;
			this->label18->Text = L"R�f�rence de la commande";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(302, 151);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(140, 13);
			this->label17->TabIndex = 13;
			this->label17->Text = L"Montant du payement (en �)";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(115, 237);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(103, 13);
			this->label16->TabIndex = 12;
			this->label16->Text = L"Moyen de payement";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(115, 194);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(94, 13);
			this->label15->TabIndex = 11;
			this->label15->Text = L"Date du payement";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(115, 151);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(82, 13);
			this->label14->TabIndex = 10;
			this->label14->Text = L"ID du payement";
			// 
			// txt_ref_com_pay
			// 
			this->txt_ref_com_pay->Location = System::Drawing::Point(302, 211);
			this->txt_ref_com_pay->Margin = System::Windows::Forms::Padding(2);
			this->txt_ref_com_pay->Name = L"txt_ref_com_pay";
			this->txt_ref_com_pay->Size = System::Drawing::Size(164, 19);
			this->txt_ref_com_pay->TabIndex = 9;
			// 
			// txt_mon_pay
			// 
			this->txt_mon_pay->Location = System::Drawing::Point(302, 168);
			this->txt_mon_pay->Margin = System::Windows::Forms::Padding(2);
			this->txt_mon_pay->Name = L"txt_mon_pay";
			this->txt_mon_pay->Size = System::Drawing::Size(164, 19);
			this->txt_mon_pay->TabIndex = 8;
			// 
			// txt_ID_pay
			// 
			this->txt_ID_pay->Location = System::Drawing::Point(115, 168);
			this->txt_ID_pay->Margin = System::Windows::Forms::Padding(2);
			this->txt_ID_pay->Name = L"txt_ID_pay";
			this->txt_ID_pay->Size = System::Drawing::Size(164, 19);
			this->txt_ID_pay->TabIndex = 5;
			// 
			// but_del_pay
			// 
			this->but_del_pay->Location = System::Drawing::Point(5, 274);
			this->but_del_pay->Margin = System::Windows::Forms::Padding(2);
			this->but_del_pay->Name = L"but_del_pay";
			this->but_del_pay->Size = System::Drawing::Size(94, 34);
			this->but_del_pay->TabIndex = 4;
			this->but_del_pay->Text = L"Supprimer";
			this->but_del_pay->UseVisualStyleBackColor = true;
			this->but_del_pay->Click += gcnew System::EventHandler(this, &MyForm::but_del_pay_Click);
			// 
			// but_upt_pay
			// 
			this->but_upt_pay->Location = System::Drawing::Point(5, 234);
			this->but_upt_pay->Margin = System::Windows::Forms::Padding(2);
			this->but_upt_pay->Name = L"but_upt_pay";
			this->but_upt_pay->Size = System::Drawing::Size(94, 34);
			this->but_upt_pay->TabIndex = 3;
			this->but_upt_pay->Text = L"Modifier";
			this->but_upt_pay->UseVisualStyleBackColor = true;
			this->but_upt_pay->Click += gcnew System::EventHandler(this, &MyForm::but_upd_pay_Click);
			// 
			// but_ins_pay
			// 
			this->but_ins_pay->Location = System::Drawing::Point(5, 194);
			this->but_ins_pay->Margin = System::Windows::Forms::Padding(2);
			this->but_ins_pay->Name = L"but_ins_pay";
			this->but_ins_pay->Size = System::Drawing::Size(94, 34);
			this->but_ins_pay->TabIndex = 2;
			this->but_ins_pay->Text = L"Ins�rer";
			this->but_ins_pay->UseVisualStyleBackColor = true;
			this->but_ins_pay->Click += gcnew System::EventHandler(this, &MyForm::but_ins_pay_Click);
			// 
			// but_act_pay
			// 
			this->but_act_pay->Location = System::Drawing::Point(5, 154);
			this->but_act_pay->Margin = System::Windows::Forms::Padding(2);
			this->but_act_pay->Name = L"but_act_pay";
			this->but_act_pay->Size = System::Drawing::Size(94, 34);
			this->but_act_pay->TabIndex = 1;
			this->but_act_pay->Text = L"Actualiser";
			this->but_act_pay->UseVisualStyleBackColor = true;
			this->but_act_pay->Click += gcnew System::EventHandler(this, &MyForm::but_act_pay_Click);
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->AllowUserToDeleteRows = false;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(0, 0);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->ReadOnly = true;
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(823, 145);
			this->dataGridView4->TabIndex = 0;
			this->dataGridView4->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView4_CellContentClick);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->er_ach_cli);
			this->tabPage2->Controls->Add(this->dat_nai_cli);
			this->tabPage2->Controls->Add(this->label23);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->txt_pre_cli);
			this->tabPage2->Controls->Add(this->txt_nom_cli);
			this->tabPage2->Controls->Add(this->txt_ID_cli);
			this->tabPage2->Controls->Add(this->but_del_cli);
			this->tabPage2->Controls->Add(this->but_upd_cli);
			this->tabPage2->Controls->Add(this->but_ins_cli);
			this->tabPage2->Controls->Add(this->but_act_cli);
			this->tabPage2->Controls->Add(this->dataGridView5);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(829, 345);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Clients";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// er_ach_cli
			// 
			this->er_ach_cli->Location = System::Drawing::Point(302, 211);
			this->er_ach_cli->Name = L"er_ach_cli";
			this->er_ach_cli->Size = System::Drawing::Size(164, 20);
			this->er_ach_cli->TabIndex = 16;
			// 
			// dat_nai_cli
			// 
			this->dat_nai_cli->Location = System::Drawing::Point(302, 168);
			this->dat_nai_cli->Name = L"dat_nai_cli";
			this->dat_nai_cli->Size = System::Drawing::Size(164, 20);
			this->dat_nai_cli->TabIndex = 15;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(302, 194);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(93, 13);
			this->label23->TabIndex = 14;
			this->label23->Text = L"Date du 1er achat";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(302, 151);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(139, 13);
			this->label22->TabIndex = 13;
			this->label22->Text = L"Date de naissance du client";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(115, 237);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(86, 13);
			this->label21->TabIndex = 12;
			this->label21->Text = L"Prenom du client";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(115, 194);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(72, 13);
			this->label20->TabIndex = 11;
			this->label20->Text = L"Nom du client";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(115, 151);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(61, 13);
			this->label19->TabIndex = 10;
			this->label19->Text = L"ID du client";
			// 
			// txt_pre_cli
			// 
			this->txt_pre_cli->Location = System::Drawing::Point(115, 254);
			this->txt_pre_cli->Margin = System::Windows::Forms::Padding(2);
			this->txt_pre_cli->Name = L"txt_pre_cli";
			this->txt_pre_cli->Size = System::Drawing::Size(164, 20);
			this->txt_pre_cli->TabIndex = 9;
			// 
			// txt_nom_cli
			// 
			this->txt_nom_cli->Location = System::Drawing::Point(115, 211);
			this->txt_nom_cli->Margin = System::Windows::Forms::Padding(2);
			this->txt_nom_cli->Name = L"txt_nom_cli";
			this->txt_nom_cli->Size = System::Drawing::Size(164, 20);
			this->txt_nom_cli->TabIndex = 7;
			// 
			// txt_ID_cli
			// 
			this->txt_ID_cli->Location = System::Drawing::Point(115, 168);
			this->txt_ID_cli->Margin = System::Windows::Forms::Padding(2);
			this->txt_ID_cli->Name = L"txt_ID_cli";
			this->txt_ID_cli->Size = System::Drawing::Size(164, 20);
			this->txt_ID_cli->TabIndex = 5;
			// 
			// but_del_cli
			// 
			this->but_del_cli->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_del_cli->Location = System::Drawing::Point(5, 274);
			this->but_del_cli->Margin = System::Windows::Forms::Padding(2);
			this->but_del_cli->Name = L"but_del_cli";
			this->but_del_cli->Size = System::Drawing::Size(94, 34);
			this->but_del_cli->TabIndex = 4;
			this->but_del_cli->Text = L"Supprimer";
			this->but_del_cli->UseVisualStyleBackColor = true;
			this->but_del_cli->Click += gcnew System::EventHandler(this, &MyForm::but_del_cli_Click);
			// 
			// but_upd_cli
			// 
			this->but_upd_cli->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_upd_cli->Location = System::Drawing::Point(5, 234);
			this->but_upd_cli->Margin = System::Windows::Forms::Padding(2);
			this->but_upd_cli->Name = L"but_upd_cli";
			this->but_upd_cli->Size = System::Drawing::Size(94, 34);
			this->but_upd_cli->TabIndex = 3;
			this->but_upd_cli->Text = L"Modifier";
			this->but_upd_cli->UseVisualStyleBackColor = true;
			this->but_upd_cli->Click += gcnew System::EventHandler(this, &MyForm::but_upd_cli_Click);
			// 
			// but_ins_cli
			// 
			this->but_ins_cli->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_ins_cli->Location = System::Drawing::Point(5, 194);
			this->but_ins_cli->Margin = System::Windows::Forms::Padding(2);
			this->but_ins_cli->Name = L"but_ins_cli";
			this->but_ins_cli->Size = System::Drawing::Size(94, 34);
			this->but_ins_cli->TabIndex = 2;
			this->but_ins_cli->Text = L"Ins�rer";
			this->but_ins_cli->UseVisualStyleBackColor = true;
			this->but_ins_cli->Click += gcnew System::EventHandler(this, &MyForm::but_ins_cli_Click);
			// 
			// but_act_cli
			// 
			this->but_act_cli->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_act_cli->Location = System::Drawing::Point(5, 154);
			this->but_act_cli->Margin = System::Windows::Forms::Padding(2);
			this->but_act_cli->Name = L"but_act_cli";
			this->but_act_cli->Size = System::Drawing::Size(94, 34);
			this->but_act_cli->TabIndex = 1;
			this->but_act_cli->Text = L"Actualiser";
			this->but_act_cli->UseVisualStyleBackColor = true;
			this->but_act_cli->Click += gcnew System::EventHandler(this, &MyForm::but_act_cli_Click);
			// 
			// dataGridView5
			// 
			this->dataGridView5->AllowUserToAddRows = false;
			this->dataGridView5->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView5->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView5->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView5->Location = System::Drawing::Point(0, 0);
			this->dataGridView5->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->ReadOnly = true;
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->Size = System::Drawing::Size(823, 145);
			this->dataGridView5->TabIndex = 0;
			this->dataGridView5->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView5_CellContentClick);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label44);
			this->tabPage3->Controls->Add(this->txt_ID_adr_emp);
			this->tabPage3->Controls->Add(this->txt_sup_hie_emp);
			this->tabPage3->Controls->Add(this->dat_emb_emp);
			this->tabPage3->Controls->Add(this->label29);
			this->tabPage3->Controls->Add(this->txt_ID_sup_hie_emp);
			this->tabPage3->Controls->Add(this->label28);
			this->tabPage3->Controls->Add(this->label27);
			this->tabPage3->Controls->Add(this->label26);
			this->tabPage3->Controls->Add(this->label25);
			this->tabPage3->Controls->Add(this->label24);
			this->tabPage3->Controls->Add(this->txt_pre_emp);
			this->tabPage3->Controls->Add(this->txt_nom_emp);
			this->tabPage3->Controls->Add(this->txt_ID_emp);
			this->tabPage3->Controls->Add(this->but_del_emp);
			this->tabPage3->Controls->Add(this->but_upd_emp);
			this->tabPage3->Controls->Add(this->but_ins_emp);
			this->tabPage3->Controls->Add(this->but_act_emp);
			this->tabPage3->Controls->Add(this->dataGridView6);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Margin = System::Windows::Forms::Padding(2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(2);
			this->tabPage3->Size = System::Drawing::Size(829, 345);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Employes";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(488, 152);
			this->label44->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(138, 13);
			this->label44->TabIndex = 20;
			this->label44->Text = L"ID de l\'adresse de l\'employ�";
			// 
			// txt_ID_adr_emp
			// 
			this->txt_ID_adr_emp->Location = System::Drawing::Point(490, 168);
			this->txt_ID_adr_emp->Margin = System::Windows::Forms::Padding(2);
			this->txt_ID_adr_emp->Name = L"txt_ID_adr_emp";
			this->txt_ID_adr_emp->Size = System::Drawing::Size(164, 20);
			this->txt_ID_adr_emp->TabIndex = 19;
			// 
			// txt_sup_hie_emp
			// 
			this->txt_sup_hie_emp->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->txt_sup_hie_emp->FormattingEnabled = true;
			this->txt_sup_hie_emp->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1", L"0" });
			this->txt_sup_hie_emp->Location = System::Drawing::Point(302, 211);
			this->txt_sup_hie_emp->Name = L"txt_sup_hie_emp";
			this->txt_sup_hie_emp->Size = System::Drawing::Size(164, 21);
			this->txt_sup_hie_emp->TabIndex = 18;
			// 
			// dat_emb_emp
			// 
			this->dat_emb_emp->Location = System::Drawing::Point(302, 168);
			this->dat_emb_emp->Name = L"dat_emb_emp";
			this->dat_emb_emp->Size = System::Drawing::Size(164, 20);
			this->dat_emb_emp->TabIndex = 17;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(302, 237);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(140, 13);
			this->label29->TabIndex = 16;
			this->label29->Text = L"ID du sup�rieur hi�rarchique";
			// 
			// txt_ID_sup_hie_emp
			// 
			this->txt_ID_sup_hie_emp->Location = System::Drawing::Point(302, 254);
			this->txt_ID_sup_hie_emp->Margin = System::Windows::Forms::Padding(2);
			this->txt_ID_sup_hie_emp->Name = L"txt_ID_sup_hie_emp";
			this->txt_ID_sup_hie_emp->Size = System::Drawing::Size(164, 20);
			this->txt_ID_sup_hie_emp->TabIndex = 15;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(302, 194);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(113, 13);
			this->label28->TabIndex = 14;
			this->label28->Text = L"Sup�rieur hi�rarchique";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(302, 151);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(91, 13);
			this->label27->TabIndex = 13;
			this->label27->Text = L"Date d\'embauche";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(115, 237);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(104, 13);
			this->label26->TabIndex = 12;
			this->label26->Text = L"Pr�nom de l\'employ�";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(115, 194);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(90, 13);
			this->label25->TabIndex = 11;
			this->label25->Text = L"Nom de l\'employ�";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(115, 151);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(79, 13);
			this->label24->TabIndex = 10;
			this->label24->Text = L"ID de l\'employ�";
			// 
			// txt_pre_emp
			// 
			this->txt_pre_emp->Location = System::Drawing::Point(115, 254);
			this->txt_pre_emp->Margin = System::Windows::Forms::Padding(2);
			this->txt_pre_emp->Name = L"txt_pre_emp";
			this->txt_pre_emp->Size = System::Drawing::Size(164, 20);
			this->txt_pre_emp->TabIndex = 9;
			// 
			// txt_nom_emp
			// 
			this->txt_nom_emp->Location = System::Drawing::Point(115, 211);
			this->txt_nom_emp->Margin = System::Windows::Forms::Padding(2);
			this->txt_nom_emp->Name = L"txt_nom_emp";
			this->txt_nom_emp->Size = System::Drawing::Size(164, 20);
			this->txt_nom_emp->TabIndex = 7;
			// 
			// txt_ID_emp
			// 
			this->txt_ID_emp->Location = System::Drawing::Point(115, 168);
			this->txt_ID_emp->Margin = System::Windows::Forms::Padding(2);
			this->txt_ID_emp->Name = L"txt_ID_emp";
			this->txt_ID_emp->Size = System::Drawing::Size(164, 20);
			this->txt_ID_emp->TabIndex = 5;
			// 
			// but_del_emp
			// 
			this->but_del_emp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_del_emp->Location = System::Drawing::Point(5, 274);
			this->but_del_emp->Margin = System::Windows::Forms::Padding(2);
			this->but_del_emp->Name = L"but_del_emp";
			this->but_del_emp->Size = System::Drawing::Size(94, 34);
			this->but_del_emp->TabIndex = 4;
			this->but_del_emp->Text = L"Supprimer";
			this->but_del_emp->UseVisualStyleBackColor = true;
			this->but_del_emp->Click += gcnew System::EventHandler(this, &MyForm::but_del_emp_Click);
			// 
			// but_upd_emp
			// 
			this->but_upd_emp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_upd_emp->Location = System::Drawing::Point(5, 234);
			this->but_upd_emp->Margin = System::Windows::Forms::Padding(2);
			this->but_upd_emp->Name = L"but_upd_emp";
			this->but_upd_emp->Size = System::Drawing::Size(94, 34);
			this->but_upd_emp->TabIndex = 3;
			this->but_upd_emp->Text = L"Modifier";
			this->but_upd_emp->UseVisualStyleBackColor = true;
			this->but_upd_emp->Click += gcnew System::EventHandler(this, &MyForm::but_upd_emp_Click);
			// 
			// but_ins_emp
			// 
			this->but_ins_emp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_ins_emp->Location = System::Drawing::Point(5, 194);
			this->but_ins_emp->Margin = System::Windows::Forms::Padding(2);
			this->but_ins_emp->Name = L"but_ins_emp";
			this->but_ins_emp->Size = System::Drawing::Size(94, 34);
			this->but_ins_emp->TabIndex = 2;
			this->but_ins_emp->Text = L"Ins�rer";
			this->but_ins_emp->UseVisualStyleBackColor = true;
			this->but_ins_emp->Click += gcnew System::EventHandler(this, &MyForm::but_ins_emp_Click);
			// 
			// but_act_emp
			// 
			this->but_act_emp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_act_emp->Location = System::Drawing::Point(5, 154);
			this->but_act_emp->Margin = System::Windows::Forms::Padding(2);
			this->but_act_emp->Name = L"but_act_emp";
			this->but_act_emp->Size = System::Drawing::Size(94, 34);
			this->but_act_emp->TabIndex = 1;
			this->but_act_emp->Text = L"Actualiser";
			this->but_act_emp->UseVisualStyleBackColor = true;
			this->but_act_emp->Click += gcnew System::EventHandler(this, &MyForm::but_act_emp_Click);
			// 
			// dataGridView6
			// 
			this->dataGridView6->AllowUserToAddRows = false;
			this->dataGridView6->AllowUserToDeleteRows = false;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView6->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView6->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView6->Location = System::Drawing::Point(-3, 0);
			this->dataGridView6->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->ReadOnly = true;
			this->dataGridView6->RowHeadersWidth = 51;
			this->dataGridView6->RowTemplate->Height = 24;
			this->dataGridView6->Size = System::Drawing::Size(823, 145);
			this->dataGridView6->TabIndex = 0;
			this->dataGridView6->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView6_CellContentClick);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->tabControl3);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Margin = System::Windows::Forms::Padding(2);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(2);
			this->tabPage4->Size = System::Drawing::Size(829, 345);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Articles";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage6);
			this->tabControl3->Controls->Add(this->tabPage7);
			this->tabControl3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl3->Location = System::Drawing::Point(0, 0);
			this->tabControl3->Margin = System::Windows::Forms::Padding(2);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(834, 352);
			this->tabControl3->TabIndex = 0;
			this->tabControl3->Selected += gcnew System::Windows::Forms::TabControlEventHandler(this, &MyForm::tabControl3_Selected);
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->textBox8);
			this->tabPage6->Controls->Add(this->label37);
			this->tabPage6->Controls->Add(this->label36);
			this->tabPage6->Controls->Add(this->label35);
			this->tabPage6->Controls->Add(this->label34);
			this->tabPage6->Controls->Add(this->label33);
			this->tabPage6->Controls->Add(this->label32);
			this->tabPage6->Controls->Add(this->label31);
			this->tabPage6->Controls->Add(this->label30);
			this->tabPage6->Controls->Add(this->textBox7);
			this->tabPage6->Controls->Add(this->textBox6);
			this->tabPage6->Controls->Add(this->textBox5);
			this->tabPage6->Controls->Add(this->textBox4);
			this->tabPage6->Controls->Add(this->textBox3);
			this->tabPage6->Controls->Add(this->textBox2);
			this->tabPage6->Controls->Add(this->textBox1);
			this->tabPage6->Controls->Add(this->but_del_art);
			this->tabPage6->Controls->Add(this->but_upd_art);
			this->tabPage6->Controls->Add(this->but_ins_act);
			this->tabPage6->Controls->Add(this->but_act_art);
			this->tabPage6->Controls->Add(this->dataGridView1);
			this->tabPage6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Margin = System::Windows::Forms::Padding(2);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(2);
			this->tabPage6->Size = System::Drawing::Size(826, 326);
			this->tabPage6->TabIndex = 0;
			this->tabPage6->Text = L"Articles";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(302, 297);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(164, 19);
			this->textBox8->TabIndex = 20;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(302, 280);
			this->label37->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(140, 13);
			this->label37->TabIndex = 19;
			this->label37->Text = L"Seuil de r�approvisionnment";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(115, 280);
			this->label36->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(92, 13);
			this->label36->TabIndex = 18;
			this->label36->Text = L"Prix de l\'article HT";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(302, 237);
			this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(91, 13);
			this->label35->TabIndex = 17;
			this->label35->Text = L"Quantite en stock";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(115, 237);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(105, 13);
			this->label34->TabIndex = 16;
			this->label34->Text = L"Taux TVA de l\'article";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(302, 194);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(62, 13);
			this->label33->TabIndex = 15;
			this->label33->Text = L"ID du stock";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(115, 194);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(79, 13);
			this->label32->TabIndex = 14;
			this->label32->Text = L"Nom de l\'article";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(302, 151);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(82, 13);
			this->label31->TabIndex = 13;
			this->label31->Text = L"ID de la couleur";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(115, 151);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(107, 13);
			this->label30->TabIndex = 12;
			this->label30->Text = L"R�f�rence de l\'article";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(115, 297);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(164, 19);
			this->textBox7->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(302, 254);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(164, 19);
			this->textBox6->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(115, 254);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(164, 19);
			this->textBox5->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(302, 211);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(164, 19);
			this->textBox4->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(115, 211);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(164, 19);
			this->textBox3->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(302, 168);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(164, 19);
			this->textBox2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(115, 168);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(164, 19);
			this->textBox1->TabIndex = 5;
			// 
			// but_del_art
			// 
			this->but_del_art->Location = System::Drawing::Point(5, 274);
			this->but_del_art->Margin = System::Windows::Forms::Padding(2);
			this->but_del_art->Name = L"but_del_art";
			this->but_del_art->Size = System::Drawing::Size(94, 34);
			this->but_del_art->TabIndex = 4;
			this->but_del_art->Text = L"Supprimer";
			this->but_del_art->UseVisualStyleBackColor = true;
			this->but_del_art->Click += gcnew System::EventHandler(this, &MyForm::but_del_art_Click);
			// 
			// but_upd_art
			// 
			this->but_upd_art->Location = System::Drawing::Point(5, 234);
			this->but_upd_art->Margin = System::Windows::Forms::Padding(2);
			this->but_upd_art->Name = L"but_upd_art";
			this->but_upd_art->Size = System::Drawing::Size(94, 34);
			this->but_upd_art->TabIndex = 3;
			this->but_upd_art->Text = L"Modifier";
			this->but_upd_art->UseVisualStyleBackColor = true;
			this->but_upd_art->Click += gcnew System::EventHandler(this, &MyForm::but_upd_art_Click);
			// 
			// but_ins_act
			// 
			this->but_ins_act->Location = System::Drawing::Point(5, 194);
			this->but_ins_act->Margin = System::Windows::Forms::Padding(2);
			this->but_ins_act->Name = L"but_ins_act";
			this->but_ins_act->Size = System::Drawing::Size(94, 34);
			this->but_ins_act->TabIndex = 2;
			this->but_ins_act->Text = L"Ins�rer";
			this->but_ins_act->UseVisualStyleBackColor = true;
			this->but_ins_act->Click += gcnew System::EventHandler(this, &MyForm::but_ins_art_Click);
			// 
			// but_act_art
			// 
			this->but_act_art->Location = System::Drawing::Point(5, 154);
			this->but_act_art->Margin = System::Windows::Forms::Padding(2);
			this->but_act_art->Name = L"but_act_art";
			this->but_act_art->Size = System::Drawing::Size(94, 34);
			this->but_act_art->TabIndex = 1;
			this->but_act_art->Text = L"Actualiser";
			this->but_act_art->UseVisualStyleBackColor = true;
			this->but_act_art->Click += gcnew System::EventHandler(this, &MyForm::but_act_art_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(-3, 0);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(823, 145);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick_1);
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->label39);
			this->tabPage7->Controls->Add(this->label38);
			this->tabPage7->Controls->Add(this->txt_nom_cou);
			this->tabPage7->Controls->Add(this->txt_ID_cou);
			this->tabPage7->Controls->Add(this->but_del_cou);
			this->tabPage7->Controls->Add(this->but_upd_cou);
			this->tabPage7->Controls->Add(this->but_ins_cou);
			this->tabPage7->Controls->Add(this->but_act_cou);
			this->tabPage7->Controls->Add(this->dataGridView7);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Margin = System::Windows::Forms::Padding(2);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(2);
			this->tabPage7->Size = System::Drawing::Size(826, 326);
			this->tabPage7->TabIndex = 1;
			this->tabPage7->Text = L"Couleurs";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(115, 194);
			this->label39->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(93, 13);
			this->label39->TabIndex = 8;
			this->label39->Text = L"Nom de la couleur";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(115, 151);
			this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(82, 13);
			this->label38->TabIndex = 7;
			this->label38->Text = L"ID de la couleur";
			// 
			// txt_nom_cou
			// 
			this->txt_nom_cou->Location = System::Drawing::Point(115, 211);
			this->txt_nom_cou->Margin = System::Windows::Forms::Padding(2);
			this->txt_nom_cou->Name = L"txt_nom_cou";
			this->txt_nom_cou->Size = System::Drawing::Size(164, 19);
			this->txt_nom_cou->TabIndex = 6;
			// 
			// txt_ID_cou
			// 
			this->txt_ID_cou->Location = System::Drawing::Point(115, 168);
			this->txt_ID_cou->Margin = System::Windows::Forms::Padding(2);
			this->txt_ID_cou->Name = L"txt_ID_cou";
			this->txt_ID_cou->Size = System::Drawing::Size(164, 19);
			this->txt_ID_cou->TabIndex = 5;
			// 
			// but_del_cou
			// 
			this->but_del_cou->Location = System::Drawing::Point(5, 274);
			this->but_del_cou->Margin = System::Windows::Forms::Padding(2);
			this->but_del_cou->Name = L"but_del_cou";
			this->but_del_cou->Size = System::Drawing::Size(94, 34);
			this->but_del_cou->TabIndex = 4;
			this->but_del_cou->Text = L"Supprimer";
			this->but_del_cou->UseVisualStyleBackColor = true;
			this->but_del_cou->Click += gcnew System::EventHandler(this, &MyForm::but_del_cou_Click);
			// 
			// but_upd_cou
			// 
			this->but_upd_cou->Location = System::Drawing::Point(5, 234);
			this->but_upd_cou->Margin = System::Windows::Forms::Padding(2);
			this->but_upd_cou->Name = L"but_upd_cou";
			this->but_upd_cou->Size = System::Drawing::Size(94, 34);
			this->but_upd_cou->TabIndex = 3;
			this->but_upd_cou->Text = L"Modifier";
			this->but_upd_cou->UseVisualStyleBackColor = true;
			this->but_upd_cou->Click += gcnew System::EventHandler(this, &MyForm::but_upd_cou_Click);
			// 
			// but_ins_cou
			// 
			this->but_ins_cou->Location = System::Drawing::Point(5, 194);
			this->but_ins_cou->Margin = System::Windows::Forms::Padding(2);
			this->but_ins_cou->Name = L"but_ins_cou";
			this->but_ins_cou->Size = System::Drawing::Size(94, 34);
			this->but_ins_cou->TabIndex = 2;
			this->but_ins_cou->Text = L"Ins�rer";
			this->but_ins_cou->UseVisualStyleBackColor = true;
			this->but_ins_cou->Click += gcnew System::EventHandler(this, &MyForm::but_ins_cou_Click);
			// 
			// but_act_cou
			// 
			this->but_act_cou->Location = System::Drawing::Point(5, 154);
			this->but_act_cou->Margin = System::Windows::Forms::Padding(2);
			this->but_act_cou->Name = L"but_act_cou";
			this->but_act_cou->Size = System::Drawing::Size(94, 34);
			this->but_act_cou->TabIndex = 1;
			this->but_act_cou->Text = L"Actualiser";
			this->but_act_cou->UseVisualStyleBackColor = true;
			this->but_act_cou->Click += gcnew System::EventHandler(this, &MyForm::but_act_cou_Click);
			// 
			// dataGridView7
			// 
			this->dataGridView7->AllowUserToAddRows = false;
			this->dataGridView7->AllowUserToDeleteRows = false;
			this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView7->Location = System::Drawing::Point(0, 0);
			this->dataGridView7->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView7->Name = L"dataGridView7";
			this->dataGridView7->ReadOnly = true;
			this->dataGridView7->RowHeadersWidth = 51;
			this->dataGridView7->RowTemplate->Height = 24;
			this->dataGridView7->Size = System::Drawing::Size(828, 145);
			this->dataGridView7->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->txt_nom_ville_adr);
			this->tabPage5->Controls->Add(this->label43);
			this->tabPage5->Controls->Add(this->label42);
			this->tabPage5->Controls->Add(this->label41);
			this->tabPage5->Controls->Add(this->label40);
			this->tabPage5->Controls->Add(this->txt_nom_rue_adr);
			this->tabPage5->Controls->Add(this->txt_num_adr);
			this->tabPage5->Controls->Add(this->txt_ID_adr);
			this->tabPage5->Controls->Add(this->but_del_adr);
			this->tabPage5->Controls->Add(this->but_upd_adr);
			this->tabPage5->Controls->Add(this->but_ins_adr);
			this->tabPage5->Controls->Add(this->but_act_adr);
			this->tabPage5->Controls->Add(this->dataGridView8);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Margin = System::Windows::Forms::Padding(2);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(2);
			this->tabPage5->Size = System::Drawing::Size(829, 345);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Adresses";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// txt_nom_ville_adr
			// 
			this->txt_nom_ville_adr->FormattingEnabled = true;
			this->txt_nom_ville_adr->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"", L"", L"", L"", L"", L"", L"", L"",
					L"", L""
			});
			this->txt_nom_ville_adr->Location = System::Drawing::Point(115, 297);
			this->txt_nom_ville_adr->Margin = System::Windows::Forms::Padding(2);
			this->txt_nom_ville_adr->Name = L"txt_nom_ville_adr";
			this->txt_nom_ville_adr->Size = System::Drawing::Size(275, 21);
			this->txt_nom_ville_adr->TabIndex = 13;
			this->txt_nom_ville_adr->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_nom_ville_adr_TextChanged);
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(115, 280);
			this->label43->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(85, 13);
			this->label43->TabIndex = 12;
			this->label43->Text = L"Ville de l\'adresse";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(115, 237);
			this->label42->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(132, 13);
			this->label42->TabIndex = 11;
			this->label42->Text = L"Nom de la rue de l\'adresse";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(115, 194);
			this->label41->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(103, 13);
			this->label41->TabIndex = 10;
			this->label41->Text = L"Numero de l\'adresse";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(115, 151);
			this->label40->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(77, 13);
			this->label40->TabIndex = 9;
			this->label40->Text = L"ID de l\'adresse";
			// 
			// txt_nom_rue_adr
			// 
			this->txt_nom_rue_adr->Location = System::Drawing::Point(115, 254);
			this->txt_nom_rue_adr->Margin = System::Windows::Forms::Padding(2);
			this->txt_nom_rue_adr->Name = L"txt_nom_rue_adr";
			this->txt_nom_rue_adr->Size = System::Drawing::Size(275, 20);
			this->txt_nom_rue_adr->TabIndex = 7;
			// 
			// txt_num_adr
			// 
			this->txt_num_adr->Location = System::Drawing::Point(115, 211);
			this->txt_num_adr->Margin = System::Windows::Forms::Padding(2);
			this->txt_num_adr->Name = L"txt_num_adr";
			this->txt_num_adr->Size = System::Drawing::Size(275, 20);
			this->txt_num_adr->TabIndex = 6;
			// 
			// txt_ID_adr
			// 
			this->txt_ID_adr->Location = System::Drawing::Point(115, 168);
			this->txt_ID_adr->Margin = System::Windows::Forms::Padding(2);
			this->txt_ID_adr->Name = L"txt_ID_adr";
			this->txt_ID_adr->Size = System::Drawing::Size(275, 20);
			this->txt_ID_adr->TabIndex = 5;
			// 
			// but_del_adr
			// 
			this->but_del_adr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_del_adr->Location = System::Drawing::Point(4, 274);
			this->but_del_adr->Margin = System::Windows::Forms::Padding(2);
			this->but_del_adr->Name = L"but_del_adr";
			this->but_del_adr->Size = System::Drawing::Size(94, 34);
			this->but_del_adr->TabIndex = 4;
			this->but_del_adr->Text = L"Supprimer";
			this->but_del_adr->UseVisualStyleBackColor = true;
			this->but_del_adr->Click += gcnew System::EventHandler(this, &MyForm::but_del_adr_Click);
			// 
			// but_upd_adr
			// 
			this->but_upd_adr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_upd_adr->Location = System::Drawing::Point(4, 234);
			this->but_upd_adr->Margin = System::Windows::Forms::Padding(2);
			this->but_upd_adr->Name = L"but_upd_adr";
			this->but_upd_adr->Size = System::Drawing::Size(94, 34);
			this->but_upd_adr->TabIndex = 3;
			this->but_upd_adr->Text = L"Modifier";
			this->but_upd_adr->UseVisualStyleBackColor = true;
			this->but_upd_adr->Click += gcnew System::EventHandler(this, &MyForm::but_upd_adr_Click);
			// 
			// but_ins_adr
			// 
			this->but_ins_adr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_ins_adr->Location = System::Drawing::Point(4, 194);
			this->but_ins_adr->Margin = System::Windows::Forms::Padding(2);
			this->but_ins_adr->Name = L"but_ins_adr";
			this->but_ins_adr->Size = System::Drawing::Size(94, 34);
			this->but_ins_adr->TabIndex = 2;
			this->but_ins_adr->Text = L"Ins�rer";
			this->but_ins_adr->UseVisualStyleBackColor = true;
			this->but_ins_adr->Click += gcnew System::EventHandler(this, &MyForm::but_ins_adr_Click);
			// 
			// but_act_adr
			// 
			this->but_act_adr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_act_adr->Location = System::Drawing::Point(4, 154);
			this->but_act_adr->Margin = System::Windows::Forms::Padding(2);
			this->but_act_adr->Name = L"but_act_adr";
			this->but_act_adr->Size = System::Drawing::Size(94, 34);
			this->but_act_adr->TabIndex = 1;
			this->but_act_adr->Text = L"Actualiser";
			this->but_act_adr->UseVisualStyleBackColor = true;
			this->but_act_adr->Click += gcnew System::EventHandler(this, &MyForm::but_act_adr_Click);
			// 
			// dataGridView8
			// 
			this->dataGridView8->AllowUserToAddRows = false;
			this->dataGridView8->AllowUserToDeleteRows = false;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView8->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView8->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView8->DefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView8->Location = System::Drawing::Point(0, 0);
			this->dataGridView8->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView8->Name = L"dataGridView8";
			this->dataGridView8->ReadOnly = true;
			this->dataGridView8->RowHeadersWidth = 51;
			this->dataGridView8->RowTemplate->Height = 24;
			this->dataGridView8->Size = System::Drawing::Size(823, 145);
			this->dataGridView8->TabIndex = 0;
			this->dataGridView8->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView8_CellContentClick_1);
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->txt_ann_stat);
			this->tabPage8->Controls->Add(this->lab_ann_stat);
			this->tabPage8->Controls->Add(this->lab_moi_stat);
			this->tabPage8->Controls->Add(this->txt_moi_stat);
			this->tabPage8->Controls->Add(this->label45);
			this->tabPage8->Controls->Add(this->comboBox_Stat);
			this->tabPage8->Controls->Add(this->dataGridView9);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Margin = System::Windows::Forms::Padding(2);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(2);
			this->tabPage8->Size = System::Drawing::Size(829, 345);
			this->tabPage8->TabIndex = 5;
			this->tabPage8->Text = L"Statistiques";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// txt_ann_stat
			// 
			this->txt_ann_stat->FormattingEnabled = true;
			this->txt_ann_stat->Location = System::Drawing::Point(5, 254);
			this->txt_ann_stat->Name = L"txt_ann_stat";
			this->txt_ann_stat->Size = System::Drawing::Size(244, 21);
			this->txt_ann_stat->TabIndex = 6;
			this->txt_ann_stat->Visible = false;
			// 
			// lab_ann_stat
			// 
			this->lab_ann_stat->AutoSize = true;
			this->lab_ann_stat->Location = System::Drawing::Point(5, 237);
			this->lab_ann_stat->Name = L"lab_ann_stat";
			this->lab_ann_stat->Size = System::Drawing::Size(38, 13);
			this->lab_ann_stat->TabIndex = 5;
			this->lab_ann_stat->Text = L"Ann�e";
			this->lab_ann_stat->Visible = false;
			// 
			// lab_moi_stat
			// 
			this->lab_moi_stat->AutoSize = true;
			this->lab_moi_stat->Location = System::Drawing::Point(9, 194);
			this->lab_moi_stat->Name = L"lab_moi_stat";
			this->lab_moi_stat->Size = System::Drawing::Size(29, 13);
			this->lab_moi_stat->TabIndex = 4;
			this->lab_moi_stat->Text = L"Mois";
			this->lab_moi_stat->Visible = false;
			// 
			// txt_moi_stat
			// 
			this->txt_moi_stat->FormattingEnabled = true;
			this->txt_moi_stat->Location = System::Drawing::Point(5, 211);
			this->txt_moi_stat->Name = L"txt_moi_stat";
			this->txt_moi_stat->Size = System::Drawing::Size(244, 21);
			this->txt_moi_stat->TabIndex = 3;
			this->txt_moi_stat->Visible = false;
			this->txt_moi_stat->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::txt_moi_stat_SelectedIndexChanged);
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(5, 151);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(114, 13);
			this->label45->TabIndex = 2;
			this->label45->Text = L"Choix de la statistiques";
			// 
			// comboBox_Stat
			// 
			this->comboBox_Stat->FormattingEnabled = true;
			this->comboBox_Stat->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Panier moyen (apr�s remise)", L"Chiffre d\'affaire sur un mois",
					L"Produits sous le seuil de r�approvisionnement", L"Montant total d\'achat pour chaque client", L"Les 10 articles les plus vendus",
					L"Les 10 articles les moins vendus", L"Valeur commerciale du stock", L"Valeur d\'achat du stock"
			});
			this->comboBox_Stat->Location = System::Drawing::Point(5, 168);
			this->comboBox_Stat->Margin = System::Windows::Forms::Padding(2);
			this->comboBox_Stat->Name = L"comboBox_Stat";
			this->comboBox_Stat->Size = System::Drawing::Size(244, 21);
			this->comboBox_Stat->TabIndex = 1;
			this->comboBox_Stat->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox_Stat_SelectedIndexChanged);
			// 
			// dataGridView9
			// 
			this->dataGridView9->AllowUserToAddRows = false;
			this->dataGridView9->AllowUserToDeleteRows = false;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView9->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView9->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView9->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView9->Location = System::Drawing::Point(2, 0);
			this->dataGridView9->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView9->Name = L"dataGridView9";
			this->dataGridView9->ReadOnly = true;
			this->dataGridView9->RowHeadersWidth = 51;
			this->dataGridView9->RowTemplate->Height = 24;
			this->dataGridView9->Size = System::Drawing::Size(823, 145);
			this->dataGridView9->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(837, 367);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Bugs Bunny Inc.";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->Commande->ResumeLayout(false);
			this->Commande->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->Liste->ResumeLayout(false);
			this->Liste->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->Payement->ResumeLayout(false);
			this->Payement->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->EndInit();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView9))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		//this->oService = gcnew NS_Comp_Service::Clservice();
	}

	private: System::Void but_act_adr_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView8->Refresh();
		this->oDs_Adresse = this->oService_Adresse->AfficherAdresses();
		this->dataGridView8->DataSource = this->oDs_Adresse;
	}

	private: System::Void but_ins_adr_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int id_ville = this->oService_Adresse_Ville2->RecupID_VilleFromNom_Ville(this->txt_nom_ville_adr->Text);
		this->oService_Adresse->AjouterUneAdresse(Convert::ToInt32(this->txt_num_adr->Text), this->txt_nom_rue_adr->Text, id_ville);
		this->dataGridView8->Refresh();
		this->oDs_Adresse = this->oService_Adresse->AfficherAdresses();
		this->dataGridView8->DataSource = this->oDs_Adresse;
	}

	private: System::Void but_upd_adr_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int id_ville = this->oService_Adresse_Ville2->RecupID_VilleFromNom_Ville(this->txt_nom_ville_adr->Text);
		this->oService_Adresse->ModifierUneAdresse(Convert::ToInt32(this->txt_ID_adr->Text), Convert::ToInt32(this->txt_num_adr->Text), this->txt_nom_rue_adr->Text, id_ville);
		this->dataGridView8->Refresh();
		this->oDs_Adresse = this->oService_Adresse->AfficherAdresses();
		this->dataGridView8->DataSource = this->oDs_Adresse;
	}

	private: System::Void but_del_adr_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oService_Adresse->SupprimerUneAdresse(Convert::ToInt32(this->txt_ID_adr->Text));
		this->dataGridView8->Refresh();
		this->oDs_Adresse = this->oService_Adresse->AfficherAdresses();
		this->dataGridView8->DataSource = this->oDs_Adresse;
	}

	private: System::Void but_act_emp_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView6->Refresh();
		this->oDs_Employe = this->oService_Employe->AfficherEmployes();
		this->dataGridView6->DataSource = this->oDs_Employe;
	}

	private: System::Void but_ins_emp_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->txt_sup_hie_emp->Text == "0") {
			this->oService_Employe->AjouterUnEmploye(this->txt_nom_emp->Text, this->txt_pre_emp->Text, Convert::ToString(this->dat_emb_emp->Value)->Substring(6, 4) + "-" + Convert::ToString(this->dat_emb_emp->Value)->Substring(3, 2) + "-" + Convert::ToString(this->dat_emb_emp->Value)->Substring(0, 2), Convert::ToBoolean(Convert::ToInt32(this->txt_sup_hie_emp->Text)), Convert::ToInt32(this->txt_ID_adr_emp->Text), Convert::ToInt32(this->txt_ID_sup_hie_emp->Text));
		}
		else {
			this->oService_Employe->AjouterUnEmploye(this->txt_nom_emp->Text, this->txt_pre_emp->Text, Convert::ToString(this->dat_emb_emp->Value)->Substring(6, 4) + "-" + Convert::ToString(this->dat_emb_emp->Value)->Substring(3, 2) + "-" + Convert::ToString(this->dat_emb_emp->Value)->Substring(0, 2), Convert::ToBoolean(Convert::ToInt32(this->txt_sup_hie_emp->Text)), Convert::ToInt32(this->txt_ID_adr_emp->Text), 0);
		}
		//this->oService_Employe->AjouterUnEmploye(this->txt_nom_emp->Text, this->txt_pre_emp->Text, Convert::ToString(this->dat_emb_emp->Value)->Substring(6, 4) + "-" + Convert::ToString(this->dat_emb_emp->Value)->Substring(3, 2) + "-" + Convert::ToString(this->dat_emb_emp->Value)->Substring(0, 2), Convert::ToBoolean(Convert::ToInt32(this->txt_sup_hie_emp->Text)), Convert::ToInt32(this->txt_ID_adr_emp->Text), Convert::ToInt32(this->txt_ID_sup_hie_emp->Text));
		this->dataGridView6->Refresh();
		this->oDs_Employe = this->oService_Employe->AfficherEmployes();
		this->dataGridView6->DataSource = this->oDs_Employe;
	}

	private: System::Void but_upd_emp_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->txt_sup_hie_emp->Text == "0") {
			this->oService_Employe->ModifierUnEmploye(Convert::ToInt32(this->txt_ID_emp->Text), this->txt_nom_emp->Text, this->txt_pre_emp->Text, Convert::ToString(this->dat_emb_emp->Value)->Substring(6, 4) + "-" + Convert::ToString(this->dat_emb_emp->Value)->Substring(3, 2) + "-" + Convert::ToString(this->dat_emb_emp->Value)->Substring(0, 2), Convert::ToBoolean(Convert::ToInt32(this->txt_sup_hie_emp->Text)), Convert::ToInt32(this->txt_ID_adr_emp->Text), Convert::ToInt32(this->txt_ID_sup_hie_emp->Text));
		}
		else {
			this->oService_Employe->ModifierUnEmploye(Convert::ToInt32(this->txt_ID_emp->Text), this->txt_nom_emp->Text, this->txt_pre_emp->Text, Convert::ToString(this->dat_emb_emp->Value)->Substring(6, 4) + "-" + Convert::ToString(this->dat_emb_emp->Value)->Substring(3, 2) + "-" + Convert::ToString(this->dat_emb_emp->Value)->Substring(0, 2), Convert::ToBoolean(Convert::ToInt32(this->txt_sup_hie_emp->Text)), Convert::ToInt32(this->txt_ID_adr_emp->Text), 0);
		}
		this->dataGridView6->Refresh();
		this->oDs_Employe = this->oService_Employe->AfficherEmployes();
		this->dataGridView6->DataSource = this->oDs_Employe;
	}

	private: System::Void but_del_emp_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oService_Employe->SupprimerUnEmploye(Convert::ToInt32(this->txt_ID_emp->Text));
		this->dataGridView6->Refresh();
		this->oDs_Employe = this->oService_Employe->AfficherEmployes();
		this->dataGridView6->DataSource = this->oDs_Employe;
	}
	
	private: System::Void but_act_cli_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView5->Refresh();
		this->oDs_Client = this->oService_Client->AfficherClients();
		this->dataGridView5->DataSource = this->oDs_Client;
	}

	private: System::Void but_ins_cli_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oService_Client->AjouterUnClient(Convert::ToString(this->dat_nai_cli->Value)->Substring(6, 4) + "-" + Convert::ToString(this->dat_nai_cli->Value)->Substring(3, 2) + "-" + Convert::ToString(this->dat_nai_cli->Value)->Substring(0, 2), Convert::ToString(this->er_ach_cli->Value)->Substring(6, 4) + "-" + Convert::ToString(this->er_ach_cli->Value)->Substring(3, 2) + "-" + Convert::ToString(this->er_ach_cli->Value)->Substring(0, 2), this->txt_nom_cli->Text, this->txt_pre_cli->Text);
		this->dataGridView5->Refresh();
		this->oDs_Client = this->oService_Client->AfficherClients();
		this->dataGridView5->DataSource = this->oDs_Client;
	}

	private: System::Void but_upd_cli_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oService_Client->ModifierUnClient(Convert::ToInt32(this->txt_ID_cli->Text), Convert::ToString(this->dat_nai_cli->Value)->Substring(6, 4) + "-" + Convert::ToString(this->dat_nai_cli->Value)->Substring(3, 2) + "-" + Convert::ToString(this->dat_nai_cli->Value)->Substring(0, 2), Convert::ToString(this->er_ach_cli->Value)->Substring(6, 4) + "-" + Convert::ToString(this->er_ach_cli->Value)->Substring(3, 2) + "-" + Convert::ToString(this->er_ach_cli->Value)->Substring(0, 2), this->txt_nom_cli->Text, this->txt_pre_cli->Text);
		this->dataGridView5->Refresh();
		this->oDs_Client = this->oService_Client->AfficherClients();
		this->dataGridView5->DataSource = this->oDs_Client;
	}
	   
	private: System::Void but_del_cli_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oService_Client->SupprimerUnClient(Convert::ToInt32(this->txt_ID_cli->Text));
		this->dataGridView5->Refresh();
		this->oDs_Client = this->oService_Client->AfficherClients();
		this->dataGridView5->DataSource = this->oDs_Client;
	}

	private: System::Void but_act_pay_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView4->Refresh();
		this->oDs_Payement = this->oService_Payement->AfficherPayements();
		this->dataGridView4->DataSource = this->oDs_Payement;
	}

	private: System::Void but_ins_pay_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oService_Payement->AjouterUnPayement(Convert::ToString(this->dat_pay->Value)->Substring(6, 4) + "-" + Convert::ToString(this->dat_pay->Value)->Substring(3, 2) + "-" + Convert::ToString(this->dat_pay->Value)->Substring(0, 2), this->txt_mon_pay->Text, Convert::ToString(this->txt_mon_pay->Text), Convert::ToInt32(this->txt_ref_com_pay->Text));
		this->dataGridView4->Refresh();
		this->oDs_Payement = this->oService_Payement->AfficherPayements();
		this->dataGridView4->DataSource = this->oDs_Payement;
	}

	private: System::Void but_upd_pay_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oService_Payement->ModifierUnPayement(Convert::ToInt32(this->txt_ID_pay->Text), Convert::ToString(this->dat_pay->Value)->Substring(6, 4) + "-" + Convert::ToString(this->dat_pay->Value)->Substring(3, 2) + "-" + Convert::ToString(this->dat_pay->Value)->Substring(0, 2), this->txt_mon_pay->Text, Convert::ToString(this->txt_mon_pay->Text), Convert::ToInt32(this->txt_ref_com_pay->Text));
		this->dataGridView4->Refresh();
		this->oDs_Payement = this->oService_Payement->AfficherPayements();
		this->dataGridView4->DataSource = this->oDs_Payement;
	}

	private: System::Void but_del_pay_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oService_Payement->SupprimerUnPayement(Convert::ToInt32(this->txt_ID_pay->Text));
		this->dataGridView5->Refresh();
		this->oDs_Payement = this->oService_Payement->AfficherPayements();
		this->dataGridView5->DataSource = this->oDs_Payement;
	}
 
	private: System::Void but_act_com_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView2->Refresh();
		this->oDs_Commande = this->oService_Commande->AfficherCommandes();
		this->dataGridView2->DataSource = this->oDs_Commande;
	}

	private: System::Void but_ins_com_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::String^ ref_comm = this->oService_Commande_RefCommande->RecupRefCommande(this->txt_ID_cli_com->Text, this->txt_adr_liv_com->Text);
		this->oService_Commande->AjouterUneCommande(ref_comm, Convert::ToString(this->date_liv_com->Value)->Substring(6, 4) + "-" + Convert::ToString(this->date_liv_com->Value)->Substring(3, 2) + "-" + Convert::ToString(this->date_liv_com->Value)->Substring(0, 2), Convert::ToString(this->date_emi_com->Value)->Substring(6, 4) + "-" + Convert::ToString(this->date_emi_com->Value)->Substring(3, 2) + "-" + Convert::ToString(this->date_emi_com->Value)->Substring(0, 2), Convert::ToString(this->date_fac_com->Value)->Substring(6, 4) + "-" + Convert::ToString(this->date_fac_com->Value)->Substring(3, 2) + "-" + Convert::ToString(this->date_fac_com->Value)->Substring(0, 2), this->txt_tot_HT_com->Text, Convert::ToInt32(this->txt_ID_cli_com->Text), Convert::ToInt32(this->txt_adr_liv_com->Text), Convert::ToInt32(this->txt_adr_fac_com->Text));
		this->dataGridView2->Refresh();
		this->oDs_Commande = this->oService_Commande->AfficherCommandes();
		this->dataGridView2->DataSource = this->oDs_Commande;
	}

	private: System::Void but_upd_com_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::String^ ref_comm = this->oService_Commande_RefCommande->RecupRefCommande(this->txt_ID_cli_com->Text, this->txt_adr_liv_com->Text);
		this->oService_Commande->ModifierUneCommande(this->txt_ref_com_com->Text, Convert::ToString(this->date_liv_com->Value)->Substring(6, 4) + "-" + Convert::ToString(this->date_liv_com->Value)->Substring(3, 2) + "-" + Convert::ToString(this->date_liv_com->Value)->Substring(0, 2), Convert::ToString(this->date_emi_com->Value)->Substring(6, 4) + "-" + Convert::ToString(this->date_emi_com->Value)->Substring(3, 2) + "-" + Convert::ToString(this->date_emi_com->Value)->Substring(0, 2), Convert::ToString(this->date_fac_com->Value)->Substring(6, 4) + "-" + Convert::ToString(this->date_fac_com->Value)->Substring(3, 2) + "-" + Convert::ToString(this->date_fac_com->Value)->Substring(0, 2), this->txt_tot_HT_com->Text, Convert::ToInt32(this->txt_ID_cli_com->Text), Convert::ToInt32(this->txt_adr_liv_com->Text), Convert::ToInt32(this->txt_adr_fac_com->Text));
		this->dataGridView2->Refresh();
		this->oDs_Commande = this->oService_Commande->AfficherCommandes();
		this->dataGridView2->DataSource = this->oDs_Commande;
	}

	private: System::Void but_del_com_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oService_Commande->SupprimerUneCommande(this->txt_ref_com_com->Text);
		this->dataGridView2->Refresh();
		this->oDs_Commande = this->oService_Commande->AfficherCommandes();
		this->dataGridView2->DataSource = this->oDs_Commande;
	}

	private: System::Void but_act_lis_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView3->Refresh();
		this->oDs_Commande_Liste = this->oService_Commande_Liste->AfficherArticlesDeCommande();
		this->dataGridView3->DataSource = this->oDs_Commande_Liste;
	}

	private: System::Void but_ins_lis_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oService_Commande_Liste->AjouterUnArticleDeCommande(Convert::ToInt32(this->txt_ref_com_lis->Text), Convert::ToInt32(this->txt_ref_art_lis->Text), this->txt_pri_uni_rem_lis->Text, Convert::ToInt32(this->txt_qua_com_lis->Text), this->txt_tau_tva_lis->Text);
		this->dataGridView3->Refresh();
		this->oDs_Commande_Liste = this->oService_Commande_Liste->AfficherArticlesDeCommande();
		this->dataGridView3->DataSource = this->oDs_Commande_Liste;
	}

	private: System::Void but_upd_lis_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oService_Commande_Liste->ModifierUnArticleDeCommande(Convert::ToInt32(this->txt_ref_com_lis->Text), Convert::ToInt32(this->txt_ref_art_lis->Text), this->txt_pri_uni_rem_lis->Text, Convert::ToInt32(this->txt_qua_com_lis->Text), this->txt_tau_tva_lis->Text);
		this->dataGridView3->Refresh();
		this->oDs_Commande_Liste = this->oService_Commande_Liste->AfficherArticlesDeCommande();
		this->dataGridView3->DataSource = this->oDs_Commande_Liste;
	}

	private: System::Void but_del_lis_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oService_Commande_Liste->SupprimerUnArticleDeCommande(Convert::ToInt32(this->txt_ref_com_lis->Text), Convert::ToInt32(this->txt_ref_art_lis->Text));
		this->dataGridView3->Refresh();
		this->oDs_Commande_Liste = this->oService_Commande_Liste->AfficherArticlesDeCommande();
		this->dataGridView3->DataSource = this->oDs_Commande_Liste;
	}

	private: System::Void but_act_art_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView1->Refresh();
		this->oDs_Article = this->oService_Article->AfficherArticles();
		this->dataGridView1->DataSource = this->oDs_Article;
	}

	private: System::Void but_ins_art_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Data::DataTable^ Table_id_Stock = this->oService_Article_Stock->AjouterUnStock(Convert::ToInt32(this->textBox6->Text), Convert::ToInt32(this->textBox8->Text));
		System::String^ ID_Stock = System::Convert::ToString((Table_id_Stock->Rows[0])[0]);

		this->oService_Article->AjouterUnArticle(this->textBox3->Text, this->textBox5->Text, this->textBox7->Text, Convert::ToInt32(this->textBox2->Text), Convert::ToInt32(ID_Stock));
		this->dataGridView1->Refresh();
		this->oDs_Article = this->oService_Article->AfficherArticles();
		this->dataGridView1->DataSource = this->oDs_Article;
	}

	private: System::Void but_upd_art_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oService_Article->ModifierUnStock(Convert::ToInt32(this->textBox4->Text), Convert::ToInt32(this->textBox6->Text), Convert::ToInt32(this->textBox8->Text));
		this->oService_Article->ModifierUnArticle(Convert::ToInt32(this->textBox1->Text), this->textBox3->Text, this->textBox5->Text, this->textBox7->Text, Convert::ToInt32(this->textBox2->Text), Convert::ToInt32(this->textBox4->Text));
		this->dataGridView1->Refresh();
		this->oDs_Article = this->oService_Article->AfficherArticles();
		this->dataGridView1->DataSource = this->oDs_Article;
	}

	private: System::Void but_del_art_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oService_Article->SupprimerUnArticle(Convert::ToInt32(this->textBox1->Text));
		this->oService_Article->SupprimerUnStock(Convert::ToInt32(this->textBox4->Text));
		this->dataGridView1->Refresh();
		this->oDs_Article = this->oService_Article->AfficherArticles();
		this->dataGridView1->DataSource = this->oDs_Article;
	}

	private: System::Void but_act_cou_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView7->Refresh();
		this->oDs_Couleur = this->oService_Couleur->AfficherCouleurs();
		this->dataGridView7->DataSource = this->oDs_Couleur;
	}

	private: System::Void but_ins_cou_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oService_Couleur->AjouterUneCouleur(this->txt_nom_cou->Text);
		this->dataGridView7->Refresh();
		this->oDs_Couleur = this->oService_Couleur->AfficherCouleurs();
		this->dataGridView7->DataSource = this->oDs_Couleur;
	}

	private: System::Void but_upd_cou_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oService_Couleur->ModifierUneCouleur(Convert::ToInt32(this->txt_ID_cou->Text), this->txt_nom_cou->Text);
		this->dataGridView7->Refresh();
		this->oDs_Couleur = this->oService_Couleur->AfficherCouleurs();
		this->dataGridView7->DataSource = this->oDs_Couleur;
	}

	private: System::Void but_del_cou_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oService_Couleur->SupprimerUneCouleur(Convert::ToInt32(this->txt_ID_cou->Text));
		this->dataGridView7->Refresh();
		this->oDs_Couleur = this->oService_Couleur->AfficherCouleurs();
		this->dataGridView7->DataSource = this->oDs_Couleur;
	}



	private: System::Void dataGridView8_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		this->txt_ID_adr->Text = Convert::ToString((this->oDs_Adresse->Rows[e->RowIndex])[0]);
		this->txt_num_adr->Text = Convert::ToString((this->oDs_Adresse->Rows[e->RowIndex])[1]);
		this->txt_nom_rue_adr->Text = Convert::ToString((this->oDs_Adresse->Rows[e->RowIndex])[2]);
		this->txt_nom_ville_adr->Text = Convert::ToString((this->oDs_Adresse->Rows[e->RowIndex])[4]);
	}
		   

private: System::Void tabControl1_Selected(System::Object^ sender, System::Windows::Forms::TabControlEventArgs^ e) {
	if (Convert::ToInt32(e->TabPageIndex) == 0) {
		this->dataGridView2->Refresh();
		this->oDs_Commande = this->oService_Commande->AfficherCommandes();
		this->dataGridView2->DataSource = this->oDs_Commande;
	}

	if (Convert::ToInt32(e->TabPageIndex) == 1) {
		this->dataGridView5->Refresh();
		this->oDs_Client = this->oService_Client->AfficherClients();
		this->dataGridView5->DataSource = this->oDs_Client;
	}

	if (Convert::ToInt32(e->TabPageIndex) == 2) {
		this->dataGridView6->Refresh();
		this->oDs_Employe = this->oService_Employe->AfficherEmployes();
		this->dataGridView6->DataSource = this->oDs_Employe;
	}

	if (Convert::ToInt32(e->TabPageIndex) == 3) {
		this->dataGridView1->Refresh();
		this->oDs_Article = this->oService_Article->AfficherArticles();
		this->dataGridView1->DataSource = this->oDs_Article;
	}
	
	if (Convert::ToInt32(e->TabPageIndex) == 4) {
		this->dataGridView8->Refresh();
		this->oDs_Adresse = this->oService_Adresse->AfficherAdresses();
		this->dataGridView8->DataSource = this->oDs_Adresse;
	}
}

private: System::Void tabControl2_Selected(System::Object^ sender, System::Windows::Forms::TabControlEventArgs^ e) {
	if (Convert::ToInt32(e->TabPageIndex) == 0) {
		this->dataGridView2->Refresh();
		this->oDs_Commande = this->oService_Commande->AfficherCommandes();
		this->dataGridView2->DataSource = this->oDs_Commande;
	}

	if (Convert::ToInt32(e->TabPageIndex) == 1) {
		this->dataGridView3->Refresh();
		this->oDs_Commande_Liste = this->oService_Commande_Liste->AfficherArticlesDeCommande();
		this->dataGridView3->DataSource = this->oDs_Commande_Liste;
	}

	if (Convert::ToInt32(e->TabPageIndex) == 2) {
		this->dataGridView4->Refresh();
		this->oDs_Payement = this->oService_Payement->AfficherPayements();
		this->dataGridView4->DataSource = this->oDs_Payement;
	}
}
private: System::Void tabControl3_Selected(System::Object^ sender, System::Windows::Forms::TabControlEventArgs^ e) {
	if (Convert::ToInt32(e->TabPageIndex) == 0) {
		this->dataGridView1->Refresh();
		this->oDs_Article = this->oService_Article->AfficherArticles();
		this->dataGridView1->DataSource = this->oDs_Article;
	}

	if (Convert::ToInt32(e->TabPageIndex) == 1) {
		this->dataGridView7->Refresh();
		this->oDs_Couleur = this->oService_Couleur->AfficherCouleurs();
		this->dataGridView7->DataSource = this->oDs_Couleur;
	}
}

private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	this->txt_ref_com_com->Text = Convert::ToString((this->oDs_Commande->Rows[e->RowIndex])[1]);
	this->txt_tot_HT_com->Text = Convert::ToString((this->oDs_Commande->Rows[e->RowIndex])[5]);
	this->txt_ID_cli_com->Text = Convert::ToString((this->oDs_Commande->Rows[e->RowIndex])[6]);
	this->txt_adr_liv_com->Text = Convert::ToString((this->oDs_Commande->Rows[e->RowIndex])[7]);
	this->txt_adr_fac_com->Text = Convert::ToString((this->oDs_Commande->Rows[e->RowIndex])[8]);
	this->date_liv_com->Text = Convert::ToString((this->oDs_Commande->Rows[e->RowIndex])[2]);
	this->date_emi_com->Text = Convert::ToString((this->oDs_Commande->Rows[e->RowIndex])[3]);
	this->date_fac_com->Text = Convert::ToString((this->oDs_Commande->Rows[e->RowIndex])[4]);
}

private: System::Void dataGridView5_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	this->txt_ID_cli->Text = Convert::ToString(e->RowIndex + 1);
	this->txt_nom_cli->Text = Convert::ToString((this->oDs_Client->Rows[e->RowIndex])[1]);
	this->txt_pre_cli->Text = Convert::ToString((this->oDs_Client->Rows[e->RowIndex])[2]);
	this->dat_nai_cli->Text = Convert::ToString((this->oDs_Client->Rows[e->RowIndex])[3]);
	this->er_ach_cli->Text = Convert::ToString((this->oDs_Client->Rows[e->RowIndex])[4]);
}


private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	this->txt_ref_com_lis->Text = Convert::ToString((this->oDs_Commande_Liste->Rows[e->RowIndex])[1]);
	this->txt_ref_art_lis->Text = Convert::ToString((this->oDs_Commande_Liste->Rows[e->RowIndex])[0]);
	this->txt_pri_uni_rem_lis->Text = Convert::ToString((this->oDs_Commande_Liste->Rows[e->RowIndex])[2]);
	this->txt_qua_com_lis->Text = Convert::ToString((this->oDs_Commande_Liste->Rows[e->RowIndex])[3]);
	this->txt_tau_tva_lis->Text = Convert::ToString((this->oDs_Commande_Liste->Rows[e->RowIndex])[4]);
}
private: System::Void dataGridView4_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	this->txt_ID_pay->Text = Convert::ToString((this->oDs_Payement->Rows[e->RowIndex])[0]);
	this->dat_pay->Text = Convert::ToString((this->oDs_Payement->Rows[e->RowIndex])[1]);
	this->comboBox1->Text = Convert::ToString((this->oDs_Payement->Rows[e->RowIndex])[2]);
	this->txt_mon_pay->Text = Convert::ToString((this->oDs_Payement->Rows[e->RowIndex])[3]);
	this->txt_ref_com_pay->Text = Convert::ToString((this->oDs_Payement->Rows[e->RowIndex])[4]);
}
private: System::Void dataGridView6_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	this->txt_ID_emp->Text = Convert::ToString((this->oDs_Employe->Rows[e->RowIndex])[0]);
	this->txt_nom_emp->Text = Convert::ToString((this->oDs_Employe->Rows[e->RowIndex])[1]);
	this->txt_pre_emp->Text = Convert::ToString((this->oDs_Employe->Rows[e->RowIndex])[2]);
	this->dat_emb_emp->Text = Convert::ToString((this->oDs_Employe->Rows[e->RowIndex])[3]);
	if (Convert::ToString((this->oDs_Employe->Rows[e->RowIndex])[4]) == "False"){ this->txt_sup_hie_emp->Text = "0"; }
	else{ this->txt_sup_hie_emp->Text = "1"; }
	
	this->txt_ID_sup_hie_emp->Text = Convert::ToString((this->oDs_Employe->Rows[e->RowIndex])[5]);
	this->txt_ID_adr_emp->Text = Convert::ToString((this->oDs_Employe->Rows[e->RowIndex])[6]);
}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	this->textBox1->Text = Convert::ToString((this->oDs_Article->Rows[e->RowIndex])[0]);
	this->textBox3->Text = Convert::ToString((this->oDs_Article->Rows[e->RowIndex])[1]);
	this->textBox5->Text = Convert::ToString((this->oDs_Article->Rows[e->RowIndex])[2]);
	this->textBox7->Text = Convert::ToString((this->oDs_Article->Rows[e->RowIndex])[3]);
	this->textBox2->Text = Convert::ToString((this->oDs_Article->Rows[e->RowIndex])[4]);
	this->textBox4->Text = Convert::ToString((this->oDs_Article->Rows[e->RowIndex])[5]);
	this->textBox6->Text = Convert::ToString((this->oDs_Article->Rows[e->RowIndex])[7]);
	this->textBox8->Text = Convert::ToString((this->oDs_Article->Rows[e->RowIndex])[8]);
}

private: System::Void comboBox_Stat_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBox_Stat->SelectedIndex == 1) {
		this->txt_moi_stat->Visible = true;
		this->lab_moi_stat->Visible = true;
		this->txt_ann_stat->Visible = true;
		this->lab_ann_stat->Visible = true;

		this->oDs_Stat_AllMonth = this->oService_Stat_AllMonth->AfficherToutMoisCommande();

		for (int i = 0; i <= (this->oDs_Stat_AllMonth->Rows->Count - 1); i++) {
			this->txt_moi_stat->Items->Add(System::Convert::ToString((this->oDs_Stat_AllMonth->Rows[i])[0]));
		}

		this->oDs_Stat_AllYear = this->oService_Stat_AllYear->AfficherToutAnneeCommande();

		for (int i = 0; i <= (this->oDs_Stat_AllYear->Rows->Count - 1); i++) {
			this->txt_ann_stat->Items->Add(System::Convert::ToString((this->oDs_Stat_AllYear->Rows[i])[0]));
		}
		
	}
	else {
		this->txt_moi_stat->Visible = false;
		this->lab_moi_stat->Visible = false;
		this->txt_ann_stat->Visible = false;
		this->lab_ann_stat->Visible = false;
	}

	if (this->comboBox_Stat->Text == "Panier moyen (apr�s remise)") {
		this->dataGridView9->Refresh();
		this->oDs_Stat_PanierMoyen = this->oService_Stat_PanierMoyen->AfficherPanierMoyen();
		this->dataGridView9->DataSource = this->oDs_Stat_PanierMoyen;
	}
	else if (this->comboBox_Stat->Text == "Chiffre d'affaire sur un mois") {
		if (this->txt_moi_stat->Text != "") {
			if (this->txt_ann_stat->Text != "") {
				this->dataGridView9->Refresh();
				this->oDs_Stat_ChiffreAffaire = this->oService_Stat_ChiffreAffaire->AfficherChiffreAffaire(this->txt_moi_stat->Text, this->txt_ann_stat->Text);
				this->dataGridView9->DataSource = this->oDs_Stat_ChiffreAffaire;
			}
		}
		

	}
	else if (this->comboBox_Stat->Text == "Produits sous le seuil de r�approvisionnement") {
		this->dataGridView9->Refresh();
		this->oDs_Stat_SousSeuil = this->oService_Stat_SousSeuil->AfficherSousSeuil();
		this->dataGridView9->DataSource = this->oDs_Stat_SousSeuil;
	}
	else if (this->comboBox_Stat->Text == "Montant total d'achat pour chaque client") {
		this->dataGridView9->Refresh();
		this->oDs_Stat_MontantAchatClient = this->oService_Stat_MontantAchatClient->AfficherMontantAchatClient();
		this->dataGridView9->DataSource = this->oDs_Stat_MontantAchatClient;
	}
	else if (this->comboBox_Stat->Text == "Les 10 articles les plus vendus") {
		this->dataGridView9->Refresh();
		this->oDs_Stat_10PlusVendus = this->oService_Stat_10PlusVendus->Afficher10PlusVendus();
		this->dataGridView9->DataSource = this->oDs_Stat_10PlusVendus;
	}
	else if (this->comboBox_Stat->Text == "Les 10 articles les moins vendus") {
		this->dataGridView9->Refresh();
		this->oDs_Stat_10MoinsVendus = this->oService_Stat_10MoinsVendus->Afficher10MoinsVendus();
		this->dataGridView9->DataSource = this->oDs_Stat_10MoinsVendus;
	}
	else if (this->comboBox_Stat->Text == "Valeur commerciale du stock") {
		this->dataGridView9->Refresh();
		this->oDs_Stat_ValeurCommercialeStock = this->oService_Stat_ValeurCommercialeStock->AfficherValeurCommercialeStock();
		this->dataGridView9->DataSource = this->oDs_Stat_ValeurCommercialeStock;
	}
	else if (this->comboBox_Stat->Text == "Valeur d'achat du stock") {
		this->dataGridView9->Refresh();
		this->oDs_Stat_ValeurAchatStock = this->oService_Stat_ValeurAchatStock->AfficherValeurAchatStock();
		this->dataGridView9->DataSource = this->oDs_Stat_ValeurAchatStock;
	}
}
	private: System::Void txt_nom_ville_adr_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		System::String^ search = this->txt_nom_ville_adr->Text;
		this->oDs_Adresse_Ville = this->oService_Adresse_Ville->AfficherVilleTopX(search);

		int row_returned = System::Convert::ToInt32(oDs_Adresse_Ville->Rows->Count);

		for (int i = 0; i <= row_returned - 1; i++) {
			if ((this->oDs_Adresse_Ville->Rows[0])[0]) {
				this->txt_nom_ville_adr->Items[i] = System::Convert::ToString((this->oDs_Adresse_Ville->Rows[i])[0]);
			}
		}

		for (int ii = 9; row_returned+1 <= ii; ii--) {
			this->txt_nom_ville_adr->Items[ii] = "";
		}

	}
private: System::Void txt_moi_stat_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
};
}
