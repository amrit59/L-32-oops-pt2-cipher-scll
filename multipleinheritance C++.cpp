
#include<iostream>
using namespace std;
//This is a base class

class vehicle{
    private:
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

class SUV: public car
{
    public:

    int four_wheel_drive;
};

int main(){
    Car a;
    a.mileage=50;
    a.calculatemileage();
}


