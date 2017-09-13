/*
 * Very simple "hello world"
 * File: "hello.c"
 */

//---------------------------------------------------------------------------
#include <stdio.h>
#include "lib.h" // lib_print_hello()
#include "ini.h" // `ini_t`
//---------------------------------------------------------------------------
#define HELLO_MSG "Hello studend!"
#define INI_FILE  "hello.ini"
//---------------------------------------------------------------------------
int main(int argc, const char *argv[])
{
  ini_t ini;
  str_t msg;

  // read from INI file
  ini_init_fname(&ini, INI_FILE);
  msg = ini_read_str(&ini, "hello", "msg", HELLO_MSG);

  // call procedure from fake module `lib'
  lib_print_hello(str_c(&msg));

  // write to INI file
  ini_write_str(&ini, "hello", "msg", str_c(&msg));

  // free memory from `msg` (It is old good C, not C++/Java/Python/Go/C#)
  str_free(&msg);

  // close INI file, write to disk and free memory
  ini_free(&ini);

  return 0;
}
//---------------------------------------------------------------------------

/*** end of "hello.c" ***/

