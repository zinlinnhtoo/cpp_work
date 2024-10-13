#include <iostream>
#include "Child.h"

using namespace std;

int main() {
    
    Child child1(4); 
    Child child2(9);

    child1.addMarbles(2);
    child2.removeMarbles(2);

    cout << "After Game 1:" << endl;
    cout << "Child 1 has: " << child1.getMarbles() << " marbles" << endl;
    cout << "Child 2 has: " << child2.getMarbles() << " marbles" << endl;

    child2.addMarbles(7);
    child1.removeMarbles(7);

    cout << "After Game 2:" << endl;
    cout << "Child 1 has: " << child1.getMarbles() << " marbles" << endl;
    cout << "Child 2 has: " << child2.getMarbles() << " marbles" << endl;

    return 0;
}
