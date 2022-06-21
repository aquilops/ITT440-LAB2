
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>


char name[32];


void childTask(){

printf( " Child process = (What is your name)");
          if (scanf("%s", name)==1)
            {
                printf(" Your name is %s\n", name);
            }
          else
            {
              printf(" Error");

            }
}

void ParentTask(){

printf( "Job is done");

}


int main(void)
{
  for (int i=1; i<5; i++)
  {
    pid_t pid =fork();

     
     if (pid==0)
    {
       childTask();
    }
}
    
       wait(NULL);
        ParentTask();

 return 0;
}


