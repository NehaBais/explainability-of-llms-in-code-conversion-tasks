 The equivalent Java code for the given C++ code would be as follows:

```java
import java.nio.file.*;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        printFileSize("input.txt");
        printFileSize("/input.txt");
    }

    private static void printFileSize(String filename) throws IOException {
        try {
            long size = Files.size(Paths.get(filename));
            System.out.println("Size of file " + filename + " is " + size + " bytes.");
        } catch (IOException e) {
            System.err.println(e.getMessage());
        }
    }
}
```

In the Java version:
1. We import necessary classes from `java.nio.file`.
2. The method `printFileSize` gets the size of a file with given filename and prints its size in bytes. If there's an exception while getting the file size (like if the file does not exist), it catches the IOException and print error message.
3. In the main method, we call the `printFileSize` method for both "input.txt" and "/input.txt".
