#pragma once
#include <string>
#include <vector>
#include <iostream>

#include "../structs.hpp"
#include "../structs.hpp"

class UserData
{
public:
	void getData() {

	}

	void createUser(int id, std::string nm, int tk, std::string em, std::vector<Luggage> lg, Seat st) {
        User newUser;
        newUser.ID = id;
        newUser.name = nm;
        newUser.ticket = tk;
        newUser.email = em;
        newUser.luggage_t = lg;
        newUser.seat_t = st;
        Users.push_back(newUser);
	}

    void displayUsers() {
        for (const User& user : Users) {
            std::cout << "ID: " << user.ID << "\n";
            std::cout << "Name: " << user.name << "\n";
            std::cout << "Ticket: " << user.ticket << "\n";
            std::cout << "Email: " << user.email << "\n";
            std::cout << "Luggage";
            for (const Luggage& luggage : user.luggage_t) {
                std::cout << "  Luggage ID: " << luggage.ID << " Luggage Hash: " << luggage.Hash << "\n";
            }
            std::cout << "Seat ID: " << user.seat_t.ID << " Seat Class: " << user.seat_t.Class << "\n";
            std::cout << "============================\n\n";
        }
    }
private:
	std::vector<User> Users;
};
