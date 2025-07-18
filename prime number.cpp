#include<iostream>
using namespace std;
int main()
{
int n;
bool p=1;
cout << "Enter the number " << endl;
cin>>n;
for(int i=2;i<n;i++)
{
if(n%i==0){
p=0;
break ;
}
}
if(p)
cout <<n<< "  is prime number" << endl;
else
cout << n<<"  isn’t  prime number " << endl;
return 0;
}