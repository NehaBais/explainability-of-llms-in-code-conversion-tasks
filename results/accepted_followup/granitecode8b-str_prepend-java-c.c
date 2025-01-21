char *string = "def";
char *new_string = (char *)malloc(strlen("abc") + strlen(string) + 1);
strcat(new_string, "abc");
strcat(new_string, string);