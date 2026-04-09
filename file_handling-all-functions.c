#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp ;
    char data[] = "Hello World";

    char buffer[50];

    //open source file 
    fp = fopen("source_file.txt","w+");
    if(fp == NULL)
    {
        printf("Error openeing file\n");
        return 1;
    }

    //write data into file
    fwrite(data, sizeof(char), sizeof(data), fp);
    printf("Data written into file.\n");

    //move file pointer to beginning
    fseek(fp,0,SEEK_SET);

    //read data from file 
    fread(buffer, sizeof(char), sizeof(data), fp);
    printf("Data read from the file : %s\n",buffer);

    //close file
    fclose(fp);
    printf("File closed successfully.\n");

    return 0;
}