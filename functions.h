#pragma once
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;
void titlemenu()
{
    cout<<"Rational Calculator"<<endl;
    cout<<"(A)Addition"<<endl;
    cout<<"(S)Subtraction"<<endl;
    cout<<"(Q)Quit"<<endl;
}
void GetRational(int *num, int *den)
{
    cout<<"Please enter a fraction (n/d): ";
    cin>>num>>den;
    if(den==0)
    {
        cout<<"Sorry, a fraction divide by zero is not possible.";
        cout<<"Try again.";
    }
}
void reduce(int *num,int *den)
{
    int A=num;
    int B=den;
    int R=(A%B);
    while(R!=0)
    {
        A=B;
        B=R;
        R=(A%B);
    }
    num=num/B;
    den=den/B;
}
void AddRational(int *anum, int *aden, int num1, int den1,int num2, int den2) 
{
    anum = (num1*den2) + (num2*den1);
    aden = (den1*den2);
    reduce(anum, aden);
}
void SubtractRational(int *anum,int *aden,int num1,int den1,int num2,int den2)
{
    anum = (num1*den2) - (num2*den1);
    aden = (den1*den2);
    reduce (anum, aden);
}
void DisplayRational(int num, int den) 
{
    if (den == 1) 
    {
        cout << num;
    }
}
