#include "CLMappageStat.h"


System::String^ NS_Comp_Stat::CLMappageStat::SelectPanierMoyen(void)
{
	return "SELECT avg(Montant_Total_HT) AS 'Panier moyen HT' FROM Commande;";
}

System::String^ NS_Comp_Stat::CLMappageStat::SelectChiffreAffaire(void)
{
	return "SELECT SUM(Montant_Total_HT) AS 'Chiffre d''affaire d''un mot spécifique' FROM Commande WHERE YEAR(Date_Facturation) = 2020 AND MONTH(Date_Facturation) = 6;";
}

System::String^ NS_Comp_Stat::CLMappageStat::SelectSousSeuil(void)
{
	return "SELECT Reference_Article, Stock.ID_Stock, Nom_Article, Quantite_Stock, Seuil_Approvisionnement FROM Article JOIN Stock ON Article.ID_Stock = Stock.ID_Stock WHERE Quantite_Stock < Seuil_Approvisionnement";
}

System::String^ NS_Comp_Stat::CLMappageStat::SelectMontantAchatClient(void)
{
	return "SELECT Client.ID_Client, Nom_Client, Prenom_Client, SUM(Montant_Total_HT) AS 'Montant total des achats HT' FROM Commande JOIN Client ON Commande.ID_Client = Client.ID_Client GROUP BY Client.ID_Client, Nom_Client, Prenom_Client";
}

System::String^ NS_Comp_Stat::CLMappageStat::Select10PlusVendus(void)
{
	return "SELECT TOP(10) Article.Reference_Article, Nom_Article, SUM(Quantite_Commande_Article) FROM Contenir JOIN Article ON Contenir.Reference_Article = Article.Reference_Article GROUP BY Article.Reference_Article, Nom_Article ORDER BY SUM(Quantite_Commande_Article) DESC";
}

System::String^ NS_Comp_Stat::CLMappageStat::Select10MoinsVendus(void)
{
	return "SELECT TOP(10) Article.Reference_Article, Nom_Article, SUM(Quantite_Commande_Article) FROM Contenir JOIN Article ON Contenir.Reference_Article = Article.Reference_Article GROUP BY Article.Reference_Article, Nom_Article ORDER BY SUM(Quantite_Commande_Article) ASC";
}

System::String^ NS_Comp_Stat::CLMappageStat::SelectValeurCommercialeStock(void)
{
	return "SELECT SUM(Prix_Article_HT * Quantite_Stock) * (1.2) AS 'Valeur commerciale du stock' FROM Article JOIN Stock ON Article.ID_Stock = Stock.ID_Stock";
}

System::String^ NS_Comp_Stat::CLMappageStat::SelectValeurAchatStock(void)
{
	return "SELECT SUM(Prix_Article_HT * Quantite_Stock) AS 'Valeur d''achat du stock' FROM Article JOIN Stock ON Article.ID_Stock = Stock.ID_Stock";
}