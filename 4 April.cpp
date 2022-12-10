#include<iostream>
#include<string.h>
using namespace std;

class Bank
{
private:
    float money;
    string name;
    int times;
    float transaction;
public:
    Bank(){}
    Bank(float money, string name, int times){}


    void process(float money, string name, int times)
    {
        this -> money = money;
        this -> name = name;
        this -> times = times;

        transaction = money*times;
    }
    void give()
    {
        cout << "Name : " << name << endl;
        cout << "Transaction : " << transaction << endl;
    }
};

int main()
{
    float money;
    int times;
    string name;
    cout << "----------------------------------------------------------------------\n";
    cout << "Welcome to Wolrd Bank! Please select below options....\n\n";

    cout << "Please insert your amount ex(500, 100, 1000) :\n";
    cin >> money;
    cout << "Please insert your name :\n";
    cin >> name;
    cout << "Please insert your times :\n";
    cin >> times;

    Bank(money, name, times);
    Bank p;
    p.process(money, name, times);
    p.give();

}







