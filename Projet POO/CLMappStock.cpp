#include "CLMappStock.h"

void NS_Comp_Stock::CLMappStock::setReference_Article(int Reference_Article)
{
	this->Reference_Article = Reference_Article;
}

void NS_Comp_Stock::CLMappStock::setNom_Article(System::String^ Nom_Article)
{
	this->Nom_Article = Nom_Article;
}

void NS_Comp_Stock::CLMappStock::setQuantite_Stock(int Quantite_Stock)
{
	this->Quantite_Stock = Quantite_Stock;
}

void NS_Comp_Stock::CLMappStock::setSeuil_Reapprovisionnement(int Seuil_Reapprovisionnement)
{
	this->Seuil_Reapprovisionnement = Seuil_Reapprovisionnement;
}

void NS_Comp_Stock::CLMappStock::setTaux_TVA_Article(float Taux_TVA_Article)
{
	this->Taux_TVA_Article = Taux_TVA_Article;
}

void NS_Comp_Stock::CLMappStock::setPrix_Article_HT(float Prix_Article_HT)
{
	this->Prix_Article_HT = Prix_Article_HT;
}

void NS_Comp_Stock::CLMappStock::setID_Couleur(int ID_Couleur)
{
	this->ID_Couleur = ID_Couleur;
}

void NS_Comp_Stock::CLMappStock::setNom_Couleur(System::String^ Nom_Couleur)
{
	this->Nom_Couleur = Nom_Couleur;
}

void NS_Comp_Stock::CLMappStock::setID_Stock(int ID_Stock)
{
	this->ID_Stock = ID_Stock;
}

int NS_Comp_Stock::CLMappStock::getReference_Article(void)
{
	return this->Reference_Article;
}

System::String^ NS_Comp_Stock::CLMappStock::getNom_Article(void)
{
	return this->Nom_Article;
}

int NS_Comp_Stock::CLMappStock::getQuantite_Stock(void)
{
	return this->Quantite_Stock;
}

int NS_Comp_Stock::CLMappStock::getSeuil_Reapprovisionnement(void)
{
	return this->Seuil_Reapprovisionnement;
}

float NS_Comp_Stock::CLMappStock::getTaux_TVA_Article(void)
{
	return this->Taux_TVA_Article;
}

float NS_Comp_Stock::CLMappStock::getPrix_Article_HT(void)
{
	return this->Prix_Article_HT;
}

int NS_Comp_Stock::CLMappStock::getID_Couleur(void)
{
	return this->ID_Couleur;
}

System::String^ NS_Comp_Stock::CLMappStock::getNom_Couleur(void)
{
	return this->Nom_Couleur;
}

int NS_Comp_Stock::CLMappStock::getID_Stock(void)
{
	return this->ID_Stock;
}

System::String^ NS_Comp_Stock::CLMappStock::Select(void) 
{
	return "";
}

System::String^ NS_Comp_Stock::CLMappStock::Insert(void) 
{
	return "";
}

System::String^ NS_Comp_Stock::CLMappStock::Update(void) 
{
	return "";
}

System::String^ NS_Comp_Stock::CLMappStock::Delete(void) 
{
	return "";
}

System::String^ NS_Comp_Stock::CLMappStock::SelectArticle(void) 
{
	return "";
}

System::String^ NS_Comp_Stock::CLMappStock::InsertArticle(void)
{
	return "";
}

System::String^ NS_Comp_Stock::CLMappStock::UpdateArticle(void)
{
	return "";
}

System::String^ NS_Comp_Stock::CLMappStock::DeleteArticle(void)
{
	return "";
}

System::String^ NS_Comp_Stock::CLMappStock::SelectCouleur(void) 
{
	return "";
}

System::String^ NS_Comp_Stock::CLMappStock::InsertCouleur(void) 
{
	return "";
}

System::String^ NS_Comp_Stock::CLMappStock::UpdateCouleur(void) 
{
	return "";
}

System::String^ NS_Comp_Stock::CLMappStock::DeleteCouleur(void) 
{
	return "";
}