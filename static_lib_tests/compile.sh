gcc -c addition.c
gcc -c multiplication.c


# create the C Program Static Library using ar utility
# now create the static library "libarith.a" with the addition object file and multiplication object file as follows,
ar cr libarith.a addition.o multiplication.o

#compile example.c
gcc -Wall example.c libarith.a -o example

# View Object Files in an Archive Using ar Command, option t
# To list the object files available in the libarith.a:
ar t libarith.a

#extract object files from an Archive using ar x
ar x libarith.a

#add an Object File into   the Existing Archive Using ar r
ar r libarith.a subtraction.o

#While inserting a .o file, if  it already exists in the archive,
# it would be replaced .
#Without checking for replacements ,
# the objects can be added to end of the archive by using -q option.

#Delete a Specific Archive Member Using ar , option d
ar d libarith.a addition.o
