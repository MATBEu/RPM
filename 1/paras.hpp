#pragma once
#include "pokemon.hpp"

class paras : public pokemon 
{
	private:
		int specialAttack;
		int specialDefense;
		
	public:
		paras(std::string name);
		void setSpecialAttack(int specialAttack);
		void setSpecialDefense(int specialDefense);
		std::string initJson();
};