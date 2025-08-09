#include<iostream>
using namespace std;
int main(){
a:cout << "Enter the valo of number of array" << endl;
int n,k;
cin>>n;
int a[n];
cout<<"Enter the valo of keyword " << endl;
cin>>k;
cout << "Enter arrays value" << endl;
for(int i=0;i<n;i++){
cin>>a[i];
}
int bis(int a[],int n,int k);
cout << "Keyword find the array index of  "<<bis(a,n,k) << endl;
return 0;
}
int bis(int a[],int n,int k){
int st=0,end=n-1,mid;
while(st<=end){
mid=(st+end)/2;
if(a[mid]==k)
return mid;
else if(a[mid]<k)
st=mid+1;
else
end=mid-1;
}
return -1;
}