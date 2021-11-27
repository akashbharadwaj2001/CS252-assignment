#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    int startNum;
    
    /* Take input*/
    do
    {
        printf("Enter a positive number\n");
        scanf("%d", &startNum);
    } while (startNum < 0);
    
    pid_t pid;
    
    /* Create a child process*/
    pid = fork();
    
    /* Child process*/
    if (pid == 0)
    {
        /* Given algorithm*/
        printf("the sequence is: %d", startNum);
        while (startNum > 1)
        {
            if (startNum % 2 == 0)
            {
                startNum = startNum / 2;
                printf(" %d", startNum);
            }
            
            else
            {
                startNum = 3 * startNum + 1;
                printf(" %d", startNum);
            }
        }
    }
    
    /* Parent process*/
    else
    {
        /* Wait till child process terminates*/ 
        wait();
    }
}
