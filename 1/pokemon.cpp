#include "pokemon.hpp"
#include <iostream>

pokemon::pokemon(std::string name)
{
	this->name = name;
	this->hp = -1;
	this->attack = -1;
	this->defense = -1;
	this->speed = -1;
}

void pokemon::setName(std::string name)
{
	this->name = name;
}

std::string pokemon::getName()
{
	return this->name;
}

void pokemon::setHP(int hp)
{
	this->hp = hp;
}

void pokemon::setAttack(int attack)
{
	this->attack = attack;
}

void pokemon::setDefense(int defense)
{
	this->defense = defense;
}

void pokemon::setSpeed(int speed)
{
	this->speed = speed;
}

std::string pokemon::initJson()
{
	return "";
}

pokemon::~pokemon()
{
	
}