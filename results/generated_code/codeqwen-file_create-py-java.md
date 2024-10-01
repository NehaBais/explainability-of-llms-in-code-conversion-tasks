Here is the Java code equivalent to your Python code:

```java
import java.io.*;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {

    public static void main(String[] args) throws IOException {
        createFile("."); // current directory
        createDir("."); // current directory

        createFile("/"); // root directory
        createDir("/"); // root directory
    }

    private static void createFile(String directory) throws IOException {
        Path file = Paths.get(directory, "output.txt");
        Files.write(file, new byte[0]);
    }

    private static void createDir(String directory) throws IOException {
        Path dir = Paths.get(directory, "docs");
        Files.createDirectory(dir);
    }
}
```

This code is using Java's Files class to create a new file and directory. The `createFile()` method writes an empty byte array into the file, and the `createDir()` method creates a new directory with the given path. The IOException is used here because these methods can throw an exception if there is a problem creating the file or directory.
