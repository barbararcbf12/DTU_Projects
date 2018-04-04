// Week 6 - Exercise 1
#include <iostream>
using namespace std;

// Class declaration
class fraction {
private:
    // Internal representation of a fraction as two integers
    int numerator;
    int denominator;
public:
    // Class constructor
    fraction(int n, int d);
    // Methods to update the fraction
    void add(fraction f);
    void mult(fraction f);
    void div(fraction f);
    // Method to simplify a fraction
    void simplify(void);
    // Display method
    void display(void);
};

//Functions
fraction::fraction(int n, int d){
    numerator = n;
    denominator = d;
}
void fraction::simplify() {
    int a = numerator;      // the gcd will be stored in a
    int b = denominator;
    while (b != 0)  {
        int t = b;
        b = a % b;
        a = t;
    }
    
    numerator = numerator / a;
    denominator = denominator / a;
    
    if (denominator < 0){
        numerator = - numerator;
        denominator = - denominator;
    }
    return;
}
void fraction::add(fraction f){
    numerator = (numerator * f.denominator) + (f.numerator * denominator);
    denominator = denominator * f.denominator;
    simplify();
    return;
}
void fraction::mult(fraction f){
    numerator = numerator * f.numerator;
    denominator = denominator * f.denominator;
    simplify();
    return;
}
void fraction::div(fraction f){
    numerator = numerator * f.denominator;
    denominator = denominator * f.numerator;
    simplify();
    return;
}

void fraction::display(){
    cout << numerator << " / " << denominator << endl ;
    return;
}

int main() {
    int n,d,a,b;
    string s, op;
    
    while( true ){
        
        cin >> n;
        if(cin.fail()) break;
        
        cin >> s;
        cin >> d;
        fraction f1(n,d);
        
        cin >> op;
        
        cin >> a;
        cin >> s;
        cin >> b;
        fraction f2(a,b);
        
        if(op == "+")
            f1.add(f2);
        else if(op == "div")
            f1.div(f2);
        else if(op == "*")
            f1.mult(f2);
        
        f1.display();
        
    }
    
    
    return 0;
}

