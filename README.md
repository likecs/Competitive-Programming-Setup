# Competitive-Programming-Setup
This repository contains my setup for competitive programming competitions.

Below is a brief description of the files:

* code_template.cpp
> It contains my template used for writing programs. Some utility functions used in almost all programs, included fast I/O routines are available in this.

* check.cpp
> It contains the brute force solution or the correct solution against which I want to debug my code.

* work.cpp
> It is the file where I write my own code for the problem.

* inp_generator.cpp
> It contains the random input file generator the problem.

* output_checker.cpp
> It compares the output of 2 files letter by letter (namely res.txt and out.txt) and outputs whether both the files are exactly same or not.

* precision_checker.cpp
> It contains the output checking process when the files (namely res.txt and out.txt) contains double or floating-point numbers and the answers is considered correct within some desired error.

* automate.sh
> It is a bash script to automate the process of debugging 2 codes against each other when exact test files should match.

* automate_p.sh
> It is a bash script to automate the process of 2 debugging 2 codes against each other when the test files should match within some error limit.

* stack_limit.cpp
> It contains a small code snippet used to increase the stack limit on the Judge.

* timer.cpp
> It contains a small code snippet to print the time taken by the program to execute the given test case data.

* java_template.java
> It conatins the code template for java solutions.

* python_template.py
> It conatins the code template for python solutions.