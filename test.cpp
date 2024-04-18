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
