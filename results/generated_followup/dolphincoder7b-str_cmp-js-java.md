The error message "illegal start of expression" indicates that the Java parser is encountering an unexpected character at the beginning of the statement or expression. The fix for this issue involves removing any unnecessary characters or brackets from the code. In this case, we need to remove the extra closing parenthesis ')' after the equals comparisons.

Here's the corrected code:
```java
public class StringComparisonDemo  {
    public static void main(String[] args)  {
        System.out.println(
            "abcd".equals("abcd") && // true (equal value and equal type)
            "abcd".equalsIgnoreCase("AbCd") &&   // true (case insensitive comparison)
            123 == Integer.parseInt("123") &&   // true (numeric conversion to integer)
            !"123".equals("123")  &&   // false (not equal value)
            !123  == 123  &&   // false (not equal type)
            "abcd".compareTo("dcba") > 0  &&   // true (lexically ordered before)
            "abcd".compareTo("dcba") < 0  &&   // false (lexically ordered after)
            "ABCD".toLowerCase().equals("abcd")  &&   // true (case insensitive comparison of two lowercase strings)
        );
    }
}
```
