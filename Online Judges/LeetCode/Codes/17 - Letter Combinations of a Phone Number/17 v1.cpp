class Solution {
    private:
        void solve(string digits, string output, int index, vector<string>& ans, vector<string> mapping)
        {
            if(index >= digits.length())
            {
                ans.push_back(output);
                return;
            }
    
            int number = digits[index] - '0';
            string value = mapping[number];
            
            for(char ch : value)
            {
                output.push_back(ch);
                solve(digits, output, index + 1, ans, mapping);
                output.pop_back();
            }
        }
    
    public:
        vector<string> letterCombinations(string digits) 
        {
            vector<string> ans;
            if(digits.length() == 0) return ans;
            vector<string> maping = {"",    "",    "abc",  "def", "ghi",
                                     "jkl", "mno", "pqrs", "tuv", "wxyz"};
            string output;
            int index = 0;
            solve(digits, output, index, ans, maping);
            return ans;
        }
    };