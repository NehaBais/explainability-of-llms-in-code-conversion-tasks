char s[] = "world!";
char s2[strlen("Hello, ") + strlen(s)];
sprintf(s2, "Hello, %s", s);