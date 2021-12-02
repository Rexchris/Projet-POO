#pragma once

namespace NS_Comp_Facture {
	ref class CLMappageFacture
	{
	public:
		System::String^ SelectInfoArticle(System::String^ Reference_Commande);
		System::String^ SelectInfoCommande(System::String^ Reference_Commande);
	};
}
