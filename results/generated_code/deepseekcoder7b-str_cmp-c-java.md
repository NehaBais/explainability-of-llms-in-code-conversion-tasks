In Java, the comparison of two strings can be done using standard methods that are available in String class. Here's how you would perform all of your tasks:

```java
public class Main {
    public static void main(String[] args) {
        // Comparing for exact equality and inequality
        System.out.println("ball".equals("bell"));  // True if equals, False otherwise
        System.out.println("ball".equalsIgnoreCase("BELL"));  // Case insensitive comparison
        
        // Lexical order comparisons
        System.out.println("ball".compareTo("bell") < 0);   // True if 'ball' lexically ordered before than 'bell', False otherwise
        System.out.println("ball".compareTo("BELL") < 0); 
        
        // Comparing numeric strings
        System.out.println("123".compareTo("456") < 0);    // True if '123' lexically ordered before than '456', False otherwise
    }
}
```
The `.equals()` method can be used to check for exact equality of two strings, and `.equalsIgnoreCase()` is the case-insensitive version of it. The `compareTo()` function returns an integer that signifies the result of comparison: 0 if both are same, positive number if string calling the method (i.e., this) is lexically ordered after than argument passed, and negative otherwise.

For numeric strings, you can directly use `compareTo()` as it has been overridden to provide lexicographic ordering on integers which will work for strings too in case of numbers. It returns a positive number if the integer calling the method is greater, 0 if they are equal and negative otherwise.

