class Solution {
public:

    bool freq_same(int freq[],int w_freq[]){
        for(int i=0;i<26;i++){
            if(freq[i]!=w_freq[i]){
                return false;
            }
        }
        return true;
    }

       

    bool checkInclusion(string s1, string s2) {

         int freq[26]={0};
        for(int i=0;i<s1.length();i++){
            int idx= s1[i]-'a';
            freq[idx]++;
        }

        int w_s= s1.length();
        for(int i=0;i<s2.length();i++){
            int w_idx= 0; int idx= i;
            int w_freq[26]={0};

            while(w_idx<w_s && idx<s2.length()){
        
                w_freq[s2[idx]-'a']++;
                w_idx++; idx++;
            }

            if(freq_same(freq,w_freq)){
                return true;
            }
        }
        return false;
    }
};
