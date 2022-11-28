#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
	
private:

		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string contactNum;
		std::string	darkestSecret;
	
public:

	Contact();
	void	setName();
	void	setLastname();
	void	setNickname();
	void	setNum();
	void	setSecret();
	void	getInfo();
	void	getSpecInfo();
};

# endif