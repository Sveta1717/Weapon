#include "Library.h"


class Weapon
{
public:    
    virtual void Action1() = 0;
    virtual void Action2() = 0;
    virtual const char* getName() const = 0;
};

class Knife : public Weapon // нож
{
private:
    const char* name = nullptr;

public:
    Knife() : name("Knife Bowie")
    {
    }

    void Action1()override
    {
        cout << "\t\t\t\tPOINT!\n";
    }

    void Action2()override
    {
        cout << "\t\tDEFEAT!!!\n";
    }

    const char* getName() const override
    {
        return name;
    }
};

class Handgun : public Weapon // пистолет
{
private:
    const char* name = nullptr;

public:
    Handgun() : name("Handgun Desert Eagle")
    {
    } 

    void Action1()override
    {
        cout << "\t\t\t\tPOINT!\n";
    }

    void Action2()override
    {
        cout << "\t\tDEFEAT!!!\n";
    }

    const char* getName() const override
    {
        return name;
    }
};

class Shotdgun : public Weapon // дробовик
{
private:
    const char* name = nullptr;

public:
    Shotdgun() : name("Shotdgun Remington")
    {
    }   

    void Action1()override
    {
        cout << "\t\tPOINT!\n";
    }

    void Action2()override
    {
        cout << "\t\t\tDEFEAT!!!\n";
    }

    const char* getName() const override
    {
        return name;
    }
};

class MachineGun : public Weapon // автомат
{
private:
    const char* name = nullptr;

public:
    MachineGun() : name("MachineGun HK G3")
    {
    }   

    void Action1()override
    {
        cout << "\t\t\t\tPOINT!\n";
    }

    void Action2()override
    {
        cout << "\t\tDEFEAT!!!\n";
    }

    const char* getName() const override
    {
        return name;
    }
};

class Machine : public Weapon // пулемет
{
private:
    const char* name = nullptr;

public:
    Machine() : name("Machine Mag")
    {
    }  

    void Action1()override
    {
        cout << "\t\t\t\tPOINT!\n";
    }

    void Action2()override
    {
        cout << "\t\tDEFEAT!!!\n";
    }

    const char* getName() const override
    {
        return name;
    }
};


class SniperRifle : public Weapon // снайперска винтовка
{
private:
    const char* name = nullptr;

public:
    SniperRifle() : name("SniperRifle Barrett")
    {
    }  

    void Action1()override
    {
        cout << "\t\t\t\tPOINT!\n";
    }

   void Action2()override
    {
       cout << "\t\tDEFEAT!!!\n";
    }

    const char* getName() const override
    {
        return name;
    }
};

class Carbine : public Weapon // карабин
{
private:
    const char* name = nullptr;

public:
    Carbine() : name("Carbine Barrett")
    {
    }

    void Action1()override
    {
        cout << "\t\t\t\tPOINT!\n";
    }

    void Action2()override
    {
        cout << "\t\tDEFEAT!!!\n";
    }

    const char* getName() const override
    {
        return name;
    }
};
