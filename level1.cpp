#include <iostream>
#include <cmath>
#include "functions.h"
using namespace std;
void titlemenu();
void GetRational(int,int);
void reduce(int &,int &);
void AddRational(int,int,int,int,int,int);
void SubtractRational(int,int,int,int,int,int);
void DisplayRational(int,int);
int main()
{
    char letter;
    int num1,den1,num2,den2;
    int anum=0;
    int aden=0;
    GetRational(num1,den1);
    GetRational(num2,den2);
    titlemenu();
    cout<<endl;
    cout<<"Enter a Option: ";
    cin>>letter;
    cout<<endl;
    if(letter=='A'||letter=='a')
    {
        cout << "The result of " << num1 << "/" << den1 << " + " << num2 << "/" << den2 << endl;
        AddRational(anum, aden, num1, den1, num2, den2);
        cout<<anum<<"/"<<aden;
    }
    else if(letter=='S'||letter=='s')
    {
        cout << "The result of " << num1 << "/" << den1 << " - " << num2 << "/" << den2 << endl;
        SubtractRational(anum, aden, num1, den1, num2, den2);
        cout<<anum<<"/"<<aden;
    }
    else
    {
        cout<<"Thank you for using the rational calculator!!";
    }
    cout<<endl;
    system("pause");
    return 0;
}