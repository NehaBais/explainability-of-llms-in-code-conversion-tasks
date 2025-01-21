The error occurs because Java 14 introduced an experimental feature, "preview language features," which are disabled by default. To enable this new feature for your code, add `--enable-preview` before compiling the code. This is done to allow using experimental language features. Here's how you would correct and rewrite the corrected code:

```java
public static void bitwise(int a, int b) {
    System.out.println("a and b:  " + (a & b));
    System.out.println("a or b:  " + (a | b));
    System.out.println("a xor b:  " + (a ^ b));
    System.out.println("not a:  " + (~a));
     // left shift and right arithmetic shift perform the same operation, so we're using the latter
    System.out.println("a   << n:  " + (a  << b)); 
     // most platforms use arithmetic right shift as indicated in the comment
     // convert the signed integer into unsigned to perform logical right shift
    int c = a;
    System.out.println("c   >> n:  " + (c >>> b)); 
     // there are no rotation operators in Java
}
```
