#ifndef FILEHANDLER_HPP
# define FILEHANDLER_HPP

# include <iostream>
# include <string>

class FileHandler
{
  private:
  public:
	FileHandler();
	~FileHandler();

	void copyData(const char *inputfile, std::string str1, std::string str2);
};

#endif