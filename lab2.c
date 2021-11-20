#include <stdio.h> /*needed to use input /out funtion*/
#include <stdlib.h> /* needed to use funtion memrory allocation*/
#include <sys/types.h>/* needed to defined data types that use in system*/
#include <sys/wait.h> /* neede to wait possible values for option argument waitid*/
#include <unistd.h>  /* neede to use fork funtion to repeat the ouput*/

/*int main (void){
	char name;
	fork();
	for (int i=1; i<5; i++){
	pid_t pid= fork();
	
	if(pid==0){
	printf("what your name\n");
	scanf("%n", %name);
	}
return (0);
}*/
int main() {
	char name[20];
  for(int i = 1; i < 5; i++) {
    pid_t pid = fork();
 
    if(pid == 0) {
      printf("Child process => PPID=%d, PID=%d\n", getppid(), getpid());
	printf(" child\n");
	scanf("%s",name);
	printf("Child name is %s. \n",name);
      exit(0);
    }
    else  {
      printf("Parent process => PID=%d\n", getpid());
      printf("Waiting for child to finish \n");
      wait(NULL);
      printf("	Goodjob .\n");
    }
  }
 
  return (0);
}





