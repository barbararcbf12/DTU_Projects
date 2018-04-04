#include <iostream>
#include <deque>
#include <iomanip>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>
#include<algorithm>
using namespace std;

class Tree {
public:
    Tree(int x); // constructor
    ~Tree(); // destructor
    //void insert(int n); // insert an int
    int size(void); // size of the tree
    
    void traverse_pre(); // print nodes in pre-order
    int depth(void);
    int numberOfLeafs();
    
private:
    bool empty; // flag to specify it tree is empty
    int content; // content of the node
    Tree *left; // pointer to left sub-tree
    Tree *right; // pointer to right sub-tree
};

Tree::Tree(int x) {
    //content = x;
    
    if (x==0 || x==1){
        content = 1;
        left = nullptr;
        right = nullptr;
    }
    else if (x > 1){
        left = new Tree(x - 1);
        right = new Tree(x - 2);
        content = left->content + right->content;
    }
}

Tree::~Tree() {
    if (left != nullptr){
        delete left;
    }
    if (right != nullptr){
        delete right;
    }
}

int Tree::size(void) {
    // The size of an empty tree is 0
    if (right==nullptr && left==nullptr)
        return 1;
    // The size of a non-empty tree is 1 (the root)
    // plus the size of the subtrees
    //int a = left->size() + right->size();
    return (1+ left->size() + right->size());
}

// Methods that implement the pre traversal methods

void Tree::traverse_pre( ) {
    
    if (left == nullptr && right == nullptr)
        cout << content << " ";
    else{
        cout << content << " ";
        left->traverse_pre();
        right->traverse_pre();
    }
}

int Tree::depth(void) {
    
    if (left == nullptr || right == nullptr) return 1;
    // The height of a non-empty tree is 1 (the root)
    // plus the maximum of the heights of the subtrees
    
    return ( max(left->depth(), right->depth())+1);
}

int Tree::numberOfLeafs(void) {
    int leaves = 0;
    if (right != nullptr && left != nullptr) {
        leaves += left->numberOfLeafs();
        leaves += right->numberOfLeafs();
    }
    else {
        return 1;
    }
    return leaves;
}

int main()
{
    //Tree T1;
    int n, i = 0;
    //std::vector<int> a;
    //cout << "Input the number of terms for Fibonacci Series:";
    cin >> n;
    Tree T1(n);
    
    cout << endl;
    
    cout << "Call tree in pre-order: ";
    T1.traverse_pre();
    cout << endl;
    
    
    cout << "Call tree size: " << T1.size() << endl;
    cout << "Call tree depth: " << T1.depth() << endl;
    cout << "Call tree leafs: " << T1.numberOfLeafs()<<endl;
    
    system("pause");
    return 0;
}

