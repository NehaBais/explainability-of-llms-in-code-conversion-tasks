 Sure, here is the equivalent Java code for the provided C++ code:

```java
import java.io.File;
import java.io.IOException;

public class FileSize {
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

This Java code does the following:
1. Defines a method `printFileSize` that takes a filename as an argument and prints the size of the file.
2. Uses a `File` object to represent the file, either by its relative path (`input.txt`) or absolute path (`/input.txt`).
3. Tries to get the length of the file using the `length()` method, which returns the number of bytes in the file.
4. Catches any exceptions and prints the error message if an exception occurs.
