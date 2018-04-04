// Gaussian Sum
#include <iostream>
#include <string>

using namespace std;

int GaussianSum(int n);

int main()
{
    // Declaring 1 variable of type int
    int n;
    
    // cout << "Give me a number please: ";
    cin >> n;
    
    cout <<  GaussianSum(n) << endl ;
    
    return 0;
    
}

//My function

int GaussianSum(int n){
    
    int result = 0;
    
    for(int i = 0; i <= n; i++){
        
        result = result + i;
    }
    
    return result;
    
}
