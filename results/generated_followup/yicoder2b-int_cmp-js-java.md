The error "unclosed character literal" is due to having unterminated string literals in JavaScript. In JavaScript, string literals (including template strings) are delimited by either single or double quotes. When you have a string with embedded variables like `prompt('Enter first number')`, it implicitly wraps the whole thing in a string literal, which causes "unclosed character literal" errors because there is no place to close that literal at the end of your script.

Java code has different rules for string literals and prompt inputs, so the error messages are also different. The following Java code should resolve the issue:

```java
// Using Scanner class to get user input 
Scanner scanner = new Scanner(System.in);
var num1 = scanner.nextInt();
var num2 = scanner.nextInt();
  
function compare(a, b) {
    if (a == b) { // Equal comparison operator
        console.log(a + " is equal to " + b);
    } else if (a < b) { // Less than operator
        console.log(a + " is less than " + b);
    } else { // Greater than operator
        console.log(a + " is greater than " + b);
    }
}
```

This Java code uses a `Scanner` to get user input, so it will work even if the prompt output does not include numbers directly.
