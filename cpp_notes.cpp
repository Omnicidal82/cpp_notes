// Notes
// Indentation: 1 tab is 4 spaces
// Keep lines to 79 or less chars
// Break sections of code with single blank line space

// Naming
// Variables: variable_name
// Function: functionName
// Constant: CONSTANT_NAME
// Class: ClassName
// Method: methodName
// File: file_name.cpp

// Escape characters
//   \"      Double Quote
//   \'      Single Quote    
//   \\      Backslash   
//   \n      New Line    
//   \r      Carriage Return  
//   \t      Tab 
//   \b      Backspace    
//   \f      Form Feed    
//   \ooo    Octal value  
//   \xhh    Hex value

// Mathematical operators
//   +       Addition
//   -       Subtraction
//   *       Multiplication
//   /       Division  
//   %       Modulus    
//   ^       Bitwise XOR
//   &       Bitwise AND
//   |       Bitwise OR
//   ~       Bitwise NOT
//   <<      Left shift
//   >>      Right shift

// Comparison operators
//   ==      Equal to
//   !=      Not equal to
//   >       Greater than    
//   <       Less than    
//   >=      Greater than or equal to    
//   <=      Less than or equal to

// Assignment Operators
//   Op      e.g.        Same as 
//   =       x = 5       x = 5
//   ++      x++         x = x + 1 
//   --      x--         x = x - 1    
//   +=      x += 3      x = x + 3    
//   -=      x -= 3      x = x - 3    
//   *=      x *= 3      x = x * 3    
//   /=      x /= 3      x = x / 3    
//   %=      x %= 3      x = x % 3    
//   ^=      x ^= 3      x = x ^ 3    
//   &=      x &= 3      x = x & 3    
//   |=      x |= 3      x = x | 3    
//   >>=     x >>= 3     x = x >> 3    
//   <<=     x <<= 3     x = x << 3

// Variables and simple data types

// Display message
#include <iostream>

int main() {

	std::cout << "This is a simple message 1" << std::endl;

}

// Output:
// >>This is a simple message 1


// VARIABLES
// Display string using Variable
#include <iostream>

int main() {

	std::string message = "This is a simple message 2";
	std::cout << message << std::endl;

}

// Output:
// >>This is a simple message 2


// Display strings by changing variable
#include <iostream>

int main() {

	std::string message = "This is a simple message 3";
	std::cout << message << std::endl;

	message = "This is another simple message 3";
	std::cout << message << std::endl;

}

// Output:
// >>This is a simple message 3
// >>This is another simple message 3


// STRINGS
// string concatenation
#include <iostream>

int main() {

	std::string name = "Example Name";
	std::cout << "Hello " << name << ", this is your message" << std::endl;

}

// Output:
// >>Hello example name, this is your message


// Displaying " in strings
#include <iostream>

int main() {

	std::string name = "Example Name";
	std::cout << '\n' << name << " once said \"I wish I was better at coding\"" << std::endl;

}

// Output:
// >>Example Name once said "I wish I was better at coding"


// Using multiple techniques
#include <iostream>

int main() {

	std::string name = "Example Name";
	std::string quote = "I wish I was better at coding";
	std::string message = "The great " + name + " once said \"" + quote + "\"";
	std::cout << message << std::endl;

}

// Output:
// >>The Great Example name once said "I wish I was better at coding"


// NUMBERS

// Use ' to break up large numbers for ease to read/write
// Note: This feature is available in C++14 and later
#include <iostream>

int main() {

	std::cout << 5'000'000 << std::endl;

}

// Output:
// >>5000000


// Addition, subtraction, multiplication, division, exponent
#include <iostream>
#include <cmath>

int main() {

	std::cout << 5 + 3 << std::endl;
	std::cout << 10 - 2 << std::endl;
	std::cout << 4 * 2 << std::endl;
	std::cout << 16 / 2 << std::endl;
	// For exponentiation use the pow function
	std::cout << pow(2, 3) << std::endl;

}

// Output:
// >>8
// >>8
// >>8
// >>8
// >>8


// Using variable to store and display numbers
// Use comma to declare and initialise multiple variables
#include <iostream>

int main() {

	int first_no = 5, second_no = 8;
	std::cout << "The first number is " << first_no << " and the second is " << second_no << std::endl;

}

