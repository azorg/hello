/*
 * Very simple "hello world"
 * File: "hello.c"
 */

//---------------------------------------------------------------------------
#include <stdio.h>
#include "lib.h" // lib_print_hello()
//---------------------------------------------------------------------------
#define HELLO_MSG "Hello studend!"
//---------------------------------------------------------------------------
int main(int argc, const char *argv[])
{
  lib_print_hello(HELLO_MSG);
  return 0;
}
//---------------------------------------------------------------------------

/*** end of "hello.c" ***/

