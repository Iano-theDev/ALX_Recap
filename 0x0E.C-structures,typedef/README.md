I will be re-doing some tasks and tests on structure and typedef here in an attempt to understand the concept better.
<hr>

<b>STRUCTURES</b></br>
A structure is a <b>user defined data type</b> that can be used to group elements of different types into a single type.</br>
In C you can declare different variables under one name in a block of memory allowing them to be accessed through a single pointer or by the structure name.<br>
This is what is called a structure in C. In other programming languages this may be referred to as a class.

We could use arrays to declare such, but the problem is that arrays only takes variables of the same type.

In the program CAR.c I use structure to define different spesifications of two cars, car1 & car2.

<hr>
<b>POINTER TO STRUCT</b></br>
Pointers can be used to refer to a <i>struct</i> by its address.</br>
This is useful for passing structs to a function. The pointer can be dereferenced using the * operator or ->(where the struct is the left operand).</br>

<hr>

<b>TYPEDEF</b></br>
typedef is used in C to give a type(like; char, int or any other type) a new name(user defined).</br>
You can also use typedef with structures to define a new data type. For example: </br>
```rb
#include <stdio.h>

struct Computer {
    char *name;
    char *brand;
};

typedef struct Computer Computer;

typedef struct Computer {
    char *name;
    char *brand;
}Computer;
```