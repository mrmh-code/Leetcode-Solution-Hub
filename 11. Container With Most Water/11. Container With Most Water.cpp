#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>heights={1,8,6,2,5,4,8,3,7};
    int n=heights.size();
    int i=0,j=n-1,ans=0;
    while (i<j)
    {
        int h=min(heights[i],heights[j]);
        ans=max(ans,( j - i )*h);

        while(heights[i]<=h && i<j){i++;}
        while(heights[j] <=h && i<j){j--;}
    }
    
    cout<<ans<<endl;
}