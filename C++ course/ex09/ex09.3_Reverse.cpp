// vector::push_back
#include <iostream>
#include <vector>
#include <algorithm>    // std::reverse
#include <cmath>

using namespace std;

int main ()
{
    vector<int> myvector;
    int myint;
    
    while (cin >> myint){
        
        if (cin.fail()) break;
        myvector.push_back (myint);
        
    }
    
    reverse(myvector.begin(),myvector.end());
    
    for(vector<int>::iterator p = myvector.begin(); p != myvector.end(); p++){
        cout << *p << " ";
    }
    
    //for(int k : myvector)
    //  cout << k << " ";
    
    //system("PAUSE");
    return 0;
    
}
