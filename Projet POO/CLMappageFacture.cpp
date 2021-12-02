#include "CLMappageFacture.h"


System::String^ NS_Comp_Facture::CLMappageFacture::SelectInfoArticle(System::String^ Reference_Commande)
{
	return "SELECT Commande.Reference_Commande, CONVERT(varchar(4), DAY(GETDATE())) + '/' + CONVERT(varchar(4), MONTH(GETDATE())) + '/' + CONVERT(varchar(4), YEAR(GETDATE())) as 'Date du jour', Client.ID_Client,	 Client.Nom_Client + ' ' + Client.Prenom_Client as 'Nom', CONVERT(varchar(20), Adresse.Numero_Adresse) + ' ' + Adresse.Nom_Rue_Adresse + ' ' + Ville.Nom_Ville + ' ' + CONVERT(varchar(20), Ville.Code_Postal_Ville), Article.Nom_Article,	Contenir.Quantite_Commande_Article,	Contenir.Prix_Unitaire_Remise, Contenir.Taux_TVA, Contenir.Quantite_Commande_Article* Contenir.Prix_Unitaire_Remise* Contenir.Taux_TVA / 100 as 'Total TVA', Contenir.Quantite_Commande_Article* Contenir.Prix_Unitaire_Remise* ((Contenir.Taux_TVA / 100) + 1) as 'Total TTC' FROM Commande INNER JOIN Contenir ON Commande.ID_Commande = Contenir.ID_Commande	INNER JOIN Adresse ON Adresse.ID_Adresse = Commande.ID_Adresse_Livraison INNER JOIN Client ON Client.ID_Client = Commande.ID_Client	INNER JOIN Ville ON Ville.ID_Ville = Adresse.ID_Ville INNER JOIN Article ON Article.Reference_Article = Contenir.Reference_Article WHERE Commande.Reference_Commande = '"+ Reference_Commande + "'; ";
}

System::String^ NS_Comp_Facture::CLMappageFacture::SelectInfoCommande(System::String^ Reference_Commande)
{
	return "SELECT Commande.Reference_Commande, SUM(Contenir.Quantite_Commande_Article * Contenir.Prix_Unitaire_Remise) as 'Total HT', SUM(Contenir.Quantite_Commande_Article * Contenir.Prix_Unitaire_Remise * Contenir.Taux_TVA / 100) as 'Total TVA', SUM(Contenir.Quantite_Commande_Article * Contenir.Prix_Unitaire_Remise * ((Contenir.Taux_TVA / 100) + 1)) as 'Total TTC' FROM Commande INNER JOIN Contenir ON Commande.ID_Commande = Contenir.ID_Commande INNER JOIN Article ON Article.Reference_Article = Contenir.Reference_Article WHERE Commande.Reference_Commande = '" + Reference_Commande + "' GROUP BY Reference_Commande;";
}
