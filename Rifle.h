#pragma once

#include "Armament.h"

namespace Armamentspace
{
	class BaseMagazine
	{
	public:
		BaseMagazine()
		{
			Initilize();
		}

		bool IsThereAmmo()
		{
			return _numberOfElements > 0;
		}

		void RemoveBullet()
		{
			if (_numberOfElements > 0)
				--_numberOfElements;
		}

		void Reload()
		{
			_numberOfElements = _capacity;
		}

	private:
		int _numberOfElements = 0;

		//Test
		const int _capacity = 3;

		void Initilize()
		{
			_numberOfElements = _capacity;
		}

	};

	
	class Rifle : public Armament
	{

	public:
		Rifle(Armament::ArmamentType type) : Armament(type)
		{
			_buletsMagazine = new BaseMagazine();
		}

		void Use() override
		{
			if (CanShoot())
				Shoot();
			else
				Reload();
		}

	private:

		BaseMagazine* _buletsMagazine = nullptr;

		bool CanShoot()
		{
			return _buletsMagazine->IsThereAmmo();
		}

		void Shoot()
		{
			cout << "Rifle.h - Shoot" << endl;

			_buletsMagazine->RemoveBullet();
		}

		void Reload()
		{
			cout << "Rifle.h - Reload" << endl;

			_buletsMagazine->Reload();
		}
	};
};

