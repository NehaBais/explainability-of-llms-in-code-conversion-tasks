### Solution - 
```
#include <stdio.h>
#include <string.h>
int main() {
    char original[128] = "Mary had a X lamb.";
    char toBeReplaced[] = "X";
    int i, j;
    for (i=0;original[i];++i){
        if(original[i] == 'X'){break;}
    }
    for(j=0;toBeReplaced[j];++j){
        original[i+j]=toBeReplaced[j];
    }
    printf("String after replacement: %s\n", original); 
   return 0 ;
}
```

