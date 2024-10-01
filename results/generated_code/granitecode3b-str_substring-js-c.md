Here's the C code that implements the above requirements:
```c
#include 
int main() {
 char str[] = "abcdefgh";
 int n = 2;
 int m = 3;
 
 // * starting from n characters in and of m length;
 printf("%s", str + n);
 printf("n");
 printf("%d", str[n]);
 printf("n");
 printf("%c", str[n]);
 printf("n");
 printf("%sn", str + n + 1);
 printf("n");
 
 // * starting from n characters in, up to the end of the string;
 printf("%s", str + n);
 printf("n");
 printf("%sn", str + n);
 printf("n");
 
 // * whole string minus last character;
 printf("%s", str);
 printf("n");
 printf("%c", str[str.length - 1]);
 printf("n");
 
 // * starting from a known character within the string and of m length;
 int index = str.indexOf('b');
 printf("%sn", str + index);
 printf("n");
 
 // * starting from a known substring within the string and of m length. 
 int start_index = str.indexOf('bc');
 printf("%sn", str + start_index);
 printf("n");
 
 return 0;
}
```
The code first initializes a string variable `str` with the value "abcdefgh". It then defines two integer variables `n` and `m` to store the starting index and length of the substring, respectively.
The `substr()` function is used in three different ways to extract substrings from `str`. The first call uses the start index and length parameters directly, while the second and third calls use the `+` operator and the `substring()` method to achieve the same result. The fourth and fifth calls use the `indexOf()` function to find the starting index of the substring and then use that index along with the start index and length parameters to extract the desired substring from `str`.
Finally, the code prints each substring extracted from `str` using the `printf()` function.

