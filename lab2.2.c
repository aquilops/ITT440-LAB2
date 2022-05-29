#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main (int argc, char**argv){


 int pid;
switch (pid =fork()){
//hellomy dear
case 0:    
          printf( " I am child process : pid =%d\n", getpid());
          break;
default:
          printf (" I am the parent process: pid=%d,child pid=&d\n", getpid(),pid);
          break;

case -1: //something went wrong
        perror("fork");
       exit(1);

}
exit(0);
}
