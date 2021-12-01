#include "CLMappCommande.h"

void NS_Comp_Commande::CLMappCommande::setID_Commande(int ID_Commande)
{
	this->ID_Commande = ID_Commande;
}

void NS_Comp_Commande::CLMappCommande::setReference_Commande(System::String^ Reference_Commande) 
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

System::String^ NS_Comp_Commande::CLMappCommande::getReference_Commande(System::String^ ID_Client, System::String^ ID_Adresse)
{
	return "DECLARE @IDCLIENT AS INT=" + ID_Client + "; DECLARE @IDADRESSE AS INT =" + ID_Adresse + "; SELECT TOP(1) SUBSTRING(Nom_Client, 0, 3) + UPPER(SUBSTRING(Prenom_Client, 0, 3)) + CAST(YEAR(GETDATE()) as varchar(20)) + SUBSTRING((SELECT Nom_Ville FROM Adresse INNER JOIN Ville ON Adresse.ID_Ville = Ville.ID_Ville WHERE ID_Adresse = @IDADRESSE), 0, 4) + CAST((CAST(SUBSTRING(Reference_Commande, 12, 12) as int) + 1) as varchar(20)) FROM Client INNER JOIN Commande ON Client.ID_Client = Commande.ID_Client INNER JOIN Adresse ON Commande.ID_Adresse_Livraison = Adresse.ID_Adresse INNER JOIN Ville ON Adresse.ID_Adresse = Ville.ID_Ville WHERE Client.ID_Client = @IDCLIENT ORDER BY Reference_Commande DESC;";
}

System::String^ NS_Comp_Commande::CLMappCommande::getReference_Commande()
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
	return "INSERT INTO Commande (Reference_Commande, Date_Livraison, Date_Emission, Date_Facturation, Montant_Total_HT, ID_Client, ID_Adresse_Livraison, ID_Adresse_Facturation) VALUES ('" + this->getReference_Commande() + "','" + this->getDate_Livraison() + "','" + this->getDate_Emission() + "','" + this->getDate_Facturation() + "','" + this->getMontant_Total_HT() + "','" + this->getID_Client() + "','" + this->getID_Adresse_Livraison() + "','" + this->getID_Adresse_Facturation() + "')";
}

System::String^ NS_Comp_Commande::CLMappCommande::Update() {
	return "UPDATE Commande SET Reference_Commande = '" + this->getReference_Commande() + "', Date_Livraison = '" + this->getDate_Livraison() + "', Date_Emission = '" + this->getDate_Emission() + "', Date_Facturation = '" + this->getDate_Facturation() + "', Montant_Total_HT = '" + this->getMontant_Total_HT() + "', ID_Client= '" + this->getID_Client() + "', ID_Adresse_Livraison = '" + this->getID_Adresse_Livraison() + "', ID_Adresse_Facturation = '" + this->getID_Adresse_Facturation() + "' WHERE ID_Commande = "+ this->getID_Commande() + ";";
}

System::String^ NS_Comp_Commande::CLMappCommande::Delete() {
	return "DELETE FROM Commande WHERE ID_Commande = " + this->getID_Commande() + ";";
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
	return "SELECT * FROM Contenir;";
}

System::String^ NS_Comp_Commande::CLMappCommande::InsertArticleDeCommande(void)
{
	return "INSERT INTO Contenir (Reference_Article, ID_Commande, Prix_Quantitatif_Remise, Quantite_Commande_Article, Taux_TVA) VALUES ('" + this->getReference_Article() + "','" + this->getID_Commande() + "','" + this->getPrix_Unitaire_Remise() + "','" + this->getQuantite_Commande_Article() + "','" + this->getTaux_TVA() + "')";
}

System::String^ NS_Comp_Commande::CLMappCommande::UpdateArticleDeCommande(void)
{
	return "UPDATE Contenir SET Prix_Quantitatif_Remise = '" + this->getPrix_Unitaire_Remise() + "', Quantite_Commande_Article = '" + this->getQuantite_Commande_Article() + "', Taux_TVA = '" + this->getTaux_TVA() + "' WHERE Reference_Article = " + this->getReference_Article() + " AND ID_Commande = " + this->getID_Commande() + ";";
}

System::String^ NS_Comp_Commande::CLMappCommande::DeleteArticleDeCommande(void)
{
	return "DELETE FROM Contenir WHERE Reference_Article = " + this->getReference_Article() + " AND ID_Commande = " + this->getID_Commande() + ";";
}