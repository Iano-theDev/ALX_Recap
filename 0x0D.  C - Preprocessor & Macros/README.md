I'll be testing the preprocessor and macros & how they work here!
The C preprocessor os also abbreviated as CPP.
The Macros are used for better code readability. 
The macros are also defined in the C preprocessor stage before the compiler stage.
We can have as many macros as required.
we can also have parameterised macros. ie: using a macro like a function.

In the example SQR.c we use a macro as a function to give the square of a number using a parameter in the macro.
The use of parameters on macros is not advised due to the potential error margin it holds.

In the example CM.c (Conditional Macro) we use #ifdef, #else and #endif to give conditions on how the preprocessorreads and executes our code.

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