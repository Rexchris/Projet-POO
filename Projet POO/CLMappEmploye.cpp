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

System::String^ NS_Comp_Employe::CLMappEmploye::Select()
{
	return "";
}

System::String^ NS_Comp_Employe::CLMappEmploye::Insert()
{
	return "";
}

System::String^ NS_Comp_Employe::CLMappEmploye::Update()
{
	return "";
}

System::String^ NS_Comp_Employe::CLMappEmploye::Delete()
{
	return "";
}