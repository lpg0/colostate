README
======

A. This package includes the following files. In your own readme file, modify the information as needed.

|-- Description PDF of the assignment
|-- README.txt [This file]


B. Use your designed makefile 
To compile the code and build the executable using the command 

systemprompt>  make

To remove the  executable files use

systemprompt>  make clean

To run the program use (assuming seed is 3) 

systemprompt> ./Starter 3

which will run the program and generate the outputs.


C. Answer the following questions (1 point each, select/type the right answer).

  1. What is the main difference between Malloc() and Calloc()?
     In malloc you designate the amount of memory to reserve as one large block, versus calloc you designate how many blocks of a particular size, essentially the same thing but different ways to calculate it.
  2. What is the main advantage of using dynamic memory allocation? 
     Well being able to deallocate it in a defined way, thus having a stronger grasp on the management of memory for your program.
  3. What happens if you attempt to free the memory already freed?
     It will remove any existing restraints on that memory block, but if its free it will just stay free.
  4. What is the purpose of the headerfile Executor.h, and why is Starter.h not necessary? 
     It defines functions in the c file such that it can be called in Starter, Starter has no aux functions, it benefits due to compilation and runtime usage of the functions.
  5. Describe the * and & operators in the context of pointers and references?
     * accessing the data stored at the location pointed to by the pointer, and & accesses the address of the memory location pointed to by the pointer.
