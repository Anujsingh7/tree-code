#include<bits/stdc++.h>
using namespace std;
  
//   bool cmp(vector<int>a,vector<int>b)
//   {
//     return a[1]<b[1];
//   }

bool paircmp(pair<int,int>a,pair<int,int>b)
{  if(a.second==b.second)
       return a.first<b.first;
       else
    return a.second<b.second;
}

 int main()
 {  
    // SORTING IN VECTOR PAIR USING COMPERATOR FUNCTIO |||||
vector<pair<int,int>>v;
v.push_back({1,2});
v.push_back({1,1});
v.push_back({2,4});
v.push_back({2,2});
v.push_back({2,7});
v.push_back({1,3});
 
 sort(v.begin(),v.end(),paircmp);
 for(auto x: v)
    cout<<x.first<<" "<<x.second<<endl;
// MATRIX  SOTRING  USING FUNCTION ||||||||

//     vector<vector<int>>v;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     { vector<int>temp;
//         for(int j=0;j<n;j++)
//         {
//             int x;
//             cin>>x;
//             temp.push_back(x);
//         }
//         v.push_back(temp);
//     }
//     // for(int i=0;i<n;i++)
//    sort(v.begin(),v.end(),cmp);
// // cout<<endl;
//  for(int i=0;i<n;i++)
//     { 
//         for(int j=0;j<n;j++)
//         {
//          cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
        
//     }

    return 0;
 }