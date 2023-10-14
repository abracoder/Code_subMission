class Solution {
public:
    string reverseWords(string str) {
        stringstream s(str);
        string word;
        string result ="";
        while( s>>word){
            result = word + " " + result;
        }
        result.pop_back();
        return result;
    }
};