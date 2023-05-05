class Solution
{
    public:
        int maxVowels(string s, int k)
        {
            int c = 0, res = 0;
            string str = "aeiou";
            for (int i = 0; i <= s.length(); i++)
            {
                if (str.find(s[i]) != std::string::npos)
                {
                    c++;
                }
                if (i >= k && (str.find(s[i - k]) != std::string::npos))
                {
                    c--;
                }
                if (c > res) res = c;
            }
            return res;
        }
};