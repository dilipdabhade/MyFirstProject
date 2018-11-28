//copy std input to std output in c program

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void)
 {
   int c;
   while((c=getc(stdin)) !=EOF)
     	if(putc(c,stdout)==EOF)
     	 err_sys("output error");
     	 if(ferror(stdin))
     	 err_sys("input error");
     	 
     	 exit(0);
  }   	 
