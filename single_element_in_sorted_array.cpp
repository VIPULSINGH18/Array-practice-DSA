//class Solution {
//public:
//    int singleNonDuplicate(vector<int>& arr) {
//
//        int size= arr.size();
//        int st=0;
//        int end= size-1;
//
//        if(size==1){
//            return arr[0];
//        }
//
//    
//        while(st<=end){
//
//        int mid= st+ (end-st)/2;
//
//        if(mid==0 && arr[mid] != arr[mid+1]){
//            return arr[mid];
//        }
//
//        if(mid==(size-1) && arr[mid] != arr[size-2]){
//            return arr[mid];
//        }
//
//
//        if(arr[mid-1] != arr[mid] && arr[mid+1] != arr[mid]){
//            return arr[mid];
//        }
//                
//        else{
//
//            if(mid%2==0){
//
//                if(arr[mid-1]==arr[mid]){
//                    end=mid-1;
//                }
//
//                else{
//                    st=mid+1;
//                }
//            }
//
//            else{
//
//                if(arr[mid-1] == arr[mid]){
//                    st=mid+1;
//                }
//
//                else{
//                    end=mid-1;
//                }
//
//            }
//        }
//    }
//
//    return -1;
//    }
//  
//};







