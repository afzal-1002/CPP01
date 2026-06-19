#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;
	Level	userInput;
	int		i;

	std::string input;
	if (argc != 2)
	{
		std::cout << "Invalid input!";
		return (1);
	}
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	input = argv[1];
	if (input.empty())
	{
		std::cout << "Invalid input!";
		return (1);
	}
	i = 0;
	while (i < 4)
	{
		if (input == levels[i])
		{
			userInput = static_cast<Level>(i);
			break ;
		}
		i++;
	}
	if (i == 4)
	{
		std::cout << "Invalid level!" << std::endl;
		return (1);
	}
	harl.complain(userInput);
	return (0);
}
