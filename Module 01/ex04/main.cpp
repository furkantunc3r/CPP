#include <iostream>
#include <fstream>
#include <sstream>

int main(int ac, char **av){
	
	if (ac != 4)
		return 0;

	std::ifstream inFile;
	std::ofstream outFile;

	inFile.open(av[1]);
	std::string	temp(av[1]);
	outFile.open(temp.append(".replace"), std::iostream::trunc);
	if (!inFile || !outFile)
		return 0;
	std::stringstream stream;
	stream << inFile.rdbuf();
	std::string s = stream.str();
	size_t i = 0;
	while ((i = s.find(av[2], i)) != std::string::npos){
		s.erase(i, strlen(av[2]));
		s.insert(i, av[3]);
		i += strlen(av[3]);
	}	
	outFile << s;
	inFile.close();
	outFile.close();
	return 0;
}