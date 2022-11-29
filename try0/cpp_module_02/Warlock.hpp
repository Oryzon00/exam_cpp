#pragma once

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>
#include "SpellBook.hpp"

class Warlock 
{
	public:
		Warlock(std::string name, std::string title);
		~Warlock(void);

		std::string const &	getName(void) const;
		std::string const &	getTitle(void) const;

		void	setTitle(std::string const & title);
		void	introduce(void) const;

		void	learnSpell(ASpell * spell);
		void	forgetSpell(std::string spellName);
		void	launchSpell(std::string spellName, ATarget & target);


	private:
		std::string	_name;
		std::string	_title;
		Warlock(void);
		Warlock(Warlock const & copy);
		Warlock&	operator=(Warlock const & copy);
		SpellBook	_spellBook;
};
