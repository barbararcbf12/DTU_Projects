#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    
    cin >> x;
    cin >> y;
    
    if (x == y)
    {
        cout << x << " is equal to " << y;
    }
    if (x > y)
    {
        cout << x << " is bigger than " << y;
    }
    if (x < y)
    {
        cout << x << " is smaller than " << y;
    }
    
    return 0;
    
}
