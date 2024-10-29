In Java, the String class provides several methods to compare strings and perform operations such as case-insensitive comparisons. Here is how we can do it in Java :

```java
public class Main {
    public static void main(String[] args) {
        // create string objects
        String a = "abc";
        String b = new String("Bac");
        
        // comparing for exact equality
        if (a.equals(b)) {
            System.out.println("The strings are equal");
        } 
  
        // comparing for inequality
        if (!a.equals(b)) {
            System.out<｜begin▁of▁sentence｜>out.kinen!"The strings are not equal";
        } 
        
        // lexical comparison - Java string compareTo() method
        // returns a negative integer, zero, or a positive integer as the string is less than, equal to, or greater than the second string respectively.
      
        if (a.compareTo(b) > 0) {
            System.out.println("The first string is lexically after the second");
        } 
        
        if (a.compareTo(b) < 0) {
            System.out.println("The first string is lexically before the second");
        } 
  
       // case-insensitive comparison:
        
        // equalsIgnoreCase() compares two strings, ignoring case differences. It returns a boolean value.
        if (a.equalsIgnoreCase(b)) {
            System.out.println("Both strings are equal when ignoring case");
        } 
    }
}
```
Java treats numeric strings lexically as well. The compareTo() method in Java compares two strings and returns an integer result that signifies whether the first string is less than, equal to or greater than the second string. The return value can be negative, zero, positive indicating respectively "first string is less than", "first string is same as" and "first string is greater than" the second string.

