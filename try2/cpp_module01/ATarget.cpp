#include "ATarget.hpp"

ATarget::ATarget(std::string const & type)
	: _type(type)
{

}

ATarget::ATarget(void)
	: _type("no type")
{

}

ATarget::~ATarget(void)
{

}

ATarget::ATarget(ATarget const & src)
{
	*this = src;
}

ATarget & ATarget::operator=(ATarget const & src)
{
	_type = src._type;
	return (*this);
}

std::string const &	ATarget::getType(void) const
{
	return this->_type;
}

void				ATarget::getHitBySpell(ASpell const & spell) const
{
	std::cout <<
		_type << " has been " << spell.getEffects() << "!" << std::endl;
}
