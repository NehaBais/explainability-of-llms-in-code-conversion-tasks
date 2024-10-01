In Java we can use the `File` class from java.io package to get file size. Here is the equivalent code in Java:

```java
import java.io.*;

public class Main {
    public static void main(String[] args) {
        File file1 = new File("input.txt");
        System.out.println(file1.length());
        File file2 = new File("/", "input.txt");
        System.out.println(file2.length());
    }
}
```
This Java code will print the size of `input.txt` in the current working directory and at root level of the file system respectively. The method `length()` returns the length of the file in bytes, which is equivalent to its size on disk.
