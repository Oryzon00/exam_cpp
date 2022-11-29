#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects)
	: _name(name), _effects(effects)
{

}

ASpell::ASpell(void)
	: _name("no name"), _effects("no effects")
{

}

ASpell::ASpell(ASpell const & src)
	: _name(src._name), _effects(src._effects)
{

}


ASpell::~ASpell(void)
{

}

std::string const & ASpell::getName(void) const
{
	return this->_name;
}

std::string const & ASpell::getEffects(void) const
{
	return this->_effects;
}

ASpell & ASpell::operator=(ASpell const & src)
{
	_name = src._name;
	_effects = src._effects;
	return (*this);
}


void	ASpell::launch(ATarget const & target) const
{
	target.getHitBySpell(*this);
}
