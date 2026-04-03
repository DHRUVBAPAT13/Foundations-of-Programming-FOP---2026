#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BUFFER_SIZE 100

void delay_four_seconds()
{ 
    clock_t start_time = clock();
    
    clock_t ticks_to_wait = 4 * CLOCKS_PER_SEC;
    
    while (clock() < start_time + ticks_to_wait) {
        // Just waiting...
    }
}

int main()
{
    float *buffer;
    int i;
    // Allocate memory for 100 floats
    buffer = (float *)calloc(BUFFER_SIZE, sizeof(float));
    if(buffer == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    
    printf("Memory allocated. Initializing output in 4 seconds...\n");
    delay_four_seconds();


    // Initialize the buffer with values
    for(i = 0; i < BUFFER_SIZE; i++)
    {
        printf("buffer[%d] = %.3f\n", i, buffer[i]);
    }

    // Free the allocated memory with delay
    printf("\nFreeing memory in 4 seconds...\n");
    delay_four_seconds();
    free(buffer);
    printf("Memory freed.\n");

    return 0;
}