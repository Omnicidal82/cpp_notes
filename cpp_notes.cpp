/* Notes
Indentation: 1 tab is 4 spaces
Keep lines to 79 or less chars
Break sections of code with single blank line space

Naming
Variables: variable_name
Function: functionName
Constant: CONSTANT_NAME
Class: ClassName
Method: methodName
File: file_name.cpp

Escape characters
   \"      Double Quote
   \'      Single Quote    
   \\      Backslash   
   \n      New Line    
   \r      Carriage Return  
   \t      Tab 
   \b      Backspace    
   \f      Form Feed    
   \ooo    Octal value  
   \xhh    Hex value

Mathematical operators
   +       Addition
   -       Subtraction
   *       Multiplication
   /       Division  
   %       Modulus    
   ^       Bitwise XOR
   &       Bitwise AND
   |       Bitwise OR
   ~       Bitwise NOT
   <<      Left shift
   >>      Right shift

Comparison operators
   ==      Equal to
   !=      Not equal to
   >       Greater than    
   <       Less than    
   >=      Greater than or equal to    
   <=      Less than or equal to

Assignment Operators
   Op      e.g.        Same as 
   =       x = 5       x = 5
   ++      x++         x = x + 1 
   --      x--         x = x - 1    
   +=      x += 3      x = x + 3    
   -=      x -= 3      x = x - 3    
   *=      x *= 3      x = x * 3    
   /=      x /= 3      x = x / 3    
   %=      x %= 3      x = x % 3    
   ^=      x ^= 3      x = x ^ 3    
   &=      x &= 3      x = x & 3    
   |=      x |= 3      x = x | 3    
   >>=     x >>= 3     x = x >> 3    
   <<=     x <<= 3     x = x << 3

Variables and simple data types
Data Type   Example             Size 64bit (bytes)
bool        bool x = true;      1
char        char x = 'a';       1
int         int x = 10;         4
float       float x = 5.3f;     4
double      double x = 5.3;     8
wchar_t     wchar_t x = L'a';   4
string      string x = "hello"; 1 per ASCII char
*/

//Create copies of variables by value and reference
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


//Display message
#include <iostream>

int main() {

	std::cout << "This is a simple message 1" << std::endl;

}

/*
Output:
This is a simple message 1
*/


//VARIABLES

//Display string using Variable
#include <iostream>

int main() {

	std::string message = "This is a simple message 2";
	std::cout << message << std::endl;

}

/*
Output:
This is a simple message 2
*/


//Display strings by changing variable
#include <iostream>

int main() {

	std::string message = "This is a simple message 3";
	std::cout << message << std::endl;

	message = "This is another simple message 3";
	std::cout << message << std::endl;

}

/*
Output:
This is a simple message 3
This is another simple message 3
*/


//STRINGS

//string concatenation
#include <iostream>

int main() {

	std::string name = "Example Name";
	std::cout << "Hello " << name << ", this is your message" << std::endl;

}

/*
Output:
Hello example name, this is your message
*/


//Displaying " in strings
#include <iostream>

int main() {

	std::string name = "Example Name";
	std::cout << name << " once said \"I wish I was better at coding\"" << std::endl;

}

/*
Output:
Example Name once said "I wish I was better at coding"
*/


//Using multiple techniques
#include <iostream>

int main() {

	std::string name = "Example Name";
	std::string quote = "I wish I was better at coding";
	std::string message = "The great " + name + " once said \"" + quote + "\"";
	std::cout << message << std::endl;

}

/*
Output:
The Great Example name once said "I wish I was better at coding"
*/


//NUMBERS

//Use ' to break up large numbers for ease to read/write
//Note: This feature is available in C++14 and later
#include <iostream>

int main() {

	std::cout << 5'000'000 << std::endl;

}

/*
Output:
5000000
*/


//Addition, subtraction, multiplication, division, exponent
#include <iostream>
#include <cmath>

int main() {

	std::cout << 5 + 3 << std::endl;
	std::cout << 10 - 2 << std::endl;
	std::cout << 4 * 2 << std::endl;
	std::cout << 16 / 2 << std::endl;
	//For exponentiation use the pow function
	std::cout << pow(2, 3) << std::endl;

}

/*
Output:
8
8
8
8
8
*/


//Using variable to store and display numbers
//Use comma to declare and initialise multiple variables
#include <iostream>

int main() {

	int first_no = 5, second_no = 8;
	std::cout << "The first number is " << first_no << " and the second is " << second_no << std::endl;

}

/*
Output:
The first number is 5 and the second is 8
*/


//VECTORS & ARRAYS

//Array accessed same as vector but size cannot be changed

int main() {
    int array_name[5] = {1, 2, 3, 4, 5};

    return 0;
}


//Accessing list (All items) and displaying its length
#include <iostream>
#include <vector>

int main() {    
    std::vector<std::string> names = {"person1", "person2", "person3"};
    std::cout << "Contents: ";
    for(const auto& name : names) {
        std::cout << name << ", ";
    }
    std::cout << "length: " << names.size() << std::endl;

    return 0;
}

