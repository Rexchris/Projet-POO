#include "CLMappAdresse.h"

void NS_Comp_Adresse::CLMappAdresse::setID_Ville(System::String^ ID_Ville) { this->ID_Ville = ID_Ville; }
void NS_Comp_Adresse::CLMappAdresse::setNom_Ville(System::String^ Nom_Ville) { this->Nom_Ville = Nom_Ville; }
void NS_Comp_Adresse::CLMappAdresse::setCode_Postal_Ville(System::String^ Code_Postal_Ville) { this->Code_Postal_Ville = Code_Postal_Ville; }
void NS_Comp_Adresse::CLMappAdresse::setID_Adresse(System::String^ ID_Adresse) { this->ID_Adresse = ID_Adresse; }
void NS_Comp_Adresse::CLMappAdresse::setNumero_Adresse(System::String^ Numero_Adresse) { this->Numero_Adresse = Numero_Adresse; }
void NS_Comp_Adresse::CLMappAdresse::setNom_Rue_Adresse(System::String^ Nom_Rue_Adresse) { this->Nom_Rue_Adresse = Nom_Rue_Adresse; }

System::String^ NS_Comp_Adresse::CLMappAdresse::getID_Ville(void) { return this->ID_Ville; }
System::String^ NS_Comp_Adresse::CLMappAdresse::getNom_Ville(void) { return this->Nom_Ville; }
System::String^ NS_Comp_Adresse::CLMappAdresse::getCode_Postal_Ville(void) { return this->Code_Postal_Ville; }
System::String^ NS_Comp_Adresse::CLMappAdresse::getID_Adresse(void) { return this->ID_Adresse; }
System::String^ NS_Comp_Adresse::CLMappAdresse::getNumero_Adresse(void) { return this->Numero_Adresse; }
System::String^ NS_Comp_Adresse::CLMappAdresse::getNom_Rue_Adresse(void) { 	return this->Nom_Rue_Adresse; }

System::String^ NS_Comp_Adresse::CLMappAdresse::Select(void) {
	return "SELECT Adresse.ID_Adresse, Adresse.Numero_Adresse, Adresse.Nom_Rue_Adresse, Adresse.ID_Ville, Ville.Nom_Ville, Ville.Code_Postal_Ville FROM Adresse LEFT JOIN Ville ON Adresse.ID_Ville = Ville.ID_Ville";
}
System::String^ NS_Comp_Adresse::CLMappAdresse::Insert(void) {
	return "INSERT INTO [ProjetPOO].[dbo].[Adresse] (Numero_Adresse, Nom_Rue_Adresse, ID_Ville) VALUES ('" + this->getNumero_Adresse() + "', '" + this->getNom_Rue_Adresse() + "', '" + this->getID_Ville() + "');";
}
System::String^ NS_Comp_Adresse::CLMappAdresse::Delete(void) {
	return "DELETE FROM Adresse WHERE ID_Adresse =" + this->getID_Adresse();
}
System::String^ NS_Comp_Adresse::CLMappAdresse::Update(void) {
	return "UPDATE Adresse SET Numero_Adresse = '" + this->getNumero_Adresse() + "', Nom_Rue_Adresse = '" + this->getNom_Rue_Adresse() + "', ID_Ville = '" + this->getID_Ville() + "' WHERE ID_Adresse = " + this->getID_Adresse() + ";";
}

System::String^ NS_Comp_Adresse::CLMappAdresse::SelectVilleTopX(System::String^ search) {
	return "SELECT TOP(10) Nom_Ville FROM Ville WHERE Nom_Ville LIKE '" + search + "%' ORDER BY Nom_Ville ASC; ";
}
System::String^ NS_Comp_Adresse::CLMappAdresse::getIDFromNom_Ville() {
	return "SELECT ID_Ville FROM Ville WHERE Nom_Ville = '" + this->getNom_Ville() + "';";
}