#include "Harl.hpp"

Harl::Harl(){
	x[0] = &Harl::debug;
	x[1] = &Harl::info;
	x[2] = &Harl::warning;
	x[3] = &Harl::error;
	s[0] = "DEBUG";
	s[1] = "INFO";
	s[2] = "WARNING";
	s[3] = "ERROR";
}

Harl::~Harl(){

}

void	Harl::debug	( void ){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info	( void ){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning	( void ){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error	( void ){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain	( std::string level ){
	int i = -1;
	while (++i <= 4)
		if (level == Harl::s[i])
			break ;
	switch(i) {
		case 0:
			(this->*x[i]) ();
			i++;
		case 1:
			(this->*x[i]) ();
			i++;
		case 2:
			(this->*x[i]) ();
			i++;
		case 3:
			(this->*x[i]) ();
			i++;
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

