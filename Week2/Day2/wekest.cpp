class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
          // n = no. of rows
        int n = mat.size();
 
        // set to store pairs{count,indices}
        set<pair<int,int>> store;
 
        for( int index = 0 ; index < n ; index++ )
        {
            // count the number of ones in the current row
            int cnt = count(mat[index].begin(),mat[index].end(),1);
 
            store.insert({cnt,index});
        }
 
        // set will automatically sort the pair{count,indices}
 
        vector<int> ans;
 
        for(auto it:store)
        {
            if(k==0)
                break;
            ans.push_back(it.second);
            k--;
        }
        return ans;
    }