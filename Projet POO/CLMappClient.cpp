#include "CLMappClient.h"

void NS_Comp_Client::CLMappClient::setID_Client(int ID_Client)
{
	this->ID_Client = ID_Client;
}

void NS_Comp_Client::CLMappClient::setDate_Naissance_Client(System::String^ Date_Naissance_Client)
{
	this->Date_Naissance_Client = Date_Naissance_Client;
}

void NS_Comp_Client::CLMappClient::setDate_1er_Achat(System::String^ Date_1er_Achat)
{
	this->Date_1er_Achat = Date_1er_Achat;
}

void NS_Comp_Client::CLMappClient::setNom_Client(System::String^ Nom_Client)
{
	this->Nom_Client = Nom_Client;
}

void NS_Comp_Client::CLMappClient::setPrenom_Client(System::String^ Prenom_Client)
{
	this->Prenom_Client = Prenom_Client;
}

int NS_Comp_Client::CLMappClient::getID_Client(void) { return this->ID_Client; }

System::String^ NS_Comp_Client::CLMappClient::getDate_Naissance_Client(void) 
{ 
	return this->Date_Naissance_Client; 
}

System::String^ NS_Comp_Client::CLMappClient::getDate_1er_Achat(void)
{
	return this->Date_1er_Achat;
}

System::String^ NS_Comp_Client::CLMappClient::getNom_Client(void)
{
	return this->Nom_Client;
}

System::String^ NS_Comp_Client::CLMappClient::getPrenom_Client(void)
{
	return this->Prenom_Client;
}

System::String^ NS_Comp_Client::CLMappClient::Select() 
{
	return "";
}

System::String^ NS_Comp_Client::CLMappClient::Insert()
{
	return "";
}

System::String^ NS_Comp_Client::CLMappClient::Update()
{
	return "";
}

System::String^ NS_Comp_Client::CLMappClient::Delete()
{
	return "";
}