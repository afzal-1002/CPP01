#include "FileHandler.hpp"
#include <fstream>
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	const char	*inputfile;
	FileHandler	*filehandler;

	if (argc != 4)
	{
		std::cout << "Invalid input\nProgram that takes three parameters in the following order:\n"
					<< "./main <filename> <s1> <s2>\n";
		return (0);
	}
	std::string str1;
	std::string str2;
	str1 = argv[2];
	str2 = argv[3];
	if (str1.empty() || str2.empty())
	{
		std::cout << "s1 or s2 can not be empty\n";
		return (1);
	}
	inputfile = argv[1];
	filehandler = new FileHandler;
	filehandler->copyData(inputfile, str1, str2);
	return (0);
}
