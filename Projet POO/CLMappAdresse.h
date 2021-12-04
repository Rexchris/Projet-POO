#pragma once
#include "CLmappage.h"

namespace NS_Comp_Adresse {
	ref class CLMappAdresse : public NS_Comp_Mappage::CLmappage	{
	private:
		System::String^ sSql;
		System::String^ ID_Ville;
		System::String^ Nom_Ville;
		System::String^ Code_Postal_Ville;
		System::String^ ID_Adresse;
		System::String^ Numero_Adresse;
		System::String^ Nom_Rue_Adresse;
	public:
		void setID_Ville(System::String^ ID_Ville);
		void setNom_Ville(System::String^ Nom_Ville);
		void setCode_Postal_Ville(System::String^ Code_Postal_Ville);
		void setID_Adresse(System::String^ ID_Adresse);
		void setNumero_Adresse(System::String^ Numero_Adresse);
		void setNom_Rue_Adresse(System::String^ Nom_Rue_Adresse);
		System::String^ getID_Ville(void);
		System::String^ getNom_Ville(void);
		System::String^ getCode_Postal_Ville(void);
		System::String^ getID_Adresse(void);
		System::String^ getNumero_Adresse(void);
		System::String^ getNom_Rue_Adresse(void);
		virtual System::String^ Select(void) override;
		virtual System::String^ Insert(void) override;
		virtual System::String^ Delete(void) override;
		virtual System::String^ Update(void) override;

		System::String^ SelectVilleTopX(System::String^);
		System::String^ getIDFromNom_Ville();
	};
}