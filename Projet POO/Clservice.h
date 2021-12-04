#pragma once

#include "CLcad.h"
#include "CLMappEmploye.h"
#include "CLMappClient.h"
#include "CLMappCommande.h"
#include "CLMappStock.h"
#include "CLMappAdresse.h"
#include "CLMappageFacture.h"

namespace NS_Comp_Service {
	ref class Clservice
	{
	private :
		NS_Comp_Data::CLcad^ oMapp;
		NS_Comp_Employe::CLMappEmploye^ oMappEmp;
		NS_Comp_Client::CLMappClient^ oMappClient;
		NS_Comp_Commande::CLMappCommande^ oMappCommande;
		NS_Comp_Stock::CLMappStock^ oMappStock;
		NS_Comp_Adresse::CLMappAdresse^ oMappAdr;
		NS_Comp_Facture::CLMappageFacture^ oMappFacture;
	public :
		Clservice(void);

		/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

		System::Data::DataTable^ AfficherEmployes(void);
		System::String^ AjouterUnEmploye(System::String^ NomEmploye, System::String^ PrenomEmploye, System::String^ Date_Embauche, System::String^ Superieur_Hierarchique, System::String^ ID_Adresse, System::String^ ID_Employe_Superieur_Hierarchique);
		void ModifierUnEmploye(System::String^ ID_Employe, System::String^ NomEmploye, System::String^ PrenomEmploye, System::String^ Date_Embauche, System::String^ Superieur_Hierarchique, System::String^ ID_Adresse, System::String^ ID_Employe_Superieur_Hierarchique);
		void SupprimerUnEmploye(System::String^ ID_Employe);

		System::Data::DataTable^ RecupEmploye(System::String^);

		/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

		System::Data::DataTable^ AfficherClients(void);
		void AjouterUnClient(System::String^ Date_Naissance_Client, System::String^ Date_1er_Achat, System::String^ Nom_Client, System::String^ Prenom_Client);
		void ModifierUnClient(System::String^ ID_Client, System::String^ Date_Naissance_Client, System::String^ Date_1er_Achat, System::String^ Nom_Client, System::String^ Prenom_Client);
		void SupprimerUnClient(System::String^ ID_Client);

		/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

		System::Data::DataTable^ AfficherCommandes(void);
		void AjouterUneCommande(System::String^ Reference_Commande, System::String^ Date_Livraison, System::String^ Date_Emission, System::String^ Date_Facturation, System::String^ Montant_Total_HT, System::String^ ID_Client, System::String^ ID_Adresse_Livraison, System::String^ ID_Adresse_Facturation);
		void ModifierUneCommande(System::String^ Reference_Commande, System::String^ Date_Livraison, System::String^ Date_Emission, System::String^ Date_Facturation, System::String^ Montant_Total_HT, System::String^ ID_Client, System::String^ ID_Adresse_Livraison, System::String^ ID_Adresse_Facturation);
		void SupprimerUneCommande(System::String^ Reference_Commande);
		System::String^ RecupRefCommande(System::String^ ID_Client, System::String^ ID_Adresse);

		/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

		System::Data::DataTable^ AfficherArticles(void);
		void AjouterUnArticle(System::String^ Nom_Article, System::String^ Taux_TVA_Article, System::String^ Prix_Article_HT, int ID_Couleur, int ID_Stock);
		void ModifierUnArticle(int Reference_Article, System::String^ Nom_Article, System::String^ Taux_TVA_Article, System::String^ Prix_Article_HT, int ID_Couleur, int ID_Stock);
		void SupprimerUnArticle(int Reference_Article);

		/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

		System::Data::DataTable^ AfficherArticlesDeCommande(void);
		void AjouterUnArticleDeCommande(System::String^ ID_Commande, System::String^ Reference_Article, System::String^ Prix_Unitaire_Remise, System::String^ Quantite_Commande_Article, System::String^ Taux_TVA);
		void ModifierUnArticleDeCommande(System::String^ ID_Commande, System::String^ Reference_Article, System::String^ Prix_Unitaire_Remise, System::String^ Quantite_Commande_Article, System::String^ Taux_TVA);
		void SupprimerUnArticleDeCommande(System::String^ ID_Commande, System::String^ Reference_Article);

		/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

		System::Data::DataTable^ AfficherPayements(void);
		void AjouterUnPayement(System::String^ Date_Payement, System::String^ Moyen_Payement, System::String^ Montant_Payement, System::String^ ID_Commande);
		void ModifierUnPayement(System::String^ ID_Payement, System::String^ Date_Payement, System::String^ Moyen_Payement, System::String^ Montant_Payement, System::String^ ID_Commande);
		void SupprimerUnPayement(System::String^ ID_Payement);

		/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

		System::Data::DataTable^ AfficherCouleurs(void);
		void AjouterUneCouleur(System::String^ Nom_Couleur);
		void ModifierUneCouleur(int ID_Couleur, System::String^ Nom_Couleur);
		void SupprimerUneCouleur(int ID_Couleur);

		/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

		System::Data::DataTable^ AfficherStocks(void);
		System::Data::DataTable^ AjouterUnStock(int Quantite_Stock, int Seuil_Reapprovisionnement);
		void ModifierUnStock(int ID_Stock, int Quantite_Stock, int Seuil_Reapprovisionnement);
		void SupprimerUnStock(int ID_Stock);

		/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

		System::Data::DataTable^ AfficherAdresses(void);
		void AjouterUneAdresse(System::String^ Numero_Adresse, System::String^ Nom_Rue_Adresse, System::String^ ID_Ville);
		void ModifierUneAdresse(System::String^ ID_Adresse, System::String^ Numero_Adresse, System::String^ Nom_Rue_Adresse, System::String^ ID_Ville);
		void SupprimerUneAdresse(System::String^ ID_Adresse);
		System::String^ RecupID_VilleFromNom_Ville(System::String^ Nom_Ville);
		System::Data::DataTable^ AfficherVilleTopX(System::String^);

		/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

		System::Data::DataTable^ RecupTousLesArticles(System::String^ Reference_Commande);
		System::Data::DataTable^ RecupToutCommande(System::String^ Reference_Commande);

	};
}
