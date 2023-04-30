class Solution
{
public:
    bool isAnagram(string s, string t)
    {

        if (s.length() != t.length())
        {
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s == t)
        {
            return true;
        }

        return false;
    }
};

// another approch using hash maps

class Solution
{
public:
    bool isAnagram(string s, string t)
    {

        if (s.length() != t.length())
        {
            return false;
        }
        unordered_map<char, int> smap;
        unordered_map<char, int> tmap;

        for (int i = 0; i < t.length(); i++)
        {
            smap[s[i]]++;
            tmap[t[i]]++;
        }

        for (int i = 0; i < smap.size(); i++)
        {
            if (smap[i] != tmap[i])
            {
                return false;
            }
        }

        return true;
    }
};