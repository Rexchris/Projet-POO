#include "Clservice.h"
#include "Facture.h"

NS_Comp_Service::Clservice::Clservice(void) {
	this->oMapp = gcnew NS_Comp_Data::CLcad();
	this->oMappEmp = gcnew NS_Comp_Employe::CLMappEmploye();
	this->oMappClient = gcnew NS_Comp_Client::CLMappClient();
	this->oMappCommande = gcnew NS_Comp_Commande::CLMappCommande();
	this->oMappStock = gcnew NS_Comp_Stock::CLMappStock();
	this->oMappAdr = gcnew NS_Comp_Adresse::CLMappAdresse();
	this->oMappFacture = gcnew NS_Comp_Facture::CLMappageFacture();
}

System::Data::DataTable^ NS_Comp_Service::Clservice::AfficherEmployes(void) {
	 System::String^ sql = this->oMappEmp->Select();
	return this->oMapp->getRows(sql);
}

System::String^ NS_Comp_Service::Clservice::AjouterUnEmploye(System::String^ NomEmploye, System::String^ PrenomEmploye, System::String^ Date_Embauche, System::String^ Superieur_Hierarchique, System::String^ ID_Adresse, System::String^ ID_Employe_Superieur_Hierarchique) {
	this->oMappEmp->setNom_Employe(NomEmploye);
	this->oMappEmp->setPrenom_Employe(PrenomEmploye);
	this->oMappEmp->setDate_Embauche(Date_Embauche);
	this->oMappEmp->setSuperieur_Hierarchique(Superieur_Hierarchique);
	this->oMappEmp->setID_Adresse(ID_Adresse);
	this->oMappEmp->setID_Employe_Superieur_Hierarchique(ID_Employe_Superieur_Hierarchique);
	System::String^ sql = this->oMappEmp->Insert();

	System::Data::DataTable^ id_emp = this->oMapp->getRows(sql);
	return Convert::ToString((id_emp->Rows[0])[0]);
}

