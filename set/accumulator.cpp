#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y)
{
    return (x-y);
}
int main()
{  
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int sum=0;
    sum=accumulate(v.begin(),v.end(),sum );
    int xyz=accumulate(v.begin(),v.end(),sum ,cmp);
    cout<<sum<<endl;
    cout<<xyz;
    return 0;
}