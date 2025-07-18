#include<iostream>
using namespace std;
int main()
{
long long int n,sum=0,x=0,a;
cout << "Enter the number" << endl;
cin>>n;
a=sizeof(n);
while(a--)
{
x=n%10;
if(x%2!=0)
sum+=x;
n/=10;
}
cout << "Sum of digit of odd number= " <<sum<< endl;
}