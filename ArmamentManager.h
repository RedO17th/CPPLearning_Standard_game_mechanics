#pragma once
#include <iostream>
#include <vector>

#include "Armament.h"

using namespace std;

namespace Armamentspace
{
	class ArmamentManager
	{
	public:

		ArmamentManager();

		Armament* GetArmamentByType(Armament::ArmamentType type);

	private:

		vector<unique_ptr<Armament>> _armaments;

		Armament* GetArmament(Armament::ArmamentType type);
	};
};










