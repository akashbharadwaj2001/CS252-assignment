#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <time.h>

int totalPts;
int insideCircle = 0;

/* Thread function*/
void *genRandom (void *arg)
{
    int i;
    float x, y;
    srand(time(0));
    
    /* Random number generation and counting numbers inside circle*/
    for (i = 0; i < totalPts; i++)
    {
        x = 2 * ((float) rand() / RAND_MAX ) - 1;
        y = 2 * ((float) rand() / RAND_MAX ) - 1;
        
        if (x*x + y*y < 1)
        {
            insideCircle++;
        }
    }
    
    return NULL;
}

int main()
{
    /* Take input*/
    do
    {
        printf("Enter no of points to generate (positive)\n");
        scanf("%d", &totalPts);   
    }while(totalPts < 0);
    
    pthread_t thread;
    
    /* Create a thread*/
    pthread_create(&thread, NULL, &genRandom, NULL);
    
    /* Wait till thread gets executed */
    pthread_join (thread, NULL);
    
    float pi;
    printf("%d %d\n", insideCircle, totalPts);

    pi = 4 * (float) insideCircle / totalPts;
    printf("The approxiamate value of pi: %f", pi);
}



