#include <iostream>
#include "MyList.h"
int main() {
    LinkedList<int> list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);

    std::cout << "List: ";
    list.display(); // Output: List: 1 2 3 4

    list.remove(3);

    std::cout << "List after removing 3: ";
    list.display(); // Output: List after removing 3: 1 2 4

    std::cout << "Is 2 in the list? " << (list.find(2) ? "Yes" : "No") << std::endl; // Output: Is 2 in the list? Yes
    std::cout << "Is 5 in the list? " << (list.find(5) ? "Yes" : "No") << std::endl; // Output: Is 5 in the list? No

    return 0;
}