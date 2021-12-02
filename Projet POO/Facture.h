#pragma once

#include <iostream>
#include <fstream>   // std::ofstream
//#include <windows.h>
#include <Lmcons.h>

using namespace System;

ref class Facture {
private:
    //------------------------ Attribute -------------------------
    String^ billRef;
    String^ billingDate;
    String^ name;
    String^ idClient;
    String^ deliveryAdress;
    String^ billingAdress;

    Data::DataTable^ Article1;
    Data::DataTable^ Commande;

    String^ totalHT;
    String^ totalTVA;
    String^ totalTTC;

    String^ filename;
    
    

public:
    //----------------------- Constructor ------------------------
    Facture(Data::DataTable^, Data::DataTable^);

    //-------------------------- Setter --------------------------
    void setBillRef(String^);
    void setBillingDate(String^);
    void setName(String^);
    void setIdClient(String^);    
    void setDeliveryAdress(String^);
    void setBillingAdress(String^);



    void setTotalHT(String^);
    void setTotalTVA(String^);
    void setTotalTTC(String^);

    //------------------------- Function -------------------------
    String^ createBill();
};