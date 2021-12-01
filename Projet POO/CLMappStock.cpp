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

void NS_Comp_Stock::CLMappStock::setTaux_TVA_Article(System::String^ Taux_TVA_Article)
{
	this->Taux_TVA_Article = Taux_TVA_Article;
}

void NS_Comp_Stock::CLMappStock::setPrix_Article_HT(System::String^ Prix_Article_HT)
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

System::String^ NS_Comp_Stock::CLMappStock::getTaux_TVA_Article(void)
{
	return this->Taux_TVA_Article;
}

System::String^ NS_Comp_Stock::CLMappStock::getPrix_Article_HT(void)
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
	return "SELECT * FROM Article INNER JOIN Stock ON Article.ID_Stock = Stock.ID_Stock";
}

System::String^ NS_Comp_Stock::CLMappStock::Insert(void) 
{
	return "INSERT INTO Stock (Quantite_Stock, Seuil_Approvisionnement) VALUES ('" + this->getQuantite_Stock() + "','" + this->getSeuil_Reapprovisionnement() + "');";
}

System::String^ NS_Comp_Stock::CLMappStock::Update(void) 
{
	return "UPDATE Stock SET Quantite_Stock = '" + this->getQuantite_Stock() + "', Seuil_Approvisionnement = '" + this->getSeuil_Reapprovisionnement() + "' WHERE ID_Stock = " + this->getID_Stock() + ";";
}

System::String^ NS_Comp_Stock::CLMappStock::Delete(void) 
{
	return "DELETE FROM Stock WHERE ID_Stock = " + this->getID_Stock() + ";";
}

System::String^ NS_Comp_Stock::CLMappStock::SelectArticle(void) 
{
	return "SELECT * FROM Article INNER JOIN Stock ON Article.ID_Stock = Stock.ID_Stock";
}

System::String^ NS_Comp_Stock::CLMappStock::InsertArticle(void)
{
	return "INSERT INTO Article (Nom_Article, Taux_TVA_Article, Prix_Article_HT, ID_Couleur, ID_Stock) VALUES ('" + this->getNom_Article() + "','" + this->getTaux_TVA_Article() + "','" + this->getPrix_Article_HT() + "','" + this->getID_Couleur() + "','" + this->getID_Stock() + "');";
}

System::String^ NS_Comp_Stock::CLMappStock::UpdateArticle(void)
{
	return "UPDATE Article SET Nom_Article = '" + this->getNom_Article() + "', Taux_TVA_Article = '" + this->getTaux_TVA_Article() + "', Prix_Article_HT = '" + this->getPrix_Article_HT() + "', ID_Couleur = '" + this->getID_Couleur() + "', ID_Stock = '" + this->getID_Stock() + "' WHERE Reference_Article = " + this->getReference_Article() + ";";
}

System::String^ NS_Comp_Stock::CLMappStock::DeleteArticle(void)
{
	return "DELETE FROM Article WHERE Reference_Article = " + this->getReference_Article() + ";";
}

System::String^ NS_Comp_Stock::CLMappStock::SelectCouleur(void) 
{
	return "SELECT * FROM Couleur;";
}

System::String^ NS_Comp_Stock::CLMappStock::InsertCouleur(void) 
{
	return "INSERT INTO Couleur (Nom_Couleur) VALUES ('" + this->getNom_Couleur() + "');";
}

System::String^ NS_Comp_Stock::CLMappStock::UpdateCouleur(void) 
{
	return "UPDATE Couleur SET Nom_Couleur = '" + this->getNom_Couleur() + "' WHERE ID_Couleur = " + this->getID_Couleur() + ";";
}

System::String^ NS_Comp_Stock::CLMappStock::DeleteCouleur(void) 
{
	return "DELETE FROM Couleur WHERE ID_Couleur = " + this->getID_Couleur() + ";";
}