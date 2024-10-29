The equivalent Java code for the given JavaScript code would be as follows. As in Java, we use `equals()` method to compare String objects for equality and inequality using '==' or '!='. For lexical comparison, we can simply use the compareTo() method of java.lang.String class which returns an integer indicating whether the string is equal, less than, or greater than another string.

```java
public static void main(String[] args) {
    
    // Comparing two strings for exact equality 
    System.out.println("abcd".equals("abcd"));   // true
    System.out.println("123".equals("123"));     // true
    System.out.println("ABCD".equals("abcd"));   // false (case sensitive)

    // Comparing two strings for inequality 
    System.out.println(!"abcd".equals("abcd"));  // false
    System.out.println!"123".equals("123"));     // false
    System.out.println!("ABCD".equals("abcd"));  // true (case sensitive)
  
    // Comparing two strings to see if one is lexically ordered before than the other
    System.out.println("abcd".compareTo("dcba") > 0); // true
    
    // Comparing two strings to see if one is lexically ordered after than the other 
    System.out.println("abcd".compareTo("dcba") < 0); // false
  
    // How to achieve both case sensitive comparisons and case insensitive comparisons within the language
    System.out.println("ABCD".equalsIgnoreCase("abcd"));  // true (case insensitive)
}
```
Note that Java does not provide a direct way of comparing numeric strings lexically if they are not treated as numbers, because these string values contain only numbers and don't carry any specific semantic meaning. Therefore, they can be compared directly without explicit conversion to integer or float. However, you could convert them into number for mathematical comparison purposes if needed.

