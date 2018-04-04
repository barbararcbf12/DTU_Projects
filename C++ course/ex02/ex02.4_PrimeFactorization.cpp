#include <iostream>
#include <string>

using namespace std;

int PrimeFactorization(int n);

int main()
{
    // Declaring 1 variable of type int
    int n;
    
    // Asking for an input;
    cin >> n;
    
    for(int i = 2; i <= n; i++){
        
        while(n % i == 0){
            
            if(n == i){
                cout << i << endl;
                break;
            }
            n /= i;
            cout << i << " * ";
            
        }
        
    }
    
    return 0;
    
}
