#pragma once

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class SpellBook 
{
	public:
		SpellBook(void);
		~SpellBook();

		void learnSpell(ASpell* spell); // that COPIES a spell in the book
		void forgetSpell(std::string const & spellName); // that deletes a spell from the book, excep if it isn't there
		ASpell* createSpell(std::string const & spellName); 
		// that receives a string corresponding to the name of a spell, creates it, 
		//and returns it.

	private:
		SpellBook&	operator=(SpellBook const & src);
		SpellBook(SpellBook const & src);
		std::map<std::string, ASpell *>	_spellBook;

};
