<h3>This is C language: Function Pointers.(Recap)</h3>

I'll be reviewing the concepts on function pointers here.</br>
<hr>

In C we can provide pointers to functions. For example:(declaration and function call using a function pointer)

```rb

#include <stdio.h>
/* a normal function with an int parameter
 * and a void return value*/

void fun(int a)
{
    printf("value of a is %d\n", a);
}

int main()
{
    /*fun_ptr is a pointer to function fun()*/

    void (*fun_ptr)(int) = &fun;

    /*The above line is equivalent of following two void(*fun_ptr)(int);
    fun_ptr = &fun;
    */

    /*Invoking fun() using fun_ptr*/

    (*fun_ptr)(10);

    rerturn (0);
}

```
```rb

Output:
        value of a is 10;
```

<h4>Interesting facts about function pointers.</h4>
1. Function pointers point to code, not data like normal functions.(a function pointer stores the start of executable code)</br>
2. We do not allocate/de-allocate memory like we do using normal pointers.</br>
3. A functions name can also be used to get functions' address.</br>
4. We can have an array of function pointers like normal pointers.</br>
5. FP(function pointer) can be used in place of switch case. eg, in the prog. below user is asked for a choice between 0 and 2 to do different tasks.
</br>

```rb
    
    #include <stdio.h>

    void add(int a, int b)
    {
        printf("Addition is %d\n", a + b);
    }
    void subtract(int a, int b)
    {
        printf("Subtraction is %d\n", a - b);
    }
    void multiply(int a, int b)
    {
        printf("Multiplication is %d\n", a * b);
    }

    int main()
    {
        /**
        * fun_ptr_arr is an array of function pointers to functions
        */

        void(* fun_ptr_arr[])(int, int) = {add, subtract, multiply};
        unsigned int ch, a = 15, b = 10;

        printf("Enter choice: 0 for add, 1 for subtract, 2 for multiply\n");
        scanf("%d", &ch);

        if (ch > 2) return 0;
        
        (*fun_ptr_arr[ch])(a)(b);

        return (0);
    }
``` 
6. Function pointers can be passed as an argument and be returned from a function. 
```rb
    
// A simple C program to show function pointers as parameter
#include <stdio.h>
  
// Two simple functions
void fun1() { printf("Fun1\n"); }
void fun2() { printf("Fun2\n"); }
  
// A function that receives a simple function
// as parameter and calls the function
void wrapper(void (*fun)())
{
    fun();
}
  
int main()
{
    wrapper(fun1);
    wrapper(fun2);
    return 0;
}

```

In the example; qsort.c we use the function qsort to sort arrays in ascending order or descending order or in any
other order in case of array of structures. </br>
qsort is an inbuilt function in the C library.</br>
 With function pointers and void pointers its possible to use qsort for any data type.


7. 