#include <iostream>
#include <vector>
#include <list>

#include "BasePlayer.h"
#include "ArmamentManager.h"

using namespace std;

int main()
{
    BasePlayer *pl_ptr = new BasePlayer();

    ArmamentManager* aManager_ptr = new ArmamentManager();
    Armament* arma = aManager_ptr->GetArmamentBy(Armament::ArmamentType::Rifle);

    pl_ptr->SetArmament(arma);
    pl_ptr->UseArmament();

    delete aManager_ptr;
    aManager_ptr = nullptr;

    delete pl_ptr;
    pl_ptr = nullptr;

    int a = 5;

    return 0;
}