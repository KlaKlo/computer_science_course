/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  27.09.2017 16:57:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
int main()
{
    int apples = 5;
    int oranges = apples;
    apples = 4;

    printf("apples=%d oranges=%d\n", apples, oranges);

    return 0;
}
