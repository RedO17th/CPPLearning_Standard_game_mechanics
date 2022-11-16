#pragma once

#include "Armament.h"

namespace Armamentspace
{
	class Knife : public Armament
	{
	public:
		Knife(Armament::ArmamentType type) : Armament(type) {}

		void Use() override;
	};	
}



