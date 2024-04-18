#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2, s3, s4;
        cin >> s1 >> s2;
        s3 += s1[1];
        s3 += s1[0];
        s4 += s2[1];
        s4 += s2[0];
        if (s1 > s2 || s1 > s4 || s3 > s4 || s3 > s2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        s3.erase();
        s4.erase();
    }
}
