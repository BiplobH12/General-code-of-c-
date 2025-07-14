#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,sum=0;
cout << "Enter the number" << endl;
cin>>n;
for(int i=1;i<=(sizeof(n));i++)
{
sum+=(n%10);
n/=10;
}
cout << "Sum of digit =" <<sum<< endl;
return 0;
}