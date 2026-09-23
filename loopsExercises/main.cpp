//https://pynative.com/cpp-loops-exercises/

import std;

int main() {
    int task = 0;
    std::println("Enter task number: ");
    std::cin >> task;
    
    switch (task) {
    case 1: {
        std::println("TASK 1");
        int N = 10;
        std::print("Numbers from 1 to {} are: ", N);
        for (int i = 1; i<=N; i++) {
            std::print("{} ", i);
        };
        break;
    }
    case 2: {
        std::println("TASK 2");
        int N = 20;
        std::println("Even numbers between 1 and {} are: ", N);
        for (int i = 1; i <= N; i++) {
            if (i % 2 == 0) {
                std::print("{} ", i);
            };
        };
        break;
    }
    case 3: {
        std::println("TASK 3");
        int N = 10;
        int sum = 0;
        int n = N;
        while (N > 0) {
            sum += N;
            N -= 1;
        };
        std::println("The sum of the first {} natural numbers is: {}", n, sum);
        break;
    }
    case 4: {
        std::println("TASK 4");
        int N = 10;
        int sumEven = 0;
        int sumOdd = 0;
        for (int i = 1; i <= N; i++) {
            if (i % 2 == 0) {
                sumEven += i;
            }
            else {
                sumOdd += i;
            };
        };
        std::println("Results up to {}: \nSum of even numbers : {}\nSum of odd numbers : {}", N, sumEven, sumOdd);
        break;
    }
    case 5: {
        std::println("TASK 5"); //do not take into account the case  N = 0
        int N = 5;
        int factorial = 1;
        for (int i = 1; i <= N; i++) {
            factorial *= i;
        };
        std::println("{}! (Factorial of {}) is: {}", N, N, factorial);
        break;
    }
    case 6: {
        std::println("TASK 6");
        int N = 2;
        std::println("Multiplication Table for {} (1 to 10):", N);
        for (int i = 1; i <= 10; i++) {
            std::println("{} x {} = {}", N, i, N*i);
        };
        break;
    }
    case 7: {
        std::println("TASK 7");
        int N = 7568;
        int res = 0;
        int n = N;
        while (n>0) {
            if (n % 10 > 0) {
                res += 1;
                n = n / 10;
            };
        };
        std::println("The number {} has {} digits.", N, res);
        break;
    }
    case 8: {
        std::println("TASK 8");
        int N = 7568;
        int n = 0;
        std::print("The reverse of {} is: ", N);
        while (N != 0) {   //take note !=0 
            n = n*10 + N % 10;
            N = N / 10;
        };
        std::print("{}", n);
        break;
    }
    case 9: {
        std::println("TASK 9");
        int N = 121;
        int NCopy = N;
        int n = 0;
        while (N != 0) {
            n = n * 10 + N % 10;
            N /= 10;
        };
        if (n == NCopy) {
            std::println("{} is a palindrome.", NCopy);
        }
        else {
            std::println("{} is not a palindrome.", NCopy);
        };
        break;
    }
    case 10: {
        std::println("TASK 10");
        int N = 1234;
        int sum = 0;
        std::print("The sum of the digits of {} is: ", N);
        while (N != 0) {
            sum += N % 10;
            N /= 10;
        };
        std::print("{}", sum);
        break;
    }
    case 11: {
        std::println("TASK 11"); //do not take into account the case exponent = 0 :(
        int base = 2;
        int exponent = 4;
        int res = 1;
        std::print("{} raised to the power of {} is: ", base, exponent);
        while (exponent > 0) {
            res *= base;
            exponent -= 1;
        };
        std::print("{}", res);
        break;
    }
    case 12: {
        std::println("TASK 12");
        int N = 153;
        int n = N;
        int count = 0;
        int sum = 0;
        std::print("{} ", N);
        while (n > 0) {
            if (n % 10 > 0) {
                count += 1;
                n = n / 10;
            };
        };
        n = N;
        while (n != 0) {
            sum += pow(n % 10, count);
            n /= 10;
        };
        if (sum == N) {
            std::print("is an Armstrong number.");
        }
        else {
            std::print("is not an Armstrong number.");
        };
        break;
    }
    case 13: {
        std::println("TASK 13");
        int N = 8;
        int n1 = 0;
        int n2 = 1;
        std::print("Fibonacci Series up to {} terms: ", N);
        if (N >= 1) {
            std::print("{} ", n1);
        };
        if (N >= 2) {
            std::print("{} ", n2);
        };
        for (int i = 3; i <= N; i++) {
            int nextTerm = n1 + n2;
            std::print("{} ", nextTerm);
            n1 = n2;
            n2 = nextTerm;
        };
        break;
    }
    case 14: {
        std::println("TASK 14");
        int A = 5;
        int B = 10;
        int GCD = 0;
        for (int i = 1; i <= std::min(A, B); i++) {
            if (A % i == 0 && B % i == 0) {
                GCD = i;
            };
        };
        std::println("The GCD (HCF) of {} and {} is: {}", A, B, GCD);
        break;
    }
    case 15: {
        std::println("TASK 15");
        int A = 45;
        int B = 10;
        int LCM = 0;
        for (int i = std::max(A, B); i <= A * B; i++) {
            if (i % A == 0 && i % B == 0) {
                LCM = i;
                break;
            };
        };
        std::println("The LCM of {} and {} is: {}", A, B, LCM);
        break;
    }
    case 16: {
        std::println("TASK 16");
        std::string text = "PYnative";
        std::println("Analysis of the string: {}", text);
        int vowels = 0;
        int consonants = 0;
        for (char symbol : text) {
            char symbolRed = std::tolower(symbol);
            if (std::isalpha(symbolRed)) {
                if (symbolRed == 'a' || symbolRed == 'o' || symbolRed == 'e' || symbolRed == 'i' || symbolRed == 'u') {
                    vowels++;
                }
                else {
                    consonants++;
                }
            }
        };
        std::println("Total Vowels: {} \nTotal Consonants : {}", vowels, consonants);
        break;
    }
    case 17: {
        std::println("TASK 17");
        int arr[5] = { 10, 20, 30, 40, 50 };
        int arrSum = 0;
        for (int element: arr) {
            arrSum += element;
        };
        std::println("The sum of all elements in the array is: {}", arrSum);
        break;
    }
    case 18: {
        std::println("TASK 18");
        int count = 0;
        std::println("Enter the number of elements: ");
        std::cin >> count;
        std::vector<int> vec = {};
        std::println("Enter {} integers: ", count);
        for (int i = 0; i < count; i++) {
            int vecE = 0;
            std::println("Element {}: ", i + 1);
            std::cin >> vecE;
            vec.push_back(vecE);
        };
        int minElement = 10000;
        int maxElement = 0;
        for (int element : vec) {
            if (element > maxElement) {
                maxElement = element;
            } 
            if (element < minElement) {
                minElement = element;
            }
        };
        std::println("\nMaximum element is: {} \nMinimum element is : {}", maxElement, minElement);
        break;
    }
    case 19: {
        std::println("TASK 19");
        int N = 11;
        bool isPrime = true;
        if (N <= 1) {
            isPrime = false;
        }
        else if (N == 2) {
            isPrime = true;
        }
        else if (N % 2 == 0) {
            isPrime = false;
        }
        else {
            for (int i = 3; i * i <= N; i++) {
                if (N % i == 0) {
                    isPrime = false;
                    break; 
                }
            }
        }
        if (isPrime) {
            std::println("{} is a prime number", N);
        }
        else {
            std::println("{} is not a prime number", N);
        }
        break;
    }
    case 20: {
        std::println("TASK 20");
        int N1 = 1;
        int N2 = 100;
        std::println("Prime numbers between {} and {} are: ", N1, N2);
        for (int i = std::min(N1, N2); i <= std::max(N1, N2); i++) {
            bool isPrime = true;
            if (i <= 1) {
                isPrime = false;
            }
            else if (i == 2) {
                isPrime = true;
            }
            else if (i % 2 == 0) {
                isPrime = false;
            }
            else {
                for (int n = 3; n * n <= i; n++) {
                    if (i % n == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }
            if (isPrime) {
                std::print("{} ", i);
            }
        }
        break;
    }
    case 21: {
        std::println("TASK 21");
        int N = 4;
        int n = N;
        int r = N;
        while (N > 0) {
            while (n > 0) {
                std::print("* ");
                n -= 1;
            }
            std::print("\n");
            n = r;
            N -= 1;
        }
        break;
    }
    case 22: {
        std::println("TASK 22");
        int N = 4;
        for (int i = 1; i <= N; i++) {
            int r = i;
            while (i > 0) {
                std::print("*");
                i -= 1;
            }
            std::print("\n");
            i = r;
        }
        break;
    }
    case 23: {
        std::println("TASK 23");
        int N = 4;
        for (int i = N; i > 0; i--) {
            int r = i;
            while (i > 0) {
                std::print("*");
                i -= 1;
            }
            std::print("\n");
            i = r;
        }
        break;
    }
    case 24: {
        std::println("TASK 24");
        int N = 4;
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N-i; j++) {
                std::print(" ");
            }
            for (int k = 1; k <= 2*i-1; k++) {
                std::print("*");
            }
            std::print("\n");
        }
        break;
    }
    case 25: {
        std::println("TASK 25");
        int N = 4;
        for (int i = N; i >= 1; i--) {
            for (int j = 0; j < N-i; j++) {
                std::print(" ");
            }
            for (int k = 1; k <= 2 * i - 1; k++) {
                std::print("*");
            }
            std::print("\n");
        }
        break;
    }
    case 26: {
        std::println("TASK 26");
        std::println("--- 1 to 10 Multiplication Chart ---");
        std::println("1   2   3   4   5   6   7   8   9   10  ");
        for (int i = 2; i <= 10; i++) {
            for (int j = 1; j <= 10; j++) {
                if (i * j < 10) {
                    std::print("{}   ", i*j);
                }
                else {
                    std::print("{}  ", i*j);
                }
            }
            std::print("\n");
        }
        break;
    }
    case 27: {
        std::println("TASK 27");
        int N = 4;
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= i; j++) {
                std::print("{}  ", j);
            }
            std::print("\n");
        }
        break;
    }
    case 28: {
        std::println("TASK 28");
        int N = 4;
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= i; j++) {
                std::print("{}  ", i);
            }
            std::print("\n");
        }
        break;
    }
    case 29: {
        std::println("TASK 29");
        int N = 4;
        for (int i = N; i >= 1; i--) {
            for (int j = N; j >=i; j--) {
                std::print("{}  ", j);
            }
            std::print("\n");
        }
        break;
    }
    case 30: {
        std::println("TASK 30");
        const std::string correctPassword = "Pass1212";
        std::println("--- Password Lock Simulation ---");
        int attempt = 3;
        std::string password = "";
        do {
            std::println("Attempt {}/3. Enter password: ", attempt);
            std::cin >> password; 
            if (password == correctPassword) {
                std::println("\nAccess GRANTED. Welcome!");
                break;
            }
            else {
                std::println("Wrong Password. Access denied. Try again.");
                attempt -= 1;
            }
        } while (attempt > 0);
        break;
    }
    case 31: {
        std::println("TASK 31");
        std::string sentence = "This is a test";
        std::vector<std::string> words;
        std::stringstream ss(sentence);
        std::string word;

        while (ss >> word) {
            words.push_back(word);
        }

        for (int i = words.size() - 1; i >= 0; i--) {
            std::print("{} ", words[i]);
        }
        break;
    }
    }
    return 0;
}