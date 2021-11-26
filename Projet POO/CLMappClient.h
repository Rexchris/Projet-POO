#pragma once
namespace NS_Comp_Client
{
	ref class CLMappClient
	{
	private:
		System::String^ sSql;
		int ID_Client;
		System::String^ Date_Naissance_Client;
		System::String^ Date_1er_Achat;
		System::String^ Nom_Client;
		System::String^ Prenom_Client;
	public:
		void setID_Client(int ID_Client);
		void setDate_Naissance_Client(System::String^ Date_Naissance_Client);
		void setDate_1er_Achat(System::String^ Date_1er_Achat);
		void setNom_Client(System::String^ Nom_Client);
		void setPrenom_Client(System::String^ Prenom_Client);
		int getID_Client(void);
		System::String^ getDate_Naissance_Client(void);
		System::String^ getDate_1er_Achat(void);
		System::String^ getNom_Client(void);
		System::String^ getPrenom_Client(void);
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
	};
}