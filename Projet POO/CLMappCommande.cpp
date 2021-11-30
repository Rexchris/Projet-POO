#include "CLMappCommande.h"

void NS_Comp_Commande::CLMappCommande::setID_Commande(int ID_Commande)
{
	this->ID_Commande = ID_Commande;
}

void NS_Comp_Commande::CLMappCommande::setDate_Livraison(System::String^ Date_Livraison)
{
	this->Date_Livraison = Date_Livraison;
}

void NS_Comp_Commande::CLMappCommande::setDate_Emission(System::String^ Date_Emission)
{
	this->Date_Emission = Date_Emission;
}

void NS_Comp_Commande::CLMappCommande::setDate_Facturation(System::String^ Date_Facturation)
{
	this->Date_Facturation = Date_Facturation;
}

void NS_Comp_Commande::CLMappCommande::setMontant_Total_HT(System::String^ Montant_Total_HT)
{
	this->Montant_Total_HT = Montant_Total_HT;
}

void NS_Comp_Commande::CLMappCommande::setID_Client(int ID_Client)
{
	this->ID_Client = ID_Client;
}

void NS_Comp_Commande::CLMappCommande::setID_Adresse_Facturation(int ID_Adresse_Facturation)
{
	this->ID_Adresse_Facturation = ID_Adresse_Facturation;
}

void NS_Comp_Commande::CLMappCommande::setID_Adresse_Livraison(int ID_Adresse_Livraison)
{
	this->ID_Adresse_Livraison = ID_Adresse_Livraison;
}

void NS_Comp_Commande::CLMappCommande::setReference_Article(int Reference_Article)
{
	this->Reference_Article = Reference_Article;
}

void NS_Comp_Commande::CLMappCommande::setPrix_Unitaire_Remise(System::String^ Prix_Unitaire_Remise)
{
	this->Prix_Unitaire_Remise = Prix_Unitaire_Remise;
}

void NS_Comp_Commande::CLMappCommande::setQuantite_Commande_Article(int Quantite_Commande_Article)
{
	this->Quantite_Commande_Article = Quantite_Commande_Article;
}

void NS_Comp_Commande::CLMappCommande::setID_Payement(int ID_Payement)
{
	this->ID_Payement = ID_Payement;
}

void NS_Comp_Commande::CLMappCommande::setDate_Payement(System::String^ Date_Payement)
{
	this->Date_Payement = Date_Payement;
}

void NS_Comp_Commande::CLMappCommande::setMoyen_Payement(System::String^ Moyen_Payement)
{
	this->Moyen_Payement = Moyen_Payement;
}

void NS_Comp_Commande::CLMappCommande::setMontant_Payement(System::String^ Montant_Payement)
{
	this->Montant_Payement = Montant_Payement;
}

void NS_Comp_Commande::CLMappCommande::setTaux_TVA(System::String^ Taux_TVA)
{
	this->Taux_TVA = Taux_TVA;
}

int NS_Comp_Commande::CLMappCommande::getID_Commande(void)
{
	return this->ID_Commande;
}

System::String^ NS_Comp_Commande::CLMappCommande::getDate_Livraison(void)
{
	return this->Date_Livraison;
}

System::String^ NS_Comp_Commande::CLMappCommande::getDate_Emission(void)
{
	return this->Date_Emission;
}

System::String^ NS_Comp_Commande::CLMappCommande::getDate_Facturation(void)
{
	return this->Date_Facturation;
}

System::String^ NS_Comp_Commande::CLMappCommande::getMontant_Total_HT(void)
{
	return this->Montant_Total_HT;
}

int NS_Comp_Commande::CLMappCommande::getID_Client(void)
{
	return this->ID_Client;
}

int NS_Comp_Commande::CLMappCommande::getID_Adresse_Facturation(void)
{
	return this->ID_Adresse_Facturation;
}

int NS_Comp_Commande::CLMappCommande::getID_Adresse_Livraison(void)
{
	return this->ID_Adresse_Livraison;
}

int NS_Comp_Commande::CLMappCommande::getReference_Article(void)
{
	return this->Reference_Article;
}

System::String^ NS_Comp_Commande::CLMappCommande::getPrix_Unitaire_Remise(void)
{
	return this->Prix_Unitaire_Remise;
}

int NS_Comp_Commande::CLMappCommande::getQuantite_Commande_Article(void)
{
	return this->Quantite_Commande_Article;
}

int NS_Comp_Commande::CLMappCommande::getID_Payement(void)
{
	return this->ID_Payement;
}

System::String^ NS_Comp_Commande::CLMappCommande::getDate_Payement(void)
{
	return this->Date_Payement;
}

System::String^ NS_Comp_Commande::CLMappCommande::getMoyen_Payement(void)
{
	return this->Moyen_Payement;
}

System::String^ NS_Comp_Commande::CLMappCommande::getMontant_Payement(void)
{
	return this->Montant_Payement;
}

System::String^ NS_Comp_Commande::CLMappCommande::getTaux_TVA(void)
{
	return this->Taux_TVA;
}

System::String^ NS_Comp_Commande::CLMappCommande::Select() {
	return "SELECT * FROM Commande";
}

System::String^ NS_Comp_Commande::CLMappCommande::Insert() {
	return "INSERT INTO Commande (Reference_Commande, Date_Livraison, Date_Emission, Date_Facturation, Montant_Total_HT, ID_Client, ID_Adresse_Livraison, ID_Adresse_Facturation) VALUES ('','','','','','','','')";
}

System::String^ NS_Comp_Commande::CLMappCommande::Update() {
	return "";
}

System::String^ NS_Comp_Commande::CLMappCommande::Delete() {
	return "";
}

System::String^ NS_Comp_Commande::CLMappCommande::SelectPayement(void) 
{
	return "SELECT * FROM Payement";
}
System::String^ NS_Comp_Commande::CLMappCommande::InsertPayement(void) 
{
	return "INSERT INTO Payement(Date_Payement, Moyen_Payement, Montant_Payement, ID_Commande) VALUES ('" + this->getDate_Payement() + "','" + this->getMoyen_Payement() + "','10.33','" + this->getID_Commande() + "')";
}
System::String^ NS_Comp_Commande::CLMappCommande::UpdatePayement(void) 
{
	return "UPDATE Payement SET Date_Payement = '" + this->getDate_Payement() + "', Moyen_Payement = '" + this->getMoyen_Payement() + "', Montant_Payement = '" + this->getMontant_Payement() + "', ID_Commande = '" + this->getID_Commande() + "' WHERE ID_Payement =" + getID_Payement();
}
System::String^ NS_Comp_Commande::CLMappCommande::DeletePayement(void) 
{
	return "DELETE FROM Payement WHERE ID_Payement =" + getID_Payement();
}

System::String^ NS_Comp_Commande::CLMappCommande::SelectArticleDeCommande(void)
{
	return "";
}

System::String^ NS_Comp_Commande::CLMappCommande::InsertArticleDeCommande(void)
{
	return "";
}

System::String^ NS_Comp_Commande::CLMappCommande::UpdateArticleDeCommande(void)
{
	return "";
}

System::String^ NS_Comp_Commande::CLMappCommande::DeleteArticleDeCommande(void)
{
	return "";
}