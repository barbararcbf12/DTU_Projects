#include <iostream>     // std::cout
#include <string>
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <map>
#include <cstdlib>      // std::rand, std::srand
#include <sstream>
#include <istream>
#include <iterator>

using namespace std;

//Function prototypes
void addBag(vector<int> &v);
void printV(vector<int> &v);

int main(){
    string bag;
    vector<int> a;
    vector<int> b;
    map<string,int> hash;
    hash["a"] = 0;
    hash["b"] = 1;
    bool c = true;
    
    while(cin >> bag){
        
        if (cin.fail()) {
            //c = false;
            break;
        }
        
        else if (hash[bag] == 0)
            addBag(a);
        
        else if (hash[bag] == 1)
            addBag(b);
        
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    printV(a);
    printV(b);
    
    return 0;
}

//Functions
void addBag(vector<int> & v){
    int num;
    //cout << "number: ";
    cin >> num;
    v.push_back(num);
}

void printV(vector<int> & v){
    for(vector<int>::iterator p = v.begin(); p != v.end(); p++)
        cout << *p << " ";
}
