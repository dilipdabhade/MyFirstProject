#include<stdio.h>
#include<unistd.h>

 int main()
 {
 
   int p_id,p_pid;
   
   p_id=getpid();  //process id
   p_pid=getpid();  //parent process id
   
   printf("Process id: %d\n",p_id);
   printf("Parend process id:%d\n",p_pid);
   
   return 0;
 }  
