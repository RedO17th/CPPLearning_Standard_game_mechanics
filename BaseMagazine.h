#pragma once

#include<iostream>
#include<list>
#include<queue>

using namespace std;

namespace Armamentspace
{
	class Bullet
	{
	public:
		Bullet(int id)
		{
			ID = id;
		}

		int GetID()
		{
			return ID;
		}

		void Launch()
		{
			cout << ID <<" bullet.Launch()..." << endl;
		}

	private:
		int ID = 0;
	};

	class BaseMagazine
	{
	public:
		BaseMagazine()
		{
			Initilize();
		}

		~BaseMagazine()
		{
			_numberOfElements = 0;
			_capacity = 0;
		}

		bool IsThereAmmo()
		{
			return _numberOfElements > 0;
		}

		void RemoveBullet()
		{
			if (_numberOfElements > 0)
			{
				--_numberOfElements;

				ImitationOfBulletShot();
			}
		}

		void Reload()
		{
			_numberOfElements = _capacity;
		}

	private:
		//Test
		int _capacity = 3;
		int _numberOfElements = 0;

		queue<Bullet, list<Bullet>> _bullets;

		void Initilize()
		{
			_numberOfElements = _capacity;

			for (int i = 0; i < _capacity; i++)
			{
				_bullets.push(Bullet(i));
			}
		}

		void ImitationOfBulletShot()
		{
			Bullet bullet = _bullets.front();
			_bullets.pop();

			bullet.Launch();

			_bullets.push(bullet);
		}

	};
};



