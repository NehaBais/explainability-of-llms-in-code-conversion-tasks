The error is due to the incorrect usage of if statements. If statements require boolean expressions (either true or false), but you are checking for different conditions here. This might be caused by not properly initializing variables or using comparison operators correctly. 

To correct this, we should follow best practices when using them:
- Always use semicolons at the end of lines.
- Only assign values to a variable if it has been defined.
- Use proper relational operators like == and  you need not compare 'a' with 'b' directly.

Here is how the corrected code would look:
```java
if (a > b) { // Corrected comparison operator, now using it properly
    System.out.println("a is greater than b");  // Prints if condition is true
} else if (a < b) {
    System.out.println("a is lesser than b");  // Prints if first condition is false
} else {
    System.out.println("Both conditions are equal"); // Default case
}
```
The corrected code uses the relational comparison operator correctly to check both conditions, and handles them accordingly.
