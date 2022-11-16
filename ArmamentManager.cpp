#include <list>
#include "ArmamentManager.h"
#include "Knife.h"
#include "BaseRifle.h"

namespace Armamentspace
{
	ArmamentManager::ArmamentManager()
	{
		_armaments.push_back(make_unique<Armament>(Armament::ArmamentType::None));
		_armaments.push_back(make_unique<Knife>(Armament::ArmamentType::Knife));
		_armaments.push_back(make_unique<BaseRifle>(Armament::ArmamentType::Rifle));
	}

	Armament* ArmamentManager::GetArmamentBy(Armament::ArmamentType type)
	{
		return GetArmament(type);
	}

	Armament* ArmamentManager::GetArmament(Armament::ArmamentType type)
	{
		Armament* result = nullptr;

		for (auto it = _armaments.begin(); it != _armaments.end(); ++it)
		{
			if ((*it)->GetType() == type)
			{
				result = it->get();
				break;
			}
		}

		return result;
	}
};

