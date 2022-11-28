#include "Contact.hpp"

std::string	input;

Contact::Contact(){
	firstName = "NoName";
	lastName = "NoSurname";
	nickName = "NoNickname";
	contactNum = "NoNum";
	darkestSecret = "NoSecret";
}

void	Contact::setName() {
	while(42) {
		std::cout << "Enter Name ==> ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break ;
		if (input.empty())
			std::cout << "Name cannot be empty" << std::endl;
		else
			break ;
	}
	firstName = input;
}

void	Contact::setLastname() {
	while(42) {
		std::cout << "Enter Lastname ==> ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break ;
		if (input.empty())
			std::cout << "Lastname cannot be empty" << std::endl;
		else
			break ;
	}
	lastName = input;
}

void	Contact::setNickname() {
	while(42) {
		std::cout << "Enter Nickname ==> ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break ;
		if (input.empty())
			std::cout << "Nickname cannot be empty" << std::endl;
		else
			break ;
	}
	nickName = input;
}

void	Contact::setNum() {
	while(42) {
		std::cout << "Enter Number ==> ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break ;
		if (input.empty())
			std::cout << "Number cannot be empty" << std::endl;
		else
			break ;
	}
	contactNum = input;
}

void	Contact::setSecret() {
	while(42) {
		std::cout << "Enter Darkest Secret ==> ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break ;
		if (input.empty())
			std::cout << "Darkest Secret cannot be empty" << std::endl;
		else
			break ;
	}
	darkestSecret = input;
}

void	Contact::getInfo() {
	std::cout.width(10);
	if (firstName.length() > 10)
		std::cout << firstName.erase(9).append(".") << "|";
	else
		std::cout << firstName << "|";
	std::cout.width(10);
	if (lastName.length() > 10)
		std::cout << lastName.erase(9).append(".") << "|";
	else
		std::cout << lastName << "|";
	std::cout.width(10);
	if (nickName.length() > 10)
		std::cout << nickName.erase(9).append(".") << "|";
	else
		std::cout << nickName << "|";
}

void	Contact::getSpecInfo() {
	std::cout << firstName << std::endl;
	std::cout << lastName << std::endl;
	std::cout << nickName << std::endl;
	std::cout << contactNum << std::endl;
	std::cout << darkestSecret << std::endl;
}