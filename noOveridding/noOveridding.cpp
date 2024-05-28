

#include <iostream>
using namespace std;

//class parent
//tambahan final sesudah nama class
//untuk mencegah adanya overriding

class baseclass
{
public:
    virtual void perkenalan()
    {
        cout << "Halo saya Function dari base class";
    }
};

class derivedclass : public baseclass
{
public:
    void perkenalan()
    {
        cout << "Halo saya Function dari derived class";
    }
};

int main()
{
    
}

