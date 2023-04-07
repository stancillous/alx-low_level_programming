### C - argc  and argv
<h5>
argc and argv are used to handle command-line arguments passed to a program when it is invoked from the command line.<br>
1. argc - argument count
<br>

2. argv - arg vector: array of character pointers that represent the individual arguments passed to the program <br>

3. 
```
#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("The name of the program is: %s\n", argv[0]);
    for(int i = 1; i < argc; i++) {
        printf("Argument %d is: %s\n", i, argv[i]);
    }
    return 0;
}
```
</h5>
