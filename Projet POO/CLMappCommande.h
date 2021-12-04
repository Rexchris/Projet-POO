#pragma once
#include "CLMappAdresse.h"

namespace NS_Comp_Commande 
{
	ref class CLMappCommande : public NS_Comp_Adresse::CLMappAdresse
	{
	private :
		System::String^ ID_Commande;
		System::String^ Reference_Commande;
		System::String^ Date_Livraison;
		System::String^ Date_Emission;
		System::String^ Date_Facturation;
		System::String^ Montant_Total_HT;
		System::String^ ID_Client;
		System::String^ ID_Adresse_Livraison;
		System::String^ ID_Adresse_Facturation;
		System::String^ Reference_Article;
		System::String^ Prix_Unitaire_Remise;
		System::String^ Quantite_Commande_Article;
		System::String^ ID_Payement;
		System::String^ Date_Payement;
		System::String^ Moyen_Payement;
		System::String^ Montant_Payement;
		System::String^ Taux_TVA;
	public :
		void setID_Commande(System::String^ ID_Commande);
		void setReference_Commande(System::String^ Reference_Commande);
		void setDate_Livraison(System::String^ Date_Livraison);
		void setDate_Emission(System::String^ Date_Emission);
		void setDate_Facturation(System::String^ Date_Facturation);
		void setMontant_Total_HT(System::String^ Montant_Total_HT);
		void setID_Client(System::String^ ID_Client);
		void setID_Adresse_Livraison(System::String^ ID_Adresse_Livraison);
		void setID_Adresse_Facturation(System::String^ ID_Adresse_Facturation);
		void setReference_Article(System::String^ Reference_Article);
		void setPrix_Unitaire_Remise(System::String^ Prix_Unitaire_Remise);
		void setQuantite_Commande_Article(System::String^ Quantite_Commande_Article);
		void setID_Payement(System::String^ ID_Payement);
		void setDate_Payement(System::String^ Date_Payement);
		void setMoyen_Payement(System::String^ Moyent_Payement);
		void setMontant_Payement(System::String^ Montant_Payement);
		void setTaux_TVA(System::String^ Taux_TVA);
		System::String^ getID_Commande(void);
		System::String^ getReference_Commande(void);
		System::String^ getDate_Livraison(void);
		System::String^ getDate_Emission(void);
		System::String^ getDate_Facturation(void);
		System::String^ getMontant_Total_HT(void);
		System::String^ getID_Client(void);
		System::String^ getID_Adresse_Livraison(void);
		System::String^ getID_Adresse_Facturation(void);
		System::String^ getReference_Article(void);
		System::String^ getPrix_Unitaire_Remise(void);
		System::String^ getQuantite_Commande_Article(void);
		System::String^ getID_Payement(void);
		System::String^ getDate_Payement(void);
		System::String^ getMoyen_Payement(void);
		System::String^ getMontant_Payement(void);
		System::String^ getTaux_TVA(void);
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

		System::String^ generatureRefCommande(void);
	};
}