// Output:
// >>The first number is 5 and the second is 8


// VECTORS & ARRAYS

//Array accessed same as vector but size cannot be changed

int main() {
    int array_name[5] = {1, 2, 3, 4, 5};

    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Accessing list (All items) and displaying its length
    std::vector<std::string> names = {"person1", "person2", "person3"};
    std::cout << "Contents: ";
    for(const auto& name : names) {
        std::cout << name << " ";
    }
    std::cout << "length: " << names.size() << "\n";

    // Accessing list (Individual elements)
    std::cout << "\n" << names[0] << " is 1st in the list\n";
    std::cout << names[1] << " is 2nd in the list\n";
    std::cout << names[2] << " is 3rd in the list\n";
    std::cout << names[names.size()-1] << " is last in the list\n";

    // Modifying, adding, removing elements
    std::vector<std::string> items = {"item1", "item2", "item3"};
    std::cout << "This is the initial list: ";
    for(const auto& item : items) {
        std::cout << item << " ";
    }
    std::cout << "\n";

    // Replace item 2
    std::cout << items[1] << " will now be replaced with item4:\n";
    items[1] = "item4";

    std::cout << "This is the new list: ";
    for(const auto& item : items) {
        std::cout << item << " ";
    }
    std::cout << "\n";

    // Add new items to list
    // Insert new item to beginning of list
    items.insert(items.begin(), "item5");
    std::cout << "item5 has been added to the start of the list\n";

    // Insert new item to the 2nd position in the list
    items.insert(items.begin() + 1, "item6");
    std::cout << "item6 has been inserted in the 2nd position\n";

    // Append new item to end of list
    items.push_back("item7");
    std::cout << "item7 has been appended to the end of the list\n";

    std::cout << "This is the final list: ";
    for(const auto& item : items) {
        std::cout << item << " ";
    }
    std::cout << "\n";

    // Remove items from list
    // Pop last
    std::string item_to_remove = items.back();
    items.pop_back();
    std::cout << item_to_remove << " has been pop removed from the end of the list\n";

    // Pop position
    item_to_remove = items[1];
    items.erase(items.begin() + 1);
    std::cout << item_to_remove << " has been pop removed from the 2nd position of the list\n";
    item_to_remove = items[0];
    items.erase(items.begin());
    std::cout << item_to_remove << " has been pop removed from the start of the list\n";

    // Remove by value
    items.erase(std::remove(items.begin(), items.end(), "item3"), items.end());
    std::cout << "The first (only) instance of item3 has been removed from the list\n";

    // Del by position
    items.erase(items.begin() + 1);
    std::cout << "The 2nd item has now been deleted\n";
    items.erase(items.begin());
    std::cout << "The 1st item has now been deleted\n";

    std::cout << "The list is now empty: ";
    for(const auto& item : items) {
        std::cout << item << " ";
    }
    std::cout << "\n";

    return 0;
}

//Output:
//>Contents: person1 person2 person3 length: 3
//>
//>person1 is 1st in the list
//>person2 is 2nd in the list
//>person3 is 3rd in the list
//>person3 is last in the list
//>This is the initial list: item1 item2 item3 
//>item2 will now be replaced with item4:
//>This is the new list: item1 item4 item3 
//>item5 has been added to the start of the list
//>item6 has been inserted in the 2nd position
//>item7 has been appended to the end of the list
//>This is the final list: item5 item6 item1 item4 item3 item7 
//>item7 has been pop removed from the end of the list
//>item6 has been pop removed from the 2nd position of the list
//>item5 has been pop removed from the start of the list
//>The first (only) instance of item3 has been removed from the list
//>The 2nd item has now been deleted
//>The 1st item has now been deleted
//>The list is now empty:

