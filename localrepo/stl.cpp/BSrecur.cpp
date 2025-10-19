// // // #include<iostream>
// // // #include <vector>
// // // using namespace std;
// // // bool binarySearch(vector<int>& nums,int target, int start, int end){
// // //     int mid=start+(end-start)/2;
// // //     if (start > end) return false;
// // //     if(target==nums[mid]){
// // //         return true;
// // //     }
// // //     else if(target>nums[mid]){
// // //         return binarySearch(nums,target,mid+1,end);
// // //     }
// // //     else{
// // //         return binarySearch(nums,target,start,mid-1);
// // //     }
// // //     return false;
// // // }                     
// // // int main(){
// // //     vector<int> arr={2,3,4,6,7,9,11,13};
// // //     int target=9;
// // //     cout<<binarySearch(arr,target,0,arr.size()-1)<<endl;
// // //     return binarySearch(arr,target,0,arr.size()-1);

// // // return 0;
// // // }
// // #include<iostream>
// // using namespace std;
// // void reverse(string &str,int i, int n){
// //     if(i==n/2){
// //         return;
// //     }

// //     reverse(str,i+1,n);
// //     swap(str[i],str[n-1-i]);
// //     cout<<str[i]<<" "<<str[n-1-i]<<endl;
// //     return;




// // }
                     
// // int main(){
// //     string str="abcdefgh";
// //     reverse(str,0,str.length());
// //     for(int i=0;i<str.length();i++){
// //         cout<<str[i];
// //     }
// //     cout<<endl;
    
// // return 0;
// // }
// #include<iostream>
// using namespace std;
// void bubbleSort(vector<int> &nums,int n){
//    if(n<1){
//     return;
//    }
//    int max=INT_MIN;
//    for(int i=0;i<n;i++){
//         if(nums[i]>max){
//             max=nums[i];
//             swap(nums[i],nums[n]);
//         }
//    }
//    bubbleSort(nums,n-1);
//    return;
// }
                     
// int main(){
//     vector<int> arr={10,9,8,7,6,5,4,3,2,1};
//     bubbleSort(arr,arr.size()-1);
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
// return 0;
// }


#include<iostream>
using namespace std;
int partition(vector<int>& nums,int start, int end){
    int pivote=nums[start];
    int count =0;
    for(int i=start+1;i<=end;i++){
        if(nums[i]<pivote) count++;
    }
    int pIdx=count+start;
    swap(nums[pIdx], nums[start]);
    int i=start,j=end;
    while(i<pIdx && j>pIdx){
        while(nums[i]<pivote){
            i++;
        }
        while(nums[j]>pivote){
            j--;
        }
        if(i<pIdx && j>pIdx){
            swap(nums[i],nums[j]);
        i++;
        j--;
        }
    }
    return pIdx;
}
   void quickSort(vector<int>& nums,int start, int end ){
        if(start>=end){
            return;
        }
        int p=partition(nums, start,end);
        quickSort(nums,start,p-1);
        quickSort(nums,p+1,end);
        return;

   }                  
int main(){
    vector<int> arr={10,9,8,7,6,5,4,3,2,1};
    quickSort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}