/*
Output:
Contents: person1, person2, person3, length: 3
*/


//Accessing list (Individual elements)
#include <iostream>
#include <vector>

int main() {    
    std::vector<std::string> names = {"person1", "person2", "person3"};
    
    std::cout << names[0] << " is 1st in the list" << std::endl;
    std::cout << names[1] << " is 2nd in the list" << std::endl;
    std::cout << names[2] << " is 3rd in the list" << std::endl;
    std::cout << names[names.size()-1] << " is last in the list" << std::endl;

    return 0;
}

/*
Output:
person1 is 1st in the list
person2 is 2nd in the list
person3 is 3rd in the list
person3 is last in the list
*/


//Modifying, adding, removing elements
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    
    std::vector<std::string> items = {"item1", "item2", "item3"};
    std::cout << "This is the initial list: ";
    for(const auto& item : items) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    //Replace item 2
    std::cout << items[1] << " will now be replaced with item4:" << std::endl;
    items[1] = "item4";

    std::cout << "This is the new list: ";
    for(const auto& item : items) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    //Adding new items to list
    
    //Insert new item to beginning of list
    items.insert(items.begin(), "item5");
    std::cout << "item5 has been added to the start of the list" << std::endl;

    //Insert new item to the 2nd position in the list
    items.insert(items.begin() + 1, "item6");
    std::cout << "item6 has been inserted in the 2nd position" << std::endl;

    //Append new item to end of list
    items.push_back("item7");
    std::cout << "item7 has been appended to the end of the list" << std::endl;

    std::cout << "This is the final list: ";
    for(const auto& item : items) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    //Removing items from list

    //Pop last
    std::string item_to_remove = items.back();
    items.pop_back();
    std::cout << item_to_remove << " has been pop removed from the end of the list" << std::endl;

    //Remove by value
    items.erase(std::remove(items.begin(), items.end(), "item3"), items.end());
    std::cout << "The first (only) instance of item3 has been removed from the list" << std::endl;

    //Del by position
    items.erase(items.end() - 1);
    std::cout << "The last item has now been deleted" << std::endl;
    items.erase(items.begin() + 1);
    std::cout << "The 2nd item has now been deleted" << std::endl;
    items.erase(items.begin());
    std::cout << "The 1st item has now been deleted" << std::endl;

    //Clear all items
    std::cout << "Any remailing items will now be deleted" << std::endl;
    items.clear();    

    std::cout << "The list is now empty: ";
    for(const auto& item : items) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*
Output:
This is the initial list: item1 item2 item3 
item2 will now be replaced with item4:
This is the new list: item1 item4 item3 
item5 has been added to the start of the list
item6 has been inserted in the 2nd position
item7 has been appended to the end of the list
This is the final list: item5 item6 item1 item4 item3 item7 
item7 has been pop removed from the end of the list
The first (only) instance of item3 has been removed from the list
The last item has now been deleted
The 2nd item has now been deleted
The 1st item has now been deleted
Any remailing items will now be deleted
The list is now empty: 
*/


//Sorting lists

#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> items = {"F", "D", "A", "E", "C", "B"};

    std::cout << "This is the initial list: ";
    for (const auto& item : items) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    //Reversing the list
    std::reverse(items.begin(), items.end());
    std::cout << "Reversing the list changes it to: ";
    for (const auto& item : items) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    std::reverse(items.begin(), items.end());
    std::cout << "Reversing it again changes it back to: ";
    for (const auto& item : items) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    //Sort list into alphabetical order
    std::sort(items.begin(), items.end());
    std::cout << "The list sorted into alphabetical order is: ";
    for (const auto& item : items) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    //Sort list in reverse alphabetical order
    std::sort(items.begin(), items.end(), std::greater<>());
    std::cout << "The list sorted into reverse alphabetical order is: ";
    for (const auto& item : items) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*
Output:
This is the initial list: F D A E C B 
Reversing the list changes it to: B C E A D F 
Reversing it again changes it back to: F D A E C B 
The list sorted into alphabetical order is: A B C D E F 
The list sorted into reverse alphabetical order is: F E D C B A 
*/


//Looping through entire list
#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> items = {"F", "D", "A", "E", "C", "B"};

    //Looping through entire list
    std::cout << "This is the initial list: ";
    for (const auto& item : items) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    // Loop through and display each item
    for (size_t i = 0; i < items.size(); ++i) {
        std::cout << "Item " << i << " in the list is " << items[i] << std::endl;
    }
    // Display a message after the loop
    std::cout << "That is the contents of items" << std::endl;

    return 0;
}

/*
Output:
This is the initial list: F D A E C B 
Item 0 in the list is F
Item 1 in the list is D
Item 2 in the list is A
Item 3 in the list is E
Item 4 in the list is C
Item 5 in the list is B
That is the contents of items
*/


//Looping through range of list values
#include <iostream>
#include <algorithm>

