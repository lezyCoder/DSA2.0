# Arrays in C++

## Introduction
An array is a collection of items stored at contiguous memory locations. In C++, arrays are used to store multiple values of the same type in a single variable.

## Declaration
To declare an array in C++, specify the type of elements and the number of elements required:
```cpp
type arrayName[arraySize];
```

### Example
```cpp
int numbers[5];
```

## Initialization
You can initialize an array at the time of declaration:
```cpp
int numbers[5] = {1, 2, 3, 4, 5};
```

## Accessing Elements
Array elements are accessed using their index:
```cpp
int value = numbers[0]; // Access the first element
```

## Looping Through Arrays
You can use loops to iterate through array elements:
```cpp
for(int i = 0; i < 5; i++) {
    cout << numbers[i] << " ";
}
```

## Multidimensional Arrays
C++ supports multidimensional arrays:
```cpp
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```

## Conclusion
Arrays are a fundamental data structure in C++ that allow you to store and manipulate collections of data efficiently.
