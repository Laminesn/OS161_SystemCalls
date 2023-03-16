/* exit.c implementation for ASST2 - Lamine
 * exit function calls existing function to terminate system calls */
#include<types.h>
#include<lib.h>
#include<syscall.h>
#include<thread.h>
int sys__exit(int x){
    x++;
    thread_exit();    
    return 0; 
}

