#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cctype>
#include <string>

class LuggageGenerator
{
public:
	std::string generateHash(const std::string& nome, int idBagagem);


private:
	std::string luggage_hash;
	int luggageID;
};