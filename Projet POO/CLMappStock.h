#pragma once
#include "CLmappage.h"

namespace NS_Comp_Stock {
	ref class CLMappStock : public NS_Comp_Mappage::CLmappage {
	private :
		System::String^ Reference_Article;
		System::String^ Nom_Article;
		System::String^ Quantite_Stock;
		System::String^ Seuil_Reapprovisionnement;
		System::String^ Taux_TVA_Article;
		System::String^ Prix_Article_HT;
		System::String^ ID_Couleur;
		System::String^ Nom_Couleur;
		System::String^ ID_Stock;
	public :
		void setReference_Article(System::String^ Reference_Article);
		void setNom_Article(System::String^ Nom_Article);
		void setQuantite_Stock(System::String^ Quantite_Stock);
		void setSeuil_Reapprovisionnement(System::String^ Seuil_Reapprovisionnement);
		void setTaux_TVA_Article(System::String^ Taux_TVA_Article);
		void setPrix_Article_HT(System::String^ Prix_Article_HT);
		void setID_Couleur(System::String^ ID_Couleur);
		void setNom_Couleur(System::String^ Nom_Couleur);
		void setID_Stock(System::String^ ID_Stock);
		System::String^ getReference_Article(void);
		System::String^ getNom_Article(void);
		System::String^ getQuantite_Stock(void);
		System::String^ getSeuil_Reapprovisionnement(void);
		System::String^ getTaux_TVA_Article(void);
		System::String^ getPrix_Article_HT(void);
		System::String^ getID_Couleur(void);
		System::String^ getNom_Couleur(void);
		System::String^ getID_Stock(void);

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
