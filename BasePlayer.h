#pragma once
#include "ArmamentManager.h"

using namespace Armamentspace;

class BasePlayer
{

public: 
	BasePlayer();

	void SetArmament(IArmament* armament);

	void UseArmament();

protected:
	IArmament *_currentArmament;

};




