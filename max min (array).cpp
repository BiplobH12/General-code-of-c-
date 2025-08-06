#include<iostream>
using namespace std;
#define nu cout << "Enter the value of n" << endl;
#define ar cout << "Enter the value of array one by one" << endl;
int main(){
    int n;
    nu;
    cin>>n;
    int a[n],m=0,mn;ar;
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
        for(int i=0;i<n;i++){
          if(a[i]>m)
            m=a[i];
            }
        
    
    cout <<"Maximum number is =" <<m<< endl;
    mn=m;
    for(int i=0;i<n;i++){
          if(a[i]<mn)
            mn=a[i];
            }
    
    cout <<"Minimum number is =" <<mn<< endl;
    
    return 0;
    }