int main() {
    //Loop through and display each item within range
    for (int value = 1; value < 4; ++value) {
        std::cout << value << " is within 1-4" << std::endl;
    }
    // Display a message after the loop
    std::cout << "All other values (including 4) are not within 1-4 range"<< std::endl;

    return 0;
}

/*
Output:
1 is within 1-4
2 is within 1-4
3 is within 1-4
All other items (including 4) are not within 1-4 range
*/

//Lists from for loops

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    // Create list of values from 1 to 10
    std::vector<int> values;
    for (int i = 1; i <= 10; ++i) {
        values.push_back(i);
    }

    std::cout << "All numbers from 1 to 10 are: ";
    for (const auto& value : values) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Select the lowest value
    std::cout << "The lowest value is: " << *std::min_element(values.begin(), values.end()) << std::endl;

    // Select the highest value
    std::cout << "The highest value is: " << *std::max_element(values.begin(), values.end()) << std::endl;

    // Show total sum of values in list
    std::cout << "The total sum is: " << std::accumulate(values.begin(), values.end(), 0) << std::endl;

    // Create list of even numbers between 1 and 10
    std::vector<int> even_values;
    for (int i = 2; i <= 10; i += 2) {
        even_values.push_back(i);
    }

    std::cout << "Even numbers from 1 to 10 are: ";
    for (const auto& value : even_values) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Create list of odd numbers between 1 and 10
    std::vector<int> odd_values;
    for (int i = 1; i <= 10; i += 2) {
        odd_values.push_back(i);
    }

    std::cout << "Odd numbers from 1 to 10 are: ";
    for (const auto& value : odd_values) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Create list of multiples of 3 between 1 and 30
    std::vector<int> multiples_of_3;
    for (int i = 3; i <= 30; i += 3) {
        multiples_of_3.push_back(i);
    }

    std::cout << "Multiples of 3 between 1 and 30 are: ";
    for (const auto& value : multiples_of_3) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Create list of first 10 square numbers
    std::vector<int> square_values;
    for (int i = 1; i <= 10; ++i) {
        square_values.push_back(i * i);
    }

    std::cout << "The first 10 square numbers are: ";
    for (const auto& value : square_values) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Create list of first 10 cube numbers
    std::vector<int> cube_values;
    for (int i = 1; i <= 10; ++i) {
        cube_values.push_back(i * i * i);
    }

    std::cout << "The first 10 cube numbers are: ";
    for (const auto& value : cube_values) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*
Output:
All numbers from 1 to 10 are: 1 2 3 4 5 6 7 8 9 10 
The lowest value is: 1
The highest value is: 10
The total sum is: 55
Even numbers from 1 to 10 are: 2 4 6 8 10 
Odd numbers from 1 to 10 are: 1 3 5 7 9 
Multiples of 3 between 1 and 30 are: 3 6 9 12 15 18 21 24 27 30 
The first 10 square numbers are: 1 4 9 16 25 36 49 64 81 100 
The first 10 cube numbers are: 1 8 27 64 125 216 343 512 729 1000 
*/


//Working with part of a list and copying lists
#include <iostream>
#include <vector>

int main() {    
    std::vector<std::string> list_name = {"a", "b", "c", "d", "e", "f"};

    std::cout << "The full list is: ";
    for (const auto& item : list_name) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    //Displaying slices of a list
    std::cout << "The 1st 3 items are: ";
    for (auto it = list_name.begin(); it != list_name.begin() + 3; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "The middle 2 items are: ";
    for (auto it = list_name.begin() + 2; it != list_name.begin() + 4; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "The last 3 items are: ";
    for (auto it = list_name.end() - 3; it != list_name.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

// Making a Reference copy of a list
    std::vector<std::string>& ref_of_list_name = list_name;

    std::cout << "The original list is: ";
    for (const auto& item : list_name) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    std::cout << "The reference copy list is: ";
    for (const auto& item : ref_of_list_name) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    list_name.push_back("g");
    ref_of_list_name.push_back("h");

    std::cout << "The original list is: ";
    for (const auto& item : list_name) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    std::cout << "The reference copy list is: ";
    for (const auto& item : ref_of_list_name) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    // Making a copy of a list
    std::vector<std::string> copy_of_list_name = list_name;

    std::cout << "The original list is: ";
    for (const auto& item : list_name) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    std::cout << "The copy list is: ";
    for (const auto& item : copy_of_list_name) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    list_name.push_back("i");
    copy_of_list_name.push_back("j");

    std::cout << "The original list is: ";
    for (const auto& item : list_name) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    std::cout << "The copy list is: ";
    for (const auto& item : copy_of_list_name) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*
Output:
The full list is: a b c d e f 
The 1st 3 items are: a b c 
The middle 2 items are: c d 
The last 3 items are: d e f 
The original list is: a b c d e f 
The reference copy list is: a b c d e f 
The original list is: a b c d e f g h 
The reference copy list is: a b c d e f g h 
The original list is: a b c d e f g h 
The copy list is: a b c d e f g h 
The original list is: a b c d e f g h i 
The copy list is: a b c d e f g h j 
*/