#pragma once
#include "CLmappage.h"

namespace NS_Comp_Stock {
	ref class CLMappStock : public NS_Comp_Mappage::CLmappage
	{
	private :
		int Reference_Article;
		System::String^ Nom_Article;
		int Quantite_Stock;
		int Seuil_Reapprovisionnement;
		System::String^ Taux_TVA_Article;
		System::String^ Prix_Article_HT;
		int ID_Couleur;
		System::String^ Nom_Couleur;
		int ID_Stock;
	public :
		void setReference_Article(int Reference_Article);
		void setNom_Article(System::String^ Nom_Article);
		void setQuantite_Stock(int Quantite_Stock);
		void setSeuil_Reapprovisionnement(int Seuil_Reapprovisionnement);
		void setTaux_TVA_Article(System::String^ Taux_TVA_Article);
		void setPrix_Article_HT(System::String^ Prix_Article_HT);
		void setID_Couleur(int ID_Couleur);
		void setNom_Couleur(System::String^ Nom_Couleur);
		void setID_Stock(int ID_Stock);
		int getReference_Article(void);
		System::String^ getNom_Article(void);
		int getQuantite_Stock(void);
		int getSeuil_Reapprovisionnement(void);
		System::String^ getTaux_TVA_Article(void);
		System::String^ getPrix_Article_HT(void);
		int getID_Couleur(void);
		System::String^ getNom_Couleur(void);
		int getID_Stock(void);
		System::String^ Select(void) override;
		System::String^ Insert(void) override;
		System::String^ Update(void) override;
		System::String^ Delete(void) override;
		System::String^ SelectArticle(void);
		System::String^ InsertArticle(void);
		System::String^ UpdateArticle(void);
		System::String^ DeleteArticle(void);
		System::String^ SelectCouleur(void);
		System::String^ InsertCouleur(void);
		System::String^ UpdateCouleur(void);
		System::String^ DeleteCouleur(void);
	};
}
