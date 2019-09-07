#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
    char *s = malloc(200*sizeof(char));
    char *t = malloc(200 * sizeof(char));
    int j = 0;
    scanf("%s",s);
    int n = strlen(s);
    for(int i=0;i<n;i++){
        s[i] = tolower(s[i]);
        if(s[i]=='a' || s[i]=='e'||s[i]=='i' || s[i]=='o'||s[i]=='u' || s[i]=='y')
        {
            continue;
        }
        else{
            t[j++] = '.';
            t[j++] = s[i];
        }
    }
    t[j] = '\0';
    printf("%s",t);
}