//Sorting lists

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Sorting lists
    std::vector<std::string> items = {"F", "D", "A", "E", "C", "B"};

    std::cout << "\nThis is the initial list: ";
    for (const auto& item : items) {
        std::cout << item << " ";
    }

    // Display list in alphabetical order
    std::vector<std::string> sorted_items = items;
    std::sort(sorted_items.begin(), sorted_items.end());
    std::cout << "\nThe list displayed in alphabetical order is: ";
    for (const auto& item : sorted_items) {
        std::cout << item << " ";
    }
    std::cout << "\nBut the actual list order remains: ";
    for (const auto& item : items) {
        std::cout << item << " ";
    }

    // Display list in reverse alphabetical order
    std::sort(sorted_items.begin(), sorted_items.end(), std::greater<>());
    std::cout << "\nDisplayed in reverse alphabetical order is: ";
    for (const auto& item : sorted_items) {
        std::cout << item << " ";
    }
    std::cout << "\nBut the actual list order remains: ";
    for (const auto& item : items) {
        std::cout << item << " ";
    }

    // Reversing the list
    std::reverse(items.begin(), items.end());
    std::cout << "\nReversing the list changes it to: ";
    for (const auto& item : items) {
        std::cout << item << " ";
    }
    std::reverse(items.begin(), items.end());
    std::cout << "\nReversing it again changes it back to: ";
    for (const auto& item : items) {
        std::cout << item << " ";
    }

    // Sorting the list
    std::sort(items.begin(), items.end());
    std::cout << "\nSorting the list changes it to: ";
    for (const auto& item : items) {
        std::cout << item << " ";
    }
    std::sort(items.begin(), items.end(), std::greater<>());
    std::cout << "\nSorting in reverse order changes it to: ";
    for (const auto& item : items) {
        std::cout << item << " ";
    }

    // Looping through entire list
    std::cout << "\n\nThis is the initial list: ";
    for (const auto& item : items) {
        std::cout << item << " ";
    }

    // Loop through and display each item
    for (size_t i = 0; i < items.size(); ++i) {
        std::cout << "\nItem " << i << " in the list is " << items[i];
    }
    // Display a message after the loop
    std::cout << "\nThat is the contents of items\n";

    // Looping through range of list values
    // Loop through and display each item within range
    std::cout << "\n";
    for (int value = 1; value < 4; ++value) {
        std::cout << value << " is within 1-4\n";
    }
    // Display a message after the loop
    std::cout << "All other items (including 4) are not within 1-4 range\n";

    return 0;
}

//Output:
//>This is the initial list: F D A E C B 
//>The list displayed in alphabetical order is: A B C D E F 
//>But the actual list order remains: F D A E C B 
//>Displayed in reverse alphabetical order is: F E D C B A 
//>But the actual list order remains: F D A E C B 
//>Reversing the list changes it to: B C E A D F 
//>Reversing it again changes it back to: F D A E C B 
//>Sorting the list changes it to: A B C D E F 
//>Sorting in reverse order changes it to: F E D C B A 
//>
//>This is the initial list: F E D C B A 
//>Item 0 in the list is F
//>Item 1 in the list is E
//>Item 2 in the list is D
//>Item 3 in the list is C
//>Item 4 in the list is B
//>Item 5 in the list is A
//>That is the contents of items
//>
//>1 is within 1-4
//>2 is within 1-4
//>3 is within 1-4
//>All other items (including 4) are not within 1-4 range


