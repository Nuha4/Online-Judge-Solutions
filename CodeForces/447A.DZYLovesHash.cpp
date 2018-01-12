#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
int a[305];

int main()
{
    int p, x, n, rem, i;
    int flag=1, cnf = -1;
    cin >> p >> n;
    for(i=0; i<n; i++)
    {
        cin >> x ;
        rem = x%p;
        if(a[rem]!=0 && flag==1)
        {
           cnf = i+1;
           flag =0;
        }
        a[rem]++;
    }
    cout << cnf << endl;
    return 0;
}
