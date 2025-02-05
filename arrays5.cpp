
/* below code is an example of printing pair of vector whose sum is equal to targeted value , using brute better approach*/
/* if there are two possible pairs whose sum is equal to target then first coming pair will be output*/


#include<iostream>
#include<vector>
using namespace std;
class Pair_Sum{
	public:
		vector<int> pair_sum(vector<int>&vec,int size){
			int target = 7;
			vector<int>ans;
			for(int i=0;i<size;i++){
				for(int j=i+1;j<size;j++){
					if(vec[i]+vec[j]==target){
						ans.push_back(i);
						ans.push_back(j);
					/*	cout<<"Pair of vector whose sum equal to 11 :"<<endl;
						cout<< ans[0]<<" "<<ans[1]<<endl;*/
					}
				}
			}
			return ans;
		}
		
};
int main(){
	Pair_Sum p1;
	vector<int>vec = {1,2,3,4,5,6};
	int size=6;
	vector<int>ans=p1.pair_sum(vec,size);
	cout<<"Pair whose sum equal to 11: "<<endl;
	cout<<ans[0]<<" "<<ans[1]<<endl;
	return 0;
	
}


/*below code is an example of finding pair whose sum is equal to target value with optimised approach having time complexity 0(n)*/



#include<iostream>
#include<vector>
using namespace std;
vector<int> Pair_Sum(vector<int>&vec,int size){
    int i=0;
    int j= size-1;
    int target=3;
    vector<int>ans;
    while(i<j){
        if(vec[i]+vec[j]>target){
            j--;
        }
        else if(vec[i]+vec[j]<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        
    }
}
return ans;
};
int main(){
    vector<int>vec={1,2,3,4,5,6};
    int size=6;
    vector<int>ans=Pair_Sum(vec,size);
    cout<<"Pair is : "<<endl;
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}




/* this code is for displaying majority element using brute force approach , having time complexity 0(n^2)*/


#include<iostream>
#include<vector>
using namespace std;
int Majority(vector<int>&vec){
    int n=vec.size();
    for(int val:vec){
        int freq=0;
        for(int el:vec){
            if(val==el){
                freq++;
            }
            
        }
        if(freq>n/2){
            return val;
        }
        return val;
        
    }
   
}
int main(){
    vector<int>vec= {2,2,2,2,1,1,2,3,3,4,1};
    int result=Majority(vec);
    cout<<"Most repeated element is : "<<endl;
    cout<<result<<endl;
    return 0;
}


/* this code is also used to print majority element using one loop and sorting algorithm with time complexity 0(nlogn)..*/


#include<iostream>
#include<vector>
#include<algorithm> /* header to use sort function*/

using namespace std;
int MJ(vector<int> &vec){
    int n= vec.size();
    sort(vec.begin(),vec.end());
    int freq=1;
    int ans= vec[0];
    for(int i=1;i<n;i++){
        if(vec[i]==vec[i-1]){
            freq++;
        }
        else{
            freq=1,ans=vec[i];
        }
        if(freq>n/2){
            return ans;
        }
    }
    return ans;
    
}
int main(){
    vector<int>vec={1,2,3,3,3,3,4,4,4,5,5,5,5,5};
    int result=MJ(vec);
    cout<<"Majority element is : "<<endl;
    cout<<result;
    return 0;
}


#Ye algorithm "Boyer-Moore Voting Algorithm" par based hai, jo O(n) time complexity  mein kaam karta hai.

#include<iostream>
#include<vector>
using namespace std;
int MJ(vector<int>&vec,int n){
    int freq=0;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(freq==0){
            ans = vec[i];
        }
        if(ans== vec[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}

int main(){
    vector<int>vec={1,1,1,2,3,3,4,4,5,6,1,4,1,2};
    int n = vec.size();
    int result = MJ(vec,n);
    cout<<"MJ IS : ";
    cout<<result<<endl;
    return 0;
    
}






