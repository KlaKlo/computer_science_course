/*
 * =====================================================================================
 *
 *       Filename:  3.c
 *
 *    Description:  Fahrenheit to celcius ~ calculator
 *
 *        Version:  1.0
 *        Created:  27.09.2017 20:43:38
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

#ifndef __cplusplus //we get as close to c++ as we can
typedef char bool;
/*  
*
*
* define && ifdef - preprocessor directive that conditionally includes the 
* subsequent lines of code depending on whether the cpp identifier is defiend
* it will be if you use c++ compiler rather than c;
* 
* In this case we can conditionally typedef bool datatype as a char.
* We use a char because it represents one byte of storage similar to
* what cpp does to bool datatype.
*
* We use # to define preprocessor directive to create c-style constants
* true and false.
*
* Now we can add bool variable to main function.
*/

#define true 1  //
#define false 0
#endif

int main ()
{
    bool c2f = false;
    double c = 0;
    double f = 86;

    if (c2f)
    {
        f = c * 9/5 + 32;
    }
    else
    {
        c = (f - 32) * 5/9;
    }
    printf("%f C = %f F\n", c, f); 
}
