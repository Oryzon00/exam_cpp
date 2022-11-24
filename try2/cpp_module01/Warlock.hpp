#pragma once

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class Warlock
{
	public:
		Warlock(std::string const & name, std::string const & title);
		~Warlock(void);

		std::string const &	getName(void) const;
		std::string const &	getTitle(void) const;

		void				setTitle(std::string const & title);

		void				introduce(void) const;

		void	learnSpell(ASpell * spell);
		void	forgetSpell(std::string spellName);
		void	launchSpell(std::string spellName, ATarget const & target);
		
	
	private:
		Warlock(void);
		Warlock(Warlock const & src);
		Warlock &	operator=(Warlock const & src);
		std::string	_name;
		std::string	_title;
		std::map<std::string, ASpell*>	_spellBook;
};
