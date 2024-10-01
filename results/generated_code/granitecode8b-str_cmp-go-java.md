Here's the Java code that demonstrates how to compare two strings:
```
import java.util.Comparator;
public class Main {
 public static void main(String[] args) {
 String c = "cat";
 String d = "dog";
 
 // Comparing two strings for exact equality
 if (c.equals(d)) {
 System.out.println(c + " is bytewise identical to " + d);
 }
 
 // Comparing two strings for inequality (i.e., the inverse of exact equality)
 if (!c.equals(d)) {
 System.out.println(c + " is bytewise different from " + d);
 }
 
 // Comparing two strings to see if one is lexically ordered before than the other
 if (c.compareTo(d) < 0) {
 System.out.println(c + " is lexically bytewise less than " + d);
 }
 
 // Comparing two strings to see if one is lexically ordered after than the other
 if (c.compareTo(d) > 0) {
 System.out.println(c + " is lexically bytewise greater than " + d);
 }
 
 // Comparing two strings to see if one is lexically ordered before or equal to the other
 if (c.compareTo(d) <= 0) {
 System.out.println(c + " is lexically bytewise less than or equal to " + d);
 }
 
 // Comparing two strings to see if one is lexically ordered after or equal to the other
 if (c.compareTo(d) >= 0) {
 System.out.println(c + " is lexically bytewise greater than or equal to " + d);
 }
 
 // A case insensitive compare can be done using the Comparator class in Java
 Comparator c = Comparator.naturalOrder();
 if (c.compare("cat", "dog") == 0) {
 System.out.println("cat is equal to dog");
 } else {
 System.out.println("cat is not equal to dog");
 }
 }
}
```
In this code, we use the `equals()` method to compare two strings for exact equality, and the `compareTo()` method to compare two strings lexically. We also use the `Comparator` class to perform a case insensitive comparison between two strings. The `naturalOrder()` method of the `Comparator` class returns a natural ordering comparator that is suitable for most cases.

