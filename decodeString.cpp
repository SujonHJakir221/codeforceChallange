#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    while(testcase--)
    {
        int n;
        cin >> n;
        vector<char> v;
        string s;
        cin >> s;
        for(int i = s.length() - 1;i >= 0; --i)
        {
            if(s[i] == '0')
            {
                int x = s[i-1] - 48;
                int y = s[i-2] - 48;
                y =y*10 + x;
                char c = y + 96;
                v.push_back(c);
                i = i - 2;
            }
            else{
                int x = s[i] - 48;
                char c = x + 96;
                v.push_back(c);
            }
        }
        reverse(v.begin(), v.end());
        for(char x: v) cout << x;
        cout << endl;

    }

    return 0;
}
