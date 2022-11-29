#pragma once

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

// Add to the Warlock the following member functions:

// * learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
// * forgetSpell, takes a string corresponding a to a spell's name, and makes the
//   Warlock forget it. If it's not a known spell, does nothing.
// * launchSpell, takes a string (a spell name) and a reference to ATarget, that
//   launches the spell on the selected target. If it's not a known spell, does
//   nothing.

// You will need a new attribute to store the spells your Warlock knows. Several
// types fit the bill, it's up to you to choose the best one.

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
		std::map<std::string, ASpell *>	_spellBook;
};
