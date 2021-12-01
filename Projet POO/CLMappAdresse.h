#pragma once
#include "CLmappage.h"

namespace NS_Comp_Adresse
{
	ref class CLMappAdresse : public NS_Comp_Mappage::CLmappage
	{
	private:
		System::String^ sSql;
		int ID_Ville;
		System::String^ Nom_Ville;
		int Code_Postal_Ville;
		int ID_Adresse;
		int Numero_Adresse;
		System::String^ Nom_Rue_Adresse;
	public:

		void setID_Ville(int ID_Ville);
		void setNom_Ville(System::String^ Nom_Ville);
		void setCode_Postal_Ville(int Code_Postal_Ville);
		void setID_Adresse(int ID_Adresse);
		void setNumero_Adresse(int Numero_Adresse);
		void setNom_Rue_Adresse(System::String^ Nom_Rue_Adresse);
		int getID_Ville(void);
		System::String^ getNom_Ville(void);
		System::String^ getIDFromNom_Ville();
		int getCode_Postal_Ville(void);
		int getID_Adresse(void);
		int getNumero_Adresse(void);
		System::String^ getNom_Rue_Adresse(void);
		System::String^ SelectAdresse(void);
		System::String^ InsertAdresse(void);
		System::String^ UpdateAdresse();
		System::String^ DeleteAdresse();
		virtual System::String^ Select(void) override;
		virtual System::String^ Insert(void) override;
		virtual System::String^ Delete(void) override;
		virtual System::String^ Update(void) override;
		System::String^ SelectVilleTopX(System::String^);
	};
}

