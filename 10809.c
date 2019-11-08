#include <stdio.h>
#include <string.h>

int main(void){
    char str1[101];
    int str2[26];
    for(int k=0; k<26; k++){
        str2[k] = -1;
    }
    scanf("%s",str1);
    for(int j='a'; j<='z'; j++){
        for(int i=0; i<strlen(str1); i++){
            if(j==str1[i]){
                str2[j-97] = i;
                break;
            }
        }
    }
    for(int h=0; h<26; h++){
        printf("%d ",str2[h]);
    }
    return 0;
}