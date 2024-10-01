```c
char *s = strdup("World");
strncat(s, "Hello ", 7);
printf("%s\n", s);

free(s);
```
