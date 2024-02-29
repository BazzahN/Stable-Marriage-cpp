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
### File Description
// In this section include a description for each of the files 

### Preference Tables and Potential Match 
// In this section include the preference tables used in the code.


### Compiling

#### Step 1) Compiling Functions

Before compiling and building our main program we must compile all the functions it uses. Any C++ complier will likely be sufficient, but we used [GNU Compiler Collection (GCC)](https://gcc.gnu.org/), so our tutorial will asume you are using this compiler.

In our case we need to compile: **utils.cpp**, **IS_STABLE.cpp** and **fun_algo.cpp**. To build these files we can input the code below into the **Unix Shell**:
```
$ g++ --std=c++17 -c function_file_name.cpp 
```
**g++** calls the compiler, **--std=c++17** is the current version of C++ we are using and **-c** is compiling command.

To ensure these files have been compiled correctly we can use the following command in the **Unix Shell**
```
$ ls *.o
```
We should see three .o object files if our task was successful. These files are our functions but translated to a format the computer can understand.
```
Output: fun_algo.o IS_STABLE.o utils.o
```

#### Step 2) Building Main Function

We can now build an executable program for **Task 1** by compiling **main.cpp** and producing the executable file **main.out**. To do this we run the following code:
```
$ g++ --std=c++17 main.cpp utils.o IS_STABLE.o fun_algo.o -o main.out
```
It is vital that we include our function's **.o** files. If neglect these arguments our **main.cpp** won't be able to use the functions and so it will not compile. 

Use the code below to check **main.out** exists
```
$ ls main.out
```

#### Step 3) Running main.out
Finally we can run our program using the code below:
```
./main.out
```
This should be our **output**, given the preference tables and matchs provdied in **main.cpp**:
```
Output: Current Match is Stable
```
## Task 2
We have modified our original source code; now it can read preference tables stored within a **comma seperated values (.csv)** type file. We have also added the ability for users to declare arguments for main while executing the file in the commmand line.

If run correctly **main_2.out** will use the **fundamental algorithm** to find a stable matching from the preference tables within the specified (and correctly formatted) **.csv/.txt** files.

### File Format
Preference tables must be represented as an $NxN$ ',' seperated matrix, where $N$ is the number of individuals in each set $A$ and $B$, this is identical for both sets. Below is the correct implementation of a preference table in a .txt file (# comments should be removed).

This is for individuals $A  = {1,2,3,4}$

'''
1,2,4,3 # <- 1s prefs for elements in B 
3,1,4,2 # <- 2 ^       
3,2,4,1 # <- 3 ^
2,1,3,4 # <- 4 ^
'''
### Compiling and Running main_2.cpp

#### Step 1 & 2) Compiling Functions and Builing main_2.cpp
Use the method from [**Task 1**](###Compiling) to build **main_2.cpp**. This is the same procedure as **main_2.cpp** uses all the same functions as **main.cpp**


## Task 3


## Task 5
