// Histogram

#include <iostream>
#include <string>
#include "math.h"

using namespace std ;

//Function prototype
void enternumber(int[], int);

int main()
{
    int l;
    int n;
    double largest = 0;
    
    //cout << "Type a number of intervals: ";
    cin >> l;
    
    //cout << "Type a size for your dataset: ";
    cin >> n;
    
    int dataSet[n];
    
    //Asking & recording for elements of dataSet
    enternumber(dataSet,n);
    
    //Finding the largest element in dataSet
    for(int i = 0; i < n; i++){
        
        int y = dataSet[i];
        if (y > largest){
            largest = y;
        }
        
    }
    
    //Determining the size "k" of the intervals
    double intervals[l];
    double k = ceil(largest/l);
    
    //cout << endl << "The size of the intervals is: " << largest/l << ", that rounded up turns into: " << k << endl << endl;
    
    //Determining start of intervals
    for( int i = 1; i < l+1; i++ ){
        
        intervals[i] = (i-1) * k;
        //cout << intervals[i] << endl;
        
    }
    
    
    //cout << "Here's your Histogram: "<< internval[l-1] << endl;
    
    for( int w = 1; w <= l; w++ ){ // loop intervals
        
        int count = 0;
        
        for( int y = 0; y < n; y++ ){ // loop dataSet
            if (w == l && dataSet[y] >= intervals[w]){
                
                count++;
                
            }
            if(w != l && dataSet[y] >= intervals[w] && dataSet[y] < intervals[w+1]) {
                
                count++;
                
            }
            
        }
        
        cout << intervals [w] << ": " << count << endl ;
        
    }
    
    cout << endl;
    
    system("PAUSE");
    return 0;
    
}

//Function statement
void enternumber(int dataSet[],int f)
{
    for ( int count=0; count<f; count++)
    {
        //cout << "Enter an Integer:  ";
        cin >> dataSet[count];
    }
}
