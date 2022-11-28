#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int main(void)
{
	static int	i = 0;
	PhoneBook	My_Book;
	std::string	input;

	while (input.compare("EXIT")) {
		std::cout << "Enter ADD, SEARCH or EXIT ==> ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break ;
		if (!input.compare("ADD")) {
			My_Book.AddContact(i % 8);
			i++;
		}
		else if (!input.compare("SEARCH")) {
			My_Book.getInfo();
			My_Book.getSpecInfo();
		}
		else if (input.compare("EXIT"))
			std::cout << "Incorrect Input" << std::endl;
	}
	return (0);
}