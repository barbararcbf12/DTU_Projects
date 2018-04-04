// Fun with Bags
#include <iostream>
#include <string>
#include <algorithm>    // std::find
#include <vector>       // std::vector
#include <map>
#include <cstring>
#include <list>

using namespace std;

void print(vector<double> bag);

int main(){
    map<string,double> hash;
    hash["quit"] = 0;
    hash["add"] = 1;
    hash["del"] = 2;
    hash["qry"] = 3;
    
    vector<double> bag;
    string input;
    double number;
    bool rule = true;
    
    while(rule == true){
        
        //cout << "Word: ";
        cin >> input;
        
        if (hash[input] == 0){
            rule = false;
        }
        
        else if (hash[input] == 1){
            //cout << "Number: ";
            cin >> number;
            bag.push_back(number);
        }
        
        else if (hash[input] == 2){
            //cout << "Number: ";
            cin >> number;
            
            auto it = find(bag.begin(), bag.end(), number);
            if(it != bag.end())
                bag.erase(it);
        }
        
        else if (hash[input] == 3){
            //cout << "Number: ";
            cin >> number;
            vector<double>::iterator p;
            p = find (bag.begin(), bag.end(), number);
            if (p != bag.end())
                cout << "T" ;
            else
                cout << "F" ;
            
        }
    }
    
    
    //print(bag);
    
    //system( "PAUSE" );
    return 0;
    
}
