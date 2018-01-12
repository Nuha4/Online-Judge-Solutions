#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<cstring>
using namespace std;
int a[35];

int main()
{
    int i, len, k, count=0;
    string s;
    getline(cin, s);
    len = s.length();
    for(i=0; i<len; i++)
    {
        if(s[i]==',' || s[i]=='}')
        {
            k = s[i-1]-'0';
            if(a[k]==0 && k!=75)
                a[k]++, count++;
        }
    }
    cout << count << endl;
    return 0;
}
