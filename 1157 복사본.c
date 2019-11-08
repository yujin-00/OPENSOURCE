#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1000001];
    int arr[26] = {0};
    int cnt,max,Max=0;
    scanf("%s",str);
    for(int i=0; i<=strlen(str); i++){
        if(str[i] < 91){
            arr[str[i]-65]++;
        }
        else{
            arr[str[i]-97]++;
        }
    }
    for(int i=0; i<26; i++){
        if(arr[i]>max){
            max = arr[i];
            Max = i;
        }
    }
    for(int i=0; i<26; i++){
        if(max == arr[i]) cnt++;
    }
    if(cnt >= 2) printf("?");
    else printf("%c", Max + 65);
    return 0;
}