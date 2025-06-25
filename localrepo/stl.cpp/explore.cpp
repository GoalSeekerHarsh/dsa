// vector analysis and praatice 
#include <iostream>
#include <vector>
#include <list>
#include <array>
#include <deque>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <string>
using namespace std;


int main(){
    vector<int> v;
    //all 5 size vector initialised with 0;
    vector<int>v1(5);
    //all initialised with specific number 5;
    vector<int> v2(10, 5);
    //to copy our vector 1 to another 
    vector <int> v3(v2);
//insert operation on vector

    //for multiple element insert 
    v1.insert(v1.end(), {10,20});
    //insertion at 3rd position to 10
    v1.insert(v1.begin()+2,10);
    // to insrt multiple element at the end of our vector 
    v1.insert(v1.begin()+1, {2,3,4});                 // important to remember
    //only one element add at the end of our vector
    v1.push_back(3);




    // acesss our element 
    v1.at(3);
    v1[3];


    //this begin() and end() are iterator ;
    


    // to find our elment 15 in this vector using iterator 
    auto it =find(v1.begin()+1, v1.end(), 15);
    if (it != v1.end()){         // make sure you have used find() from <algorithm> and it --> like pointer not your number 
        return 0;
    }

    auto itr=v2.begin();
    if (!v2.empty()){
        cout << *(itr);
    }
    

      // Print all elements of v2
     for (auto itr = v2.begin(); itr != v2.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;

    
    auto it1 = find(v.begin(), v.end(), 5);
    if (it1 != v.end()) {
            cout << "found ";
    }




    // erase vs clear and empty 
    //empty ---> gives answer in true and false 
    // clear ---> delete whole vector 
    // but with help of erase we can chose specific element to delete 


    v1.erase(v1.begin()+1,v1.begin()+2); //--> pass iterator
    v1.erase(v1.begin());
    v1.clear(); //just clear it 
    bool ans =v1.empty();  // give boolian answer 

    // to acess element of 1st and last of our vector 
    v1.front();
    v1.back();
   
    reverse(v1.begin(),v1.end());     //---> pass iterator


    v1.resize(3);
    v1.reserve(100);

     int p =binary_search(v1.begin(),v1.end(),5);
     int t=binary_search(v1.begin(),v1.end(),3);
     auto max=max_element(v1.begin(),v1.end());

    ///for concatenatiion like appending something 
    string s1;
    string s2;

    // Appends the contents of s2 to s1
        s1.append(s2);   // ---> concatination of s2 in s1
    
    
        // Extract substring from s1 starting at index 5 with length 6 (result unused)
    
        s1.substr(6);
    s1.substr(6);    //---> Demonstration: get substring from index 6 (result unused)
    s1.find("xyz"); //----->>.return this if not found  string::npos   and  
    //found --->>> then return index of the starting substring 
    s1.rfind("ra");       // ---->> return index of last occurence of pour substring 

    s1.replace( 5, 6, "universe");
    // The C++ code `s.replace(6, 5, "Universe");` replaces a portion of the string `s` with the string "Universe".
    //  Specifically, it starts at index 6 and replaces the next 5 characters with "Universe".
    // If the original string `s` was "Hello World", the result would be "Hello Universe".
    // to convert lower cas eto upper and vice versa 


//   remember it 
     transform(s1.begin(), s1.end(), s1.begin(), ::tolower);  // "hello world"
     transform(s1.begin(), s1.end(),s1.begin(),::toupper);



     // moving to deque
     // it also ramdom acessable and and be understand as combination of both stack as well aas queue 

    deque<int> d(5,19);
    d.push_front(17);
    d.pop_front();
    d.insert(d.begin(),14);


    


    // for iin case of 
    stack<string> s;
    s.push("ram");
    s.pop();


    list<int> lst = {1, 2, 2, 3, 3, 3, 4};
// Sort (required before unique for all duplicates)
lst.sort();

// Remove consecutive duplicates
lst.unique();          // lst = [1, 2, 3, 4]


// Merge two sorted lists
list<int> lst2 = {5, 6, 7};
lst.merge(lst2);       // lst contains merged sorted list

// Reverse
lst.reverse();
for(int i : lst){
    cout<< i <<endl;
}



s.push("love");
s.push("babbar");
s.size();



priority_queue<int> maxi;
priority_queue<int ,vector<int> ,greater<int>> mini;


maxi.pop();


set<int> s4;
s4.insert(1);
// use it
auto itt= s4.begin();
itt++;

int m= binary_search(v.begin(),v.end(),4);

















    return 0;
}