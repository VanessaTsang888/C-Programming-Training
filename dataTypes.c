/* 

    C - Data Types:

    Data types in c refer to an extensive system used for declaring variables or functions of different types. The type of a variable determines how much space it occupies
    in storage and how the bit pattern stored is interpreted.

    Basic Types:
    They are arithmetic types and are further classified into: (a) integer types and (b) floating-point types.

    Enumerated Types:
    They are again arithmetic types and they are used to define variables that can only assign certain discrete integer values throughout the program.

    The Type void:
    The type specifier void indicates that no value is available.

    Derivied Types:
    They include (a) Pointer types, (b) Array types, (c) Structure types, (d) Union types and (e) Function types.

 */

/* 

    The array types and structure types are referred collectively as the aggregate types. The type of a function specifies the type of the function's return value.
    Integer Types:

    Details of standard integer types with their storage sizes and value ranges:

 */

char // Storage Size: 1 byte |  Value Range:	-128 to 127 or 0 to 255

unsigned char // Storage Size: 1 byte |  Value Range: 0 to 255

signed char // Storage Size: 1 byte |  Value Range: -128 to 127

int // Storage Size: 2 or 4 byte |  Value Range: -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647

unsigned int // Storage Size: 2 or 4 byte |  Value Range: 0 to 65,535 or 0 to 4,294,967,295

long //  Storage Size: 8 byte | Value Range: -9223372036854775808 to 9223372036854775807

unsigned long // Storage Size: 8 byte | Value Range: 0 to 18446744073709551615

/* 

    To get the exact size of a type or a variable on a particular platform, you can use the sizeof operator. The expressions sizeof(type) yields the storage size of
    the object or type in bytes. Given below is an example to get the size of various type on a machine using different constant defined in limits.h header file:

 */

// Input - the code:
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {

    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);

    return 0;
}

/*  

    The output:

    $gcc -o main *.c
    $main
    CHAR_BIT    :   8
    CHAR_MAX    :   127
    CHAR_MIN    :   -128
    INT_MAX     :   2147483647
    INT_MIN     :   -2147483648
    LONG_MAX    :   9223372036854775807
    LONG_MIN    :   -9223372036854775808
    SCHAR_MAX   :   127
    SCHAR_MIN   :   -128
    SHRT_MAX    :   32767
    SHRT_MIN    :   -32768
    UCHAR_MAX   :   255
    UINT_MAX    :   4294967295
    ULONG_MAX   :   18446744073709551615
    USHRT_MAX   :   65535

*/

/* 

 Floating-Points Types:
Details of standard floating-point types with storage sizes and value ranges and their precision:

*/

float // Storage Size: 4 byte | Value Range: 1.2E-38 to 3.4E+38 | Precision: 6 decimal places.
double // Storage Size: 8 byte | Value Range: 2.3E-308 to 1.7E+308 | Precision: 15 decimal places.
long double // Storage Size: 10 byte | Value Range:3.4E-4932 to 1.1E+4932 | Precision: 19 decimal places.

/* 

    The header file float.h defines macros that allow you to use these values and other details about the binary representation of real numbers in your programs.
    The following example prints the storage space taken by a float type and its range values:


 */

// input: the code:

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {

    printf("Storage size for float : %d \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double) -DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG );

    return 0;
}

/* output:

    $gcc -o main *.c
    $main
    Storage size for float : 4 
    FLT_MAX     :   3.40282e+38
    FLT_MIN     :   1.17549e-38
    -FLT_MAX    :   -3.40282e+38
    -FLT_MIN    :   -1.17549e-38
    DBL_MAX     :   1.79769e+308
    DBL_MIN     :   2.22507e-308
    -DBL_MAX     :  -1.79769e+308
    Precision value: 6

*/

/*

    The void Type:
    Function returns as void:

    There are various functions in C which do not return any value or you can say they return void. A function with no return value has the return type as void.
    For example, void exit (int status);

    Function arguments as void:
    There are various functions in C which do not accept any parameter. A function with no parameter can accept a void. For example, int rand(void);

    Pointers to void:
    A pointer of type void * represents the address of an object, but not its type. For example, a memory allocation function void *malloc( size_t size );
    returns a pointer to void which can be casted to any data type.


*/




