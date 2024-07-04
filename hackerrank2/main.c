//
//  main.c
//  hackerrank_2
//
//  Created by Ecem Aydın on 1.07.2024.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    
    int reaplynum;
    printf("write text num:");
    scanf("%d",&reaplynum);
    char array[reaplynum][100];
    for (int i=0; i<reaplynum; i++)
    {
        scanf("%s",&array[i]);
       
    }
    for (int i=0; i<reaplynum; i++)
    {
        for (int j=0; j<100; j++)
        {
           if(array[i][j]>array[i][j+1] && array[i][j+1]!=NULL)
           {
            char temp=array[i][j];
            array[i][j]=array[i][j+1];
            array[i][j+1]=temp;
           }
            
        }
            
    }
    printf("output:\n");
    
    for (int i=0; i<reaplynum; i++)
    {
        int j;
        int len=strlen(array[i]);
        for (j=0; j<len; j++)
        {
            printf("%c",array[i][j]);
        }
        printf("\n");
        if(array[i][j]==array[i][j+1])
        {
            goto don;
            
        }
    }
don:
    printf("no answer\n");

    
    
    
    return 0;
}