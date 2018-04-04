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
void printV(vector<int> & a, vector<int> & b);

int main(){
    string bag;
    vector<int> a;
    vector<int> b;
    map<string,int> hash;
    hash["a"] = 0;
    hash["b"] = 1;
    
    while(cin >> bag){
        
        if (cin.fail()) {
            break;
        }
        
        else if (hash[bag] == 0)
            addBag(a);
        
        else if (hash[bag] == 1)
            addBag(b);
        
    }
    
    printV(a,b);
    
    return 0;
    
}

//Functions
void addBag(vector<int> & v){
    int num;
    cin >> num;
    v.push_back(num);
}

void printV(vector<int> & a, vector<int> & b){
    unsigned int maior = a.size();
    if (b.size() > maior) maior = b.size();
    
    for(unsigned int i = 0; i < maior; i++){
        if(i >= a.size())
            cout << b[i] << " ";
        else if(i >= b.size())
            cout << a[i] << " ";
        else
            cout << a[i] << " " << b[i] << " ";
    }
}
