#include<iostream>
using namespace std;

class heap{
    int arr[100];
    int size=0;
    public:
    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;
        //sahi jagah par lejao
        int parent =index/2;
        while(arr[parent]<arr[index]){
            swap(arr[parent],arr[index]);
            index=parent;
        }
    }
    void deleteNode(){
        if(size==0) {
            cout<< "nothng to delete "<< endl;
            return ;
        }
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size){
            int leftIndex=2*i;
            int rightIndex=2*i+1;
            if(leftIndex<size && arr[i]<arr[leftIndex]){
                swap(arr[i],arr[leftIndex]);
                i=leftIndex;
            }
            else if(leftIndex<size && arr[i]<arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
            }
            else{
                return; 
            }
        }
    }
    
    void print(){
        for(int i=0;i<size;i++){
            cout<< arr[i]<<" ";
        }

    } 
};
    
void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<=n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<= n && arr[largest]<arr[right]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
    }
    heapify(arr,n,largest);
    }
int main(){
    heap h;
    h.insert(100);
    h.insert(10);
    h.insert(120);
    h.print();
return 0;
}