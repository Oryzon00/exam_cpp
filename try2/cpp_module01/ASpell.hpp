#pragma once

#include <string>
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell 
{
	public:
		ASpell(std::string const & name, std::string const & effects);
		ASpell(void);
		~ASpell(void);
		ASpell(ASpell const & src);
		ASpell & operator=(ASpell const & src);

		std::string const &	getName(void) const;
		std::string const & getEffects(void) const;

		virtual ASpell *	clone(void) const = 0;

		void				launch(ATarget const & target);


	private:
		std::string	_name;
		std::string	_effects;
};
