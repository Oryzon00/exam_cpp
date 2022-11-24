#include "Warlock.hpp"
#include <iostream>

Warlock::Warlock(std::string const & name, std::string const & title)
	: _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

void	Warlock::introduce(void) const
{
	std::cout <<
		_name << ": I am " << _name << ", " << _title << "!" << std::endl;
}


std::string const &	Warlock::getName(void) const
{
	return this->_name;
}


std::string const &	Warlock::getTitle(void) const
{
	return this->_title;
}

void	Warlock::setTitle(std::string const & title)
{
	this->_title = title;
}
