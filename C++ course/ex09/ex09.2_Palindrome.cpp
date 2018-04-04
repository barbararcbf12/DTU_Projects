// Palindrome
#include <iostream>
#include <vector>
#include <algorithm>    // std::reverse
#include <cmath>

using namespace std;
void reverseV(vector<int> v1, vector<int> &v2);
void printV(vector<int> v);

int main ()
{
    int myint;
    vector<int> myvector;
    vector<int> myvectorInverse;
    bool check = true;
    
    while (cin >> myint){
        if (cin.fail()) break;
        
        myvector.push_back(myint);
        
    }
    
    reverseV(myvector,myvectorInverse);
    
    for(int k = 0; k < myvector.size(); k++){
        for(int j = 0; j < myvectorInverse.size(); j++){
            if( k == j && myvector[k] != myvectorInverse[j] ) {
                check = false;
                break;
            }
        }
    }
    
    if(check == true) cout << "yes";
    else cout << "no";
    
    return 0;
    
}
//record reversed vector in a new vector function
void reverseV(vector<int> v1, vector<int> &v2){
    reverse(v1.begin(),v1.end());
    
    for(vector<int>::iterator p = v1.begin(); p != v1.end(); p++){
        v2.push_back(*p);
    }
}

void printV(vector<int> v){
    for(vector<int>::iterator p = v.begin(); p != v.end(); p++){
        cout << *p << " ";
    }
}
