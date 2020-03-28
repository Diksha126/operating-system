#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
 int pid,n;
 printf("WELCOME TO THE PROGRAM\n");
 do{
    printf("ENTER A POSITIVE NUMBER TO RUN!!\n");
    scanf("%d",&n);
    }while(n<=0);
 pid=fork();
 if(pid==0)
  {
   printf("child process is running\n");
   printf("%d\n",n);
   while(n!=1)
   {
   if(n%2==0)
   n=(n/2);
   printf("%d\n",n);
   }
   printf("child process is done\n");
   }
 else
   {
    printf("parent process is waiting\n");
    wait(NULL);
    printf("parent process is done\n");
   }
}

