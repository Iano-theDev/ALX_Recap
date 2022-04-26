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