
int fact(int n){
int f=1;
for(int i=1;i<=n;i++)
f=f*i;
return f;
}
double p(int a,int b,int c){
return a/(b*c);
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,r,a,b,c;
cout << " Enter the value of n and r" << endl;
cin>>n>>r;
a=fact(n);
b=fact(r);
c=fact(n-r);
cout << "Combination is = " <<p(a,b,c)<< endl;
return 0;
}
    