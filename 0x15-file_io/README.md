# C - File I/O

Functions that access the host’s operating system to perform I/O

Example Approach:
#include <stdio.h>

void main()
{
    FILE *fid;

    fid = fopen("myfile","w");
    fprintf(fid,"Hello, world\n");
    fclose(fid);

    printf("Hello again, world\n");
}
