#pragma once

#include<iostream>
#include<list>
#include<queue>

using namespace std;

namespace Armamentspace
{
	class BaseBullet
	{
	public:
		BaseBullet(int id)
		{
			ID = id;
		}

		~BaseBullet()
		{
			ID = 0;
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
		BaseMagazine(int capacity);

		~BaseMagazine();

		virtual bool IsThereAmmo();

		virtual void RemoveBullet();

		void Reload();

	protected:
		int _capacity = 0;
		int _freeBulletsNumber = 0;

		queue<BaseBullet, list<BaseBullet>> _bullets;

		virtual void InitializeBullets();

		virtual void ImitationOfBulletShot();

		virtual void Clear();

	};
};



