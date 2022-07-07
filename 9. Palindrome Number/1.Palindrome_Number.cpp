
class Solution
{
public:
    bool isPalindrome(int x)
    {
        long long reminder, reverseNumber = 0, n = x;
        if (x < 0)
        {
            return false;
        }

        while (n != 0)
        {
            reminder = n % 10;
            reverseNumber = reminder + reverseNumber * 10;
            n /= 10;
        }

        return x == reverseNumber ? true : false;
    }
};