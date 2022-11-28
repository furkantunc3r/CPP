#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

PhoneBook::PhoneBook() {
	std::cout << "PhoneBook Created" << std::endl;
}

void	PhoneBook::AddContact(int i) {
	this->contact[i].setName();
	this->contact[i].setLastname();
	this->contact[i].setNickname();
	this->contact[i].setNum();
	this->contact[i].setSecret();
}

void	PhoneBook::getInfo() {
	int	j = -1;
	while (++j < 8) {
		std::cout << j + 1;	
		this->contact[j].getInfo();
		std::cout << std::endl;
	}
}

void	PhoneBook::getSpecInfo() {
	int	k;
	std::string	id;
	while (42) {
		if (std::cin.eof())
			break ;
		std::cout << "Enter Index Number ==> ";
		std::getline(std::cin, id);
		k = atoi(id.c_str());
		if (k >= 1 && k <= 8) {
			this->contact[k - 1].getSpecInfo();
			break ;
		}
		std::cout << "Wrong Index" << std::endl;
	}
}