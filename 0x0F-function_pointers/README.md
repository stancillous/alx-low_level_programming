### C - FUNCTION POINTERS
<h5>
Function pointers in C are variables that store the memory address of a function. They allow a program to treat a function as data, which can be passed as an argument to another function or stored in a data structure.<br>

1. Declaring a function pointer
```
int (*func_ptr)(int, int);
```
This declares a variable "funcptr" that is a pointer to a function that takes two integers and returns an integer<br>

2. Assigning a function pointer

```
int add(int a, int b) {
    return a + b;
}

int (*func_ptr)(int, int) = &add;
```
This assigns the memory address of the "add" function to the function pointer "func ptr" <br>

3. Calling a function pointer
```
int result = (*func_ptr)(2, 3);
```

4. Using function pointers in callbacks: Function pointers are often used in callbacks, where a function is passed as an argument to another function and invoked at a later time
```
int compare(const void* a, const void* b) {
    int int_a = *((int*) a);
    int int_b = *((int*) b);
    return int_a - int_b;
}


int main() {
    int array[] = { 3, 1, 4, 1, 5, 9, 2, 6 };
    int len = sizeof(array) / sizeof(array[0]);
    qsort(array, len, sizeof(int), compare);
    // array is now sorted
    return 0;
}
```
Q. Benefits and limitations of func ptrs
</h5>
