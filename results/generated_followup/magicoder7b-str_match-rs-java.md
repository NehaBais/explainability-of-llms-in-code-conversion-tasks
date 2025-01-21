 The error message "bad operand types for binary operator '!='" occurs because the `indexOf()` method in Java returns an integer rather than a boolean, so it can't be directly compared with `-1` using the inequality (`!=`) operator. 

The fix is to replace the `!=` operator with the equality (`==`) operator and negate the result as needed.

Here is the corrected code:
```java
System.out.println("Does s1 contain s2? " + (s1.indexOf(s2) == -1));
```
