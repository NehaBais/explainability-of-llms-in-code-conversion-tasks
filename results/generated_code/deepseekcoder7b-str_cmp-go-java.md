Below is a Java equivalent of your Golang code. 
This version demonstrates how to compare two strings (exact equality, inequality), lexical comparison, as well as case-sensitive and case-insensitive string comparisons in Java:

Java String class provides various methods for comparing the characters/sequences within a string. The `equals()` method compares the values of two strings while the `compareTo()` method returns an integer indicating whether the first string is equal to, greater than or less than second string lexically. 

```java
public class Main {
    public static void main(String[] args) {
        String c = "cat";
        String d = "dog";
        
        // Comparing two strings for exact equality and inequality
        if (c.equals(d)) {
            System.out.println(c + " is exactly equal to " + d);
        } else{ 
            System.out.println(c + " is not exactly equal to " + d);
        }
        
        // Comparing two strings for lexical comparison in Java
        if (c.compareTo(d) > 0) {
            System.out.println(c + " is lexically greater than " + d);
        } else if (c.compareTo(d) < 0){ 
            System.out.println(c + " is lexically less than " + d);
        } else{
            System.out.println(c + " and "+ d +" are equal");
        }
        
        // Case sensitive comparison in Java
        if (c.compareToIgnoreCase(d) > 0) {
            System.out.println("Case-sensitive Comparison: "+ c + " is lexically greater than " + d);
        } else if (c.compareToIgnoreCase(d) < 0){ 
            System.out.println("Case-sensitive Comparison: "+ c + " is lexically less than " + d);
        } else{
            System.out.println("Case-sensitive Comparison: "+ c + " and "+ d +" are equal");
        } 
        
        // Case insensitive comparison in Java
        if (c.equalsIgnoreCase(d)) {
            System.out.println(c + " is case-insensitively equal to " + d);
        } else{ 
            System.out.println(c + " is not case-insensitively equal to " + d);
        }  
        
    // For numeric strings, Java behaves the same way as Golang. It will not perform lexical comparison directly.
    }
}
```
In this code: 
1. We are comparing whether two Strings are equal or not using `equals()` method of String class in java.
2. Comparing if one string is greater than the other by using `compareTo()` method. This returns a positive number if first string is lexically larger than second, 0 for equality and negative value for smaller string. 
3. Case sensitive comparison is done using `compareTo()` directly. For case insensitive comparison we use `compareToIgnoreCase()`.
4. We also check for the equal strings in a case-insensitive manner with equalsIgnoreCase(). This method returns true if two strings are equal, ignoring their cases; otherwise, it returns false. 
5. Java behaves similarly to Golang when dealing with numeric string comparison and direct lexical comparison isn't possible.

