#include <iostream>

int main() {    
    int a = 5;

    //Copy by value
    int copy_of_a = a;

    //copy by reference
    int& ref_of_a = a;

    std::cout << "a is: " << a << std::endl;
    std::cout << "Copy of a is: " << copy_of_a << std::endl;
    std::cout << "Reference of a is: " << ref_of_a << std::endl;

    //Change original
    a = 6;

    std::cout << "a is now: " << a << std::endl;
    std::cout << "Copy of a is still: " << copy_of_a << std::endl;
    std::cout << "Reference of a is now: " << ref_of_a << std::endl;

    //Change copy
    copy_of_a = 7;

    std::cout << "a is still: " << a << std::endl;
    std::cout << "Copy of a is now: " << copy_of_a << std::endl;
    std::cout << "Reference of a is still: " << ref_of_a << std::endl;

    //Change reference
    ref_of_a = 8;

    std::cout << "a is now: " << a << std::endl;
    std::cout << "Copy of a is still: " << copy_of_a << std::endl;
    std::cout << "Reference of a is now: " << ref_of_a << std::endl;

    return 0;
}

/*
Output:
a is: 5
Copy of a is: 5
Reference of a is: 5
a is now: 6
Copy of a is still: 5
Reference of a is now: 6
a is still: 6
Copy of a is now: 7
Reference of a is still: 6
a is now: 8
Copy of a is still: 7
Reference of a is now: 8
*/