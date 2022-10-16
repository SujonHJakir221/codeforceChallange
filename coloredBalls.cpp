#include <bits/stdc++.h>
using namespace std;
typedef long long l;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        l n;
        cin>>n;
        l maxo = 0,pos = 0;
        for(l i=0; i<n; i++)
        {
            l temp;
            cin >> temp;
            if( temp>maxo )
            {
                maxo = temp;
                pos =  i+1;
            }
        }
        cout << pos << "\n";
    }
    return 0;
}
