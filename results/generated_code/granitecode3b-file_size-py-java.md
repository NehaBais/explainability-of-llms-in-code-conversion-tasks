Here's the equivalent Java code for the given Python code snippet:
```java
import java.io.File;
public class Main {
 public static void main(String[] args) {
 long size1 = new File("input.txt").length();
 long size2 = new File("/input.txt").length();
 System.out.println("Size of input.txt: " + size1 + " bytes");
 System.out.println("Size of /input.txt: " + size2 + " bytes");
 }
}
```
Note that in Java, the `os` module is not available by default, so we need to import it explicitly using the `import` statement. Also, the `File` class has a method called `length()` that returns the size of a file in bytes.

