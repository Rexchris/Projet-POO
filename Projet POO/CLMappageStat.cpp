#include "CLMappageStat.h"

void NS_Comp_Stat::CLMappageStat::setCommande(System::String^ Commande) 
{
	this->Commande = Commande;
}

System::String^ NS_Comp_Stat::CLMappageStat::getCommande(void) 
{
	return this->Commande;
}

System::String^ NS_Comp_Stat::CLMappageStat::Select(void) 
{
	return "";
}

System::String^ NS_Comp_Stat::CLMappageStat::Insert(void)
{
	return "";
}

System::String^ NS_Comp_Stat::CLMappageStat::Update(void)
{
	return "";
}

System::String^ NS_Comp_Stat::CLMappageStat::Delete(void)
{
	return "";
}
