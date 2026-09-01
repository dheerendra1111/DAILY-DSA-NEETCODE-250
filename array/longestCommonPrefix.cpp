class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans="";
        sort(s.begin(),s.end());
        string first=s[0];
        string last=s[s.size()-1];

        for(int i=0; i<min(first.size(),last.size()); i++){
            if (first[i] != last[i]){
                return ans;
            }
            else{
                ans+=first[i];
            }
        }  
        return ans;     
    }
};