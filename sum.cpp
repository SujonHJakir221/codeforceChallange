#include<bits/stdc++.h>
#include<iostream>
#include<array>
using namespace std;
int main()
{
    int n,x,flag = 0,temp;
    int a[3];
    cin >> n;
    temp = n;
    while(n--)
    {
        for(x =0; x<3;x++){
            cin >> a[x];
        }
    }
    int len = sizeof(a)/sizeof(a[0]);
    for(x=0;x<len;x++){
        if(a[x] + a[x+1] > a[x] + a[x+2]){
            flag += 1;

        }
        else{
            flag = 0;
        }
    }
    for(x=0;x<temp;x++){
        if(flag == 1){
            cout << "YES";
        }
        if(flag == 0){
            cout << "NO";
        }
    }

    return 0;
}
