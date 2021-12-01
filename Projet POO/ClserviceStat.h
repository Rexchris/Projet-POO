#pragma once
#include "CLcad.h"
#include "CLMappageStat.h"

namespace NS_Comp_Service_Stat {
	ref class ClserviceStat
	{
	private:
		NS_Comp_Data::CLcad^ oMapp;
		NS_Comp_Stat::CLMappageStat^ oMappStat;
	public:
		ClserviceStat(void);
		System::Data::DataTable^ AfficherPanierMoyen(void);
		System::Data::DataTable^ AfficherChiffreAffaire(void);
		System::Data::DataTable^ AfficherSousSeuil(void);
		System::Data::DataTable^ AfficherMontantAchatClient(void);
		System::Data::DataTable^ Afficher10PlusVendus(void);
		System::Data::DataTable^ Afficher10MoinsVendus(void);
		System::Data::DataTable^ AfficherValeurCommercialeStock(void);
		System::Data::DataTable^ AfficherValeurAchatStock(void);
	};
}
