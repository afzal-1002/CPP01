#include "FileHandler.hpp"
#include <fstream>

FileHandler::FileHandler(/* args */)
{
}

FileHandler::~FileHandler()
{
}

void FileHandler::copyData(const char *inputfile, std::string str1,
	std::string str2)
{
	char currentChar;
	size_t foundPos;
	size_t nextPos;
	std::string content;
	std::string filename;
	std::string outputFile;
	std::string firstPart;
	std::string secondPart;
	std::string replacedContent;
	std::ifstream input;
	std::ofstream file;

	filename = inputfile;
	if (filename.length() >= 4 && filename.substr(filename.length()
			- 4) == ".txt")
	{
		filename = filename.substr(0, filename.length() - 4);
	}
	outputFile = filename + ".replace";

	input.open(inputfile);
	if (input.fail())
	{
		std::cout << "Error While opening the file\n";
		return ;
	}

	file.open(outputFile.c_str());
	if (file.fail())
	{
		std::cout << "Error While creating the file\n";
		return ;
	}

	while (input.get(currentChar))
		content += currentChar;

	foundPos = content.find(str1);
	firstPart = content.substr(0, foundPos);
	nextPos = foundPos + str1.length();
	secondPart = content.substr(nextPos);
	replacedContent = firstPart + str2 + secondPart;

	file << replacedContent;

	input.close();
	file.close();
}