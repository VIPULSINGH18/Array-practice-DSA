/* brute force approach to solve 3 sum problem*/



#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<vector<int>> three_sum(vector<int> &arr,int n,int tar){
	vector<vector<int>> ans;
	set<vector<int>>s;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				int sum= arr[i]+arr[j]+arr[k];
				if(sum==tar){
					vector<int>trip={arr[i],arr[j],arr[k]};
					sort(trip.begin(),trip.end());
					if(s.find(trip)==s.end()){
						s.insert(trip);
						ans.push_back(trip);	
					}
				}
			}
		}
	}
	return ans;
	
}

int main(){
	vector<int> arr={2,1,4,5,3,8,9};
	int n= arr.size();
	int tar=12;
	vector<vector<int>> result= three_sum(arr,n,tar);
	for()
	
}


/*solving 3sum problem using hashing and set*/




#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<vector<int>> three_sum(vector<int> &arr,int n,int tar){
	vector<vector<int>> ans;
	set<vector<int>>s;
	for(int i=0;i<n;i++){
		int new_tr= tar-arr[i];
		for(int j=i+1;j<n;j++){
			int c= new_tr-arr[j];
			if(s.find(c)!=s.end()){
				vector<int>trip={arr[i],arr[j],c};
				sort(trip.begin(),trip.end());
				if(m.find(trip)==m.end()){
					ans.push_back(trip);
					m.insert(trip);
				}				
			}
			s.insert(arr[j]);	
		}
		
	}
	return ans;	
}

int main(){
	vector<int> arr={2,1,4,5,3,8,9};
	int n= arr.size();
	int tar=12;
	vector<vector<int>> result= three_sum(arr,n,tar);
	for()
	
}



/* solving 3sum problem jsing two pointer approach*/





#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<vector<int>> three_sum(vector<int> &arr,int n,int tar){
	vector<vector<int>> ans;
	for(int i=0;i<n;i++){
		if(i>0 && arr[i]==ar[i-1]){
			continue;
		}
			int p= i+1;
			int q= n-1;
			while(p<q){
				int sum=arr[i]+arr[p]+arr[q];
				if(sum>tar){
					q--;
					
				}
				else if(sum<tar){
					p++;
				}
				else{
					ans.push_back(arr[i],arr[p],arr[q]);
					p++;
					q--;
					
					while(p>0 && arr[p]==arr[p-1]){
						p++;
					}
				}
				
			}
			
		}
		return ans;
	}
	


int main(){
	vector<int> arr={2,1,4,5,3,8,9};
	int n= arr.size();
	int tar=12;
	vector<vector<int>> result= three_sum(arr,n,tar);
	for()
	
}







