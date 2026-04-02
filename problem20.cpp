class Solution {
public:
    bool isValid(string s) {
        string t;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                t += c;
            } else {
                if (t.empty()){
                return false;
                } 

                char last = t.back();
                if ((c == ')' && last != '(') ||
                    (c == '}' && last != '{') ||
                    (c == ']' && last != '[')) {
                    return false;
                }

                t.pop_back();
            }
        }

        return t.empty();
    }
};