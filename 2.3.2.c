
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int  main(void) 
{

  for(int i=1; i<13; i++)

   {
     pid_t pid =fork();
     if (pid ==0)
     
     {
      printf(" child process => ppid=%d", getppid());
      printf ( " PID=%d\n " , getpid());
      exit(0);
     }

     else 
    {
     printf(("Parent process=> pid=%d\n"), getpid());
    printf("Waitinng for child process to finish\n");
    wait(NULL);
    printf("child process finished\n");
}
}
return EXIT_SUCCESS;
}
     

