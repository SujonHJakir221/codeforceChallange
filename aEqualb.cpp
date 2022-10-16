#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n],b[n];
        for(i=0; i<n; i++)
        {
            cin >> a[i];
            cin >> b[i];
        }
        //ai to 1−ai.
        cout << a[i] << endl;
        cout << b[i] << endl;
        a[i] = 1 - a[i];
        b[i] = 1 - b[i];
        cout << a[i] << endl;
        cout << b[i] << endl;
    }

    return 0;

}

