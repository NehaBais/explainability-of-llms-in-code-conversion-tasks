Here is the converted code from JavaScript to C:
```
#include 
#include 
int main() {
 char original[] = "Mary had a X lamb";
 char little[] = "little";
 char replaced[100];
 strcpy(replaced, original);
 strcat(replaced, " and a ");
 strcat(replaced, little);
 strcat(replaced, " lamb.");
 printf("%s", replaced);
 return 0;
}
```
In this converted code, we first declare the variables `original`, `little`, and `replaced`. We then use the `strcpy` function to copy the value of `original` into `replaced`. Next, we use the `strcat` function to append " and a " and the value of `little` to `replaced`. Finally, we use the `strcat` function again to append " lamb." to `replaced`, and then we print out the final interpolated string using `printf`.

