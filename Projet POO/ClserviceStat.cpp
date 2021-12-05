#include "ClserviceStat.h"

NS_Comp_Service_Stat::ClserviceStat::ClserviceStat(void) 
{
	this->oMapp = gcnew NS_Comp_Data::CLcad();
	this->oMappStat = gcnew NS_Comp_Stat::CLMappageStat();
}

System::Data::DataTable^ NS_Comp_Service_Stat::ClserviceStat::AfficherPanierMoyen(void)
{
	System::String^ sql;

	sql = this->oMappStat->SelectPanierMoyen();
	return this->oMapp->getRows(sql);
}

System::Data::DataTable^ NS_Comp_Service_Stat::ClserviceStat::AfficherChiffreAffaire(System::String^ month, System::String^ year)
{
	System::String^ sql;

	sql = this->oMappStat->SelectChiffreAffaire(month, year);
	return this->oMapp->getRows(sql);
}

System::Data::DataTable^ NS_Comp_Service_Stat::ClserviceStat::AfficherSousSeuil(void)
{
	System::String^ sql;

	sql = this->oMappStat->SelectSousSeuil();
	return this->oMapp->getRows(sql);
}

System::Data::DataTable^ NS_Comp_Service_Stat::ClserviceStat::AfficherMontantAchatClient(void)
{
	System::String^ sql;

	sql = this->oMappStat->SelectMontantAchatClient();
	return this->oMapp->getRows(sql);
}

System::Data::DataTable^ NS_Comp_Service_Stat::ClserviceStat::Afficher10PlusVendus(void)
{
	System::String^ sql;

	sql = this->oMappStat->Select10PlusVendus();
	return this->oMapp->getRows(sql);
}

System::Data::DataTable^ NS_Comp_Service_Stat::ClserviceStat::Afficher10MoinsVendus(void)
{
	System::String^ sql;

	sql = this->oMappStat->Select10MoinsVendus();
	return this->oMapp->getRows(sql);
}

System::Data::DataTable^ NS_Comp_Service_Stat::ClserviceStat::AfficherValeurCommercialeStock(void)
{
	System::String^ sql;

	sql = this->oMappStat->SelectValeurCommercialeStock();
	return this->oMapp->getRows(sql);
}

System::Data::DataTable^ NS_Comp_Service_Stat::ClserviceStat::AfficherValeurAchatStock(void)
{
	System::String^ sql;

	sql = this->oMappStat->SelectValeurAchatStock();
	return this->oMapp->getRows(sql);
}

System::Data::DataTable^ NS_Comp_Service_Stat::ClserviceStat::AfficherSimulation(System::String^ TVA, System::String^ marge, System::String^ remise, System::String^ demarque)
{
	System::String^ sql;

	sql = this->oMappStat->SelectSimulation(TVA, marge, remise, demarque);
	return this->oMapp->getRows(sql);
}

System::Data::DataTable^ NS_Comp_Service_Stat::ClserviceStat::AfficherToutMoisCommande(System::String^ annee)
{
	System::String^ sql;

	sql = this->oMappStat->SelectAllMonthCommande(annee);
	return this->oMapp->getRows(sql);
}

System::Data::DataTable^ NS_Comp_Service_Stat::ClserviceStat::AfficherToutAnneeCommande(System::String^ mois)
{
	System::String^ sql;

	sql = this->oMappStat->SelectAllYearCommande(mois);
	return this->oMapp->getRows(sql);
}
