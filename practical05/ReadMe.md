There are three scripts uploaded here which are required to successfully complete this practical.

Namely, these are Arctan.c, fibo.c and scanf.c.

To Compile these scripts, you can run gcc followed by the c script name. Arctan.c also requires -lm to be attached at the end of its compilation command so that we can use the mathematical tools within.

gcc -o arcTan Arctan.c -lm
./arcTan

Note: You will then be asked to Enter precision for the Maclaurin series & Enter the start and finish points for x

gcc -o fibo fibo.c
./fibo

Note: You will then be asked to Enter a positive integer for n which will be used in the fibonacci sequence

gcc -o scan scanf.c 
./scan

Note: You will then be asked to Enter an int and a double, separately by (,)
