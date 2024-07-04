//
//  main.c
//  hackerrank_1
//
//  Created by Ecem Aydın on 1.07.2024.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
   
    int cat1,cat2;
    int mouse;
    
    //kediler ve fare 0-100 arasında random yerde
    cat1=rand()%101;
    printf("cat1's speed: %d\n",cat1);
    
    cat2=rand()%101;
    printf("cat2's speed: %d\n",cat2);
    
    mouse=rand()%101;
    printf("mouse's speed: %d\n",mouse);
    
    int situation1=cat1-mouse;
    int situation2=cat2-mouse;
    int situation3=mouse-cat1;
    int situation4=mouse-cat2;
    
    if(situation3>0 && situation4>0)
    {
        if(cat1-cat2>0)
        {
            printf("winner:cat1\n");
        }
        
        else if(cat1-cat2<0)
        {
            printf("winner:cat2\n");
        }
    }
    
    else if(situation1>0 && situation2>0)
    {
        if(cat1-cat2<0)
        {
            printf("winner:cat1\n");
        }
        else if(cat2-cat1<0)
        {
            printf("winner:cat2\n");
        }
    }
    else if(abs(mouse-cat1)==abs(mouse-cat2))
    {
        printf("winner:mouse\n");
    }
    
    
    
    return 0;
}