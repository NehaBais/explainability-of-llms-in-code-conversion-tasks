char *string = "def";
size_t len = strlen(string);
char new_string[len + 5]; // Assuming we want to add "abc" before it
sprintf(new_string, "abc%s", string);
string = new_string;