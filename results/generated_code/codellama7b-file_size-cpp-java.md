In Java 11 and above, you can use the `java.nio.file` package to get the size of a file in bytes. Here's an example of how you could modify the C++ code to do this:
```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;

public class FileSize {
    public static void main(String[] args) throws IOException {
        Path inputFile = Paths.get("input.txt");
        long size = Files.size(inputFile);
        System.out.println("Size of file " + inputFile + " is " + size + " bytes.");
    }
}
```
In this code, we use the `Files` class to get the size of a file using its path. We create a `Path` object for the input file and then call the `size()` method on it to get the size in bytes. Finally, we print out the size using `System.out.println()`.

You can also use the `Files.getFileSize(String path)` method to get the size of a file in bytes.

import java.io.IOException;
import java.nio.file.Files;

public class FileSize {
    public static void main(String[] args) throws IOException {
        long size = Files.getFileSize("input.txt");
        System.out.println("Size of file input.txt is " + size + " bytes.");
    }
}

In this code, we use the `Files.getFileSize()` method to get the size of a file in bytes and print it out using `System.out.println()`.
