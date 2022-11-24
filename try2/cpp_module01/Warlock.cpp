#include "Warlock.hpp"
#include <utility>
#include <algorithm>


Warlock::Warlock(std::string const & name, std::string const & title)
	: _name(name), _title(title)
{
	std::cout <<
		_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout <<
		_name  << ": My job here is done!" << std::endl;
}

std::string const &	Warlock::getName(void) const
{
	return this->_name;
}

std::string const &	Warlock::getTitle(void) const
{
	return this->_title;
}

void				Warlock::setTitle(std::string const & title)
{
	_title = title;
}

void				Warlock::introduce(void) const
{
	std::cout <<
		_name << ": I am " << _name << ", " << _title << "!" << std::endl;
}


void	Warlock::learnSpell(ASpell * spell)
{
	_spellBook.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
}

void	Warlock::forgetSpell(std::string spellName)
{
	_spellBook.erase(spellName);
}

void	Warlock::launchSpell(std::string spellName, ATarget const & target)
{
	std::map<std::string, ASpell*>::iterator	it;

	it = _spellBook.find(spellName);

	if (it == _spellBook.end())
		return ;
	else
	{
		(*it).second->launch(target);
	}


}
