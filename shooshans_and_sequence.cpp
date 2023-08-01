#include <cstdio>
#include<algorithm>
#include<iostream>
using namespace std;

int a[100001];

int main()
{
    int n,k,num=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=k;i<=n;i++)
    {
        if(a[i]==a[i+1]) num++;
    }
    if(num+1!=n-k+1)
    {
        cout<<-1;
        return 0;
    }
    else
    {
        for(int i=k;i>=1;i--)
        {
            if(a[i]!=a[i-1]) {cout<<i-1;break;}
        }
    }
    return 0;
}