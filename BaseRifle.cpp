#include "BaseRifle.h"

namespace Armamentspace
{
	void BaseRifle::Use()
	{
		if (CanShoot())
			Shoot();
		else
			Reload();
	}

	bool BaseRifle::CanShoot()
	{
		return _buletsMagazine->IsThereAmmo();
	}

	void BaseRifle::Shoot()
	{
		cout << "BaseRifle.cpp - Shoot" << endl;

		_buletsMagazine->RemoveBullet();
	}

	void BaseRifle::Reload()
	{
		cout << "BaseRifle.cpp - Reload" << endl;

		_buletsMagazine->Reload();
	}
};