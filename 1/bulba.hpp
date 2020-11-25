#pragma once
#include "pokemon.hpp"

class bulba : public pokemon 
{
	private:
		int specialAttack;
		int specialDefense;
		
	public:
		bulba(std::string name);
		void setSpecialAttack(int specialAttack);
		void setSpecialDefense(int specialDefense);
		std::string initJson();
};