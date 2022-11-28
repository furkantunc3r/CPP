#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook {
	
	private:

	Contact contact[8];
	
	public:

	PhoneBook();
	void	AddContact(int i);
	void	getInfo();
	void	getSpecInfo();
};

# endif