#pragma once
#include "CLMappAdresse.h"

namespace NS_Comp_Commande 
{
	ref class CLMappCommande : public NS_Comp_Adresse::CLMappAdresse
	{
	private :
		int Reference_Commande;
		System::String^ Date_Livraison;
		System::String^ Date_Emission;
		System::String^ Date_Reglement;
		System::String^ Date_Facturation;
		float Montant_Total_HT;
		float Montant_TVA;
		float Montant_TTC;
		int ID_Client;
		int Reference_Article;
		float Prix_quantitatif_Remise;
		int Quantite_Commande_Article;
		int ID_Payement;
		System::String^ Date_Payement;
		System::String^ Moyen_Payement;
		float Montant_Payement;
	public :
		void setReference_Commande(int Reference_Commande);
		void setDate_Livraison(System::String^ Date_Livraison);
		void setDate_Emission(System::String^ Date_Emission);
		void setDate_Reglement(System::String^ Date_Reglement);
		void setDate_Facturation(System::String^ Date_Facturation);
		void setMontant_Total_HT(float Montant_Total_HT);
		void setMontant_TVA(float Montant_TVA);
		void setMontant_TTC(float Montant_TTC);
		void setID_Client(int ID_Client);
		void setReference_Article(int Reference_Article);
		void setPrix_quantitatif_Remise(float Prix_quantitatif_Remise);
		void setQuantite_Commande_Article(int Quantite_Commande_Article);
		void setID_Payement(int ID_Payement);
		void setDate_Payement(System::String^ Date_Payement);
		void setMoyen_Payement(System::String^ Moyent_Payement);
		void setMontant_Payement(float Montant_Payement);
		int getReference_Commande(void);
		System::String^ getDate_Livraison(void);
		System::String^ getDate_Emission(void);
		System::String^ getDate_Reglement(void);
		System::String^ getDate_Facturation(void);
		float getMontant_Total_HT(void);
		float getMontant_TVA(void);
		float getMontant_TTC(void);
		int getID_Client(void);
		int getReference_Article(void);
		float getPrix_quantitatif_Remise(void);
		int getQuantite_Commande_Article(void);
		int getID_Payement(void);
		System::String^ getDate_Payement(void);
		System::String^ getMoyen_Payement(void);
		float getMontant_Payement(void);
		System::String^ Select(void) override;
		System::String^ Insert(void) override;
		System::String^ Update(void) override;
		System::String^ Delete(void) override;
	};
}
