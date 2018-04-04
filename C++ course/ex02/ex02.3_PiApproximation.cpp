// Approximating pi
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//Function prototype
double FunctionPi(int n);

int main()
{
    // Declaring variables
    int n;
    
    // Asking for an input;
    cin >> n;
    
    cout << FunctionPi(n) << endl;
    
    return 0;
    
}

//My function
double FunctionPi(int n){
    
    double pi = 0.0;
    
    for( int i = 0.0; i < n; i++ ){
        
        pi = pi + ( pow(-1.0, i) / ( 2.0 * i + 1.0 ) )  ;
        
    }
    
    pi = pi * 4.0;
    
    return pi;
    
}
