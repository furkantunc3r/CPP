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
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info	( void ){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning	( void ){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error	( void ){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain	( std::string level ){
	for (int i = 0; i < 4; i++)
		if (level == Harl::s[i])
			(this->*x[i]) ();
}

