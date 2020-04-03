#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
 int pid,n;
 do{
    printf("ENTER A VALID NO.!!\n");
    scanf("%d",&n);
    }while(n<=0);
 pid=fork();
 if(pid==0)
  {
   printf("child process \n");
   printf("%d\n",n);
   while(n!=1)
   {
   if(n%2==0)
   n=(n/2);
   printf("%d\n",n);
   }
   }
 else
 {
    wait(NULL);
    printf("parent process done");
 }
}

