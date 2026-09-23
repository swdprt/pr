//https://pynative.com/cpp-arrays-exercises/

import std;

int main() {
    int task = 0;
    std::println("Enter task number: ");
    std::cin >> task;

    switch (task) {
    case 1: {
        std::println("TASK 1");
        int arr[5];
        std::println("Enter 5 integers: ");
        for (int i = 0; i < 5; i++) {
            std::println("Element {}: ", i+1);
            std::cin >> arr[i];
        }
        std::print("\nThe elements in the array are: ");
        for (int i = 0; i < 5; i++) {
            std::print("{} ", arr[i]);
        }
        break;
    }
    case 2: {
        std::println("TASK 2");
        int arr[] = { 10, 20, 30, 40, 50 };
        int sum = 0;
        for (int element : arr) {
            sum += element;
        }
        std::println("The sum of all elements is: {}", sum);
        break;
    }
    case 3: {
        std::println("TASK 3");
        int arr[] = { 15, 8, 27, 4, 19 };
        int maxElement = 0;
        for (int element : arr) {
            if (element > maxElement) {
                maxElement = element;
            }
        }
        std::println("The maximum element in the array is: {}", maxElement);
        break;
    }
    case 4: {
        std::println("TASK 4");
        int arr[] = { 10, 50, 30, 70, 80, 20 };
        int size = sizeof(arr) / sizeof(arr[0]);
        int found = 0;
        std::println("Enter the number for search of: ");
        std::cin >> found;
        bool isFound = true;
        for (int i = 0; i <= size;i++) {
            if (arr[i] == found) {
                std::println("Element {} found at index: {}", found, i);
                isFound = true;
                break;
            }
            else {
                isFound = false;
            }
        }
        if (!isFound) {
            std::println("Not found");
        }
        break;
    }
    case 5: {
        std::println("TASK 5");
        int numbers[] = { 10, 20, 30, 40, 50 };
        int target = 3;
        int count = 0;
        for (int element : numbers) {
            if (element == target) {
                count += 1;
            }
        }
        std::println("The number {} occurs {} times.", target, count);
        break;
    }
    case 6: {
        std::println("TASK 6");
        int arr[] = { 10, 20, 30, 40, 50 };
        std::print("\nOriginal array: ");
        for (int element : arr) {
            std::print("{} ", element);
        }
        int size = sizeof(arr) / sizeof(arr[0]);
        std::print("\nReversed array: ");
        for (int i = size-1; i >= 0; i--) {
            std::print("{} ", arr[i]);
        }
        break;
    }
    case 7: {
        std::println("TASK 7");
        int arr1[] = { 1, 2, 3, 4, 5 };
        int size = sizeof(arr1)/sizeof(arr1[0]);
        int arr2[10] = {};
        for (int i = 0; i < size; i++) {
            arr2[i] = arr1[i];
        }
        std::print("Elements of the copied array (arr2): ");
        for (int i = 0; i <size; i++) {
            std::print("{} ", arr2[i]);
        }
        break;
    }
    case 8: {
        std::println("TASK 8");
        int arr[] = { 1, 6, 3, 8, 5, 10, 7 };
        std::print("The even numbers in the array are: ");
        for (int element : arr) {
            if (element % 2 == 0) {
                std::print("{} ", element);
            }
        }
        break;
    }
    case 9: {
        std::println("TASK 9");
        int arr[] = { 10, 20, 30, 40, 50 };
        int arrCopy[100] = {};
        int size = sizeof(arr) / sizeof(arr[0]);
        arrCopy[0] = arr[size-1];
        for (int i = 0; i < size; i++) {
            arrCopy[i + 1] = arr[i];
        }
        std::print("Array BEFORE swap: ");
        for (int i = 0; i < size; i++) {
            std::print("{} ", arr[i]);
        }
        std::print("\nArray AFTER swap: ");
        for (int i = 0; i < size; i++) {
            std::print("{} ", arrCopy[i]);
        }
        break;
    }
    case 10: {
        std::println("TASK 10");
        int arr[] = { 1, 5, 5, 2, 1, 3, 2, 4 };
        int size = sizeof(arr) / sizeof(arr[0]);
        std::print("Unique elements are: ");
        for (int i = 0; i < size; i++) {
            bool isUniq = true;
            for (int j = 0; j < size; j++) {
                if (arr[j] == arr[i] && j!=i) {
                    isUniq = false;
                    break;
                }
            }
            if (isUniq) {
                std::print("{} ", arr[i]);
            }
        }
        break;
    }
    case 11: {
        std::println("TASK 11");
        int arr[] = { 10, 25, 40, 55, 70 };
        int k = 2;
        int size = sizeof(arr) / sizeof(arr[0]) - 1;
        if (k > 0 && k < size) {
            if (arr[k] > arr[k - 1] && arr[k] < arr[k + 1]) {
                std::println("The condition is: True");
            }
            else {
                std::println("The condition is: False");
            }
        }
        break;
    }
    case 12: {
        std::println("TASK 12");
        int arr[] = { 5, 2, 8, 1, 9, 4 };
        std::print("Array before sorting: ");
        for (int element : arr) {
            std::print("{} ", element);
        }
        int size = sizeof(arr) / sizeof(arr[0]);
        std::sort(arr, arr + size);
        std::print("\nArray after sorting: ");
        for (int element : arr) {
            std::print("{} ", element);
        }
        break;
    }
    case 13: {
        std::println("TASK 13");
        int arr[] = { 5, 2, 8, 1, 9, 4 };
        std::print("Array before sorting: ");
        for (int element : arr) {
            std::print("{} ", element);
        }
        int size = sizeof(arr) / sizeof(arr[0]);
        std::sort(arr, arr + size, std::greater<int>());
        std::print("\nArray after sorting: ");
        for (int element : arr) {
            std::print("{} ", element);
        }
        break;
    }
    case 14: {
        std::println("TASK 14");
        int arr[10] = { 10, 20, 30, 40, 50 };
        int current_size = 5;
        int element_to_insert = 25;
        int position = 2;
        int arrCopy[6] = {};
        for (int i = current_size; i >= 0; i--) {
            if (i > position) {
                arrCopy[i] = arr[i-1];
            }
            if (i == position) {
                arrCopy[i] = element_to_insert;
            }
            if (i < position) {
                arrCopy[i] = arr[i];
            }
        }
        std::print("\nArray after insertion: ");
        for (int element : arrCopy) {
            std::print("{} ", element);
        }
        break;
    }
    case 15: {
        std::println("TASK 15");
        int arr[] = { 10, 20, 30, 40, 50 };
        int current_size = 5;
        int delete_position = 3;
        for (int i = 0; i < current_size - 1; i++) {
            if (i >= delete_position) {
                arr[i] = arr[i + 1];
            }
        }
        std::print("\nArray after delete: ");
        for (int element : arr) {
            std::print("{} ", element);
        }
        break;
    }
    case 16: {
        std::println("TASK 16");
        int arr[] = { 12, 35, 1, 10, 34, 1 };
        int size = sizeof(arr) / sizeof(arr[0]);
        int largest = 0;
        int second_largest = 0;
        for (int i = 0; i <=size; i++) {
            if (arr[i] > largest) {
                largest = arr[i];
            }
            if (arr[i] > second_largest && arr[i] < largest) {
                second_largest = arr[i];
            }
        }
        std::println("The second largest element is: {}", second_largest);
        break;
    }
    case 17: {
        std::println("TASK 17");
        int numbers[] = { 1, 0, 5, 0, 8, 0, 2 };
        int size = sizeof(numbers) / sizeof(numbers[0]);
        std::println("Original array: ");
        for (int i = 0; i < size; i++) {
            std::print("{} ", numbers[i]);
            if (numbers[i] == 0) {
                numbers[i] = -1;
            }
        }
        std::println("\nModified array: ");
        for (int i = 0; i < size; i++) {
            std::print("{} ", numbers[i]);
        }
        break;
    }
    case 18: {
        std::println("TASK 18");
        int arr1[] = { 10, 20, 30, 40 };
        int arr2[] = { 10, 30, 20, 40 };
        int size1 = sizeof(arr1) / sizeof(arr1[0])- 1;
        int size2 = sizeof(arr2) / sizeof(arr2[0]) - 1;
        int isSorted1 = 0;
        int isSorted2 = 0;
        for (int i = 1; i < size1; i++) {
            if (arr1[i] > arr1[i - 1]) {
                isSorted1 += 1;
            }
        }
        for (int i = 1; i < size2; i++) {
            if (arr2[i] > arr2[i - 1]) {
                isSorted2 += 1;
            }
        }
        std::print("Array 1 is sorted: ");
        if (isSorted1 == size1 - 1) {
            std::print("True");
        }
        else {
            std::print("False");
        }
        std::print("\nArray 2 is sorted: ");
        if (isSorted2 == size2 - 1) {
            std::print("True");
        }
        else {
            std::print("False");
        }
        break;
    }
    case 19: {
        std::println("TASK 19");
        int arr[] = { 1, 2, 3, 4, 5 };
        int size = sizeof(arr) / sizeof(arr[0]) - 1;
        int res = arr[0];
        for (int i = 0; i < size; i++) {
            arr[i] = arr[i + 1];
        }
        arr[size] = res;
        std::print("Array after left rotation: ");
        for (int element : arr) {
            std::print("{} ", element);
        }
        break;
    }
    case 20: {
        std::println("TASK 20");
        int arr[] = { 1, 2, 3, 4, 5 };
        int size = sizeof(arr) / sizeof(arr[0]) - 1;
        int res = arr[size];
        for (int i = size; i >0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = res;
        std::print("Array after right rotation: ");
        for (int element : arr) {
            std::print("{} ", element);
        }
        break;
    }
    case 21: {
        std::println("TASK 21");
        int arr[] = { 1, 2, 2, 3, 4, 4, 4, 5 };
        int size = sizeof(arr) / sizeof(arr[0]) - 1;
        int arrCopy[100];
        size_t count = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] != arr[i + 1]) {
                arrCopy[count++]=arr[i];
            }
        }
        arrCopy[count++] = arr[size];
        int sizeCopy = sizeof(arrCopy) / sizeof(arrCopy[0]) - 1;
        std::print("Array after removing duplicates (New Size: {}): ", count);
        for (int i = 0; i < count; i++) {
            std::print("{} ", arrCopy[i]);
        }
        break;
    }
    case 22: {
        std::println("TASK 22");
        int arr1[] = { 1, 2, 3, 2, 1 };
        int arr2[] = { 1, 2, 3, 4 };
        bool palindrome = true;
        int size1 = sizeof(arr1) / sizeof(arr1[0]);
        int size2 = sizeof(arr2) / sizeof(arr2[0]);
        for (int i = 0; i < size1 / 2; i++) {
            if (arr1[i] != arr1[size1 - 1]) {
                palindrome = false;
            }
            size1 -= 1;
        }
        std::print("\nArray 1 is a palindrome: {}", palindrome);
        palindrome = true;
        for (int i = 0; i < size2 / 2; i++) {
            if (arr2[i] != arr2[size2 - 1]) {
                palindrome = false;
            }
            size1 -= 1;
        }
        std::print("\nArray 2 is a palindrome: {}", palindrome);
        break;
    } case 23: {
        std::println("TASK 23");
        int arr[3][3];
        std::println("Enter 9 integers for the 3x3 matrix:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                std::println("Enter element [{}][{}]: ", i, j);
                std::cin >> arr[i][j];
            }
        }
        std::println("The matrix is:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                std::print("{}  ", arr[i][j]);
            }
            std::print("\n");
        }
        break;
    } case 24: {
        std::println("TASK 24");
        const int ROWS = 3;
        const int COLS = 3;
        int matrix[ROWS][COLS] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        int sumMatrix = 0;
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                sumMatrix += matrix[i][j];
            }
        }
        std::println("The sum of all elements in the matrix is: {}", sumMatrix);
        break;
    } case 25: {
        std::println("TASK 25");
        const int SIZE = 3;
        int matrix[SIZE][SIZE] = {
              {1, 2, 3},
              {4, 5, 6},
              {7, 8, 9}
        };
        int sum = 0;
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                if (i == j) {
                    sum += matrix[i][j];
                }
            }
        }
        std::println("The sum of the main diagonal elements is: {}", sum);
        break;
    } case 26: {
        std::println("TASK 26");
        const int ROWS = 3;
        const int COLS = 3;
        int matrix[ROWS][COLS] = {
             {1, 2, 3},
             {4, 5, 6},
             {7, 8, 9}
        };
        std::println("Original Matrix:");
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                std::print("{}    ", matrix[i][j]);
            }
            std::print("\n");
        }
        int matrixCopy[ROWS][COLS];
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                matrixCopy[i][j] = matrix[j][i];
            }
        }
        std::println("\nTransposed Matrix:");
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                std::print("{}    ", matrixCopy[i][j]);
            }
            std::print("\n");
        }
        break;
    } case 27: {
        std::println("TASK 27");
        const int ROWS = 3;
        const int COLS = 3;
        int A[ROWS][COLS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
        int B[ROWS][COLS] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
        int C[ROWS][COLS];
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                C[i][j] = A[i][j] + B[i][j];
            }
        }
        std::println("Result Matrix (C = A + B):");
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                std::print("{}    ", C[i][j]);
            }
            std::print("\n");
        }
        break;
    } case 28: {
        std::println("TASK 28");
        int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
        int size = sizeof(arr) / sizeof(arr[0]);
        int sum = 0;
        int last = 0;
        for (int i = 0; i < size; i++) {
            last += arr[i];
        }
        for (int i = 0; i < size; i++) {
            last -= arr[i];
            if (sum == last) {
                std::println("Equilibrium index found at: {}", i);
            }
            sum += arr[i];
        }
        break;
    } case 29: {
        std::println("TASK 29");
        int arr[] = { 1, 2, 4, 5 };
        int size = sizeof(arr) / sizeof(arr[0]);
        std::print("The missing number in the range 1 to {} is: ", size +1);
        for (int i = 0; i < size; i++) {
            if (arr[i] != i + 1) {
                std::print("{}", i + 1);
                break;
            }
        }
        break;
    } case 30: {
        std::println("TASK 30");
        int arr[] = { 2, 2, 1, 1, 1, 2, 2 };
        int count = 0;
        int size = sizeof(arr) / sizeof(arr[0]);
        std::print("The majority element is: ");
        for (int i = 0; i < size; i++) {
            count = 0;
            for (int j = i; j < size; j++) {
                if (arr[j] == arr[i]) {
                    count++;
                }
            }
            if (count > size / 2) {
                std::print("{}", arr[i]);
                break;
            }
        }
        break;
    } case 31: {
        std::println("TASK 31");
        int arr[] = { 1, 5, 7, -1, 5 };
        int k = 6;
        int size = sizeof(arr) / sizeof(arr[0]);
        int count = 0;
        for (int i = 0; i < size; i++) {
            for (int j = i; j < size; j++) {
                if (arr[i] + arr[j] == k) {
                    std::println("Found pair: ({}, {})", arr[i], arr[j]);
                    count++;
                }
            }
        }
        std::println("\nTotal number of pairs with sum {} is: {}", k, count);
        break;
    } case 32: {
        std::println("TASK 32");
        int A[] = { 1, 5, 8, 10 };
        int sizeA = 4;
        int B[] = { 2, 6, 9, 12, 15 };
        int sizeB = 5;
        int C[9];
    
        int i = 0, j = 0, k = 0;
        while (i < sizeA && j < sizeB) {
            if (A[i] < B[j]) {
                C[k++] = A[i++];
            }
            else {
                C[k++] = B[j++];
            }
        }
        while (i < sizeA) {
            C[k++] = A[i++];
        }

        while (j < sizeB) {
            C[k++] = B[j++];
        }
        std::print("Merged sorted array C: ");
        for(int x : C) {
            std::print("{} ", x);
        }
        break;
    }
    } case 33: {
        std::println("TASK 33");

        break;
    }
    return 0;
}