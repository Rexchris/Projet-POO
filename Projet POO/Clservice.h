#pragma once

#include "CLcad.h"
#include "CLMappEmploye.h"
#include "CLMappClient.h"
#include "CLMappCommande.h"
#include "CLMappStock.h"
#include "CLMappageStat.h"


namespace NS_Comp_Service {
	ref class Clservice
	{
	private :
		NS_Comp_Data::CLcad^ oMapp;
		NS_Comp_Employe::CLMappEmploye^ oMappEmp;
		NS_Comp_Client::CLMappClient^ oMappClient;
		NS_Comp_Commande::CLMappCommande^ oMappCommande;
		NS_Comp_Stock::CLMappStock^ oMappStock;
		NS_Comp_Stat::CLMappageStat^ oMappStat;
	public :
		void CLservice(void);
		void AfficherEmployes(void);
		void AjouterUnEmploye(System::String^ NomEmploye, System::String^ PrenomEmploye, System::String^ Date_Embauche, bool Superieur_Hierarchique, int ID_Adresse, int ID_Employe_Superieur_Hierarchique);
		void ModifierUnEmploye(int ID_Employe, System::String^ NomEmploye, System::String^ PrenomEmploye, System::String^ Date_Embauche, bool Superieur_Hierarchique, int ID_Adresse, int ID_Employe_Superieur_Hierarchique);
		void SupprimerUnEmploye(int ID_Employe);
		void AfficherClients(void);
		void AjouterUnClient(System::String^ Date_Naissance_Client, System::String^ Date_1er_Achat, System::String^ Nom_Client, System::String^ Prenom_Client);
		void ModifierUnClient(int ID_Client, System::String^ Date_Naissance_Client, System::String^ Date_1er_Achat, System::String^ Nom_Client, System::String^ Prenom_Client);
		void SupprimerUnClient(int ID_Client);
		void AfficherCommandes(void);
		void AjouterUneCommande(System::String^ Date_Livraison, System::String^ Date_Emission, System::String^ Date_Facturation, float Montant_Total_HT, int ID_Client, int ID_Adresse_Livraison, int ID_Adresse_Facturation);
		void ModifierUneCommande(int Reference_Commande, System::String^ Date_Livraison, System::String^ Date_Emission, System::String^ Date_Facturation, float Montant_Total_HT, int ID_Client, int ID_Adresse_Livraison, int ID_Adresse_Facturation);
		void SupprimerUneCommande(int Reference_Commande);
		void AfficherArticles(void);
		void AjouterUnArticle(System::String^ Nom_Article, float Taux_TVA_Article, float Prix_Article_HT, int ID_Couleur, int ID_Stock);
		void ModifierUnArticle(int Reference_Article, System::String^ Nom_Article, float Taux_TVA_Article, float Prix_Article_HT, int ID_Couleur, int ID_Stock);
		void SupprimerUnArticle(int Reference_Article);
		void AfficherUneStat(System::String^ Commande);
		void AfficherArticlesDeCommande(void);
		void AjouterUnArticleDeCommande(int Reference_Commande, int Reference_Article);
		void ModifierUnArticleDeCommande(int Reference_Commande, int Reference_Article);
		void SupprimerUnArticleDeCommande(int Reference_Commande, int Reference_Article);
		void AfficherPayements(void);
		void AjouterUnPayement(System::String^ Date_Payement, System::String^ Moyen_Payement, float Montant_Payement, int Reference_Commande);
		void ModifierUnPayement(int ID_Payement, System::String^ Date_Payement, System::String^ Moyen_Payement, float Montant_Payement, int Reference_Commande);
		void SupprimerUnPayement(int ID_Payement);
		void AfficherCouleurs(void);
		void AjouterUneCouleur(System::String^ Nom_Couleur);
		void ModifierUneCouleur(int ID_Couleur, System::String^ Nom_Couleur);
		void SupprimerUneCouleur(int ID_Couleur);
		void AfficherStocks(void);
		void AjouterUnStock(int Quantite_Stock, int Seuil_Reapprovisionnement);
		void ModifierUnStock(int ID_Stock, int Quantite_Stock, int Seuil_Reapprovisionnement);
		void SupprimerUnStock(int ID_Stock);
	};
}
