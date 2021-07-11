 bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int k=4;
        while(k--)
        {
            int n=mat.size();
            int m=mat[0].size();
              for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(mat[j][i],mat[i][j]);
            }
        }
        
    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n;j++)
        {
            swap(mat[i][j],mat[n-1-i][j]);
        }
    }
            if(mat==target)
            {
                return true;
                break;
            }
        }
        return false;
    }