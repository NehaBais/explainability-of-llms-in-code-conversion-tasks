## 5.4.3
### Convert the following Java code that calculates the sum of an array to C:
```
double[] numbers = {2.0, 4.0, 6.0, 8.0, 10.0};
for(int i=numbers.length-1;i>=0;i--){
    System.out.println("number is "+numbers[i]+" at index "+i);
}
double sum = 0.0;
for(double num: numbers) {
sum += num;
}
System.out.println("Sum of array elements is: " + sum);
```
#### Answer (C):
```
#include <stdio.h>
int main() {
    double numbers[] = {2.0, 4.0, 6.0, 8.0, 10.0};
    for(int i=sizeof(numbers)/sizeof(double)-1;i>=0;i--){
        printf("number is %.1lf at index %d\n", numbers[i], i);
    }
    double sum = 0.0;
    for(double num: numbers) {
        sum += num;
    }
    printf("Sum of array elements is: %.1lf",sum);
}
```
## 5.4.4
### Convert the following Java code that creates a new string from another string by removing all occurrences of n characters to C:
```
public static String Remove(String s, char c) {
    return s.replaceAll("" + c, "");
}
```
#### Answer (C):
```
#include <stdio.h>
#include <string.h>
char *Remove(const char *s, char c){
    char *result = malloc(strlen(s)+1);  // Allocate memory for the result string
    strcpy(result, s);                  // Copy the original string to the result string
    char *p;                           // Initialize a pointer to traverse the result string
    while ((p = strchr(result, c)) != NULL) {// Find the first occurrence of the character in the result string and set p to it's address
        memmove(p, p + 1, strlen(p));     // Move all characters after the character one position forward
        memset(p+strlen(p),0,1);         // Fill the empty space with null terminator
    }
    return result;                      // Return a pointer to the modified string
}
int main(){
    char s[] = "abcdefg";
    printf("Remove 'c' from %s: %s\n", s, Remove(s, 'c'));
    printf("Remove 'b' from %s: %s\n", s, Remove(s, 'b'));
}
```
## 5.4.5
### Convert the following Java code that checks if a string is palindrome to C:
```
public static boolean IsPalindrome(String str) {
    String normalizedStr = NormalizeString(str);
    for (int i = 0; i < normalizedStr.length() / 2; i++) {
        if (normalizedStr.charAt(i) != normalizedStr.charAt(normalizedStr.length() - i - 1)) {
            return false;
        }
    }
    return true;
}
```
#### Answer (C):
```
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
char *NormalizeString(const char *str) {
    int len = strlen(str); // Get the length of the input string
    char *result = malloc((len+1)*sizeof(char)); // Allocate memory for the result string
    memset(result, 0, (len+1)*sizeof(char)); // Initialize all elements to zero
    int j = 0;
    for (int i = 0; i < len; ++i) {// Traverse through each character of the input string
        char c = str[i];
        if (c != ' ') {         // If the current character is not a space, add it to the result string
            result[j++] = c;
        }
    }
    return result;           // Return the normalized string
}
bool IsPalindrome(const char *str){// Check if the input string is palindrome or not
    int len = strlen(str);
    for (int i = 0, j = len-1; i < len/2; ++i, --j) { // Traverse through each character of the normalized string
        char c = str[i];
        if (c != str[j]) {   // If any two characters do not match, return false
            return 0;
        }
    }
    return true;// Otherwise, return true
}
int main(){// Main function to test the above functions
    char *str = "racecar";
    printf("Is %s a palindrome? %d\n", str, IsPalindrome(str));
    printf("Is \"%s\" a palindrome? %d\n","Madam I'm Adam", IsPalindrome("Madam I'm Adam"));
}
```
## 5.4.6
### Convert the following Java code that finds the minimum and maximum of an array to C:
#### Answer (C):
```
#include <stdio.h>
double *FindMinMax(const double numbers[], int len){// Find the minimum and maximum values in a given list of doubles
    static double result[2]; // Allocate memory for two elements
    double min = numbers[0], max = numbers[0]; // Initialize minimum value to first element, maximum value to last element
    for (int i=1;i<len;++i){// Traverse through the array and update minimum or maximum if necessary
        if(numbers[i]<min) { min = numbers[i]; } 
        else if(numbers[i]>max) { max = numbers[i]; }
    }
    result[0] = min; // Store minimum value in first element of array
    result[1] = max; // Store maximum value in second element of array
    return result;// Return the array containing both values
}
int main(){// Main function to test the above functions
    double numbers[] = {2.0, 4.0, 6.0, 8.0, 10.0};
    printf("Min: %.1lf\nMax: %.1lf", FindMinMax(numbers, sizeof(numbers)/sizeof(double))[0], FindMinMax(numbers, sizeof(numbers)/sizeof(double))[1]);
}
```
