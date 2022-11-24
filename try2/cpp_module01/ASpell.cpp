#include "ASpell.hpp"

ASpell::ASpell(std::string const & name, std::string const & effects)
	: _name(name), _effects(effects)
{

}

ASpell::ASpell(void)
	: _name("no name"), _effects("no effects")
{

}

ASpell::~ASpell(void)
{

}

ASpell::ASpell(ASpell const & src)
{
	*this = src;
}

ASpell & ASpell::operator=(ASpell const & src)
{
	_name = src._name;
	_effects = src._effects;
	return (*this);
}

std::string const &	ASpell::getName(void) const
{
	return this->_name;
}

std::string const & ASpell::getEffects(void) const
{
	return this->_effects;
}

void				ASpell::launch(ATarget const & target)
{
	target.getHitBySpell(*this);
}
