#pragma once

#include "ATarget.hpp"

// In the same way, create a concrete ATarget called Dummy, the type of which
// is "Target Practice Dummy". You must also implement its clone() method.

class Dummy : public ATarget
{
	public:
		Dummy(void);
		virtual Dummy*	clone(void) const;
};
