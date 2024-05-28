
#include <iostream>
using namespace std;

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

