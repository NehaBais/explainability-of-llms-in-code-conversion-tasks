```c
#include <stdio.h>
#include <string.h>

int startswith(char *str, char *pre){
    if (strncmp(str, pre, strlen(pre)) == 0)
        return 1;
    else
        return 0;
}

int endswith(char *str, char *suff){
    int len = strlen(str);
    int lensuff = strlen(suff);
    
    if(len < lensuff) 
       return 0;

    if (strncmp(str+len-lensuff, suff, lensuff) == 0)
        return 1;
    else
        return 0;
}

int find(char *str, char *sub){
    char *loc = strstr(str, sub);
    
    if(loc != NULL)
        return loc - str;
        
    return -1;
}

void print_all_occurrences(char *s, char *t) {
    int i = 0;
    
    while((i = find(s+i, t)) >= 0){
        printf("%d ", i);
        i += strlen(t);
    }
}

int main(){
    char s[] = "abcd";
    char pre[] = "ab";
    char suff[] = "zn";
    
    if(startswith(s, pre))
       printf("String starts with the prefix\n");
    else
       printf("String does not start with the prefix\n");

    if(endswith(s, suff))
       printf("String ends with the suffix\n");
    else
       printf("String does not end with the suffix\n");

    char sub[] = "ab";
    int loc;
    
    loc = find(s, sub);
    if(loc != -1)
        printf("%s found in %s at index: %d\n", sub, s, loc);
    else
        printf("%s not found in %s\n", sub, s);
        
    printf("All occurrences of '%s' in '%s': ", sub, s);
    print_all_occurrences(s, sub);
    
    return 0;
}
```
