#include <bits/stdc++.h>
using namespace std;

//************************question************************************
/*Given an integer array nums, find the 
subarray
 with the largest sum, and return its sum.*/


int main()
{
    vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};
    int n=arr.size();
    int mx=arr[0],sum=0;

    for(int i=0; i<n; i++){
        sum+=arr[i];
        mx=max(sum,mx);

        if(sum<0){
            sum=0;
        }
    }

    cout<<mx<<endl;

}