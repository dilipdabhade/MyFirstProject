#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
 int main(void)
 {
 
   printf("Hello world from process ID %d\n", getpid());
   
   exit(0);
 }
