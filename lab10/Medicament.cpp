#include "Medicament.h"
#include "Utils.h"
#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

Medicament::Medicament()
{
}

Medicament::Medicament(int ID, std::string num, bool ret, int nr, std::string prod)
{
	ID_Medicament = ID;
	nume_medicament = num;
	reteta = ret;
	numar_stoc = nr;
	producator = prod;
}

Medicament::Medicament(std::string linie, char delim)
{
	vector<string> tokens = splitLine(linie, delim);
	ID_Medicament = stoi(tokens[0]);
	nume_medicament = tokens[1];
	reteta = stoi(tokens[2]);
	numar_stoc = stoi(tokens[3]);
	producator = tokens[4];
}
int Medicament::getID_Medicament()
{
	return ID_Medicament;
}
std::string Medicament::getNume_Medicament()
{
	return nume_medicament;
}

bool Medicament::getReteta()
{
	return reteta;
}

int Medicament::getNumar_stoc()
{
	return numar_stoc;
}

std::string Medicament::getProducator()
{
	return producator;
}

void Medicament::setID_Medicament(int ID)
{
	ID_Medicament = ID;
}
void Medicament::setNume_Medicament(std::string nume)
{
	nume_medicament = nume;
}

void Medicament::setReteta(bool ret)
{
	reteta = ret;
}

void Medicament::setNumar_stoc(int nr)
{
	numar_stoc = nr;
}

void Medicament::setProducator(std::string prod)
{
	producator = prod;
}
bool Medicament::operator==(const Medicament& m)
{
	return (ID_Medicament == m.ID_Medicament && nume_medicament==m.nume_medicament && reteta == m.reteta && numar_stoc == m.numar_stoc && producator == m.producator);
}

bool Medicament::operator!=(const Medicament& m)
{
	return (ID_Medicament != m.ID_Medicament || nume_medicament != m.nume_medicament || reteta != m.reteta || numar_stoc != m.numar_stoc || producator != m.producator);
}


std::string Medicament::toString()
{
	return to_string(ID_Medicament) + " " + nume_medicament + " " + to_string(reteta) + " " + to_string(numar_stoc) + " " + producator;
}
std::string Medicament::toStringDelimiter(char delim)
{
	return to_string(ID_Medicament) + delim + nume_medicament + delim + to_string(reteta) + delim + to_string(numar_stoc) + delim + producator;
}
Medicament::~Medicament()
{
}