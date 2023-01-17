#include<bits/stdc++.h>
using namespace std;

int main()
{   
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
//    cout<<binary_search(v.begin(),v.end(),5);
cout<<*upper_bound(v.begin(),v.end(),4);
// cout<<*upper_bound(v.begin(),v.begin()+2,4);
cout<<endl;
cout<<*lower_bound(v.begin(),v.end(),4);
cout<<endl;

    // FOR FINDING FREQUENCY OF ELEMENT IN ARRAY
    int p=upper_bound(v.begin(),v.end(),4)-v.begin();
    int q=lower_bound(v.begin(),v.end(),4)-v.begin();
    cout<<p-q<<endl;
    return 0;
}