#include <iostream>
#include <iomanip>
#include "Contacts.hpp"

Contact::Contact(){
	std::cout << "Constructor launched" << std::endl;
	return;
}

Contact::~Contact(){
	std::cout << "Destructor launched" << std::endl;
	return;
}

void Contact::add_tab(std::string name, std::string lname, std::string nname, int phone, std::string secret, int zindex){
	std::cout << "add_tab called" << std::endl;
	this->_fname[zindex] = name;
	this->_lname[zindex] = lname;
	this->_nname[zindex] = nname;
	this->_phone[zindex] = phone;
	this->_dsecret[zindex] = secret;
	return;
}

void Contact::display_contact(int zindex)const{
	std::string rep1;
	std::string rep2;
	std::string rep3;
	std::string rep4;
	std::string rep5;

	std::cout << "NUMBER    |NAME      |LASTNAME  |NICKNAME  |" << std::endl;
	for(int i = 0; i < zindex; i++)
	{
		rep1 = _fname[i];
		rep2 = _lname[i];
		rep3 = _nname[i];
		std::stringstream out;
		out << _phone[i];
		rep4 = out.str();

		rep1.size() > 9 ? rep1 = rep1.insert(9, ".") : rep1;
		rep2.size() > 9 ? rep2 = rep2.insert(9, ".") : rep2;
		rep3.size() > 9 ? rep3 = rep3.insert(9, ".") : rep3;
		std::cout << std::setw(10) << i << "|" << std::setw(10) << rep1.substr(0, 10) << "|" << std::setw(10) << rep2.substr(0, 10) << "|" << std::setw(10) << rep3.substr(0, 10) << "|" << std::endl;
	}
	return;
}

void Contact::display_this(int zindex)const{
	std::cout << "Contact Infos:" << std::endl;
	std::cout << "First Name: " << this->_fname[zindex - 1] << std::endl;
	std::cout << "NickName: " << this->_nname[zindex - 1] << std::endl;
	std::cout << "Phone Number: " << this->_phone[zindex - 1] << std::endl;
	std::cout << "Darkest Secret: " << this->_dsecret[zindex - 1] << std::endl;
}