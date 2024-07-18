// Modes of Inheritence:
// 1.Public mode 
// 2.Private mode 
// 3.Protected mode 

// We can use any mode according to the need......


#include<iostream>
using namespace std;
//This is a base class

class vehicle{
    public;
    int number_tyres;
    string name;
    int capacity;
    int mileage;

    public:
    void calculatemileage()
    {
        cout<<"The mileage is "<<mileage;
    }
};
//This is derived class and we will inherit .....

class SchoolBus:public vehicle
{
    public:
    void printnameofSchool()
    {
        cout<<"The name of the school is "<<name;
    }
};

class car:public vehicle
{
private:

int number_airbags;
int ac_consumption;
};

int main(){
    Car a;
    a.mileage=50;
    a.calculatemileage();
}
