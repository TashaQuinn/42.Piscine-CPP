#include "Bureaucrat.h"

int main()
{
	try
	{
		Bureaucrat hermes = Bureaucrat("Hermes", 0);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}
	std::cout <<  std::endl;

	try
	{
		Bureaucrat hermes = Bureaucrat("Hermes", 34);
		std::cout << hermes << std::endl;
		hermes.incGrade(1);
		std::cout << hermes << std::endl;
		hermes.decGrade(666);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}
	std::cout <<  std::endl;
	return 0;
}
