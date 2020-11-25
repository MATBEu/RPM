#include "pika.hpp"
#include <iostream>

pika::pika(std::string name) : pokemon(name)
{
	this->specialAttack = -1;
	this->specialDefense = -1;
}

void pika::setSpecialAttack(int specialAttack)
{
	this->specialAttack = specialAttack;
}

void pika::setSpecialDefense(int specialDefense)
{
	this->specialDefense = specialDefense;
}

std::string pika::initJson()
{
	pokemon::initJson();	
	
	std::string json = "{ \"name\": \""+ this->getName()+"\"";
	
	if(this->hp != -1)
		json = json + ", \"hp\": "+ std::to_string(this->hp);
	
	if(this->attack != -1)
		json = json + ", \"attack\": "+ std::to_string(this->attack);
	
	if(this->defense != -1)
		json = json + ", \"defense\": "+ std::to_string(this->defense);
	
	if(this->speed != -1)
		json = json + ", \"speed\": "+ std::to_string(this->speed);
	
	if(this->specialAttack != -1)
		json = json + ", \"specialAttack\": "+ std::to_string(this->specialAttack);
	
	if(this->specialDefense != -1)
		json = json + ", \"specialDefense\": "+ std::to_string(this->specialDefense);
	
	return json + "}";
}