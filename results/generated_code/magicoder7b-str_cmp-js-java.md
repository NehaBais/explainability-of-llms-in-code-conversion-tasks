 In Java, you can use the `equals()` method for string comparison with respect to exact equality. For inequality and lexical ordering, the methods are named accordingly:
- equals(Object obj): It compares two objects. If they are equal (including type), it returns true; otherwise false.
- hashCode(): It calculates a unique integer value for an object that defines its identity.
- compareTo(String str): This is used to compare the string with another lexicographically. It returns a negative integer if this string is lexicographically less than str, zero if this string is equal to str and a positive integer if this string is lexicographically greater than str. 
```java
public class Main {
    public static void main(String[] args) {
        // Comparing two strings for exact equality
        System.out.println("abcd".equals("abcd")); // true
        
        // Comparing two strings for inequality (i.e., the inverse of exact equality)
        System.out.println(!"abcd".equals("dcba")); // true
        
        // Comparing two strings to see if one is lexically ordered before than the other
        System.out.println("abcd".compareTo("dcba") < 0); // true
        
        // Comparing two strings to see if one is lexically ordered after than the other
        System.out.println("abcd".compareTo("dcba") > 0); // false
        
        // Case sensitive comparison
        System.out.println("ABCD".equalsIgnoreCase("abcd")); // false
        
        // Case insensitive comparison
        System.out.println("ABCD".toLowerCase().equals("abcd".toLowerCase())); // true
    }
}
```
