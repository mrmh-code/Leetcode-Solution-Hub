#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector<int>nums={-1,0,1,2,-1,-4};
   int n=nums.size();
   sort(nums.begin(),nums.end()); 
   set<vector<int>>s;
 vector<vector<int>>ans;

   for(int i=0; i<n; i++){
    int j=i+1;
    int k=n-1;

    while (j<k)
    {
        int sum=nums[i]+nums[j]+nums[k];

        if(sum==0){
            s.insert({nums[i],nums[j],nums[k]});
            j++;
            k--;
        }
        else if(sum<0){
            j++;
        }else{
            k--;
            cout<<sum<<" "<<" i : "<<i<<" "<<j<<" " <<k<<endl;
        }
    }
    
   }

  

   for(auto u: s){
    ans.push_back(u);
   }

//    for(auto u:ans){
//     for(auto a: u){
//         cout<<a<<" ";
//     }
//     cout<<endl;
//    }


}