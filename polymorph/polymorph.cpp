

#include <iostream>
using namespace std;

class seseorang
{
public:
    //pure virtual function
    virtual void pesan() = 0;
    //virtual function biasa
    /*virtual void pesan()
     {
          cout << "Pesan Dari Seseorang" << endl;
     }*/
};

class joko : public seseorang
{
public:
    //deklarasi
    void pesan() 
    {
        //implementasi
       cout << "Pesan Dari Joko" << endl;
    }
};

int main()
{
    
}

