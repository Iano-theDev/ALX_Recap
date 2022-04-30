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

    1. va_start(va_list ap, last_arg) :
            This macros initializes ap variable to be used with the va_arg and va_end macros. The last-arg 
            is the last known fixed argument being passed to the function. that is, the argument before the ellipsis.
    </br>
    2. type va_arg(va_list ap, type) :
            This macro retrieves the next argument in the parameter list of the function with type type.
    </br>
    3. void va_end(va_list ap) :
            This macro allows a function with variable arguments which used the va_start macro to return. 
            If va-end is not called before returning from the function, the result is undefined.
    </br>
    4. void va_copy(va_list dest, va_list src) :
            The va_copy macro copies src  to dest. va_end should be called on dest before the 
            function returns or any subsequent re-initialization of dest (via calls to va_start or va_copy).

            Param: dest - An instance of the va_list type to initialize.
                   src - The source va_list will be used to initialize dest
```

<h4>Declaring Variadic functions</h4></br>

an example of a function that uses variadic functions the printf function.
</br>
declaration :
```rb
   int check(int a, double b, ...); 
```

Variadic Functions must have at least one named parameter, so, for instance:

```rb
    char *wrong(...);
```
 is wrong in C, but its permitted in C++.</br>

 <h4>Defining variadic functions</h4>
</br>
The same syntax is used in a definition: 

```rb
    long func(char, double, int, ...);

    long func(char a, double b, int c, ...)
    {
        /*...*/
    }

```
</br>

<b>Accessing The Arguments</b>
To access the unnamed arguments, one musst declare a variable of type va_list in the variadic function. The macro va_start is the called with two arguments: 1.the variable declared of type va_list and
           2.the name of the last named parameter of the function.
After this, each invocation of the va_arg macro yields the next argument. The first argument to va_arg is the va_listand the second is the type of the next argument passed to the function.
Finally, the va_end macro must be called on the Va_list before the function returns. (it's not required to read in all the arguments.)

C99 provides an additional macro, va_copy, which can duplicate the state of a va_list. The macro invocation va_copy(va2, va1) copies va1 into va2. The function

<b>Passing unnamed arguments to other calls</b>

Since the size of the unnamed list is generally unknown, the calling conventions do not permit determining the size of the unnamed argument block pointed at by va_list inside the receiving function, there is no reliable way to forward the unnamed arguments into another variadic function. To some extent this restriction can be relaxed by employing variadic macros instead of variadic functions.

<b>Type Safety</b>

Some C implementations provide C  extensions the allow the compiler to check for the proper format strings and sentinel.
Gcc has an extension that checks the passed arguments. 
        <b>format(archtype, string-index, first-to-check)</b></br>
the format attribute specifirs that a function takes <i>printf</i>, <i>scanf</i>, <i>strftime</i> or <i>strfmon</i> style arguments which should be type-checked against a format string eg.
```rb
    extern int
    my_printf (void *my_object, const char *my_format, ...)
            __attribute__ ((format (printf, 2, 3)));
```
causes the compiler to check the arguments in calls to <i>my_printf</i> for consistency with the printf style format string argument <i>my_format</i>.</br>

for example, the out put for print_all.c (./p): 
```rb
5 2 4 14 84 97 15 
84 51 

1 
```
all - (negative) integers are ignored when printing.</br>

<h4>varargs.h</h4></br>
Provides the same functionality as <i>stdarg.h</i> but is outdated and was used before the standardization of C.


