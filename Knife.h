#pragma once

#include "Armament.h"

namespace Armamentspace
{
	class Knife : public Armament
	{
	public:
		Knife(Armament::ArmamentType type) : Armament(type)
		{
			cout << "Knife()" << endl;
		}

		void Use() override;
	};	
}



