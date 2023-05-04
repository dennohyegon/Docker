//Build some C code
#include<stdio.h>
int main()
{
printf("Hello World\n");
return 0;
}
//Create hello.c and Dockerfile in the same directory.
//Run docker build -t hello . in this directory.
//Run docker run hello, you should see Hello, world!
