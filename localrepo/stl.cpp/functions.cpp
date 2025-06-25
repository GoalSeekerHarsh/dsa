#include <iostream>
#include <array>

#include <vector>

using namespace std;
int main(){
    int basic[3]={1,2,3};
    array<int ,4> a= {2,3,4,5};
    //random acess possible 
    cout << a.at(2)<<endl;

    //this will not work as our this STL array also a satic datatype 
    // a.push_back();
    // a.pop_back();
    cout <<a.front()<<" ";
    cout <<a.back()<<endl;
    auto it = a.begin();
    cout << "your iterator is "<<*it <<endl;
    
    // to print whole thing for cotainers only 
    for(int i : a){
        cout <<i<<" ";
    }
    cout<< a.size()<<endl;
    // capacity function not valid in array STL bz static datatype 
    //cout<< a.capacity()<<endl;
    cout <<"is it empty "<<a.empty()<<endl;


//-------------------------------------------------------------------------------

    vector<int> v;
    vector<int> vec(4,1);
    vector<int> nums(5);
    cout<< v.size()<<endl;
    cout<< vec.size()<<endl;
    cout<< nums.size()<<endl;
    cout<< v.capacity()<<endl;
    cout<< vec.capacity()<<endl;
    cout<< nums.capacity()<<endl;
    vector<int> last(vec);
    vec.push_back(4);
    last.push_back(13);
    last.push_back(1);
    last.pop_back();
    for (int i: last){
        cout << i<< endl;
    }
    for (int i: nums){
        cout << i<< endl;
    }
    cout << vec.front()<<endl;
    cout<< vec.back()<<endl;


    //how to use iterator in this 
    // vector<int> m :: itr=m.begin();

    // find ,erase,

    vec.erase(vec.begin(), vec.begin() + 1);
    


    return 0;
}