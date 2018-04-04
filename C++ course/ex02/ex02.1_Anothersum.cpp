// Even Sum
#include <iostream>
#include <string>

using namespace std;

int EvenSum(int n);

int main()
{
    // Declaring 1 variable of type int
    int n;
    
    // cout << "Give me a number please: ";
    cin >> n;
    
    cout <<  EvenSum(n) << endl ;
    
    return 0;
    
}

//My function

int EvenSum(int n){
    
    int result = 0;
    
    for(int i = 0; i <= n; i = i+2){
        
        result = result + i;
    }
    
    return result;
    
}
