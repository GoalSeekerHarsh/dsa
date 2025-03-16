#include <iostream>
using namespace std;
class CIRCULAR_QUEUE{
	public:
	int* array;
	int size;
	int front=0;
	int rear=0;

	CIRCULAR_QUEUE(int size){
		this->size = size;
		array = new int[size];
	}

	void push(int data){
		if((front==0 && rear==size) || ((front!=0) && (front==rear))){
			cout<<"QUEUE IS FULL"<<endl;
			cout<<data<<" NOT PUSHED"<<endl;
			return;
		}

		else{
			if(rear==size && front!=0){
				rear = 0;
				array[rear] = data;
				rear=(rear+1)<front ?(rear+1): rear;
			}
			//after values of rear when it is resetted to 0
			else{
				array[rear]=data;
				rear++;
			}
		}
	}
	bool empty(){
		if(front==0 && rear==0){return true;}
		bool empty = true;
		for(int i=0;i<size;i++){
			if(*(array+i)!=0){
				empty = false;
			}
		}
		if(empty){return true;}
		else{return false;}
	}

	void pop(){
		//underflow condition-->queue is empty
		if(this->empty()){
			cout<<"POP FAILED!! EMPTY QUEUE!!"<<endl;
		}
		else{
			if(front==size){
				front = 0;
				array[front]=0;
				front++;
			}
			else{
				array[front]=0;
				front++;
			}
		}
	}
	int FRONT(){
		if(this->empty()){
			return -1;
		}
		else{
			return array[front];
		}
	}

	int back(){
		if(this->empty()){
			return -1;
		}
		else{
			return array[rear-1];
		}
	}

	int len(){
		int length = 0;
		for(int i = 0;i<size;i++){
			if(array[i]!=(0)){
				length++;
			}
		}
		return length;
	}

	void print_queue(){
		cout<<"QUEUE"<<endl;
		for(int i = 0;i<size;i++){
			if(array[i]!=0){cout<<array[i]<<" ";}
		}
		cout<<"\n";
	}
	~CIRCULAR_QUEUE(){
		delete[] array;
	}

};

int main(){
	CIRCULAR_QUEUE q1(5);
	cout<<"IS QUEUE EMPTY?(0->NO;1->YES) : "<<q1.empty()<<endl; //1
	cout<<"SIZE:"<<q1.len()<<endl;
	q1.pop(); //UNDERFLOW CONDITION

	q1.push(1);q1.push(4);q1.push(10);q1.push(20);q1.push(55);
	q1.push(60); //OVERFLOW CONDITION
	q1.print_queue(); // 1 4 10 20 55
	cout<<"FRONT : "<<q1.FRONT()<<endl; //1 
	cout<<"BACK : "<<q1.back()<<endl; //55
	cout<<"SIZE:"<<q1.len()<<endl;
	q1.pop();q1.pop(); // 10 20 55
	cout<<"FRONT : "<<q1.FRONT()<<endl; //10
	q1.print_queue();
	cout<<"SIZE : "<<q1.len()<<endl;
	q1.push(23);
	q1.push(90);
	q1.push(33);
	q1.print_queue();

	cout<<"IS QUEUE EMPTY?(0->NO;1->YES) : "<<q1.empty()<<endl; //0

	return 0;
}