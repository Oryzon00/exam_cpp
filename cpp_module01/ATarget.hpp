#pragma once

#include <string>
#include <iostream>

class ATarget
{
	public:
		ATarget(std::string const & type);
		~ATarget(void);
		
		std::string const &	getType(void) const;

		virtual ATarget * clone(void) const = 0;


	private:
		std::string	_type;
};
