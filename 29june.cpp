//valid palindrome checker//


#include<iostream>
#include<string>
using namespace std;

bool isAlpha(char ch){
    if(ch>='0' && ch<='9' || tolower(ch)>= 'a' && tolower(ch)<= 'z'){
        return true;
    }
    
    return false;
}
bool helper(string s, int st, int end){
    while(st<end){
        if(!isAlpha(s[st])){
            st++;
            continue;
        }
        if(!isAlpha(s[end])){
            end--;
            continue;
        }
        
        if(tolower(s[st])==tolower(s[end])){
            st++;
            end--;
        }
        
        else{
            return false;
            
        }
    }
    return true;
}
int main(){
    string s= "abc1cba";
    int st=0;
    int end= s.length()-1;
    cout<<helper(s,st,end);
    return 0;
}






