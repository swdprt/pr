//https://pynative.com/cpp-string-exercises/

import std;

int main() {
    int task = 0;
    std::println("Enter task number: ");
    std::cin >> task;

    switch (task) {
    case 1: {
        std::println("TASK 1");
        std::string string;
        std::print("Enter a string: ");
        std::cin>>string;
        int length = string.length();

        std::print("\nThe length of the string is: {}", length);
        break;
    } case 2: {
        std::println("TASK 2");
        std::string first;
        std::string second;
        std::println("Enter the first string: ");
        std::cin >> first;
        std::println("Enter the second string: ");
        std::cin >> second;
        std::string three = first + " "+ second;
        std::println("The combined string is: {}", three);
        break;
    } case 3: {
        std::println("TASK 3");
        std::string string = "PYnative";
        int length = string.length();
        std::println("First character: {}\nLast character : {}", string[0], string[length-1]);
        break;
    } case 4: {
        std::println("TASK 4");
        std::string text = "PYnative";
        char target_char = 't';
        for (int i = 0; i < text.length(); i++) {
            if (text[i] == target_char) {
                std::println("SUCCESS: The character '{}' was found at index {}.", target_char, i);
            } 
        }
        break;
    } case 5: {
        std::println("TASK 5");
        std::string original_string = "Hello, C++ World!";
        std::string copied_string = original_string;
        original_string = "The original string has been changed.";
        std::println("Original String (after modification): {}", original_string);
        std::println("Copied String (remains unchanged): {}", copied_string);
        break;
    } case 6: {
        std::println("TASK 6");
        std::string original_string = "PYnative";
        std::println("Original string: {}", original_string);
        std::print("Reversed string: ");
        for (int i = original_string.length() - 1; i >= 0; i--) {
            std::print("{}", original_string[i]);
        }
        break;
    } case 7: {
        std::println("TASK 7");

        break;
    }
    }
    return 0;
}