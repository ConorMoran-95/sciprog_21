This week we're going to focus on using make to compile our code which will be in multiple files. The files in questions will perform matrix multiplication.

The matmult script can be ran to complete the whole practical in one go. 
Within the step6 folder however, we have showcased how to split this up into 2 distinct scripts which can be called to run by a makefile script by simply typing: 

`make` 

into the command line (without the backticks). 
Otherwise if you wish to run the matmult.c file, you can run: 

`gcc matmult.c -o mmc` 

and then run this script via 

`./mmc`.
