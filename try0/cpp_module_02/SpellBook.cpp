#include "SpellBook.hpp"
#include <utility>

SpellBook::SpellBook(void)
{

}

SpellBook::~SpellBook(void) // free le book
{
	std::map<std::string, ASpell*>::iterator it = _spellBook.begin();
	std::map<std::string, ASpell*>::iterator ite = _spellBook.end();

	for (; it != ite; it++)
	{
		delete it->second;
	}
	_spellBook.clear();
}

void	SpellBook::forgetSpell(std::string const & spellName)
{
	ASpell*	spell = _spellBook[spellName];
	if (spell)
		delete spell;
	_spellBook.erase(spellName);
}

void	SpellBook::learnSpell(ASpell* spell)
{
	_spellBook.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
}

ASpell*	SpellBook::createSpell(std::string const & spellName)
{
	std::map<std::string, ASpell*>::iterator it;

	it = _spellBook.find(spellName);
	if (it != _spellBook.end())
		return (_spellBook[spellName]);
	else
		return NULL;
}
