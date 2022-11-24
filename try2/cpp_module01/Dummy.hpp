#pragma once

#include "ATarget.hpp"
#include <string>
#include <iostream>

class Dummy : public ATarget
{
	public:
		Dummy(void);
		~Dummy(void);
		
		virtual Dummy *	clone(void) const;
};
