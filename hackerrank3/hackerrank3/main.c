//
//  main.c
//  hackerrank3
//
//  Created by Ecem Aydın on 4.07.2024.
//

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    char sentence[1000];
    char newSentence[1000];
    printf("cümle giriniz:");
    fgets(sentence, sizeof(sentence), stdin);
    printf("cümle:%s",sentence);
    int sayac=0;
    for (int i=0; i<strlen(sentence); i++)
    {
        if(sentence[i]==' ')
        {
            sayac++;
        }
        
    }
    int j = 0;
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ') {
            newSentence[j++] = sentence[i];
        }
    }
    printf("Boşluksuz cümle:%s",newSentence);
    
    //printf("%d",sayac);
    size_t characterLong=strlen(sentence);
    size_t wordsNum=characterLong-sayac-1;
    //printf("karakter sayısı:%zu\n",wordsNum);
    
    float kareKok=sqrt(wordsNum);
    //printf("%f\n",kareKok);
    
    int row=(int)kareKok;//karekok sayısının sonucunun tam kısmı satır sayısını verir
    int column=(int)kareKok+1;//karekok sayısının tam kısmının bir fazlası sütun sayısını verir
    //printf("%d\n",row);
    //printf("%d\n",column);
    
    int index = 0;
    for (int r = 0; r < row; r++) {
        for (int c = 0; c < column; c++) {
            if (index < strlen(newSentence)) {
                printf("%c ", newSentence[index++]);
            }
        }
        printf("\n");
    }
    return 0;
}


