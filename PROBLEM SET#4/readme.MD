# EP353-PROBLEMSETS-DILLANHOYOS
## PROBLEM # 1

###Submitted by
Dillan Hoyos
####Due Date
5 oct 2020
####Submission
5 oct 2020
####Files included
 * README.md
 * Problemset4.1.c
 * Problemset4.2.c
 * Problemset4.3.c


# Problem Set 4: IO, Functions, and Variable Scope

Start Date and Time| Due Date and Time | Cut-off Date and Time |
---|---|---|
03:50:00 PM on September 29, 2020 | 01:59:59 PM on October 6, 2020 | 01:59:59 AM on October 13, 2020 |

## Recommended Reading
- Read the C Programming Language Book:
	- Chapter 1.7 and 1.10
	- Chapter 4.1, 4.3, 4.4, 4.6, and 4.8
	- Chapter 7.1 ~ 7.6
	- Chapter 1.5
- Read the Adio Programming Book:
	- Chapter 0.6, 0.7, 0.8, and 0.10

## Problem 4.1: File I/O
- Create a file named `ProblemSet4.1.c`.
- Create a C program that reads the content of the `LoremIpsum.txt ` file character by character. 
- Create a new text file named `lOREMiPSUM.txt`.
- Change the case (upper to lower and lower to upper) of each character read from `LoremIpsum.txt` and then write them into `lOREMiPSUM.txt`.

## Problem 4.2: Functions
- Create a file named `ProblemSet4.2.c`.
- Create a C program with a function named `sumup`.
- The `sumup` function should take in an integer type variable named `number` and return the sum of all numbers up to and including the value of `number`.
- For example, if the value of `number` is 6, the returning value from `sumup` should be 21.
- Use `scanf` in the `main` function to input a value for `number` into the `sumup` function. 
- Print out the returned value of `sumup` using `printf` in the `main` function.

## Problem 4.3: Variable Scope
- This problem is to make sure you understand the difference among global, local, and static local variables.
- Create a file named `ProblemSet4.3.c`.
- Create a C program with a function named `increment`.
- The `increment` function should not take any inputs and return nothing.
- Create an interger type global variable named `global` and initialize it to 0.
- In the `increment` function, create a static integer type variable named `sint` and initialize it to 0.
- In the same function, create a local integer type variable named `local` and intialize it to 0.
- Increment the `local`, `sint`, and `global` variables inside the increment and print out their value using `printf`.
- Call the `increment` function in the `main` function 10 times.
- With a header section printed out using the `printf` function in the `main` function, the final print out of this program should look like the following:

		local | sint | global
		---------------------
		  0   |   0  |   0
		  0   |   1  |   1
		  0   |   2  |   2
		  0   |   3  |   3
		  0   |   4  |   4
		  0   |   5  |   5
		  0   |   6  |   6
		  0   |   7  |   7
		  0   |   8  |   8
		  0   |   9  |   9
## resources
looping algorithm https://www.programiz.com/c-programming/c-for-loop
class example resources
## comments 

I had some trouble with some of the examples the are not implemented 100% like what the instructions said but the result is the same.
This was the most challenging problem set till now, it took me 3 hours.

## Grading Rubrics
Description|Grade
---|---:|
Submitted all problems | 10%
All programs have the correct names. | 10%
No compilation warning or error| 10%
Clean, understandable, commented, and organized | 10%
Thoroughly documented in README.md | 20%
Correctly implemented | 40%
**Total** | **100%**

--- 
**EP-353: Audio Programming in C**  
Electronic Production and Design  
Berklee College of Music  
*Fall 2020*



