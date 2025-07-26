
int p(int n){
bool k;
for(int i=2;i<n;i++)
{
if(n%i==0)
k=0;
else
k=1;
}
return k;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
bool k;
cout << "Enter the number " << endl;
cin>>n;
p(n);
if(k)
cout <<n<< " is prime number " << endl;
else
cout <<n<< " isn’t prime number " << endl;


}