#include<iostream>
using namespace std;

int main(){
    int n,r;
    float num = 1,denum = 1,comb = 1;
    cout<<"Enter the values of n and r in nCr \n";
    cin>>n>>r;

    for (int i = 1; i <= r; i++)
    {
        num *= (n-r+i);
    }
    for (int i = 1; i <= r; i++)
    {
        denum *= (i);
    }
    comb = num/denum;
    cout<<"The number of combinations is "<<comb<<"\n";    
}