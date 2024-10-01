The equivalent C code would be:

```c
#include <stdio.h>
#include <stdlib.h>

void createFile(char* fn){
    FILE *file = fopen(fn, "w"); 
    if (!file) { 
        perror("Error creating file");
        exit(EXIT_FAILURE);  
    }

    printf("File %s created\n", fn);
    fclose(file);   
}

void createDir(char* dn){
#ifdef _WIN32
    int res = mkdir(dn); 
#else
    mode_t mode = S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH;
    int res = mkdir(dn, mode);   
#endif

    if (res == -1) {
        perror("Error creating directory"); 
        exit(EXIT_FAILURE);  
    }

    printf("Directory %s created\n", dn);       
}

int main(){
   createFile("input.txt");
   createFile("/input.txt");
   createDir("docs");
   createDir("/docs");  
   return 0;           
}
```

Please note that this C version of the code uses system calls directly whereas Go uses os package for file and directory operations. On Windows, `mkdir` is used, but on Unix-like systems, `mkdir` function with mode parameters needs to be used due to permission issues.
