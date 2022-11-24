#pragma once

#include <string>
#include <iostream>

class ASpell
{
	public:
		ASpell(std::string const & name, std::string const & efects);
		~ASpell(void);

		std::string const &	getName(void) const;
		std::string const & getEffects(void) const;

		virtual ASpell * clone(void) const = 0;


	private:
		std::string	_name;
		std::string	_effects;
};
