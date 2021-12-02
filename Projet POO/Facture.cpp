#include "Facture.h"

Facture::Facture(Data::DataTable^ Article1, Data::DataTable^ Commande){
	this->Article1 = Article1;
	this->Commande = Commande;

	setBillRef(Convert::ToString((Article1->Rows[0])[0]));
	setBillingDate(Convert::ToString((Article1->Rows[0])[1]));
	setIdClient(Convert::ToString((Article1->Rows[0])[2]));
	setName(Convert::ToString((Article1->Rows[0])[3]));
	setDeliveryAdress(Convert::ToString((Article1->Rows[0])[4]));
	setBillingAdress(Convert::ToString((Article1->Rows[0])[4]));

	setTotalHT(Convert::ToString((Commande->Rows[0])[1]));
	setTotalTVA(Convert::ToString((Commande->Rows[0])[2]));
	setTotalTTC(Convert::ToString((Commande->Rows[0])[3]));

}

void Facture::setBillRef(String^ billRef) {
	this->billRef = billRef;
}

void Facture::setBillingDate(String^ billingDate) {
	this->billingDate = billingDate;
}

void Facture::setIdClient(String^ idClient)
{
	this->idClient = idClient;
}

void Facture::setName(String^ name) {
	this->name = name;
}

void Facture::setDeliveryAdress(String^ deliveryAdress) {
	this->deliveryAdress = deliveryAdress;
}

void Facture::setBillingAdress(String^ billingAdress) {
	this->billingAdress = billingAdress;
}

void Facture::setTotalHT(String^ totalHT) {
	this->totalHT = totalHT;
}

void Facture::setTotalTVA(String^ totalTVA) {
	this->totalTVA = totalTVA;
}

void Facture::setTotalTTC(String^ totalTTC) {
	this->totalTTC = totalTTC;
}

std::string MarshalString1(String^ s) {
	std::string os;
	using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	return os;
}

String^ Facture::createBill() {
	//char username[UNLEN + 1];
	//DWORD username_len = UNLEN + 1;
	//GetUserName(username, &username_len)

	std::string filenameString = MarshalString1("C:\\Users\\Louis\\Documents\\" + this->billRef + " " + this->name + ".txt");

	std::string idClientString = MarshalString1("                              Identifiant client      : " + this->idClient);
	std::string nameString = MarshalString1("                              Titulaire de la facture : " + this->name);
	std::string deliveryAdressString = MarshalString1("                              Adresse de livraison    : " + this->deliveryAdress);
	std::string billingAdressString = MarshalString1("                              Adresse de facturation  : " + this->billingAdress);
	std::string billRefString = MarshalString1(" FACTURE " + this->billRef);
	std::string billingDateString = MarshalString1("                              Date de facturation     : " + this->billingDate);
	std::string totalHTString = MarshalString1("Total HT   = " + this->totalHT);
	std::string totalTVAString = MarshalString1("Total TVA  = " + this->totalTVA);
	std::string totalTTCString = MarshalString1("Total TTC  = " + this->totalTTC);


	std::ofstream myFile(filenameString);
	if (myFile) {
		myFile << "~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		myFile << billRefString << std::endl;
		myFile << "~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

		myFile << std::endl;
		myFile << "BugsBunny Inc.                                                                                (\\_/)" << std::endl;
		myFile << "2 All. des Foulons                                                                            (• •)" << std::endl;
		myFile << "67380 Strasbourg, France                                                                     °( . )°" << std::endl;
		myFile << "Téléphone : 03 88 10 35 60                                                                     U U" << std::endl;
		myFile << std::endl;

		myFile << idClientString << std::endl;
		myFile << nameString << std::endl;
		myFile << deliveryAdressString << std::endl;
		myFile << billingAdressString << std::endl;
		myFile << billingDateString << std::endl;
		myFile << std::endl;
		myFile << std::endl;
		myFile << std::endl;
		myFile << std::endl;
		myFile << std::endl;

		myFile << "|   Description   |   Quantité   |   Prix unitaire HT   |   %TVA   |   Total TVA   |   Total TTC   |" << std::endl;
		myFile << "----------------------------------------------------------------------------------------------------" << std::endl;
		for (int i = 0; i <= (System::Convert::ToInt32(Article1->Rows->Count) - 1); i++) {
			myFile << "| "<< MarshalString1(Convert::ToString((Article1->Rows[i])[5])) << "                 " << MarshalString1(Convert::ToString((Article1->Rows[i])[6])) << "                 " << MarshalString1(Convert::ToString((Article1->Rows[i])[7])) << "               " << MarshalString1(Convert::ToString((Article1->Rows[i])[8])) << "           " << MarshalString1(Convert::ToString((Article1->Rows[i])[9])) << "              " << MarshalString1(Convert::ToString((Article1->Rows[i])[10])) << std::endl;
			myFile << "|  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -" << std::endl;
		}

		myFile << std::endl;
		myFile << totalHTString << std::endl;
		myFile << totalTVAString << std::endl;
		myFile << totalTTCString << std::endl;
		myFile.close();

		std::string str = "notepad " + filenameString;
		char* cstr = new char[str.length() + 1];
		strcpy(cstr, str.c_str());
		system(cstr);
	}
	else {
		return "Erreur d'écriture non trouvé";
	}
}