#pragma once

namespace NS_Comp_Stat {
	ref class CLMappageStat
	{
	public :
		System::String^ SelectPanierMoyen(void);
		System::String^ SelectChiffreAffaire(System::String^ month, System::String^ year);
		System::String^ SelectSousSeuil(void);
		System::String^ SelectMontantAchatClient(void);
		System::String^ Select10PlusVendus(void);
		System::String^ Select10MoinsVendus(void);
		System::String^ SelectValeurCommercialeStock(void);
		System::String^ SelectValeurAchatStock(void);
		System::String^ SelectSimulation(System::String^ TVA, System::String^ marge, System::String^ remise, System::String^ demarque);

		System::String^ SelectAllMonthCommande(System::String^ year);
		System::String^ SelectAllYearCommande(System::String^ month);
	};
}
