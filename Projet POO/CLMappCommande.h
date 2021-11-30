#pragma once
#include "CLMappAdresse.h"

namespace NS_Comp_Commande 
{
	ref class CLMappCommande : public NS_Comp_Adresse::CLMappAdresse
	{
	private :
		System::String^ Reference_Commande;
		System::String^ Date_Livraison;
		System::String^ Date_Emission;
		System::String^ Date_Facturation;
		float Montant_Total_HT;
		int ID_Client;
		int ID_Adresse_Livraison;
		int ID_Adresse_Facturation;
		int Reference_Article;
		float Prix_Unitaire_Remise;
		int Quantite_Commande_Article;
		int ID_Payement;
		System::String^ Date_Payement;
		System::String^ Moyen_Payement;
		double Montant_Payement;
		float Taux_TVA;
	public :
		void setReference_Commande(System::String^ Reference_Commande);
		void setDate_Livraison(System::String^ Date_Livraison);
		void setDate_Emission(System::String^ Date_Emission);
		void setDate_Facturation(System::String^ Date_Facturation);
		void setMontant_Total_HT(float Montant_Total_HT);
		void setID_Client(int ID_Client);
		void setID_Adresse_Livraison(int ID_Adresse_Livraison);
		void setID_Adresse_Facturation(int ID_Adresse_Facturation);
		void setReference_Article(int Reference_Article);
		void setPrix_Unitaire_Remise(float Prix_Unitaire_Remise);
		void setQuantite_Commande_Article(int Quantite_Commande_Article);
		void setID_Payement(int ID_Payement);
		void setDate_Payement(System::String^ Date_Payement);
		void setMoyen_Payement(System::String^ Moyent_Payement);
		void setMontant_Payement(double Montant_Payement);
		void setTaux_TVA(float Taux_TVA);
		System::String^ getReference_Commande(void);
		System::String^ getDate_Livraison(void);
		System::String^ getDate_Emission(void);
		System::String^ getDate_Facturation(void);
		float getMontant_Total_HT(void);
		int getID_Client(void);
		int getID_Adresse_Livraison(void);
		int getID_Adresse_Facturation(void);
		int getReference_Article(void);
		float getPrix_Unitaire_Remise(void);
		int getQuantite_Commande_Article(void);
		int getID_Payement(void);
		System::String^ getDate_Payement(void);
		System::String^ getMoyen_Payement(void);
		double getMontant_Payement(void);
		float getTaux_TVA(void);
		System::String^ Select(void) override;
		System::String^ Insert(void) override;
		System::String^ Update(void) override;
		System::String^ Delete(void) override;
		System::String^ SelectPayement(void);
		System::String^ InsertPayement(void);
		System::String^ UpdatePayement(void);
		System::String^ DeletePayement(void);
		System::String^ SelectArticleDeCommande(void);
		System::String^ InsertArticleDeCommande(void);
		System::String^ UpdateArticleDeCommande(void);
		System::String^ DeleteArticleDeCommande(void);
	};
}
