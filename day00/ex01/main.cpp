#include <iostream>
#include <iomanip>
#include "Contacts.hpp"

void Clear(){
	std::cout << "\x1B[2J\x1B[H";
}

int main()
{
	Contact book;
	int input;
	int zindex = 0;
	std::string sexit;
	std::string input_fname;
	std::string input_lname;
	std::string input_nname;
	int input_phone;
	std::string input_secret;

	while (1)
	{
		std::cout << "PHONEBOOK:\n     1 - ADD(create a new contact)\n     2 - SEARCH(look for a contact)\n     3 - EXIT(exit phonebook)" << std::endl;
		std::cout << "select an option: " << std::endl;
		std::cin >> input;
		while(!std::cin || input > 3 || input < 1){
			std::cout << "PHONEBOOK:\n     1 - ADD(create a new contact)\n     2 - SEARCH(look for a contact)\n     3 - EXIT(exit phonebook)" << std::endl;
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cin >> input;
		}
		if(input == 1)
		{
			if(zindex < 7)
			{
				Clear();
				std::cout << "Please enter your name: ";
				std::cin >> input_fname;
				Clear();
				std::cout << "Please enter your last name: ";
				std::cin >> input_lname;
				Clear();
				std::cout << "Please enter your nickname: ";
				std::cin >> input_nname;
				Clear();
				std::cout << "Please enter your phone number: ";
				std::cin >> input_phone;
				Clear();
				while (!std::cin) {
       				std::cout << "error: please enter a valid phone number: " ;
       				std::cin.clear();
       				std::cin.ignore(256,'\n');
       				std::cin >> input_phone;
					Clear();
   				}
				std::cout << "Please enter your secret: ";
				std::cin >> input_secret;
				Clear();
				book.add_tab(input_fname, input_lname, input_nname, input_phone, input_secret, zindex);
				zindex++;
			}
			else
				std::cout << "PHONEBOOK full, PHONEBOOK cant accept more than 7 contacts.\n";
		}
		else if(input == 2)
		{
			Clear();
			if(zindex < 1)
				std::cout << "no contact in PHONEBOOK yet." << std::endl;
			else
			{
				book.display_contact(zindex);
				std::cout << "Enter a number beetween 0 and " << zindex - 1 << " to display the choosen contact." << std::endl;
				std::cin >> input;
				while(!std::cin || input < 0 || input > zindex){
					Clear();
					book.display_contact(zindex);
					std::cout << "error: invalid input or digit not found in PHONEBOOK, enter a number between 0 and " << zindex - 1 << "." << std::endl;
					std::cin.clear();
					std::cin.ignore(256, '\n');
					std::cin >> input;
				}
				book.display_this(zindex);
			}
		}
		else if(input == 3)
		{
			Clear();
			std::cout << "exiting PHONEBOOK..." << std::endl;
			break;
		}
	}
	return (0);
}