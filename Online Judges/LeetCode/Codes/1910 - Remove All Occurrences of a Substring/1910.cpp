class Solution {
    public:
        string removeOccurrences(string s, string part) {
            for (int i = 0; i < s.size(); ++i) {
                int ct = 0;
                for (int j = 0; j < s.size() && j < part.size(); ++j) {
                    if (s[i + j] == part[j])
                        ct++;
                    else
                        break;
                }
                if (ct == part.size()) {
                    s.erase(s.begin() + i, s.begin() + i + ct);
                    i = -1;
                }
            }
            return s;
        }
    };