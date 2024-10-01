 In Java, we use the `java.nio.file` package which provides classes for manipulating files and directories. Here's your Rust code converted to a Java program:

```java
import java.io.IOException;
import java.nio.file.*;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws IOException {
        String[] paths = {"input.txt", "docs", "/input.txt", "/docs"};

        for (String path : paths) {
            try {
                Path filePath = Paths.get(path);
                if (Files.isDirectory(filePath)) {
                    System.out.println(path + " is a directory");
                } else if (Files.isRegularFile(filePath)) {
                    System.out.println(path + " is a file");
                } else {
                    throw new NoSuchFileException(path);
                }
            } catch (NoSuchFileException e) {
                System.out.println(path + " does not exist");
            }
        }
    }
}
```

This Java code does the same thing as your Rust code: it checks if a given file or directory exists and prints its type, or that it doesn't exist in case of an error. The `NoSuchFileException` is thrown when the file or directory does not exist, so we catch this exception to print a custom message for non-existent files.

Please note that Java cannot access directories or files in the root directory with ordinary permissions, it may require elevated privileges. So if you're trying to check `/input.txt` and `/docs`, your program will most likely fail due to security restrictions.
