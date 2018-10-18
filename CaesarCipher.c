#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 
 void CaesarCipher (char data[],int key){
 
        char char;
        int i;
 
        for(i=0;i<strlen(data);++i)
        {
            char = data[i];
 
            if(char>='a'&&char<='z')
            {
                char=char+key;
 
                if(char > 'z')
                {
                    char = char - 'z' + 'a' - 1;
                }
 
                data[i] = char;
            }
 
             else if(char>='A'&&char<='Z')
            {
                char = char + key;
 
                if(char > 'Z')
                {
                    char = char - 'Z' + 'A' - 1;
                }
 
                data[i] = char;
            }
        }
 
        printf("Mesajul criptat este: %s" , data);
    }
 
int main()
{
    char a[]={'a','n','a'};
    CaesarCipher (a, 3);
    return 0;
}