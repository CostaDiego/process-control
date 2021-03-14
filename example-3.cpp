#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int glob = 6;

int main(void){
    int var;
    pid_t pid;
    var = 88;
    printf("Before fork\n");
    
    if((pid = fork()) < 0){
        fprintf(stderr, "Fork error\n");
    }
    else if (pid == 0){
        glob++;
        var++;
    }
    else{
        sleep(10);
    }
        
    printf("pid = %d, ppid = %d, glob = %d, var = %d\n", getpid(), getppid(), glob, var);
    
    return 0;
}
