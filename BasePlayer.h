#pragma once
#include "ArmamentManager.h"

using namespace Armamentspace;

class BasePlayer
{

public: 
	BasePlayer();

	~BasePlayer()
	{
		_currentArma_ptr.reset();
	}

	void SetArmament(Armament* armament);

	void UseArmament();

protected:
	
	shared_ptr<Armament*> _currentArma_ptr;

};




