//
//  p2.c
//  cprograms
//
//  Created by Vaishali Singh on 04/04/22.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include <stdlib.h>
 
int main ()
{
    char str[100], s[10][30];
    char word1[]="of",word2[]="and",word3[]="the";
    int i = 0, j = 0, k = 0;
 
    printf ("Enter the string:\n");
    gets (str);
    // let us convert the string into 2D array
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            s[k][j] = '\0';
            k ++;
            j = 0;
        }
        else
        {
            s[k][j] = str[i];
            j ++;
        }
    }
 
    s[k][j] = '\0';
 
    j = 0;
    for (i = 0; i < k + 1; i++)
    {
        if ((strcmp(s[i], word1) == 0)||(strcmp(s[i], word2) == 0)||(strcmp(s[i], word3) == 0))
        {
            continue;
        }
        else
            printf ("%c.", toupper(s[i][0]));
            
    }
    return 0;
}
        
                   
     
