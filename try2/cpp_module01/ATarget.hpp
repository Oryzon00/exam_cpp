#pragma once

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget 
{
	public:
		ATarget(std::string const & type);
		ATarget(void);
		~ATarget(void);
		ATarget(ATarget const & src);
		ATarget & operator=(ATarget const & src);

		std::string const &	getType(void) const;

		virtual ATarget *	clone(void) const = 0;

		void				getHitBySpell(ASpell const & spell) const;


	private:
		std::string	_type;
};
