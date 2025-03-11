<!-- # Project01 -->
# Identify Memory Segments used to Store Variables
## Objectives
The objective of this project is to apply your understanding of memory management to solve a given problem.

## Problem
After understanding how memory management works, identify which segment each variable in a given program is stored at.


## Implementation
Consider the following C code snippet

```c
#include <stdio.h>

int globalVar = 100;

void calculate() {
    static int staticVar = 50;
    int localVar;

    localVar = 25;
    printf("In Calculate Function\n");
}

int main() {
    printf("In Main Function\n");
    printf("Global Variable: %d\n", globalVar);
    calculate();
    return 0;
}

```

1. Identify and explain where each variable in the code is stored in memory (e.g., data segment, stack, heap, code segment).
2. Describe the output of the program when it is executed.
3. Explain the difference between global variables, static variables, and local variables in terms of their storage and lifetime.

## Submission 
- Create a new issue with the title “Answer [your-username]” and write your answer.
- Create an issue of your questions, If you face any trouble solving the project.





---
<!-- # Project02 -->
# Enhance Memory Management
## Objectives
The objective of this project is to apply your understanding of memory management to enhance the given programs.

## Problem
Enhance the code snippets given to you.


## Implementation
Enhance the following code snippets as much as possible.


- First code snippet
```c
#include <stdio.h>

struct Example {
    char a;      // 1 byte
    double b;    // 8 bytes
    char c;      // 1 byte
    int d;       // 4 bytes
};

int main() {
    struct Example example;

    printf("Size of struct Example: %lu bytes\n", sizeof(example));
    printf("Address of a: %p\n", &example.a);
    printf("Address of b: %p\n", &example.b);
    printf("Address of c: %p\n", &example.c);
    printf("Address of d: %p\n", &example.d);

    return 0;
}
```

- Second code snippet
```c
#include <stdio.h>

struct Student {
    int id;              // 4 bytes
    char name[50];      // 50 bytes
    double gpa;         // 8 bytes
    char grade;         // 1 byte
};

int main() {
    struct Student student;

    printf("Size of struct Student: %lu bytes\n", sizeof(student));
    printf("Address of id: %p\n", &student.id);
    printf("Address of name: %p\n", &student.name);
    printf("Address of gpa: %p\n", &student.gpa);
    printf("Address of grade: %p\n", &student.grade);

    return 0;
}
```


## Submission 
- Create a new issue with the title “Answer [your-username]” and write your answer.
- Create an issue of your questions, If you face any trouble solving the project.

