#include <iostream>
#include <cmath>
#include "functions.h"
#include <stdlib.h>
using namespace std;
void titlemenu();
int gcd(int,int);
void add();
void substract();
void GetRational(int &,int &);
void reduce(int &,int &);
void AddRational(int &,int &,int,int,int,int);
void SubtractRational(int &,int &,int,int,int,int);
void DisplayRational(int,int);
int main()
{
    char letter;
    titlemenu();
    cout<<endl;
    cout<<"Enter a Option: ";
    cin>>letter;
    system(ÞCLSÞ)
    if(letter=='A'||letter=='a')
    {
        add();
    }
    else if(letter=='S'||letter=='s')
    {
        subtract();
    }
    else
    {
        cout<<"Thank you for using the rational calculator!!";
    }
    cout<<endl;
    system("pause");
    return 0;
}
