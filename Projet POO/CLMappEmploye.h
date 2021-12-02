#pragma once
#include "CLMappAdresse.h"

namespace NS_Comp_Employe
{
	ref class CLMappEmploye : public NS_Comp_Adresse::CLMappAdresse
	{
	private :
		int ID_Employe;
		int ID_Employe_Superieur_Hierarchique;
		System::String^ Date_Embauche;
		System::String^ Nom_Employe;
		System::String^ Prenom_Employe;
		bool Superieur_Hierarchique;
	public : 
		void setID_Employe(int ID_Employe);
		void setID_Employe_Superieur_Hierarchique(int ID_Employe_Superieur_Hierarchique);
		void setDate_Embauche(System::String^ Date_Embauche);
		void setNom_Employe(System::String^ Nom_Employe);
		void setSuperieur_Hierarchique(bool Superieur_Hierarchique);
		void setPrenom_Employe(System::String^ Prenom_Employe);
		int getID_Employe(void);
		int getID_Employe_Superieur_Hierarchique(void);
		System::String^ getDate_Embauche(void);
		System::String^ getNom_Employe(void);
		System::String^ getPrenom_Employe(void);
		bool getSuperieur_Hierarchique(void);
		System::String^ Select(void) override;
		System::String^ Insert(void) override;
		System::String^ Delete(void) override;
		System::String^ Update(void) override;
		System::String^ getEmployeFromID(System::String^ ID_Employe);
	};
}
