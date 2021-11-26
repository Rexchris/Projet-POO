#include "CLMappCommande.h"

void NS_Comp_Commande::CLMappCommande::setReference_Commande(int Reference_Commande)
{
	this->Reference_Commande = Reference_Commande;
}

void NS_Comp_Commande::CLMappCommande::setDate_Livraison(System::String^ Date_Livraison)
{
	this->Date_Livraison = Date_Livraison;
}

void NS_Comp_Commande::CLMappCommande::setDate_Emission(System::String^ Date_Emission)
{
	this->Date_Emission = Date_Emission;
}

void NS_Comp_Commande::CLMappCommande::setDate_Reglement(System::String^ Date_Reglement)
{
	this->Date_Reglement = Date_Reglement;
}

void NS_Comp_Commande::CLMappCommande::setDate_Facturation(System::String^ Date_Facturation)
{
	this->Date_Facturation = Date_Facturation;
}

void NS_Comp_Commande::CLMappCommande::setMontant_Total_HT(float Montant_Total_HT)
{
	this->Montant_Total_HT = Montant_Total_HT;
}

void NS_Comp_Commande::CLMappCommande::setMontant_TVA(float Montant_TVA)
{
	this->Montant_TVA = Montant_TVA;
}

void NS_Comp_Commande::CLMappCommande::setMontant_TTC(float Montant_TTC)
{
	this->Montant_TTC = Montant_TTC;
}

void NS_Comp_Commande::CLMappCommande::setID_Client(int ID_Client)
{
	this->ID_Client = ID_Client;
}

void NS_Comp_Commande::CLMappCommande::setReference_Article(int Reference_Article)
{
	this->Reference_Article = Reference_Article;
}

void NS_Comp_Commande::CLMappCommande::setPrix_quantitatif_Remise(float Prix_quantitatif_Remise)
{
	this->Prix_quantitatif_Remise = Prix_quantitatif_Remise;
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

void NS_Comp_Commande::CLMappCommande::setMontant_Payement(float Montant_Payement)
{
	this->Montant_Payement = Montant_Payement;
}

int NS_Comp_Commande::CLMappCommande::getReference_Commande(void)
{
	return this->Reference_Commande;
}

System::String^ NS_Comp_Commande::CLMappCommande::getDate_Livraison(void)
{
	return this->Date_Livraison;
}

System::String^ NS_Comp_Commande::CLMappCommande::getDate_Emission(void)
{
	return this->Date_Emission;
}

System::String^ NS_Comp_Commande::CLMappCommande::getDate_Reglement(void)
{
	return this->Date_Reglement;
}

System::String^ NS_Comp_Commande::CLMappCommande::getDate_Facturation(void)
{
	return this->Date_Facturation;
}

float NS_Comp_Commande::CLMappCommande::getMontant_Total_HT(void)
{
	return this->Montant_Total_HT;
}

float NS_Comp_Commande::CLMappCommande::getMontant_TVA(void)
{
	return this->Montant_TVA;
}

float NS_Comp_Commande::CLMappCommande::getMontant_TTC(void)
{
	return this->Montant_TTC;
}

int NS_Comp_Commande::CLMappCommande::getID_Client(void)
{
	return this->ID_Client;
}

int NS_Comp_Commande::CLMappCommande::getReference_Article(void)
{
	return this->Reference_Article;
}

float NS_Comp_Commande::CLMappCommande::getPrix_quantitatif_Remise(void)
{
	return this->Prix_quantitatif_Remise;
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

float NS_Comp_Commande::CLMappCommande::getMontant_Payement(void)
{
	return this->Montant_Payement;
}

System::String^ NS_Comp_Commande::CLMappCommande::Select() {
	return "";
}

System::String^ NS_Comp_Commande::CLMappCommande::Insert() {
	return "";
}

System::String^ NS_Comp_Commande::CLMappCommande::Update() {
	return "";
}

System::String^ NS_Comp_Commande::CLMappCommande::Delete() {
	return "";
}