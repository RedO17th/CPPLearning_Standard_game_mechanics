#pragma once
#include "Armament.h"

namespace Armamentspace
{
	Armament::Armament(ArmamentType type)
	{
		_type = type;
	};

	Armament::ArmamentType Armament::GetType()
	{
		return _type;
	};

	void Armament::Use()
	{
		cout << "Armament.cpp - Use" << endl;
	};


};


