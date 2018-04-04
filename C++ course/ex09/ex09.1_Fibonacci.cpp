// vector::push_back
#include <iostream>
#include <vector>
#include <algorithm>    // std::reverse
#include <cmath>

using namespace std;

void fibonaci(int num);

int main ()
{
    int myint;
    
    while (cin >> myint){
        
        if (cin.fail()) break;
        
        fibonaci(myint);
        
    }
    
    //for(int k : myvector)
    //  cout << k << " ";
    
    //system("PAUSE");
    return 0;
    
}

//Fibonaci: F_{n}=F_{n-1}+F_{n-2},
void fibonaci(int num){
    vector<int> myvector{1,1};
    int f;
    
    if(num == 0 || num == 1) cout <<  1 << " ";
    
    else{
        for(int i = 2; i <= num; i++){
            f = myvector[i-2] + myvector[i-1];
            myvector.push_back(f);
        }
        cout << myvector[num] << " ";
    }
}
