/* This is the only file you will be editing.
 * - Copyright of Starter Code: Prof. Kevin Andrea, George Mason University.  All Rights Reserved
 * - Copyright of Student Code: You!  
 * - Restrictions on Student Code: Do not post your code on any public site (eg. Github).
 * -- Feel free to post your code on a PRIVATE Github and give interviewers access to it.
 * -- You are liable for the protection of your code from others.
 * - ASCII Art Adapted from Regular Calculator by Jeremy J. Olson
 * -- Original File: https://www.asciiart.eu/electronics/calculators
 * - Date: Jan 2026
 */

/* CS367 Project 2, Fall Semester, 2026
 * Fill in your Name, GNumber, and Section Number in the following comment fields
 * Name:
 * GNumber:
 * Section Number: CS367-00_             (Replace the _ with your section number)
 */

/* _____________________
  |  _________________  |
  | |     MUAN    3.25| |
  | |_________________| |
  |  ___ ___ ___   ___  |
  | | 7 | 8 | 9 | | + | |
  | |___|___|___| |___| |
  | | 4 | 5 | 6 | | - | |
  | |___|___|___| |___| |
  | | 1 | 2 | 3 | | x | |
  | |___|___|___| |___| |
  | | . | 0 | = | | V | |
  | |___|___|___| |___| |
  |_____________________|
 */

#include <stdio.h>
#include <stdlib.h>
#include "common_structs.h"
#include "common_definitions.h"
#include "common_functions.h"
#include "microsf.h"

// Feel free to add many Helper Functions, Consts, and Definitions!

// ----------Public API Functions (write these!)-------------------

/* toMicroSF - Converts a Number Struct (whole and fraction parts) into a MicroSF Value
 *  - number is managed by MUAN, DO NOT FREE number.
 *    - You may change the contents of number, but do not free it.
 *  - Follow the project documentation for this function.
 * Return the MicroSF Value or any legal MicroSF NaN representation if number is NULL.
 */
microsf_s toMicroSF(Number_s *number) {
  return 0; // Replace this Line with your Code! 
}

/* toNumber - Converts a MicroSF Value into a Number Struct (whole and fraction parts)
 *  - number is managed by MUAN, DO NOT FREE or re-Allocate number.
 *    - It is already allocated.  Do not call malloc/calloc for number.
 *  - Follow the project documentation for this function.
 *  If the conversion is successful, return 0. 
 *  - If number is NULL, return -1.
 */
int toNumber(Number_s *number, microsf_s value) {
  return -1; // Replace this Line with your Code!
}

/* mulMicroSF - Performs an operation on two MicroSF values
 *  - Follow the project documentation for this function.
 * Return the resulting microsf_s value
 */
microsf_s mulMicroSF(microsf_s val1, microsf_s val2) {
  return 0; // Replace this Line with your Code!
}

/* addMicroSF - Performs an operation on two MicroSF values
 *  - Follow the project documentation for this function.
 * Return the resulting microsf_s value
 */
microsf_s addMicroSF(microsf_s val1, microsf_s val2) {
  return 0; // Replace this Line with your Code!
}

/* opMicroSF - Performs an operation on two MicroSF values
 *  - Follow the project documentation for this function.
 * Return the resulting microsf_s value
 */
microsf_s subMicroSF(microsf_s val1, microsf_s val2) {
  return 0; // Replace this Line with your Code!
}

/* negMicroSF - Negates a MicroSF Value.
 *  - Follow the project documentation for this function.
 * Return the resulting MicroSF Value
 */
microsf_s negMicroSF(microsf_s value) {
  return 0; // Replace this Line with your Code!
}
