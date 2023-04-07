### Structs and Typedef in C

a struct is a composite data type that groups together variables of different types under a single name. The variables, also known as members, can be of any type, including other structs.<br>

1. Defining a struct
```
struct student {
    char name[20];
    int age;
    float gpa;
};
```
2. Typedef: Typedef is a C keyword that allows you to define a new type based on an existing type. This is often used to create aliases for structs to make the code more readable. 
```
typedef struct student {
    char name[20];
    int age;
    float gpa;
} Student;
```
