#include "ATarget.hpp"

ATarget::ATarget(std::string type)
	: _type(type)
{

}

ATarget::ATarget(void)
	: _type("no type")
{

}

ATarget::ATarget(ATarget const & src)
	: _type(src._type)
{

}

ATarget::~ATarget(void)
{

}

std::string const & ATarget::getType(void) const
{
	return this->_type;
}

ATarget & ATarget::operator=(ATarget const & src)
{
	this->_type = src._type;
	return (*this);
}


void	ATarget::getHitBySpell(ASpell const & spell) const
{
	//check
	spell.getEffects();
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}
