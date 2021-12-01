#pragma once

namespace NS_Comp_Stat {
	ref class CLMappageStat
	{
	public :
		System::String^ SelectPanierMoyen(void);
		System::String^ SelectChiffreAffaire(void);
		System::String^ SelectSousSeuil(void);
		System::String^ SelectMontantAchatClient(void);
		System::String^ Select10PlusVendus(void);
		System::String^ Select10MoinsVendus(void);
		System::String^ SelectValeurCommercialeStock(void);
		System::String^ SelectValeurAchatStock(void);
	};
}
