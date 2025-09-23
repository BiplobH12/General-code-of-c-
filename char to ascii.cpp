#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cout << "Enter the sentence wanted to ascii code" << endl;
getline(cin,s);
int b[s.size()];
for(int i=0;i<s.size();i++){
b[i]=int(char(s[i]));
}
cout << "{";
for(int i=0;i<s.size();i++){
cout << b[i] <<",";
}
cout << "}";
}