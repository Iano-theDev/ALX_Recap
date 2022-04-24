I'll be testing the preprocessor and macros & how they work here!
The C preprocessor os also abbreviated as CPP.
The Macros are used for better code readability. 
The macros are also defined in the C preprocessor stage before the compiler stage.
We can have as many macros as required.
we can also have parameterised macros. ie: using a macro like a function.

In the example SQR.c we use a macro as a function to give the square of a number using a parameter in the macro.
The use of parameters on macros is not advised due to the potential error margin it holds.

In the example CM.c (Conditional Macro) we use #ifdef, #else and #endif to give conditions on how the preprocessor reads and executes our code.

Now we will use the #error directive in a to tell us we have an error when none of our defined conditions are satisfied.
I noted the file err.c did not have a .exe file meaning it did not complie which is supposed to be the case since none of our conditions are true.
Instead, the file gives an error and does not continue to compile.

In the file SPM.c (System Predefined Macros) I use some predefined macros to get some data like the date, Time and File that im working on.
Here are some C preprocessor command Directives and their Description: 
1. #define - Substitutes a preprocessor macro.
2. #include - inserts a particular header from another file.
3. #undef - Undefines a preprocessor macro.
4. #ifdef - Returns true is this macro is defined.
5. #ifndef - Return true if this macro is not deifined.
6. #if - tests if a compile time condition is true.
7. #else - provides the alternative for #if.
8. #elif - #else and #if in one statement.
9. #endif - Ends preprocessor conditional.
10. #error - Prints error message on sdterr.
11. #pragma - issues special commands to the compiler, using a standardized method.

More Notes:
- if you're defining a macros in terms of a mathematical expression, it's wise to surround the entire value with parentheses(coz of the operator precedence).
- Surrounding the macro body with parentheses & in some instances curl braces (eg. in the case of multi line macros) will generally help to avoid many unnecessary errors.
- Avoid the use of macros and try and replace it with const since macros are dangerous :-) ...>>