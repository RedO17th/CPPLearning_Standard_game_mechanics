#pragma once
#include<vector>

#include "Armament.h"
#include "BaseMagazine.h"

namespace Armamentspace
{
	class BaseRifle : public Armament
	{

	public:
		BaseRifle(Armament::ArmamentType type) : Armament(type)
		{
			_buletsMagazine = new BaseMagazine(3);
		}

		~BaseRifle() override
		{
			delete _buletsMagazine;
			_buletsMagazine = nullptr;
		}

		void Use() override;

	private:
		BaseMagazine* _buletsMagazine = nullptr;

		virtual bool CanShoot();

		virtual void Shoot();

		virtual void Reload();

	};
};

