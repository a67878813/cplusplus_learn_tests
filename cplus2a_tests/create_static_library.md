// http://www.thegeekstuff.com/2010/08/ar-command-examples/
ar is an archive tool used to combine objects to create an archive file with .a extension,also know as library.

we will discuss about how to create an user defined static library in C programming using the "ar"utility.

The examples shows how to create, extract, and modify the archives using Linux ar command.

To demostrate the static library creationm, let us create two C programs --
addition.c and multiplication.c

Using gcc, the object code for these programs are obtained, and the static library libarith.a is created from these two objects.

1. create Two sample c Programs

addition.c
//============
int addition(int a, int b ){}

//=============

cultiplication.c program as shown below.
