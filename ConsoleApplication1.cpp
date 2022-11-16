#include <iostream>
#include <vector>
#include <list>

#include "BasePlayer.h"
#include "ArmamentManager.h"

using namespace std;

class BaseItem
{
public:

    int value = 0;

    BaseItem(int v)
    {
        value = v;
        cout << "BaseItem->BaseItem() = " << this << endl;
    }

    int GetValue()
    {
        return value;
    }

    virtual ~BaseItem()
    {
        value = 0;
        cout << "BaseItem-> ~BaseItem() = " << this << endl;
    }

};

class FirstItem : public BaseItem
{
public:
    FirstItem(int v) : BaseItem(v) 
    {
        cout << "FirstItem->FirstItem() = " << this << endl;
    }

    ~FirstItem() override
    {
        cout << "FirstItem-> ~FirstItem() = " << this << endl;
    }
};

class Seconditem : public BaseItem
{
public:
    Seconditem(int v) : BaseItem(v)
    {
        cout << "Seconditem->Seconditem() = " << this << endl;
    }

    ~Seconditem() override
    {
        cout << "Seconditem-> ~Seconditem() = " << this << endl;
    }
};

int main()
{
    //vector<unique_ptr<BaseItem>> iVector;
    //iVector.push_back(make_unique<FirstItem>(1));
    //iVector.push_back(make_unique<Seconditem>(2));

    //list<unique_ptr<BaseItem>> iList;
    //iList.push_back(make_unique<FirstItem>(1));
    //iList.push_back(make_unique<Seconditem>(2));
    //iList.clear();

    BasePlayer *plPtr = new BasePlayer();

    ArmamentManager* aManager_ptr = new ArmamentManager();
    Armament* arma = aManager_ptr->GetArmamentByType(Armament::ArmamentType::Rifle);

    plPtr->SetArmament(arma);
    plPtr->UseArmament();

    return 0;
}