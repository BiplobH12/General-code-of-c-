#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
char op;
cout << "Enter the valo of a and b" << endl;
cin>>a>>b;
cout << "Enter the operator " << endl;
cin>>op;

// Calculator 
switch(op){
case '+':cout<<"(a+b)=" <<( a+b) << endl;
break;
case '-':cout <<"(a-b)="<<( a-b) << endl;
break;
case '*':cout<<"(a*b)="<<( a*b) << endl;
break;
case '/':cout <<"(a/b)="<<( a/b) << endl;
break;
case '^':cout <<"(a^b)="<<(pow (a,b)) << endl;
break;
default : cout << "Invalid operator" << endl;
}
return 0;
}
    