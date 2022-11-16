#include "BaseMagazine.h"
namespace Armamentspace
{
	BaseMagazine::BaseMagazine(int capacity)
	{
		_capacity = capacity;
		_freeBulletsNumber = capacity;

		InitializeBullets();
	}

	BaseMagazine::~BaseMagazine()
	{
		_freeBulletsNumber = 0;
		_capacity = 0;

		Clear();
	}

	bool BaseMagazine::IsThereAmmo()
	{
		return _freeBulletsNumber > 0;
	}

	void BaseMagazine::RemoveBullet()
	{
		if (_freeBulletsNumber > 0)
		{
			--_freeBulletsNumber;

			ImitationOfBulletShot();
		}
	}

	void BaseMagazine::Reload()
	{
		_freeBulletsNumber = _capacity;
	}

	void BaseMagazine::InitializeBullets()
	{
		for (int i = 0; i < _capacity; i++)
			_bullets.push(BaseBullet(i));
	}

	void BaseMagazine::ImitationOfBulletShot()
	{
		BaseBullet bullet = _bullets.front();
		_bullets.pop();

		bullet.Launch();

		_bullets.push(bullet);
	}

	void BaseMagazine::Clear()
	{
		while (_bullets.empty() == false)
			_bullets.pop();
	}

};