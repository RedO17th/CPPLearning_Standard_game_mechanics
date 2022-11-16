#pragma once

#include "Armament.h"

namespace Armamentspace
{
	class Rifle : public Armament
	{
	public:
		Rifle(Armament::ArmamentType type) : Armament(type)
		{
			cout << "Rifle()" << endl;
		}

		void Use() override;
	};
}