//Lists from for loops

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    // Lists from for loop
    // Create list of values from 1 to 10
    std::vector<int> values;
    for (int i = 1; i <= 10; ++i) {
        values.push_back(i);
    }

    std::cout << "\nAll numbers from 1 to 10 are: ";
    for (const auto& value : values) {
        std::cout << value << " ";
    }

    // Select the lowest value
    std::cout << "\nThe lowest value is: " << *std::min_element(values.begin(), values.end());

    // Select the highest value
    std::cout << "\nThe highest value is: " << *std::max_element(values.begin(), values.end());

    // Show total sum of values in list
    std::cout << "\nThe total sum is: " << std::accumulate(values.begin(), values.end(), 0);

    // Create list of even numbers between 1 and 10
    std::vector<int> even_values;
    for (int i = 2; i <= 10; i += 2) {
        even_values.push_back(i);
    }

    std::cout << "\n\nEven numbers from 1 to 10 are: ";
    for (const auto& value : even_values) {
        std::cout << value << " ";
    }

    // Create list of odd numbers between 1 and 10
    std::vector<int> odd_values;
    for (int i = 1; i <= 10; i += 2) {
        odd_values.push_back(i);
    }

    std::cout << "\n\nOdd numbers from 1 to 10 are: ";
    for (const auto& value : odd_values) {
        std::cout << value << " ";
    }

    // Create list of multiples of 3 between 1 and 30
    std::vector<int> multiples_of_3;
    for (int i = 3; i <= 30; i += 3) {
        multiples_of_3.push_back(i);
    }

    std::cout << "\n\nMultiples of 3 between 1 and 30 are: ";
    for (const auto& value : multiples_of_3) {
        std::cout << value << " ";
    }

    // Create list of first 10 square numbers
    std::vector<int> square_values;
    for (int i = 1; i <= 10; ++i) {
        square_values.push_back(i * i);
    }

    std::cout << "\n\nThe first 10 square numbers are: ";
    for (const auto& value : square_values) {
        std::cout << value << " ";
    }

    // Create list of first 10 cube numbers
    std::vector<int> cube_values;
    for (int i = 1; i <= 10; ++i) {
        cube_values.push_back(i * i * i);
    }

    std::cout << "\n\nThe first 10 cube numbers are: ";
    for (const auto& value : cube_values) {
        std::cout << value << " ";
    }

    // Working with part of a list and copying lists
    std::vector<std::string> list_name = {"a", "b", "c", "d", "e", "f"};

    std::cout << "\n\nThe full list is: ";
    for (const auto& item : list_name) {
        std::cout << item << " ";
    }

    // Displaying slices of a list
    std::cout << "\nThe 1st 3 items are: ";
    for (auto it = list_name.begin(); it != list_name.begin() + 3; ++it) {
        std::cout << *it << " ";
    }

    std::cout << "\nThe middle 2 items are: ";
    for (auto it = list_name.begin() + 2; it != list_name.begin() + 4; ++it) {
        std::cout << *it << " ";
    }

    std::cout << "\nThe last 3 items are: ";
    for (auto it = list_name.end() - 3; it != list_name.end(); ++it) {
        std::cout << *it << " ";
    }

    // Making a `reference` copy of a list
    std::vector<std::string> copy_of_list_name = list_name;

    std::cout << "\n\nThe original list is: ";
    for (const auto& item : list_name) {
        std::cout << item << " ";
    }
    std::cout << "\nThe copy list is: ";
    for (const auto& item : copy_of_list_name) {
        std::cout << item << " ";
    }

    list_name.push_back("G");
    copy_of_list_name.push_back("f");

    std::cout << "\n\nThe original list is: ";
    for (const auto& item : list_name) {
        std::cout << item << " ";
    }
    std::cout << "\nThe copy list is: ";
    for (const auto& item : copy_of_list_name) {
        std::cout << item << " ";
    }

    // Making a copy of a list
    copy_of_list_name = list_name;

    std::cout << "\n\nThe original list is: ";
    for (const auto& item : list_name) {
        std::cout << item << " ";
    }
    std::cout << "\nThe copy list is: ";
    for (const auto& item : copy_of_list_name) {
        std::cout << item << " ";
    }

    list_name.push_back("H");
    copy_of_list_name.push_back("I");

    std::cout << "\n\nThe original list is: ";
    for (const auto& item : list_name) {
        std::cout << item << " ";
    }
    std::cout << "\nThe copy list is: ";
    for (const auto& item : copy_of_list_name) {
        std::cout << item << " ";
    }

    return 0;
}

//Output:
//>All numbers from 1 to 10 are: 1 2 3 4 5 6 7 8 9 10 
//>The lowest value is: 1
//>The highest value is: 10
//>The total sum is: 55
//>
//>Even numbers from 1 to 10 are: 2 4 6 8 10 
//>
//>Odd numbers from 1 to 10 are: 1 3 5 7 9 
//>
//>Multiples of 3 between 1 and 30 are: 3 6 9 12 15 18 21 24 27 30 
//>
//>The first 10 square numbers are: 1 4 9 16 25 36 49 64 81 100 
//>
//>The first 10 cube numbers are: 1 8 27 64 125 216 343 512 729 1000 
//>
//>The full list is: a b c d e f 
//>The 1st 3 items are: a b c 
//>The middle 2 items are: c d 
//>The last 3 items are: d e f 
//>
//>The original list is: a b c d e f 
//>The copy list is: a b c d e f 
//>
//>The original list is: a b c d e f G 
//>The copy list is: a b c d e f f 
//>
//>The original list is: a b c d e f G 
//>The copy list is: a b c d e f G 
//>
//>The original list is: a b c d e f G H 
//>The copy list is: a b c d e f G I

