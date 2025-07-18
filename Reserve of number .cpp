#include<iostream>
using namespace std;
int main()
{
long long int n,rev=0,x=0;
cout << "Enter the number" << endl;
cin>>n;
while(n>0)
{
x=n%10;
rev=rev*10+x;
n/=10;
}
cout << "Reverse of the number= " <<rev<< endl;
}