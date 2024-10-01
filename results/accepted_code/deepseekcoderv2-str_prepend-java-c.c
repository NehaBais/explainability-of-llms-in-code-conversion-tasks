// your solution here
char *s1, *s2;
s1 = (char *)malloc(sizeof(4)); // allocating 4 bytes for s1
strcpy(s1, "def");
s2 = (char *)malloc(sizeof(7)); // allocating 7 bytes for s2
strcat(s2, "abc", 3); // only appending the first three characters of "abc"