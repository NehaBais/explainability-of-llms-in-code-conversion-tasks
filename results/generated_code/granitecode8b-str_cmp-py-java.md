Here is the Java code that demonstrates how to compare two strings for exact equality, inequality, lexical order before than, and lexical order after than:
```
public class StringComparison {
 public static void main(String[] args) {
 String s1 = "YUP";
 String s2 = "YUP";
 System.out.println(s1 + " is of type " + s1.getClass() + " and " + s2 + " is of type " + s2.getClass());
 
 if (s1.equals(s2)) {
 System.out.println(s1 + " is equal to " + s2);
 } else {
 System.out.println(s1 + " is not equal to " + s2);
 }
 
 if (!s1.equals(s2)) {
 System.out.println(s1 + " is not equal to " + s2);
 } else {
 System.out.println(s1 + " is equal to " + s2);
 }
 
 if (s1.compareTo(s2) < 0) {
 System.out.println(s1 + " is lexically less than " + s2);
 } else {
 System.out.println(s1 + " is not lexically less than " + s2);
 }
 
 if (s1.compareTo(s2) > 0) {
 System.out.println(s1 + " is lexically greater than " + s2);
 } else {
 System.out.println(s1 + " is not lexically greater than " + s2);
 }
 
 String s3 = "BALL";
 String s4 = "BELL";
 if (s3.compareTo(s4) < 0) {
 System.out.println(s3 + " is lexically less than " + s4);
 } else {
 System.out.println(s3 + " is not lexically less than " + s4);
 }
 
 String s5 = "24";
 String s6 = "123";
 if (s5.compareTo(s6) < 0) {
 System.out.println(s5 + " is lexically less than " + s6);
 } else {
 System.out.println(s5 + " is not lexically less than " + s6);
 }
 
 int i1 = 24;
 int i2 = 123;
 if (Integer.toString(i1).compareTo(Integer.toString(i2)) < 0) {
 System.out.println(i1 + " is lexically less than " + i2);
 } else {
 System.out.println(i1 + " is not lexically less than " + i2);
 }
 
 double d1 = 5.0;
 int i3 = 5;
 if (Double.toString(d1).compareTo(Integer.toString(i3)) < 0) {
 System.out.println(d1 + " is lexically less than " + i3);
 } else {
 System.out.println(d1 + " is not lexically less than " + i3);
 }
 }
}
```
This code compares two strings for exact equality and inequality using the `equals()` method. It also compares two strings to see if one is lexically ordered before than the other using the `compareTo()` method. The code demonstrates how to compare a string with an integer and a double, converting them to strings first.
Note that the behavior of comparison methods may vary depending on the type system used in Java. In this example, we are using the default type system in Java 8.

