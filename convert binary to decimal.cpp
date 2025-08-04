#include <bits/stdc++.h>
using namespace std;

#define e cout << "Enter the number " <<endl;

int main() {
int t;
    cout << " Enter the test case" << endl;
    cin>>t;
    while(t--) {
        e;
     unsigned long long int n,x,sum,i=0;
        
        cin>>n;
        while(n>0){
        x=n%10;
        if(x==0||x==1){
        sum=x*pow(2,i);
        i++;
        n/=10;
        }
        else{
        cout << " The number is not Binary" << endl;
        x=0;
        break;
        }
        }
        cout << " Decimal number  is= " <<sum<< endl;
    }
    return 0;
}