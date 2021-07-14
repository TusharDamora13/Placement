//Sorted way
int missingNumber(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int t;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != i)
        {
            t = i;
            break;
        }
    }
    return t;
}

//Sum of array way
int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int expectedSum = (n * (n + 1)) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += nums[i];
    return expectedSum - sum;
}