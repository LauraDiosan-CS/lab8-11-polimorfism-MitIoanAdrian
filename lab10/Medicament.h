#pragma once

#include <string>

using namespace std;

class Medicament
{private:
	int ID_Medicament;
	std::string nume_medicament;
	bool reteta;
	int numar_stoc;
	std::string producator;
public:
	Medicament();
	Medicament(int, std::string, bool, int, std::string);
	Medicament(std::string, char);
	int getID_Medicament();
	std::string getNume_Medicament();
	bool getReteta();
	int getNumar_stoc();
	std::string getProducator();
	void setID_Medicament(int);
	void setNume_Medicament(std::string);
	void setReteta(bool);
	void setNumar_stoc(int);
	void setProducator(std::string);
	bool operator==(const Medicament&);
	bool operator!=(const Medicament&);
	std::string toString();
	std::string toStringDelimiter(char);
	~Medicament();
};