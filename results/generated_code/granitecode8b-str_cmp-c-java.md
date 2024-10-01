Here is the equivalent Java code for the given C code:
```
import java.util.*;
public class StringComparison {
 static boolean eq(String a, String b) {
 return a.equals(b);
 }
 static boolean ne(String a, String b) {
 return !a.equals(b);
 }
 static boolean gt(String a, String b) {
 return a.compareTo(b) > 0;
 }
 static boolean lt(String a, String b) {
 return a.compareTo(b) < 0;
 }
 static boolean ge(String a, String b) {
 return a.compareTo(b) >= 0;
 }
 static boolean le(String a, String b) {
 return a.compareTo(b) <= 0;
 }
 
 static boolean ceq(String a, String b) {
 return a.compareToIgnoreCase(b) == 0;
 }
 static boolean cne(String a, String b) {
 return !a.equalsIgnoreCase(b);
 }
 static boolean cgt(String a, String b) {
 return a.compareToIgnoreCase(b) > 0;
 }
 static boolean clt(String a, String b) {
 return a.compareToIgnoreCase(b) < 0;
 }
 static boolean cge(String a, String b) {
 return a.compareToIgnoreCase(b) >= 0;
 }
 static boolean cle(String a, String b) {
 return a.compareToIgnoreCase(b) <= 0;
 }
 
 public static void main(String[] args) {
 Scanner sc = new Scanner(System.in);
 while (sc.hasNext()) {
 String a = sc.next();
 String b = sc.next();
 System.out.println(a + " " + ceq(a,b) + " " + cne(a,b) + " " + clt(a,b) + " " + cle(a,b) + " " + cgt(a,b) + " " + cge(a,b));
 }
 }
}
```
This Java code uses the `String.equals()` method to compare two strings for exact equality, and its inverse `String.equals()` to compare two strings for inequality. The `String.compareTo()` method is used to compare two strings lexically, returning a negative integer if the first string is less than the second string, 0 if they are equal, and a positive integer if the first string is greater than the second string. The `String.compareToIgnoreCase()` method is used to perform case-insensitive comparisons of two strings.

