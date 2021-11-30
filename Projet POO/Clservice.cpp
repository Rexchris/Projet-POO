#include "Clservice.h"

NS_Comp_Service::Clservice::Clservice(void)
{
	this->oMapp = gcnew NS_Comp_Data::CLcad();
	this->oMappEmp = gcnew NS_Comp_Employe::CLMappEmploye();
	this->oMappClient = gcnew NS_Comp_Client::CLMappClient();
	this->oMappCommande = gcnew NS_Comp_Commande::CLMappCommande();
	this->oMappStock = gcnew NS_Comp_Stock::CLMappStock();
	this->oMappStat = gcnew NS_Comp_Stat::CLMappageStat();
	this->oMappAdr = gcnew NS_Comp_Adresse::CLMappAdresse();
}

System::Data::DataTable^ NS_Comp_Service::Clservice::AfficherEmployes(void)
{
	System::String^ sql;

	sql = this->oMappEmp->Select();
	return this->oMapp->getRows(sql);
}

void NS_Comp_Service::Clservice::AjouterUnEmploye(System::String^ NomEmploye, System::String^ PrenomEmploye, System::String^ Date_Embauche, bool Superieur_Hierarchique, int ID_Adresse, int ID_Employe_Superieur_Hierarchique)
{
	System::String^ sql;

	this->oMappEmp->setNom_Employe(NomEmploye);
	this->oMappEmp->setPrenom_Employe(PrenomEmploye);
	this->oMappEmp->setDate_Embauche(Date_Embauche);
	this->oMappEmp->setSuperieur_Hierarchique(Superieur_Hierarchique);
	this->oMappEmp->setID_Adresse(ID_Adresse);
	this->oMappEmp->setID_Employe_Superieur_Hierarchique(ID_Employe_Superieur_Hierarchique);
	sql = this->oMappEmp->Insert();

	this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::ModifierUnEmploye(int ID_Employe, System::String^ NomEmploye, System::String^ PrenomEmploye, System::String^ Date_Embauche, bool Superieur_Hierarchique, int ID_Adresse, int ID_Employe_Superieur_Hierarchique)
{
	System::String^ sql;

	this->oMappEmp->setID_Employe(ID_Employe);
	this->oMappEmp->setNom_Employe(NomEmploye);
	this->oMappEmp->setPrenom_Employe(PrenomEmploye);
	this->oMappEmp->setDate_Embauche(Date_Embauche);
	this->oMappEmp->setSuperieur_Hierarchique(Superieur_Hierarchique);
	this->oMappEmp->setID_Adresse(ID_Adresse);
	this->oMappEmp->setID_Employe_Superieur_Hierarchique(ID_Employe_Superieur_Hierarchique);
	sql = this->oMappEmp->Update();

	this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::SupprimerUnEmploye(int ID_Employe)
{
	System::String^ sql;

	this->oMappEmp->setID_Employe(ID_Employe);
	sql = this->oMappEmp->Delete();

	this->oMapp->actionRows(sql);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::AfficherClients(void)
{
	System::String^ sql;

	sql = this->oMappClient->Select();
	return this->oMapp->getRows(sql);
}

void NS_Comp_Service::Clservice::AjouterUnClient(System::String^ Date_Naissance_Client, System::String^ Date_1er_Achat, System::String^ Nom_Client, System::String^ Prenom_Client)
{
	System::String^ sql;

	this->oMappClient->setDate_Naissance_Client(Date_Naissance_Client);
	this->oMappClient->setDate_1er_Achat(Date_1er_Achat);
	this->oMappClient->setNom_Client(Nom_Client);
	this->oMappClient->setPrenom_Client(Prenom_Client);
	sql = this->oMappClient->Insert();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::ModifierUnClient(int ID_Client, System::String^ Date_Naissance_Client, System::String^ Date_1er_Achat, System::String^ Nom_Client, System::String^ Prenom_Client)
{
	System::String^ sql;

	this->oMappClient->setID_Client(ID_Client);
	this->oMappClient->setDate_Naissance_Client(Date_Naissance_Client);
	this->oMappClient->setDate_1er_Achat(Date_1er_Achat);
	this->oMappClient->setNom_Client(Nom_Client);
	this->oMappClient->setPrenom_Client(Prenom_Client);
	sql = this->oMappClient->Update();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::SupprimerUnClient(int ID_Client)
{
	System::String^ sql;

	this->oMappClient->setID_Client(ID_Client);
	sql = this->oMappClient->Delete();
	return this->oMapp->actionRows(sql);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::AfficherCommandes(void)
{
	System::String^ sql;

	sql = this->oMappCommande->Select();
	return this->oMapp->getRows(sql);
}

void NS_Comp_Service::Clservice::AjouterUneCommande(System::String^ Date_Livraison, System::String^ Date_Emission, System::String^ Date_Facturation, System::String^ Montant_Total_HT, int ID_Client, int ID_Adresse_Livraison, int ID_Adresse_Facturation)
{
	System::String^ sql;

	this->oMappCommande->setDate_Livraison(Date_Livraison);
	this->oMappCommande->setDate_Emission(Date_Emission);
	this->oMappCommande->setDate_Facturation(Date_Facturation);
	this->oMappCommande->setMontant_Total_HT(Montant_Total_HT);
	this->oMappCommande->setID_Client(ID_Client);
	this->oMappCommande->setID_Adresse_Livraison(ID_Adresse_Livraison);
	this->oMappCommande->setID_Adresse_Facturation(ID_Adresse_Facturation);
	sql = this->oMappCommande->Insert();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::ModifierUneCommande(int ID_Commande, System::String^ Date_Livraison, System::String^ Date_Emission, System::String^ Date_Facturation, System::String^ Montant_Total_HT, int ID_Client, int ID_Adresse_Livraison, int ID_Adresse_Facturation)
{
	System::String^ sql;

	this->oMappCommande->setID_Commande(ID_Commande);
	this->oMappCommande->setDate_Livraison(Date_Livraison);
	this->oMappCommande->setDate_Emission(Date_Emission);
	this->oMappCommande->setDate_Facturation(Date_Facturation);
	this->oMappCommande->setMontant_Total_HT(Montant_Total_HT);
	this->oMappCommande->setID_Client(ID_Client);
	this->oMappCommande->setID_Adresse_Livraison(ID_Adresse_Livraison);
	this->oMappCommande->setID_Adresse_Facturation(ID_Adresse_Facturation);
	sql = this->oMappCommande->Update();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::SupprimerUneCommande(int ID_Commande)
{
	System::String^ sql;

	this->oMappCommande->setID_Commande(ID_Commande);
	sql = this->oMappCommande->Delete();
	return this->oMapp->actionRows(sql);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::AfficherArticles(void)
{
	System::String^ sql;

	sql = this->oMappStock->SelectArticle();
	return this->oMapp->getRows(sql);
}

void  NS_Comp_Service::Clservice::AjouterUnArticle(System::String^ Nom_Article, System::String^ Taux_TVA_Article, System::String^ Prix_Article_HT, int ID_Couleur, int ID_Stock)
{
	System::String^ sql;

	this->oMappStock->setNom_Article(Nom_Article);
	this->oMappStock->setTaux_TVA_Article(Taux_TVA_Article);
	this->oMappStock->setPrix_Article_HT(Prix_Article_HT);
	this->oMappStock->setID_Couleur(ID_Couleur);
	this->oMappStock->setID_Stock(ID_Stock);
	sql = this->oMappStock->InsertArticle();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::ModifierUnArticle(int Reference_Article, System::String^ Nom_Article, System::String^ Taux_TVA_Article, System::String^ Prix_Article_HT, int ID_Couleur, int ID_Stock)
{
	System::String^ sql;

	this->oMappStock->setReference_Article(Reference_Article);
	this->oMappStock->setNom_Article(Nom_Article);
	this->oMappStock->setTaux_TVA_Article(Taux_TVA_Article);
	this->oMappStock->setPrix_Article_HT(Prix_Article_HT);
	this->oMappStock->setID_Couleur(ID_Couleur);
	this->oMappStock->setID_Stock(ID_Stock);
	sql = this->oMappStock->UpdateArticle();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::SupprimerUnArticle(int Reference_Article)
{
	System::String^ sql;

	this->oMappStock->setReference_Article(Reference_Article);

	sql = this->oMappStock->DeleteArticle();
	return this->oMapp->actionRows(sql);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::AfficherUneStat(System::String^ Commande)
{
	System::String^ sql;

	return this->oMapp->getRows(sql);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::AfficherArticlesDeCommande(void)
{
	System::String^ sql;

	sql = this->oMappCommande->SelectArticleDeCommande();
	return this->oMapp->getRows(sql);
}

void NS_Comp_Service::Clservice::AjouterUnArticleDeCommande(int ID_Commande, int Reference_Article, System::String^ Prix_Unitaire_Remise, int Quantite_Commande_Article, System::String^ Taux_TVA)
{
	System::String^ sql;

	this->oMappCommande->setID_Commande(ID_Commande);
	this->oMappCommande->setReference_Article(Reference_Article);
	this->oMappCommande->setPrix_Unitaire_Remise(Prix_Unitaire_Remise);
	this->oMappCommande->setQuantite_Commande_Article(Quantite_Commande_Article);
	this->oMappCommande->setTaux_TVA(Taux_TVA);
	sql = this->oMappCommande->InsertArticleDeCommande();
	return this->oMapp->actionRows(sql);
}

void  NS_Comp_Service::Clservice::ModifierUnArticleDeCommande(int ID_Commande, int Reference_Article, System::String^ Prix_Unitaire_Remise, int Quantite_Commande_Article, System::String^ Taux_TVA)
{
	System::String^ sql;

	this->oMappCommande->setID_Commande(ID_Commande);
	this->oMappCommande->setReference_Article(Reference_Article);
	this->oMappCommande->setPrix_Unitaire_Remise(Prix_Unitaire_Remise);
	this->oMappCommande->setQuantite_Commande_Article(Quantite_Commande_Article);
	this->oMappCommande->setTaux_TVA(Taux_TVA);
	sql = this->oMappCommande->UpdateArticleDeCommande();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::SupprimerUnArticleDeCommande(int ID_Commande, int Reference_Article)
{
	System::String^ sql;

	this->oMappCommande->setID_Commande(ID_Commande);
	this->oMappCommande->setReference_Article(Reference_Article);

	sql = this->oMappCommande->DeleteArticleDeCommande();
	return this->oMapp->actionRows(sql);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::AfficherPayements(void)
{
	System::String^ sql;

	sql = this->oMappCommande->SelectPayement();
	return this->oMapp->getRows(sql);
}

void NS_Comp_Service::Clservice::AjouterUnPayement(System::String^ Date_Payement, System::String^ Moyen_Payement, System::String^ Montant_Payement, int ID_Commande)
{
	System::String^ sql;

	this->oMappCommande->setDate_Payement(Date_Payement);
	this->oMappCommande->setMoyen_Payement(Moyen_Payement);
	this->oMappCommande->setMontant_Payement(Montant_Payement);
	this->oMappCommande->setID_Commande(ID_Commande);
	sql = this->oMappCommande->InsertPayement();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::ModifierUnPayement(int ID_Payement, System::String^ Date_Payement, System::String^ Moyen_Payement, System::String^ Montant_Payement, int ID_Commande)
{
	System::String^ sql;

	this->oMappCommande->setID_Payement(ID_Payement);
	this->oMappCommande->setDate_Payement(Date_Payement);
	this->oMappCommande->setMoyen_Payement(Moyen_Payement);
	this->oMappCommande->setMontant_Payement(Montant_Payement);
	this->oMappCommande->setID_Commande(ID_Commande);
	sql = this->oMappCommande->UpdatePayement();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::SupprimerUnPayement(int ID_Payement)
{
	System::String^ sql;

	this->oMappCommande->setID_Payement(ID_Payement);
	sql = this->oMappCommande->DeletePayement();
	return this->oMapp->actionRows(sql);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::AfficherCouleurs(void)
{
	System::String^ sql;

	sql = this->oMappStock->SelectCouleur();
	return this->oMapp->getRows(sql);
}

void NS_Comp_Service::Clservice::AjouterUneCouleur(System::String^ Nom_Couleur)
{
	System::String^ sql;

	this->oMappStock->setNom_Couleur(Nom_Couleur);
	sql = this->oMappStock->InsertCouleur();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::ModifierUneCouleur(int ID_Couleur, System::String^ Nom_Couleur)
{
	System::String^ sql;

	this->oMappStock->setID_Couleur(ID_Couleur);
	this->oMappStock->setNom_Couleur(Nom_Couleur);
	sql = this->oMappStock->UpdateCouleur();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::SupprimerUneCouleur(int ID_Couleur)
{
	System::String^ sql;

	this->oMappStock->setID_Couleur(ID_Couleur);
	sql = this->oMappStock->DeleteCouleur();
	return this->oMapp->actionRows(sql);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::AfficherStocks(void)
{
	System::String^ sql;

	sql = this->oMappStock->Select();
	return this->oMapp->getRows(sql);
}

void NS_Comp_Service::Clservice::AjouterUnStock(int Quantite_Stock, int Seuil_Reapprovisionnement)
{
	System::String^ sql;

	this->oMappStock->setQuantite_Stock(Quantite_Stock);
	this->oMappStock->setSeuil_Reapprovisionnement(Seuil_Reapprovisionnement);
	sql = this->oMappStock->Insert();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::ModifierUnStock(int ID_Stock, int Quantite_Stock, int Seuil_Reapprovisionnement)
{
	System::String^ sql;

	this->oMappStock->setID_Stock(ID_Stock);
	this->oMappStock->setQuantite_Stock(Quantite_Stock);
	this->oMappStock->setSeuil_Reapprovisionnement(Seuil_Reapprovisionnement);
	sql = this->oMappStock->Update();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::SupprimerUnStock(int ID_Stock)
{
	System::String^ sql;

	this->oMappStock->setID_Stock(ID_Stock);
	sql = this->oMappStock->Delete();
	return this->oMapp->actionRows(sql);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::AfficherAdresses(void)
{
	System::String^ sql;

	sql = this->oMappAdr->SelectAdresse();
	return this->oMapp->getRows(sql);
}

void NS_Comp_Service::Clservice::AjouterUneAdresse(int Numero_Adresse, System::String^ Nom_Rue_Adresse, int ID_Ville)
{
	System::String^ sql;

	this->oMappAdr->setNumero_Adresse(Numero_Adresse);
	this->oMappAdr->setNom_Rue_Adresse(Nom_Rue_Adresse);
	this->oMappAdr->setID_Ville(ID_Ville);
	sql = this->oMappAdr->InsertAdresse();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::ModifierUneAdresse(int ID_Adresse, int Numero_Adresse, System::String^ Nom_Rue_Adresse, int ID_Ville)
{
	System::String^ sql;

	this->oMappAdr->setID_Adresse(ID_Adresse);
	this->oMappAdr->setNumero_Adresse(Numero_Adresse);
	this->oMappAdr->setNom_Rue_Adresse(Nom_Rue_Adresse);
	this->oMappAdr->setID_Ville(ID_Ville);
	sql = this->oMappAdr->UpdateAdresse();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::SupprimerUneAdresse(int ID_Adresse)
{
	System::String^ sql;

	this->oMappAdr->setID_Adresse(ID_Adresse);
	sql = this->oMappAdr->DeleteAdresse();
	return this->oMapp->actionRows(sql);
}