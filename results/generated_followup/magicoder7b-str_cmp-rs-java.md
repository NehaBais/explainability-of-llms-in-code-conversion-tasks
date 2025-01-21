 The error is due to the unary operator '!' used on the int value returned by compareTo method which results in an error because unary '!' cannot be applied to int. 

The fix would be to replace the '!' with '-' since the comparison is reversed (-1 for a being greater than b, 0 for equal and 1 for a being lesser). So the corrected code would look like this:
```java
public class Main {
  public static void main(String[] args) {
    String a = "abc";
    String b = "Bac";

    if (a.equalsIgnoreCase(b)) System.out.println("The strings are equal");
    else System.out.println("The strings are not equal");

    if (a.compareToIgnoreCase(b) >= 0)
      System.out.println("The first string is not lexically before the second");
    else System.out.println("The first string is not lexically after the second");

    if ((a.compareToIgnoreCase(b)) < 0 ) System.out.println("The first string is lexically before the second");
    else System.out.println("The first string is lexically after the second");
  }
}
```
