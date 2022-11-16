#pragma once
#include<iostream>

using namespace std;

namespace Armamentspace
{
	class IArmament
	{
	public:
		virtual void Use() = 0;
	};

	class Armament : public IArmament
	{
	public:

		enum class ArmamentType
		{
			None = -1,
			Rifle,
			Pistol,
			Grenade,
			Knife
		};

		Armament(ArmamentType type);

		virtual ArmamentType GetType();

		void Use() override;

	protected:
		ArmamentType _type = ArmamentType::None;
	};
};







