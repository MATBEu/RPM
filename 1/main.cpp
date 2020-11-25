#include <iostream>
#include <fstream>
#include "pokemon.hpp"
#include "bulba.hpp"
#include "pika.hpp"
#include "paras.hpp"



int main(){
	std::string json = "{ \"pokemons\": [ ";
	
	bulba test1("kek");
	test1.setHP(1);
	test1.setAttack(13);
	test1.setSpeed(1);
	json = json + test1.initJson(); 
	
	json = json + ", "; 
	
	pika test2("kek2");
	test2.setHP(12);
	test2.setDefense(7);
	test2.setSpeed(2);
	json = json + test2.initJson(); 
	
	json = json + ", "; 
	
	paras test3("kek3");
	test3.setHP(124);
	test2.setDefense(7);
	test3.setSpeed(121);
	test3.setSpecialAttack(187);
	test3.setSpecialDefense(211);
	json = json + test3.initJson(); 
	
	json = json + "]}"; 
	
	std::ofstream out;          
    out.open("c:\\cpp\\new.txt"); 
    if (out.is_open())
    {
        out << json << std::endl;
    }
}

