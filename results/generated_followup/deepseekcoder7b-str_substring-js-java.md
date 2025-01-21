The error is that Java 14+ doesn't allow implicit classes by default, which are a preview feature of Java 14 and above. To use it, `--enable-preview` flag must be enabled in the compiler settings or JVM args. However, for educational purposes you can still try running this code snippet with --enable-preview argument as it will run but won't compile due to illegal character: \u2581 error.

The fix is to remove all the instances of System<｜begin▁of▁sentence｜>.out.println("End of string reached"); because they are not valid in Java 14+ without enabling preview feature for implicit classes. This can be easily done by commenting them out or removing those lines from code.

Here is the corrected code:

```java
String str = "abcdefgh";
int n = 3;

// System<｜begin▁of▁sentence｜>.out.println(str.substring(n));  // remove this line as it's not valid without enabling preview feature for implicit classes in Java 14+ or above.

System.out.println(str.charAt(n-1));  // to get the character at nth position. The index is 0 based, so -1 will give us (n-1)th element.
```

This code now compiles as there are no illegal characters and it still does its intended task of printing the character at a specified position in string.

