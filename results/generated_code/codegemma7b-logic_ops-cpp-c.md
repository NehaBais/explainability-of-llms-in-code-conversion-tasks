```c
void print_logic(bool a, bool b)
{
  printf("%s", a ? "true" : "false");
  printf(" and ");
  printf("%s", b ? "true" : "false");
  printf(" is ");
  printf("%s\n", (a && b) ? "true" : "false");

  printf("%s", a ? "true" : "false");
  printf(" or ");
  printf("%s", b ? "true" : "false");
  printf(" is ");
  printf("%s\n", (a || b) ? "true" : "false");

  printf("not ");
  printf("%s", a ? "true" : "false");
  printf(" is ");
  printf("%s\n", !a ? "true" : "false");
}
```
