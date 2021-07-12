string mostCommonWord(string paragraph, vector<string> &banned)
{
    for (int i = 0; i < paragraph.length(); i++)
    {
        paragraph[i] = tolower(paragraph[i]);
        if (!isalpha(paragraph[i]) && paragraph[i] != ' ')
            paragraph.replace(i, 1, " ");
    }
    istringstream str1_(paragraph);
    string word;
    unordered_map<string, int> freqs;
    while (str1_ >> word)
    {
        freqs[word] += 1;
        if (find(banned.begin(), banned.end(), word) != banned.end())
            freqs[word] = -1;

        istringstream str2_(paragraph);
        int max = 0;
        string r;
        while (str2_ >> word)
        {
            if (freqs[word] > max)
            {
                max = freqs[word];
                r = word;
            }
        }
    }
    return r;
}