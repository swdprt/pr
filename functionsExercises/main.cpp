//https://pynative.com/cpp-function-exercises/

import std;

//TASK 1
int add(int a, int b) {
    return a + b;
}

//TASK 2
void swap_value(int a, int b) {
    int c = a;
    a = b;
    b = c;
    std::println("Inside swap_value function: a = {}, b = {}", a, b);
}

//TASK 3
void swap_reference(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
    std::println("Inside swap_value function: a = {}, b = {}", a, b);
}

//TASK 4
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::print("{} ", arr[i]);
    };
}

//TASK 5
void set_to_zero(int arr[], int index) {
    arr[index] = 0;
}

//TASK 6
double area(double length, double width) {
    return length * width;
}
double area(double side) {
    return side * side;
}

//TASK 7
double power(double base, int exponent = 2) {
    double res = 1;
    while (exponent != 0) {
        res *= base;
        exponent -= 1;
    };
    return res;
}

//TASK 8
int factorial(int n) {
    int fact = 1;
    if (n == 0) {
        fact = 1;
    }
    else {
        for (int i = 1; i <= n; i++) {
            fact *= i;
        };
    };
    return fact;
}

//TASK 9
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

//TASK 10
inline int add2(int a, int b) {
    return a + b;
}

//TASK 11
int maxOf(int a, int b) {
    return (a > b) ? a : b;
}

//TASK 12
int subtract(int a, int b) {
    return a - b;
}
int execute_operation(int a, int b, int (*operation)(int, int)) {
    return operation(a, b);
}

//TASK 13
template<typename T> T max_value(T a, T b) {
    return (a > b) ? a : b;
}

//TASK 14
template<typename T> void swap_generic(T& a, T& b) {
    T c = a;
    a = b;
    b = c;
}

//TASK 15
void print_string(const std::string& s) {
    std::print("{}", s);
}

//TASK 16
bool is_prime(int n) {
    if (n < 2) return false;

    for (int i = 2; i <= std::sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        };
    };
    return true;
}

//TASK 17
int sum_vector(const std::vector<int>& vec) {
    int sum = 0;
    for (int element: vec) {
        sum += element;
    };
    return sum;
}

int main() {
    int task = 0;
    std::println("Enter task number: ");
    std::cin >> task;

    switch (task) {
    case 1: {
        std::println("TASK 1");
        int a = 15;
        int b = 27;
        std::println("The sum of {} and {} is: {}", a, b, add(a, b));
        std::println("3 + 7 = {}", add(3, 7));
        break;
    }
    case 2: {
        std::println("TASK 2");
        int x = 10;
        int y = 20;
        std::println("Before call: x = {}, y = {}", x, y);
        swap_value(x, y);
        std::println("After call: x = {}, y = {}", x, y);
        break;
    }
    case 3: {
        std::println("TASK 3");
        int x = 10;
        int y = 20;
        std::println("Before call: x = {}, y = {}", x, y);
        swap_reference(x, y);
        std::println("After call: x = {}, y = {}", x, y);
        break;
    }
    case 4: {
        std::println("TASK 4");
        int numbers[] = { 10, 20, 30, 40, 50 };
        int size = sizeof(numbers) / sizeof(numbers[0]);
        std::print("Array elements: ");
        print_array(numbers, size);
        break;
    }
    case 5: {
        std::println("TASK 5");
        int data[] = { 1, 2, 3, 4, 5 };
        int target_index = 2;
        int size = sizeof(data) / sizeof(data[0]);
        std::println("Original Array: ");
        print_array(data, size);
        set_to_zero(data, target_index);
        std::println("\nModified Array: ");
        print_array(data, size);
        break;
    }
    case 6: {
        std::println("TASK 6");
        double length = 10.0;
        double width = 5.0;
        double side = 7.0;
        std::println("Area of rectangle ({}x{}): {}", length, width, area(length, width));
        std::println("Area of square ({}x{}): {}", side, side, area(side));
        break;
    }
    case 7: {
        std::println("TASK 7");
        double base1 = 7;
        int exp1 = 3;
        double base2 = 5;
        std::println("{} raised to {}: {}", base1, exp1, power(base1, exp1));
        std::println("{} squared (default): {}", base2, power(base2));
        break;
    }
    case 8: {
        std::println("TASK 8");
        int N = 5;
        std::println("{}! is: {}", N, factorial(N));
        break;
    }
    case 9: {
        std::println("TASK 9");
        int N = 8;
        std::println("The {}th Fibonacci number is: {}", N, fibonacci(N));
        break;
    }
    case 10: {
        std::println("TASK 10");
        int x = 15;
        int y = 5;
        std::println("x:{} y:{} \nInline add result : {}", x, y, add2(x, y));
        break;
    }
    case 11: {
        std::println("TASK 11");
        int x = 45;
        int y = 90;
        int (*ptr_max)(int, int) = maxOf;
        std::println("Using function pointer, max of {} and {} is: {}", x, y, ptr_max(x, y));
        break;
    }
    case 12: {
        std::println("TASK 12");
        int a = 10;
        int b = 3;
        std::println("Addition result ({} + {}): {} \nSubtraction result({} - {}) : {}", a, b, execute_operation(a, b, add), a, b, execute_operation(a, b, subtract));
        break;
    }
    case 13: {
        std::println("TASK 13");
        int a1 = 5;
        int b1 = 10;
        double a2 = 3.14;
        double b2 = 2.71;
        std::println("a = {}, b = {} Max int: {}", a1, b1, max_value(a1, b1));
        std::println("a = {}, b = {} Max double: {}", a2, b2, max_value(a2, b2));
        std::println("Max char: {}", max_value('z', 'a'));
        break;
    }
    case 14: {
        std::println("TASK 14");
        int x = 100;
        int y = 200;
        swap_generic(x, y);
        double d1 = 5.5;
        double d2 = 9.9;
        swap_generic(d1, d2);
        std::println("After swap (int): x = {}, y = {}", x, y);
        std::println("After swap(double) : d1 = {}, d2 = {}", d1, d2);
        break;
    }
    case 15: {
        std::println("TASK 15");
        std::string s = "This is a long message.";
        std::print("\nString value (read-only): {} \nOriginal string remains : ", s);
        print_string(s);
        break;
    }
    case 16: {
        std::println("TASK 16");
        int N1 = 1;
        int N2 = 20;
        std::println("Prime numbers between {} and {}: ", N1, N2);
        for (int i = std::min(N1, N2); i <= std::max(N1, N2); i++) {
            if (is_prime(i)) {
                std::print("{} ", i);
            };
        };
        break;
    }
    case 17: {
        std::println("TASK 17");
        std::vector<int> data = { 10, 20, 30, 40 };
        std::println("The sum of the vector elements is: {}", sum_vector(data));
        break;
    }
    }
    return 0;
}