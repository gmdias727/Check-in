#pragma once
#include <string>
struct Luggage
{
	int ID;
	std::string Hash;
};

struct Seat {
	int ID;
	int Class;
};

struct User {
	int ID;
	std::string name;
	int ticket;
	std::string email;
	std::vector<Luggage> luggage_t;
	Seat seat_t;
};