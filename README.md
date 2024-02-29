# Stable-Marriage-cpp
This repository contains all my solutions to the C++ assignment. I also include brief descriptions on how to run the code for each of the **Tasks: 1,2,3 and 5**. For saftey reasons, I have chosen to ommit the self-referential **Task 4**, so as to prevent the reader from falling into a recursive loop.

>Add a README markdown file containing instructions for compiling and running your code for each of the Tasks 1, 2, and 3. Check that your README file renders properly on github.

## Folders

```
//ALL FOLDERS WILL CONTAIN
IS_STABLE.cpp
IS_STABLE.h // Header .h and source file .cpp for IS_STABLE algorithm 

fun_algo.cpp
fun_algo.h // Ditto for the 'fundamental algorithm'

utils.cpp
utils.h //Ditto for Utilities

//TASK 1
main_1.cpp //Main C++ source file for Task 1

//TASK 2
main_2.cpp //Ditto for Task 2 

//TASK 3
main_3.cpp //Ditto for Task 3
Results.ipynb //Results for execution time comparisons


```


## Task 1


### File Description
// In this section include a description for each of the files 

### Preference Tables and Potential Match 
// In this section include the preference tables used in the code.


### Compiling 
<a name="custom_anchor_name"></a>
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

This is for individuals $A  = \{1,2,3,4\}$

'''
1,2,4,3 # <- 1s prefs for elements in B 
3,1,4,2 # <- 2 ^       
3,2,4,1 # <- 3 ^
2,1,3,4 # <- 4 ^
'''
### Compiling and Running main_2.cpp

#### Step 1 & 2) Compiling Functions and Builing main_2.cpp
Use the method from [**Task 1**](#custom_anchor_name) to build **main_2.cpp**. The procedure is identical as **main_2.cpp** uses all the same functions as **main.cpp**, just don't forget to change the name of main.

#### Step 3) Running main_2.out (with command line arguments)

We can run **main_2.out** the same way as before, only this time we specify the file names of our preference tables. I have used the names of the files included in the **Task 2** Folder:
```
$ ./main_2.out "prefF" "prefH"
```

Order of the file names doesn't matter, but the format of the identified matching will vary, i.e. if argument order is "fileA" "fileB" then the matchings will be represented like this
$(A_1,B_1),(A_2,B_2)....(A_n,B_n)$. 

For the files we have given in **Task 2** folder, the output will be:

```
Output:
Stable Match Found! 

Identified Pairings:
Female | Male
  1    |   2
-------|-------
  2    |   3
-------|-------
  3    |   4
-------|-------
  4    |   1
-------|-------
```

## Task 3
In this task we compare the difference in runtimes for our implementation of the **fundamental algorithm** and **IS_STABLE** in **python** and **C++**. The report on this comparison has been made into a jupyter notebook, which can be found in the **Task 3** folder here. The report contains a description of the studys methods and results.

We have modified our main file slightly for this study, but it can be compiled in the exact same way applied in previous tasks. The only difference is the inclusion of an additional argument; specifying the amount of times to repeat the fundamental algortihm. We include this extra argument as our algorithm is very fast. To calculate an accurate runtime we repeat $M$ times and divide the sum of these measurments by $M$. 

The modified code is in **main_3.cpp**, build in the same way as **Task 1** and **Task 2**. You can then run **main_3.out** using the code below; include all the required arguments. :

```
$ ./main_3.out "filename1" "filename2" M

```
M must be a positive number of type **int**.



## Task 5

This method-although not perfect in all ways-is an easy way to compile and run C++ programs in Windows. We make use of the **Integrated development environment (IDE)** [Code::Blocks](https://www.codeblocks.org/), as one version includes **MinGW**- a compiler based on **GCC** to build and run C++ files on Windows. The caveat is that it doesn not install **MinGW** at the system level, and so compiling these files can only be done in Code::Blocks.

### Method

#### Step 1) Install Code::Blocks w/ MinGW

Start by heading to [Code::Blocks - Binary Releases]([https://www.codeblocks.org/](https://www.codeblocks.org/downloads/binaries/)https://www.codeblocks.org/downloads/binaries/)  and select the latest verson of **Code::Blocks w/ MinGW** with setup. 

>codeblocks-20.03mingw-setup.exe

You should have the option to download this file via **Sourceforge.net** or **FOSSHUB**, choose either.

#### Step 2) Creating a Project

Run the setup file with all default options. **If you are not an administrator you will need to log in with admin credentials**, if you do not have access to this information (you may be using a work or school computer) **you cannot proceed**.

Once installed, run **Code::Blocks**; you should immediately encounter a dialog box, just click ok. Then in the toolbar select **File -> New -> Project**. A list of **project templates** should appear, select **Console application** and press go. 




The **project wizard** will appear, proceed through each window. Select **C++** on the language options. Call your **project** an appropriate name and ensure its location is **within the same drive you installed Code::Blocks in** (in most cases that's C drive (C:))

#### Step 3) Project and C++ Language Standard

All our files our coded in **C++17** language standard, so we must also ensure our compile knows this. Navigate to **Toolbar -> Settings -> Compiler**. The **Global Compiler Settings** window should pop up. 


**Tick the box** marked:

> Have g++ follow the C++17 ISO C++ language standard [-std=c++17]


