#include "CLMappAdresse.h"

void NS_Comp_Adresse::CLMappAdresse::setID_Ville(int ID_Ville)
{
	this->ID_Ville = ID_Ville;
}

void NS_Comp_Adresse::CLMappAdresse::setNom_Ville(System::String^ Nom_Ville)
{
	this->Nom_Ville = Nom_Ville;
}

void NS_Comp_Adresse::CLMappAdresse::setCode_Postal_Ville(int Code_Postal_Ville)
{
	this->Code_Postal_Ville = Code_Postal_Ville;
}

void NS_Comp_Adresse::CLMappAdresse::setID_Adresse(int ID_Adresse)
{
	this->ID_Adresse = ID_Adresse;
}

void NS_Comp_Adresse::CLMappAdresse::setNumero_Adresse(int Numero_Adresse)
{
	this->Numero_Adresse = Numero_Adresse;
}

void NS_Comp_Adresse::CLMappAdresse::setNom_Rue_Adresse(System::String^ Nom_Rue_Adresse)
{
	this->Nom_Rue_Adresse = Nom_Rue_Adresse;
}

int NS_Comp_Adresse::CLMappAdresse::getID_Ville(void) { return this->ID_Ville; }

System::String^ NS_Comp_Adresse::CLMappAdresse::getNom_Ville(void) { return this->Nom_Ville; }

int NS_Comp_Adresse::CLMappAdresse::getCode_Postal_Ville(void) { return this->Code_Postal_Ville; }

int NS_Comp_Adresse::CLMappAdresse::getID_Adresse(void) { return this->ID_Adresse; }

int NS_Comp_Adresse::CLMappAdresse::getNumero_Adresse(void) { return this->Numero_Adresse; }

System::String^ NS_Comp_Adresse::CLMappAdresse::getNom_Rue_Adresse(void) 
{ 
	return this->Nom_Rue_Adresse; 
}

System::String^ NS_Comp_Adresse::CLMappAdresse::InsertAdresse(int ID_Adresse, int Numero_Adresse, System::String^ Nom_Rue_Adresse, int ID_Ville) 
{
	return "";
}

System::String^ NS_Comp_Adresse::CLMappAdresse::UpdateAdresse(int ID_Adresse, int Numero_Adresse, System::String^ Nom_Rue_Adresse, int ID_Ville)
{
	return "";
}