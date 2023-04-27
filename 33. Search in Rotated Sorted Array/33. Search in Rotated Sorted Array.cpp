#include <bits/stdc++.h>
using namespace std;

int rotatedArray(vector<int>nums, int target){
    int l=0,r=nums.size()-1;
    while (l<=r)
    {
        int mid=(l+r)/2;
        if(nums[mid]==target){
            return mid;
        }

        if(nums[mid]<nums[r]){
            if(nums[mid]<target && target<=nums[r]){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }else{
            if(nums[l]<target && target<=nums[mid]){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
    }
    
    return -1;
}

int main()
{
    vector<int>nums={4,5,6,7,0,1,2};
   cout<<rotatedArray(nums,0)<<endl;

    
}