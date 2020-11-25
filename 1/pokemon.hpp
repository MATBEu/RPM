#pragma once
#include <string>

class pokemon
{
	private:
	
	public:
		pokemon(std::string name);
		void setName(std::string name);
		std::string getName();
		void setHP(int hp);
		void setAttack(int attack);
		void setDefense(int defense);
		void setSpeed(int speed); 
		std::string name;
		int hp;
		int attack;
		int defense;
		int speed;
		std::string initJson();
		~pokemon();
};