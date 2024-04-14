#ifndef _CENGLISH_H
#define _CENGLISH_H

#include <stdio.h>

// ----------------------------------------------------------------
// -- data type
// ----------------------------------------------------------------

#define character char
#define short_integer short
#define integer int
#define floating_point float
#define double_precision_floating_point double
#define long_integer long


// ----------------------------------------------------------------
// -- function
// ----------------------------------------------------------------

#define An_(x) x
#define _return_type_(x) x
#define _function_is_defined_as_follows (){
#define End_the_block }


// ----------------------------------------------------------------
// -- keyword
// ----------------------------------------------------------------

// return
#define Returns_the_value_(x) return (x)

// while
#define Loop_while_condition_(x) while((x)
#define _is_true ){


// ----------------------------------------------------------------
// -- operator
// ----------------------------------------------------------------

// assignment operator
#define Assign_(x) (x)=
#define _the_value_of_(x) x

// decrement operator
#define Decrement_(x) x--
#define Increment_(x) x++
#define by one ;


// ----------------------------------------------------------------
// -- declaration
// ----------------------------------------------------------------

#define Declare_an_(x) x
#define _variable_named_(x) x
#define _and_initialize_it_to_(x) =x


// ----------------------------------------------------------------
// -- stdio.h
// ----------------------------------------------------------------

// puts
#define Prints_the_character_(x) puts((x)
#define _to_the_screen );

// printf %d
#define Prints_the_number_(x) printf("%d\n",(x)
// #define _to_the_screen );

#endif
