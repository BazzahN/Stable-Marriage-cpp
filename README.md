# Stable-Marriage-cpp
This repository contains all my solutions to the C++ assignment. I also include brief descriptions on how to run the code for each of the **Tasks: 1,2,3 and 5**. For saftey reasons, I have chosen to ommit the self-referential **Task 4**, so as to prevent the reader from falling into a recursive loop.

>Add a README markdown file containing instructions for compiling and running your code for each of the Tasks 1, 2, and 3. Check that your README file renders properly on github.

## Task 1

Contents of **Task 1** folder:
```
IS_STABLE.cpp
IS_STABLE.h // Header .h and source file .cpp for IS_STABLE algorithm 

fun_algo.cpp
fun_algo.h // Ditto for the 'fundamental algorithm'

utils.cpp
utils.h //Ditto for Utilities

main_t1.cpp //Main source file 

```



###Compiling

#### Step 1

Before compiling and building our main program we must compile all the functions it uses. Any C++ complier will likely be sufficient, but we used GNU Compiler Collection (GCC), so our tutorial will asume you are using this compiler.
In our case we need to compile: **utils.cpp**, **IS_STABLE.cpp** and **fun_algo.cpp**. To build these files we can input the code below into the **Unix Shell**:
```
$ g++ --std=c++17 -c function_file_name.cpp
```
To ensure these files have been compiled correctly we can use the following command in the **Unix Shell**
```
$ ls *.o
```
We should see three .o object files if our task was successful. These files are our functions but translated to a format the computer can understand.
## Task 2

## Task 3


## Task 5
