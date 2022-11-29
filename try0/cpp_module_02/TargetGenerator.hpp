#pragma once

#include <string>
#include <iostream>
#include "ATarget.hpp"
#include <map>

class TargetGenerator 
{
	public:
		TargetGenerator(void);
		~TargetGenerator();

		void learnTargetType(ATarget* target);
		void forgetTargetType(std::string const & targetName);
		ATarget* createTarget(std::string const & targetName); 

	private:
		TargetGenerator&	operator=(TargetGenerator const & src);
		TargetGenerator(TargetGenerator const & src);
		std::map<std::string, ATarget *>	_TargetGenerator;

};
