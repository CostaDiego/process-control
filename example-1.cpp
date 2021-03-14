#include <stdio.h>
#include <unistd.h>

int main(void){
    printf("I am process %ld\n", (long)getpid());
    printf("My parent is %ld\n", (long)getppid());
    
    printf("My real user ID is %5ld\n", (long)getuid());
    printf("My effective user ID is %5ld\n", (long)geteuid());
    printf("My real goup ID is %5ld\n", (long)getgid());
    printf("My effective user ID is %5ld\n", (long)getuid());
    
    return 0;
}
