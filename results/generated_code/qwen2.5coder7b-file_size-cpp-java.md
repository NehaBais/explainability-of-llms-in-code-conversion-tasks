Here's how you can convert the given C++ code to Java:

```java
import java.io.File;
import java.io.IOException;

public class FileSizeVerifier {

    public static void printFileSize(String filename) {
        try {
            File file = new File(filename);
            long size = file.length();
            System.out.println("Size of file " + filename + " is " + size + " bytes.");
        } catch (Exception ex) {
            System.err.println(ex.getMessage());
        }
    }

    public static void main(String[] args) {
        printFileSize("input.txt");
        printFileSize("/input.txt");
    }
}
```

This Java code does the same thing as your C++ code. It imports the `File` and `IOException` classes from the `java.io` package to handle file operations and potential I/O exceptions.

The `printFileSize(String filename)` method creates a new `File` object for the given `filename`, calls its `length()` method to get the file size in bytes, and then prints out the result.

In the `main(String[] args)` method, it calls `printFileSize` with both "input.txt" (relative path) and "/input.txt" (absolute path). Note that Java doesn't have a built-in concept of a root directory like C++, so "/input.txt" is treated as an absolute path from the file system root.
