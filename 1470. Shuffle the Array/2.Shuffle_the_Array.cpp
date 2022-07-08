class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        int len = nums.size();
        vector<int> ans(len);
        int j = n, k = 0;
        for (int i = 0; i < len; i++)
        {
            if (i % 2 == 0)
            {
                ans[i] = nums[k++];
            }
            else
            {
                ans[i] = nums[j++];
            }
        }

        return ans;
    }
};