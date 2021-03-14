#include <errno.h>
#include <signal.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>

int main(){
    int pid;
    printf("I am parent process, PID = %d, and i'm going to create a child process\n\n", getpid());

    pid = fork();

    if(pid == -1){/* Error */
        perror("Impossible to create a child process\n\n");
        return (-1);
    }
    else if(pid == 0){/* Child Process */
        printf("I'm child process, PID = %d. I'm alive but i'll go sleep for a while. Use ps -l to see my PID, my status (S = Sleep) and my parent process status (R = Running). Waking up soon.\n\n", getpid());
        sleep(20);
        printf("Waking up now. Finishing now.\n\n");
        return 0;
    }
    else{/* Parent Process */
        printf("Now ill wait for my child process execution. Bye!\n\n");
        wait(NULL);/* Parent Process waiting for child process execution*/
    }
}