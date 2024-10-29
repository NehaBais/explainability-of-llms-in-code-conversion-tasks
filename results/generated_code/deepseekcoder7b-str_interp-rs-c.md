The equivalent code in C would be as follows. In this C version, we are using the `sprintf` function to create formatted strings similar to what was done with Rust's println! macro. The string formatting is almost identical but slightly different due to differences in how both languages handle format specifiers:

```c
#include <stdio.h>

int main() {
    char little[20] = "little";
    char mary[10] = "Mary";
    char first_string[50];
    
    sprintf(first_string, "%s had a %s lamb", mary, little); // similar to println!("Mary had a {} lamb", "little")

    printf("%s\n", first_string);

    char second_string[50];
    
    sprintf(second_string, "%s had a %s lamb", little, mary); // similar to println!("{1} had a {0} lamb", "little", "Mary")

    printf("%s\n", second_string);
    
    char third_string[50];

    sprintf(third_string, "%s had a %s lamb", mary, little); // similar to println!("{name} had a {adj} lamb", adj="little", name="Mary")

    printf("%s\n", third_string);
    
    return 0;
}
```
When you run this program, it will output:

Mary had a little lamb
little had a Mary lamb
Mary had a little lamb

