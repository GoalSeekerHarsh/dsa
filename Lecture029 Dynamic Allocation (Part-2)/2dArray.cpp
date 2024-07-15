#include <iostream>
using namespace std;

int main() {

    int row;
    cin >> row;

    int col;
    cin >> col;

    //creating a 2D array
    int** arr = new int*[row];
    for(int i=0; i<row; i++) {
        arr[i] = new int[col];
    }

    //taking input
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }

    //taking output
    cout << endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }


    //releasing memory
    for(int i=0; i<row; i++) {
        delete [] arr[i];
    }   

    delete []arr;

    //how to create a 2D array dynamically
    //input/Output
    //memory free kaise karani hai 

    return 0;
}
// C++ Program to implement Jagged array 
// 2nd way: Dynamic 2D array 
#include <iostream> 
using namespace std; 

int main() 
{ 
	// system("cls"); 

	int row, col; 
	row = 3; 

	// Create Row Array- dynamic array of pointers 
	int** arr = new int*[row]; 
	int sizes[] = { 4, 2, 3 }; 
	// int *sizes= new int[row]; 
	// if taking row as input 

	// no of columns for each row as input from user 
	for (int i = 0; i < row; i++) { 
		/* 
		cin>>col;	 //if col is taken as input 
		/ sizes[i]=col; 
		// store each col number in size ( if row and col 
		// are taken as input) 
		*/

		*(arr + i) = new int[sizes[i]]; 
		// creating column of sizes[i] for each row 
	} 

	// input from user 
	int num = 1; 
	for (int i = 0; i < row; i++) { 
		for (int j = 0; j < sizes[i]; j++) { 
			// cin>>arr[i][j]; //if user want to input 
			arr[i][j] = num++; 
		} 
	} 

	cout << "elements in matrix form as follow" << endl; 
	for (int i = 0; i < row; i++) { 
		for (int j = 0; j < sizes[i]; j++) { 
			cout << arr[i][j] << " "; 
		} 
		cout << endl; 
	} 

	return 0; 
}
