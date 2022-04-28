This is C language: 

<h3>Variadic Functions</h3></br>

I will be redoing some tasks from ALX on Variadic Functions in an attempt to understand it better. </br>

The <b>stdarg.h</b> header defines a variable type <b>va_list</b> and three macros which can be used to get the arguments in a function when the number of arguments are not known. ie. (variable number of arguments).</br>
A function of variable arguments is defined with the ellipsis (,...) at the end of the parameter list.</br>

<h4>Library Variables</h4>
Varible types defined in the header <b>stdarg.h</b> :

```rb
    1. va_list: a type suitable for holding information needed by the three macros va_start(), va_arg(), and va_end().

```

<h4>Library Macros</h4>
The macros defined in the header <b>stdarg.h</b>: </br>

```rb

    1. va_start(va_lst ap, last_arg) :
            This macros initializes ap variable to be used with the va_arg and va_end macros. The last-arg is the last known fixed argument being passed to the function. that is, the argument before the ellipsis.
    </br>
    2. type va_arg(va_list ap, type) :
            This macro retrieves the next argument in the parameter list of the function with type <i>type</i>.
    </br>
    3. void va_end(va_list ap) :
            This macro allows a function with variable arguments which used the va_start macro to return. If va-end is not called before returning from the function, the result is undefined.
```

<h4>Declaring Variadic functions</h4></br>

an example of a function that uses variadic functions the printf function.
</br>
declaration :
```rb
   int check(int a, double b, ...); 
```

Variadic Functions must have atleast one named parameter, so, for instance:

```rb
    char *wrong(...);
```
 is wrong in C. but its permitted in C++.