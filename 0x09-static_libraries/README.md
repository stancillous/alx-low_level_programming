### C = STATIC LIBRARIES
<h5>

Static libraries in C are pre-compiled collections of object files that contain functions, data structures, and other code that can be linked with a C program.

Creating a static library: To create a static library, you need to compile a set of source files into object files using a C compiler, and then use the "ar" command to package the object files into a library file. For example,
```
gcc -c file1.c file2.c
ar rcs libmylib.a file1.o file2.o
```
The "ar" command creates a library file called "libmylib.a", which contains the object files "file1.o" and "file2.o"<br>

2. Using a static library: To use a static library in a C program, you need to include the library header file in your program, and then link your program with the library file
```
#include "mylib.h"
```
To link the program with the static library, you can use the "-l" flag and specify the name of the library file without the "lib" and ".a" prefixes.
```
gcc -o myprogram myprogram.c -L. -lmylib
```
The "-L." option specifies the directory where the library file is located, and "-lmylib" specifies the name of the library file without the "lib" and ".a" prefixes.<br>

3. Updating a static library<br>

Q. Adv of using static libs
</h5>
