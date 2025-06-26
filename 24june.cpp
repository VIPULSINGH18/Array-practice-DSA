class Solution {
public:


 bool is_pl(string s){
    string s2= s;
    reverse(s2.begin(),s2.end());
    return s2==s;
  
 }

 void helper(string s,vector<string> &prt,vector<vector<string>> &ans){
    int n=s.size();
    if(s.size()==0){
        ans.push_back({prt});
        return;
    }

    for(int i=0;i<n;i++){
        string part=s.substr(0,i+1);
        if(is_pl(part)){
            prt.push_back(part);
            helper(s.substr(i+1),prt,ans);
            prt.pop_back();
        }
    }

 }
    vector<vector<string>> partition(string s) {
        vector<string>prt;
        vector<vector<string>> ans;
        helper(s,prt,ans);
        return ans;
        
    }
};
