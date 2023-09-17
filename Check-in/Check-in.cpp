// Check-in.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "User/user.hpp"
#include "luggage/generateBag.hpp"


static int ID;
static std::string name;
static int ticket;
static std::string email;
int luggage_amount;
static std::vector< Luggage> luggage_t;
static Seat seat_t;


int main()
{
	try
	{
		
		std::cout << "Bem vindo(a) ao sistema de check-in\n";
		begin:
		std::cout << "Insira seu ID: ";

		std::cin >> ID;
		std::cout << "\nNome: ";
		std::cin >> name;
		std::getline(std::cin, name);
		std::cout << "\nTicket: ";
		std::cin >> ticket;
		std::cout << "\nEmail: ";
		std::cin >> email;
		std::getline(std::cin, email);
		std::cout << "\nQuantas Bagagens?: ";
		std::cin >> luggage_amount;
		for (int i = 0; i < luggage_amount; i++) {
			Luggage tempLg;
			std::cout << "\nInforme o id da mala " << i + 1 << ": ";
			std::cin >> tempLg.ID;

			LuggageGenerator* mala = new LuggageGenerator;
			auto hash = mala->generateHash(name, tempLg.ID);
			std::cout << "\nHash da mala " << i + 1 << ": " << hash;
			tempLg.Hash = hash;
			luggage_t.push_back(tempLg);

		}
		std::cout << "\nAssento: ";
		std::cin >> seat_t.ID;
		std::cout << "\nClasse: ";
		std::cin >> seat_t.Class;
		system("cls");
		std::cout << "Registro completo\n";
		UserData* NewUser = new UserData();
		NewUser->createUser(ID, name, ticket, email, luggage_t, seat_t);

		menu:
		std::cout << "\n---- Menu ----\n";
		std::cout << "\n1) Mostrar usuarios\n";
		std::cout << "\n2) Registrar usuario\n";
		std::cout << "\n3) fechar programa\n";
		int aws;
		std::cin >> aws;
		switch (aws)
		{
		case 1: {
			system("cls");
			NewUser->displayUsers();
			goto menu;
		}

			  break;
		case 2: {
			goto begin;
		}

			  break;
		case 3: {
			return -1;
		}

			  break;
		default:
			break;
		}

	}
	catch (std::exception err) {
		std::cout << "Erro encontrado na Main(): " << err.what();
	}
}

