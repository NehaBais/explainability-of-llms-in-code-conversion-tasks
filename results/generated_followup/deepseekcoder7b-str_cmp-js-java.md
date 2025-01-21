The error occurs because Java does not support implicitly declared classes by default and '!' is not used for string equality comparison in java. In addition, the syntax of Java requires a semicolon at the end of each statement. 

Here's how to fix it:

```java
public static void main(String[] args) {
    // Comparing two strings for exact equality
    System.out.println("abcd".equals("abcd"));   // true
    System.out.println(!!"123".equals("123"));  // false
    System.out.println!!"ABCD".equals("abcd")); // true (case sensitive)
    
    // Comparing two strings for inequality
    System.out.println(!"abcd".equals("abcd")); // false
    System.out.println(!!"123".equals("123"));  // false
    System.out.println!!"ABCD".equals("abcd")); // true (case sensitive)
  
    // Comparing two strings to see if one is lexically ordered before than the other
    System.out.println("abcd".compareTo("dcba") > 0);  // true
    
    // Comparing two strings to see if one is lexically ordered after than the other 
    System.out.println("abcd".compareTo("dcba") < 0);  // false
  
    // How to achieve both case sensitive comparisons and case insensitive comparisons within the language
    System.out.println("ABCD".equalsIgnoreCase("abcd")); // true (case insensitive)
}
```

