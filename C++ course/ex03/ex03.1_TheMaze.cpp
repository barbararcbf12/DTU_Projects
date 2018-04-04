//The Maze
#include <iostream>
#include <stdlib.h>     /* Library containing funciton such as
rand (a generator of random numbers) */
using namespace std;


// We declare here an enumeration type called "material"
typedef enum { wood, stone, player } material;

// We declare here a record type called "field"
typedef struct {
    int x,y;
    bool isWall;
    material type;
} field;

#define n 12
#define m 16
field playground[n][m];

// this function translates materials into characters
char character(material a){
    switch(a){
        case wood:
            return ' ';
        case stone:
            return '*';
        case player:
            return 'O';
        default:
            return '?';
    }
}

void turnLeft(int & a, int & b);
void turnRight(int & a, int & b);
void turnUp(int & a, int & b);
void turnDown(int & a, int & b);
void Maze(int a, int b);


int main(){
    int a = 5;
    int b = 5;
    
    
    char dir = '\0';
    //cout << "Enter the direction you want to move ('l' = Left; 'r' = Right; 'u' = Up; 'd' = Down; 'q' = Ends the program)" << endl;
    
    Maze(a,b);
    cout << endl;
    
    while( dir != 'q' ){
        //cout << "Enter new direction: "<< endl;
        cin >> dir;
        
        if (dir == 'l'){
            turnLeft(a,b);
            Maze(a,b);
        }
        else if (dir == 'r'){
            turnRight(a,b);
            Maze(a,b);
        }
        else if (dir == 'u'){
            turnUp(a,b);
            Maze(a,b);
        }
        else if (dir == 'd'){
            turnDown(a,b);
            Maze(a,b);
        }
        else if (dir == 'q'){
            break;
        }
        //else
        //    cout << "Wrong character. Try again!";
    }
    
    
    
    return 0;
    
}

//Functions declarations

void Maze(int a, int b){
    // building the playground (stone perimeter, wood inside)
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            playground[i][j].x=i;
            playground[i][j].y=j;
            playground[i][j].isWall=(j==0||i==(n-1)||(i==0&&j!=3)||j==(m-1));
            if (playground[i][j].isWall && !(j==3 && i==0))
                playground[i][j].type=stone;
            else if (playground[i][j].x == b && playground[i][j].y == a)
                playground[i][j].type=player;
            else
                playground[i][j].type=wood;
        }
    }
    
    // printing the playground
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << character(playground[i][j].type);
        }
        cout << endl;
    }
}


void turnRight(int & a, int & b){
    
    if (a==m-2){
        //a = a;
        //cout << "You cannot go out of the playground!" << endl;
    }
    else
        a++;
    //cout << "x = " << a << ", y = " << b << endl;
    
}

void turnLeft(int & a, int & b){
    
    if (a==1){
        //a = a;
        //cout << "You cannot go out of the playground!" << endl;
    }
    else
        a--;
    //cout << "x = " << a << ", y = " << b << endl;
    
}

void turnUp(int & a, int & b){
    
    if (b==1 && a!=3){
        //b = b;
        //cout << "You cannot go out of the playground!" << endl;
    }
    else
        b--;
    //cout << "x = " << a << ", y = " << b << endl;
    
}

void turnDown(int & a, int & b){
    
    if (b==(n-2)){
        //b = b;
        //cout << "You cannot go out of the playground!" << endl;
    }
    else
        b++;
    //cout << "x = " << a << ", y = " << b << endl;
    
}
