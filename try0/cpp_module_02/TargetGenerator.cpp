#include "TargetGenerator.hpp"
#include <utility>

TargetGenerator::TargetGenerator(void)
{

}

TargetGenerator::~TargetGenerator(void) // free le book
{
	std::map<std::string, ATarget*>::iterator it = _TargetGenerator.begin();
	std::map<std::string, ATarget*>::iterator ite = _TargetGenerator.end();

	for (; it != ite; it++)
	{
		delete it->second;
	}
	_TargetGenerator.clear();
}

void	TargetGenerator::forgetTargetType(std::string const & targetName)
{
	ATarget*	target = _TargetGenerator[targetName];
	if (target)
		delete target;
	_TargetGenerator.erase(targetName);
}

void	TargetGenerator::learnTargetType(ATarget* target)
{
	_TargetGenerator.insert(std::pair<std::string, ATarget*>(target->getType(), target->clone()));
}

ATarget*	TargetGenerator::createTarget(std::string const & targetName)
{
	std::map<std::string, ATarget*>::iterator it;

	it = _TargetGenerator.find(targetName);
	if (it != _TargetGenerator.end())
		return (_TargetGenerator[targetName]);
	else
		return NULL;
}
