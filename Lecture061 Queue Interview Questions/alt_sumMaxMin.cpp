#include <iostream>
using namespace std;
#include <queue>
#include <climits>

int SUM_K(queue<int> q, int* arr){
    int MAX=INT_MIN;
    int MIN=INT_MAX;
    int sum = 0;
    while(!q.empty()){
        MAX=max(MAX,*(arr+q.front()));
        MIN=min(MIN,*(arr+q.front()));
        q.pop();
    }
    sum+= MAX + MIN;
    return sum;
}
int main(){
    int arr[6] = {-1,4,2,6,-3,2};
    int k = 2;
    int sum = 0; int MAX = INT_MIN; int MIN = INT_MAX;

    queue<int> q;


    //remaining
    for(int i = 0 ; i<6 ; i++ ){
        //removal
        if((i-q.front()>=k)){
            q.pop();
        }
        //addition
        q.push(i);

        //traverse q again to find MAX and MIN and their SUM
        sum+=SUM_K(q,arr);
    }

    for(int i = 0 ; i <6 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"ans : "<<sum<<endl;


    return 0;
}