Here is the equivalent Java code for the given C code:
```java
import java.io.*;
import java.nio.file.*;

public class CreateDirectory {
    public static void main(String[] args) throws IOException {
        if (args.length != 2) {
            System.err.println("usage: " + CreateDirectory.class.getSimpleName() + " <path>");
            return;
        }

        String path = args[1];
        File file = new File(path);
        if (!file.exists()) {
            // create directory and any missing parents
            Files.createDirectories(Paths.get(path));
        } else {
            // check if the file is a directory
            if (!Files.isDirectory(Paths.get(path))) {
                System.err.println("couldn't create directory " + path);
                return;
            }
        }
    }
}
```
Note that this Java code uses the `java.nio.file` package to perform file operations, which is the preferred way of doing I/O in modern Java. The `Files.createDirectories()` method creates a directory and any missing parents, while the `Files.isDirectory()` method checks if the specified path is a directory or not.

Also note that this code does not use the same error handling as the C code, it simply prints an error message to the console and exits the program. You may want to add more robust error handling to your Java code depending on your specific requirements.
