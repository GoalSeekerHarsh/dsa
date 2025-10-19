
#include<iostream>
using namespace std;
                     
int main(){
    // int n = sizeof(arr);
    int i=0;
    int j=n-1;
     while(i<j){
        while (arr(i)==0){
            i++;
        }
        while(arr(j)==2){
            j--;
        }
        if(arr(j)==0){
            swap(arr(i),arr(j));
            i++;
        }
        else if(arr(i)==2){
            swap(arr(i), arr(j));
            j--;
        }
        else{
            
            for(int k=i; k<=j; ){
                if(arr(k)==0){
                    swap(arr(i),arr(k));
                    i++;
                    k++;
            }
            else{
                swap(arr(j),arr(k));
                j--;
            }
            while(k<j && arr(k)==1){
                k++;
            }
            }
            return;
            
        }
            
       pair<int,int> p,
       p.first

     }
return 0;
}