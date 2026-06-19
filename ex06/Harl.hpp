#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

enum	Level
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Harl
{
  private:
	Level level;
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

  public:
	Harl();
	~Harl();
	Level getLevel();
	void setLevel(Level level);
	void complain(Level level);
};

#endif