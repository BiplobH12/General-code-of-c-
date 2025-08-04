#include <bits/stdc++.h>
using namespace std;

#define e cout << "Enter the number " <<endl;

int main() {
int t;
    cout << " Enter the test case" << endl;
    cin>>t;
    while(t--) {
        e;
     unsigned long long int n,x,bi=0,i=0;
        
        cin>>n;
        while(n>0){
        x=n%2;
        bi=bi+(x*pow(10,i));
        i++;
        n/=2;
        }
        cout << " Decimal number  is= " <<bi<< endl;
    }
    return 0;
}