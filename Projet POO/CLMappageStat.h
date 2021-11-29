#pragma once
#include "CLmappage.h"

namespace NS_Comp_Stat {
	ref class CLMappageStat : public NS_Comp_Mappage::CLmappage
	{
	private :
		System::String^ Commande;
	public :
		void setCommande(System::String^ Commande);
		System::String^ getCommande(void);
		System::String^ Select(void) override;
		System::String^ Insert(void) override;
		System::String^ Update(void) override;
		System::String^ Delete(void) override;
	};
}
