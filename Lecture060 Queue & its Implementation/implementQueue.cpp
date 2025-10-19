#include<iostream>
using namespace std;
                     

class Queue {
    
    int* arr;
    int qfront;
    int rear; 
    int size;
    
public:
    Queue(int size) {
        this->size = size;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront == rear) {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data) {
        if(rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(qfront == rear) {
            return -1;
        }
        else
        {	int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
         return ans;
        }
    }

    int front() {
        if(qfront == rear) {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};
int main(){
    Queue q(3);
    q.enqueue(4);cout<< q.front()<<endl;
    q.enqueue(6);cout<< q.front()<<endl;
    q.enqueue(9);cout<< q.front()<<endl;
    q.dequeue();cout<< q.front()<<endl;
    q.dequeue();cout<< q.front()<<endl;
    q.enqueue(5);cout<< q.front()<<endl;
    q.dequeue();cout<< q.front()<<endl;
    q.dequeue();
    int ans=  q.front();
    cout << ans <<endl;
    q.enqueue(4);cout<< q.front()<<endl;

return 0;
}
