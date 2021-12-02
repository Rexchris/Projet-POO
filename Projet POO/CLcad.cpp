#include "CLcad.h"


NS_Comp_Data::CLcad::CLcad(void)
{
	this->sCnx = "Data Source=AXOK-PC2\\MSSQL_LOUIS;Initial Catalog=ProjetPOO;Persist Security Info=True;User ID=CNX_P6;Password=password123";

	this->sSql = "Rien";

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->oDs = gcnew System::Data::DataTable();

	this->oCmd->CommandType = System::Data::CommandType::Text;
}
System::Data::DataTable^ NS_Comp_Data::CLcad::getRows(System::String^ sSql)
{
	this->oDs->Clear();
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oDA->Fill(this->oDs);

	return this->oDs;
}
void NS_Comp_Data::CLcad::actionRows(System::String^ sSql)
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	this->oCmd->ExecuteNonQuery();
	this->oCnx->Close();
}