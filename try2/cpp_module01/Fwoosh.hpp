#pragma once

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
		Fwoosh(void);
		~Fwoosh(void);
		
		virtual Fwoosh *	clone(void) const;
		
	private:

};
