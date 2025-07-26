#include<bits/stdc++.h>
using namespace std;

void p(int n){
    bool k;
    for(int j = 2; j <= n; j++){
        k = 1; // ধরি j প্রাইম
        for(int i = 2; i < j; i++){
            if(j % i == 0){
                k = 0; // ভাগ হয়ে যাচ্ছে, তাই প্রাইম না
                break;
            }
        }
        if(k)
            cout << j << endl;
    }
}

int main(){
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    p(n); // ফাংশন কল করলাম
    return 0;
}