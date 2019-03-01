/*
 * HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
 * Helloworld is a standard programming intro, used to demonstrate that the build environement is \
 * configured correctly.

 * Activities:
 * 1. To start, just compile the program by selecting "Build->Build Solution".
 * 2. Once it is building successfully, comment out the #include and rebuild, view the error messages
 * 3. Return the code to compiling state and delete the semicolon at the end of the printf line, view the error messages
 * 4. Return the code to compiling state and change the return value to 22, figure out what changes during execution
 * 5. Return the code to compiling state and change the printf to say "Hello World, my name is Jordan!"
 * 6. Add a second printf and have it print the current year, on a newline: "The current year is 2019."
 */

/* 
 * The # include statement below tells the compiler to include the referenced header file when building 
 * the program, when the compiler sees this, it literally copies the entirety of the header file into
 * the file. For now we're using this to enable the "printf" function.
 */
#include <stdio.h>

/*
 * This is your main function, it absolutely must be here, it's part of the C standard requirements
 * it also has to return a an integer value (hence the int main()), visual studio accepts other definitions
 * but that will break portability if you want to move to a different compiler, so don't do it. Main also
 * takes arguments, but we are going to ignore that for now.
*/
int main()
{
	/* Here we use a printf statement to print text to the console. */
	printf("Hello World!\n");

	/* Return zero to indicate the program executed successfully, this is just a common practice. */
	return 0;
}