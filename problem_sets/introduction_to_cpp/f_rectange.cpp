#include<iostream>
using namespace std;

int main() {
    int length;
    int breadth; 
    cout << "Enter Rectangle Length:" << endl;
    cin >>  length;
    cout << "Enter Rectangle Breadth:" << endl;
    cin >>  breadth;
    cout << "Area = " << length * breadth << endl;
    cout << "Perimeter = "<<  2 * (length + breadth) << endl ;
}
 