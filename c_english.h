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
#define Increment_(x) (x)+=
#define Decrement_(x) (x)-=
#define Multiply_(x) (x)*=
#define Divide_(x) (x)/=

#define _the_value_of_(x) (x)
#define _by_the_value_of_(x) (x)
#define _by_one 1

// comparison operators
#define is_equal_to ==
#define is_not_equal_to !=
#define is_greater_than >
#define is_greater_than_or_equal_to >=
#define is_less_than <
#define is_less_than_or_equal_to <=

// arithmetic operators
#define plus +
#define minus -
#define multiplied_by *
#define divided_by /


// ----------------------------------------------------------------
// -- declaration
// ----------------------------------------------------------------

#define Declare_an_(x) x
#define _variable_named_(x) x
#define _and_initialize_it_to_(x) =(x)


// ----------------------------------------------------------------
// -- stdio.h
// ----------------------------------------------------------------

// print
#define Prints_the_string_(x) printf("%s",(x)
#define Prints_the_number_(x) printf("%d",(x)
#define _to_the_screen )

// input
#define Accept_an_string_input_from_the_user_and_store_it_in_the_(x) scanf("%s",&(x))
#define Accept_an_number_input_from_the_user_and_store_it_in_the_(x) scanf("%d",&(x))

#endif
