vector<string> findWords(vector<string> &words)
{
    unordered_map<char, int> rowId;
    string temp = "qwertyuiopQWERTYUIOP";
    for (char &i : temp)
        rowId[i] = 1;
    temp = "asdfghjklASDFGHJKL";
    for (char &i : temp)
        rowId[i] = 2;
    temp = "zxcvbnmZXCVBNM";
    for (char &i : temp)
        rowId[i] = 3;

    bool same;
    vector<string> result;
    for (string &w : words)
    {
        same = true;
        for (int i = 1; i < w.size(); i++)
        {
            if (rowId[w[i]] != rowId[w[0]])
            {
                same = false;
                break;
            }
        }
        if (same)
            result.push_back(w);
    }
    return result;
}