/* FEEL FREE TO EDIT THIS FILE
 * - test_microsf.c 
 * - Copyright of Starter Code: Prof. Kevin Andrea, George Mason University.  All Rights Reserved
 * - Copyright of Student Code: You!
 * - Date: Jan 2026
 *
 *   Framework to demonstrate how you can write a Unit Tester for your Project
 *   - Not a requirement to use, but it may be helpful if you like.
 *   - This only has one example of a test case in it, so it is just to show how to write them.
 *
 *   This lets you test your microsf.c code WITHOUT any of the MUAN code running.
 *
 *   Why run all tests every time instead of checking a function once to see that it works?
 *   - You could break existing code when adding a new feature.
 *   - Test files like this are useful to check all of the tests every time, so you can make sure
 *     you didn't break something that used to work when you add new code.
 */

#include <stdio.h>
#include <stdlib.h>
#include "common_structs.h"
#include "common_definitions.h"
#include "common_functions.h"
#include "testing_support.h"
#include "microsf.h"

// Prototypes
void test_negate();
static void print_macro_demo();

// Function Definitions
int main() {
  print_macro_demo(); // Comment me out to get rid of the demonstration messages
  test_negate();

  return 0;
}

// Example testing function for negMicroSF
void test_negate() {
  PRINT_INFO("Beginning test on negMicroSF()");

  PRINT_STATUS("Testing negMicroSF(0x700) // Value 1.00");
  microsf_s val = 0x700; // From ref_all_values, this should equal 1.00
  val = negMicroSF(val);
  // With S == 1, val should now equal 0x1700 (1 0111  00000000 = 1 0111 0000 0000 = 0x1700)
  //                                           S  exp  frac
  if(val != 0x1700) {
    PRINT_WARNING("Expected negMicroSF(0x700) to return 0x1700, but got 0x%04X instead.", val);
  }

  PRINT_STATUS("Testing negMicroSF(0x1700) // Value -1.00");
  val = 0x1700; // From ref_all_values, but with S == 1, this should equal -1.00
  val = negMicroSF(val);
  // With S == 0, val should now equal 0x700  (0 0111  0000 0000 = 0000 0111 0000 0000 = 0x700)
  //                                           S  exp  frac
  if(val != 0x700) {
    PRINT_WARNING("Expected negMicroSF(0x1700) to return 0x700, but got 0x%04X instead.", val);
  }
}

// Demo of some macros you are free to use if you like.
static void print_macro_demo() {
  PRINT_INFO("You can print an info message like using printf.  %d", 42);
  PRINT_STATUS("You can print a status message like using printf.  %d", 42);
  PRINT_WARNING("You can print a warning message like using printf.  %d", 42);
  MARK("You can mark a line with a message like using printf.  %d", 42);
}
