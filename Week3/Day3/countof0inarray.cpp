vector<int> countBits(int n)
{
    vector<int> ans;
    for (int i = 0; i <= n; i++)
    {
        int temp = i;
        int res = 0;
        while (temp > 0)
        {
            if (temp % 2 != 0)
            {
                res++;
            }
            temp = temp / 2;
        }
        ans.push_back(res);
    }
    return ans;
}