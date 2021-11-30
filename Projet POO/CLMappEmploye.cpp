#include "CLMappEmploye.h"

void NS_Comp_Employe::CLMappEmploye::setID_Employe(int ID_Employe)
{
	this->ID_Employe = ID_Employe;
}

void NS_Comp_Employe::CLMappEmploye::setID_Employe_Superieur_Hierarchique(int ID_Employe_Superieur_Hierarchique)
{
	this->ID_Employe_Superieur_Hierarchique = ID_Employe_Superieur_Hierarchique;
}

void NS_Comp_Employe::CLMappEmploye::setDate_Embauche(System::String^ Date_Embauche)
{
	this->Date_Embauche = Date_Embauche;
}

void NS_Comp_Employe::CLMappEmploye::setNom_Employe(System::String^ Nom_Employe)
{
	this->Nom_Employe = Nom_Employe;
}

void NS_Comp_Employe::CLMappEmploye::setPrenom_Employe(System::String^ Prenom_Employe)
{
	this->Prenom_Employe = Prenom_Employe;
}

void NS_Comp_Employe::CLMappEmploye::setSuperieur_Hierarchique(bool Superieur_Hierarchique)
{
	this->Superieur_Hierarchique = Superieur_Hierarchique;
}

int NS_Comp_Employe::CLMappEmploye::getID_Employe(void) 
{ 
	return this->ID_Employe; 
}

int NS_Comp_Employe::CLMappEmploye::getID_Employe_Superieur_Hierarchique(void) 
{ 
	return this->ID_Employe_Superieur_Hierarchique;
}

System::String^ NS_Comp_Employe::CLMappEmploye::getDate_Embauche(void)
{
	return this->Date_Embauche;
}

System::String^ NS_Comp_Employe::CLMappEmploye::getNom_Employe(void)
{
	return this->Nom_Employe;
}

System::String^ NS_Comp_Employe::CLMappEmploye::getPrenom_Employe(void)
{
	return this->Prenom_Employe;
}

bool NS_Comp_Employe::CLMappEmploye::getSuperieur_Hierarchique(void)
{
	return this->Superieur_Hierarchique;
}

System::String^ NS_Comp_Employe::CLMappEmploye::Select()
{
	return "SELECT Employe.ID_Employe, Employe.Nom_Employe, Employe.Prenom_Employe, Employe.Date_embauche, Employe.Superieur_Hierarchique, Employe.ID_Employe_Superieur_hierarchique, Employe.ID_Adresse, Adresse.Numero_Adresse, Adresse.Nom_Rue_Adresse, Adresse.ID_Ville, Ville.Nom_Ville, Ville.Code_Postal_Ville FROM Employe LEFT JOIN Adresse ON Employe.ID_Adresse = Adresse.ID_Adresse INNER JOIN Ville ON Adresse.ID_Ville = Ville.ID_Ville";
}

System::String^ NS_Comp_Employe::CLMappEmploye::Insert()
{
	if (getSuperieur_Hierarchique() == true) {
		return "INSERT INTO Employe (Nom_Employe, Prenom_Employe, Date_embauche, Superieur_Hierarchique, ID_Employe_Superieur_hierarchique, ID_Adresse) VALUES('" + this->getNom_Employe() + "', '" + getPrenom_Employe() + "', '" + getDate_Embauche() + "', '" + getSuperieur_Hierarchique() + "', '" + getID_Employe_Superieur_Hierarchique() + "', '" + getID_Adresse() + "')";
	}
	else {
		return "INSERT INTO Employe (Nom_Employe, Prenom_Employe, Date_embauche, Superieur_Hierarchique, ID_Employe_Superieur_hierarchique, ID_Adresse) VALUES('" + this->getNom_Employe() + "', '" + getPrenom_Employe() + "', '" + getDate_Embauche() + "', '" + getSuperieur_Hierarchique() + "', NULL, '" + getID_Adresse() + "')";
	}
}

System::String^ NS_Comp_Employe::CLMappEmploye::Update()
{
	return "";
}

System::String^ NS_Comp_Employe::CLMappEmploye::Delete()
{
	return "DELETE FROM Employe WHERE ID_Employe =" + getID_Employe();
}