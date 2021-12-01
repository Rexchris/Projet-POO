#include "Facture.h"

Facture::Facture(String^ name1, String^ idClient1, String^ deliveryAdress1, String^ billingAdress1, String^ billRef1, String^ billingDate1)
{
	setName(name1);
	setIdClient(idClient1);
	setDeliveryAdress(deliveryAdress1);
	setBillingAdress(billingAdress1);
	setBillRef(billRef1);
	setBillingDate(billingDate1);
}

String^ Facture::getName() {
	return this->name;
}

String^ Facture::getIdClient() {
	return this->idClient;
}

String^ Facture::getDeliveryAdress() {
	return this->deliveryAdress;
}

String^ Facture::getBillingAdress() {
	return this->billingAdress;
}

String^ Facture::getBillRef() {
	return this->billRef;
}

String^ Facture::getBillingDate() {
	return this->billingDate;
}

void Facture::setName(String^ name) {
	this->name = name;
}
void Facture::setIdClient(String^ idClient) {
	this->idClient = idClient;
}

void Facture::setDeliveryAdress(String^ deliveryAdress) {
	this->deliveryAdress = deliveryAdress;
}

void Facture::setBillingAdress(String^ billingAdress) {
	this->billingAdress = billingAdress;
}

void Facture::setBillRef(String^ billRef) {
	this->billRef = billRef;
}

void Facture::setBillingDate(String^ billingDate) {
	this->billingDate = billingDate;
}

// Fonction de conversion String managé --> String non managé
void MarshalString(String^ s, std::string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =	(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

String^ Facture::createBill() {
	//char username[UNLEN + 1];
	//DWORD username_len = UNLEN + 1;
	//GetUserName(username, &username_len)

	String^ filename = "C:\\Users\\issel\\Documents\\" + this->idClient + "_" + this->name + ".txt";
	std::string filenameString = "";
	MarshalString(filename, filenameString);	
	String^ idClient = "                              Identifiant client      : " + this->idClient;
	std::string idClientString = "";
	MarshalString(idClient, idClientString);

	String^ name = "                              Titulaire de la facture : " + this->name;
	std::string nameString = "";
	MarshalString(name, nameString);
	
	String^ deliveryAdress = "                              Adresse de livraison    : " + this->deliveryAdress;
	std::string deliveryAdressString = "";
	MarshalString(deliveryAdress, deliveryAdressString);

	String^ billingAdress = "                              Adresse de facturation  : " + this->deliveryAdress;
	std::string billingAdressString = "";
	MarshalString(billingAdress, billingAdressString);

	// ----------------------------------------A remplir --------------------------------------------------------------------------------------------------
	String^ billRef= " FACTURE " + this->billRef;
	std::string billRefString = "";
	MarshalString(billRef, billRefString);

	String^ billingDate = "                              Date de facturation     : " + this->billingDate;
	std::string billingDateString = "";
	MarshalString(billingDate, billingDateString);

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
		//while(){
			myFile << "|" << std::endl;
			myFile << "-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -" << std::endl;
		//}

		myFile << std::endl;
		myFile << "Total HT = " << std::endl;
		myFile << "Total TVA = " << std::endl;
		myFile << "Total TTC = " << std::endl;
		myFile.close();
	}
	else {
		return "Erreur d'écriture non trouvé";
	}
}