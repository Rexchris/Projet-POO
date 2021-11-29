#pragma once

namespace NS_Comp_Data
{
	ref class CLcad
	{
	private:
		System::String^ sSql;
		System::String^ sCnx;
		System::Data::SqlClient::SqlConnection^ oCnx;
		System::Data::SqlClient::SqlCommand^ oCmd;
		System::Data::SqlClient::SqlDataAdapter^ oDA;
		System::Data::DataTable^ oDs;
	public:
		CLcad(void);
		System::Data::DataTable^ getRows(System::String^ sSql);
		void actionRows(System::String^);
	};
}