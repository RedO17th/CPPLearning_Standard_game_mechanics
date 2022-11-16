#pragma once
#include<vector>

#include "Armament.h"
#include "BaseMagazine.h"

namespace Armamentspace
{
	class Rifle : public Armament
	{

	public:
		Rifle(Armament::ArmamentType type) : Armament(type)
		{
			_buletsMagazine = new BaseMagazine();
		}

		~Rifle() override
		{
			delete _buletsMagazine;
			_buletsMagazine = nullptr;
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

