#pragma once

#include <iostream>
#include <fstream>   // std::ofstream
//#include <windows.h>
#include <Lmcons.h>

using namespace System;

ref class Facture {
private:
	//------------------------ Attribute -------------------------
	String^ name;
	String^ idClient;
	String^ deliveryAdress;
	String^ billingAdress;
	String^ filename;
	String^ billRef;
	String^ billingDate;

public:
	//----------------------- Constructor ------------------------
	Facture(String^, String^, String^, String^, String^, String^);

	//-------------------------- Getter --------------------------
	String^ getName();
	String^ getIdClient();
	String^ getDeliveryAdress();
	String^ getBillingAdress();
	String^ getBillRef();
	String^ getBillingDate();
	
	//-------------------------- Setter --------------------------
	void setName(String^);
	void setIdClient(String^);
	void setDeliveryAdress(String^);
	void setBillingAdress(String^);
	void setBillRef(String^);
	void setBillingDate(String^);
	
	//------------------------- Function -------------------------
	String^ createBill();
};
