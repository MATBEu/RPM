#pragma once
#include "pokemon.hpp"

class pika : public pokemon 
{
	private:
		int specialAttack;
		int specialDefense;
		
	public:
		pika(std::string name);
		void setSpecialAttack(int specialAttack);
		void setSpecialDefense(int specialDefense);
		std::string initJson();
};