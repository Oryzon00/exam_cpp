#pragma once

#include <string>
#include <iostream>

class Warlock
{
	public:
		Warlock(std::string const & name, std::string const & title);
		~Warlock(void);

		std::string const &	getName(void) const;
		std::string const &	getTitle(void) const;

		void				setTitle(std::string const & title);

		void				introduce(void) const;
		
	
	private:
		Warlock(void);
		Warlock(Warlock const & src);
		Warlock &	operator=(Warlock const & src);
		std::string	_name;
		std::string	_title;
};