void NS_Comp_Service::Clservice::ModifierUnEmploye(System::String^ ID_Employe, System::String^ NomEmploye, System::String^ PrenomEmploye, System::String^ Date_Embauche, System::String^ Superieur_Hierarchique, System::String^ ID_Adresse, System::String^ ID_Employe_Superieur_Hierarchique){
	this->oMappEmp->setID_Employe(ID_Employe);
	this->oMappEmp->setNom_Employe(NomEmploye);
	this->oMappEmp->setPrenom_Employe(PrenomEmploye);
	this->oMappEmp->setDate_Embauche(Date_Embauche);
	this->oMappEmp->setSuperieur_Hierarchique(Superieur_Hierarchique);
	this->oMappEmp->setID_Adresse(ID_Adresse);
	this->oMappEmp->setID_Employe_Superieur_Hierarchique(ID_Employe_Superieur_Hierarchique);
	System::String^ sql = this->oMappEmp->Update();
	this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::SupprimerUnEmploye(System::String^ ID_Employe) {
	this->oMappEmp->setID_Employe(ID_Employe);
	System::String^ sql = this->oMappEmp->Delete();
	this->oMapp->actionRows(sql);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::RecupEmploye(System::String^ ID_Employe) {
	 System::String^ sql = this->oMappEmp->getEmployeFromID(ID_Employe);
	return this->oMapp->getRows(sql);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::AfficherClients(void) {
	System::String^ sql = this->oMappClient->Select();
	return this->oMapp->getRows(sql);
}

void NS_Comp_Service::Clservice::AjouterUnClient(System::String^ Date_Naissance_Client, System::String^ Date_1er_Achat, System::String^ Nom_Client, System::String^ Prenom_Client) {
	this->oMappClient->setDate_Naissance_Client(Date_Naissance_Client);
	this->oMappClient->setDate_1er_Achat(Date_1er_Achat);
	this->oMappClient->setNom_Client(Nom_Client);
	this->oMappClient->setPrenom_Client(Prenom_Client);
	System::String^ sql = this->oMappClient->Insert();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::ModifierUnClient(System::String^ ID_Client, System::String^ Date_Naissance_Client, System::String^ Date_1er_Achat, System::String^ Nom_Client, System::String^ Prenom_Client) {
	this->oMappClient->setID_Client(ID_Client);
	this->oMappClient->setDate_Naissance_Client(Date_Naissance_Client);
	this->oMappClient->setDate_1er_Achat(Date_1er_Achat);
	this->oMappClient->setNom_Client(Nom_Client);
	this->oMappClient->setPrenom_Client(Prenom_Client);
	System::String^ sql = this->oMappClient->Update();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::SupprimerUnClient(System::String^ ID_Client) {
	this->oMappClient->setID_Client(ID_Client);
	System::String^ sql = this->oMappClient->Delete();
	return this->oMapp->actionRows(sql);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::AfficherCommandes(void) {
	System::String^ sql = this->oMappCommande->Select();
	return this->oMapp->getRows(sql);
}

void NS_Comp_Service::Clservice::AjouterUneCommande(System::String^ Reference_Commande, System::String^ Date_Livraison, System::String^ Date_Emission, System::String^ Date_Facturation, System::String^ Montant_Total_HT, System::String^ ID_Client, System::String^ ID_Adresse_Livraison, System::String^ ID_Adresse_Facturation) {
	this->oMappCommande->setReference_Commande(Reference_Commande);
	this->oMappCommande->setDate_Livraison(Date_Livraison);
	this->oMappCommande->setDate_Emission(Date_Emission);
	this->oMappCommande->setDate_Facturation(Date_Facturation);
	this->oMappCommande->setMontant_Total_HT(Montant_Total_HT);
	this->oMappCommande->setID_Client(ID_Client);
	this->oMappCommande->setID_Adresse_Livraison(ID_Adresse_Livraison);
	this->oMappCommande->setID_Adresse_Facturation(ID_Adresse_Facturation);
	System::String^ sql = this->oMappCommande->Insert();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::ModifierUneCommande(System::String^ Reference_Commande, System::String^ Date_Livraison, System::String^ Date_Emission, System::String^ Date_Facturation, System::String^ Montant_Total_HT, System::String^ ID_Client, System::String^ ID_Adresse_Livraison, System::String^ ID_Adresse_Facturation) {
	this->oMappCommande->setReference_Commande(Reference_Commande);
	this->oMappCommande->setDate_Livraison(Date_Livraison);
	this->oMappCommande->setDate_Emission(Date_Emission);
	this->oMappCommande->setDate_Facturation(Date_Facturation);
	this->oMappCommande->setMontant_Total_HT(Montant_Total_HT);
	this->oMappCommande->setID_Client(ID_Client);
	this->oMappCommande->setID_Adresse_Livraison(ID_Adresse_Livraison);
	this->oMappCommande->setID_Adresse_Facturation(ID_Adresse_Facturation);
	System::String^ sql = this->oMappCommande->Update();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::SupprimerUneCommande(System::String^ Reference_Commande) {
	this->oMappCommande->setReference_Commande(Reference_Commande);
	System::String^ sql = this->oMappCommande->Delete();
	return this->oMapp->actionRows(sql);
}

System::String^ NS_Comp_Service::Clservice::RecupRefCommande(System::String^ ID_Client, System::String^ ID_Adresse_Facturation) {
	this->oMappCommande->setID_Client(ID_Client);
	this->oMappCommande->setID_Adresse_Livraison(ID_Adresse_Facturation);

	System::String^ sql = this->oMappCommande->generatureRefCommande();
	System::Data::DataTable^ ref_com = this->oMapp->getRows(sql);
	return System::Convert::ToString((ref_com->Rows[0])[0]);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::AfficherArticles(void) {
	System::String^ sql = this->oMappStock->SelectArticle();
	return this->oMapp->getRows(sql);
}

void  NS_Comp_Service::Clservice::AjouterUnArticle(System::String^ Nom_Article, System::String^ Taux_TVA_Article, System::String^ Prix_Article_HT, System::String^ ID_Couleur, System::String^ ID_Stock) {
	this->oMappStock->setNom_Article(Nom_Article);
	this->oMappStock->setTaux_TVA_Article(Taux_TVA_Article);
	this->oMappStock->setPrix_Article_HT(Prix_Article_HT);
	this->oMappStock->setID_Couleur(ID_Couleur);
	this->oMappStock->setID_Stock(ID_Stock);
	System::String^ sql = this->oMappStock->InsertArticle();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::ModifierUnArticle(System::String^ Reference_Article, System::String^ Nom_Article, System::String^ Taux_TVA_Article, System::String^ Prix_Article_HT, System::String^ ID_Couleur, System::String^ ID_Stock) {
	this->oMappStock->setReference_Article(Reference_Article);
	this->oMappStock->setNom_Article(Nom_Article);
	this->oMappStock->setTaux_TVA_Article(Taux_TVA_Article);
	this->oMappStock->setPrix_Article_HT(Prix_Article_HT);
	this->oMappStock->setID_Couleur(ID_Couleur);
	this->oMappStock->setID_Stock(ID_Stock);
	System::String^ sql = this->oMappStock->UpdateArticle();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::SupprimerUnArticle(System::String^ Reference_Article) {
	this->oMappStock->setReference_Article(Reference_Article);
	System::String^ sql = this->oMappStock->DeleteArticle();
	return this->oMapp->actionRows(sql);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::AfficherArticlesDeCommande(void) {
	System::String^ sql = this->oMappCommande->SelectArticleDeCommande();
	return this->oMapp->getRows(sql);
}

void NS_Comp_Service::Clservice::AjouterUnArticleDeCommande(System::String^ ID_Commande, System::String^ Reference_Article, System::String^ Prix_Unitaire_Remise, System::String^ Quantite_Commande_Article, System::String^ Taux_TVA) {
		this->oMappCommande->setID_Commande(ID_Commande);
	this->oMappCommande->setReference_Article(Reference_Article);
	this->oMappCommande->setPrix_Unitaire_Remise(Prix_Unitaire_Remise);
	this->oMappCommande->setQuantite_Commande_Article(Quantite_Commande_Article);
	this->oMappCommande->setTaux_TVA(Taux_TVA);
	System::String^ sql = this->oMappCommande->InsertArticleDeCommande();
	return this->oMapp->actionRows(sql);
}

void  NS_Comp_Service::Clservice::ModifierUnArticleDeCommande(System::String^ ID_Commande, System::String^ Reference_Article, System::String^ Prix_Unitaire_Remise, System::String^ Quantite_Commande_Article, System::String^ Taux_TVA) {
	this->oMappCommande->setID_Commande(ID_Commande);
	this->oMappCommande->setReference_Article(Reference_Article);
	this->oMappCommande->setPrix_Unitaire_Remise(Prix_Unitaire_Remise);
	this->oMappCommande->setQuantite_Commande_Article(Quantite_Commande_Article);
	this->oMappCommande->setTaux_TVA(Taux_TVA);
	System::String^ sql = this->oMappCommande->UpdateArticleDeCommande();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::SupprimerUnArticleDeCommande(System::String^ ID_Commande, System::String^ Reference_Article) {
	this->oMappCommande->setID_Commande(ID_Commande);
	this->oMappCommande->setReference_Article(Reference_Article);
	System::String^ sql = this->oMappCommande->DeleteArticleDeCommande();
	return this->oMapp->actionRows(sql);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::AfficherPayements(void) {
	System::String^ sql = this->oMappCommande->SelectPayement();
	return this->oMapp->getRows(sql);
}

void NS_Comp_Service::Clservice::AjouterUnPayement(System::String^ Date_Payement, System::String^ Moyen_Payement, System::String^ Montant_Payement, System::String^ ID_Commande) {
	this->oMappCommande->setDate_Payement(Date_Payement);
	this->oMappCommande->setMoyen_Payement(Moyen_Payement);
	this->oMappCommande->setMontant_Payement(Montant_Payement);
	this->oMappCommande->setID_Commande(ID_Commande);
	System::String^ sql = this->oMappCommande->InsertPayement();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::ModifierUnPayement(System::String^ ID_Payement, System::String^ Date_Payement, System::String^ Moyen_Payement, System::String^ Montant_Payement, System::String^ ID_Commande) {
	this->oMappCommande->setID_Payement(ID_Payement);
	this->oMappCommande->setDate_Payement(Date_Payement);
	this->oMappCommande->setMoyen_Payement(Moyen_Payement);
	this->oMappCommande->setMontant_Payement(Montant_Payement);
	this->oMappCommande->setID_Commande(ID_Commande);
	System::String^ sql = this->oMappCommande->UpdatePayement();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::SupprimerUnPayement(System::String^ ID_Payement) {
	this->oMappCommande->setID_Payement(ID_Payement);
	System::String^ sql = this->oMappCommande->DeletePayement();
	return this->oMapp->actionRows(sql);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::AfficherCouleurs(void) {
	System::String^ sql = this->oMappStock->SelectCouleur();
	return this->oMapp->getRows(sql);
}

void NS_Comp_Service::Clservice::AjouterUneCouleur(System::String^ Nom_Couleur) {
	this->oMappStock->setNom_Couleur(Nom_Couleur);
	System::String^ sql = this->oMappStock->InsertCouleur();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::ModifierUneCouleur(System::String^ ID_Couleur, System::String^ Nom_Couleur) {
	this->oMappStock->setID_Couleur(ID_Couleur);
	this->oMappStock->setNom_Couleur(Nom_Couleur);
	System::String^ sql = this->oMappStock->UpdateCouleur();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::SupprimerUneCouleur(System::String^ ID_Couleur) {
	this->oMappStock->setID_Couleur(ID_Couleur);
	System::String^ sql = this->oMappStock->DeleteCouleur();
	return this->oMapp->actionRows(sql);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::AfficherStocks(void) {
    System::String^ sql = this->oMappStock->Select();
	return this->oMapp->getRows(sql);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::AjouterUnStock(System::String^ Quantite_Stock, System::String^ Seuil_Reapprovisionnement) {
	this->oMappStock->setQuantite_Stock(Quantite_Stock);
	this->oMappStock->setSeuil_Reapprovisionnement(Seuil_Reapprovisionnement);
	System::String^ sql = this->oMappStock->Insert();
	return this->oMapp->getRows(sql);
}

void NS_Comp_Service::Clservice::ModifierUnStock(System::String^ ID_Stock, System::String^ Quantite_Stock, System::String^ Seuil_Reapprovisionnement) {
	this->oMappStock->setID_Stock(ID_Stock);
	this->oMappStock->setQuantite_Stock(Quantite_Stock);
	this->oMappStock->setSeuil_Reapprovisionnement(Seuil_Reapprovisionnement);
	System::String^ sql = this->oMappStock->Update();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::SupprimerUnStock(System::String^ ID_Stock) {
	this->oMappStock->setID_Stock(ID_Stock);
	System::String^  sql = this->oMappStock->Delete();
	return this->oMapp->actionRows(sql);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::AfficherAdresses(void) {
	System::String^ sql = this->oMappAdr->Select();
	return this->oMapp->getRows(sql);
}

void NS_Comp_Service::Clservice::AjouterUneAdresse(System::String^ Numero_Adresse, System::String^ Nom_Rue_Adresse, System::String^ ID_Ville) {
	this->oMappAdr->setNumero_Adresse(Numero_Adresse);
	this->oMappAdr->setNom_Rue_Adresse(Nom_Rue_Adresse);
	this->oMappAdr->setID_Ville(ID_Ville);
	System::String^ sql = this->oMappAdr->Insert();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::ModifierUneAdresse(System::String^ ID_Adresse, System::String^ Numero_Adresse, System::String^ Nom_Rue_Adresse, System::String^ ID_Ville) {
	this->oMappAdr->setID_Adresse(ID_Adresse);
	this->oMappAdr->setNumero_Adresse(Numero_Adresse);
	this->oMappAdr->setNom_Rue_Adresse(Nom_Rue_Adresse);
	this->oMappAdr->setID_Ville(ID_Ville);
	System::String^ sql = this->oMappAdr->Update();
	return this->oMapp->actionRows(sql);
}

void NS_Comp_Service::Clservice::SupprimerUneAdresse(System::String^ ID_Adresse) {
	this->oMappAdr->setID_Adresse(ID_Adresse);
	System::String^ sql = this->oMappAdr->Delete();
	return this->oMapp->actionRows(sql);
}

System::String^ NS_Comp_Service::Clservice::RecupID_VilleFromNom_Ville(System::String^ Nom_Ville) {
	this->oMappAdr->setNom_Ville(Nom_Ville);
	System::String^ sql = this->oMappAdr->getIDFromNom_Ville();
	System::Data::DataTable^ ref_com = this->oMapp->getRows(sql);
	return System::Convert::ToString((ref_com->Rows[0])[0]);
}


System::Data::DataTable^ NS_Comp_Service::Clservice::AfficherVilleTopX(System::String^ search) {
	System::String^ sql = this->oMappAdr->SelectVilleTopX(search);
	return this->oMapp->getRows(sql);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::RecupTousLesArticles(System::String^ Reference_Commande) {
	System::String^ sql = this->oMappFacture->SelectInfoArticle(Reference_Commande);
	return this->oMapp->getRows(sql);
}

System::Data::DataTable^ NS_Comp_Service::Clservice::RecupToutCommande(System::String^ Reference_Commande) {
	System::String^ sql = this->oMappFacture->SelectInfoCommande(Reference_Commande);
	return this->oMapp->getRows(sql);
}
