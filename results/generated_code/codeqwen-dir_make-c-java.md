Below is the equivalent Java code for the given C program.

In this Java code, we use `Path` and `Files` classes to create a directory recursively:

```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) {
        if (args.length != 1) {
            System.err.println("usage: %s <path>");
            System.exit(1);
        }
        createDirectories(Paths.get(args[0]));
    }

    public static void createDirectories(Path path) {
        try {
            Files.createDirectories(path);
        } catch (IOException e) {
            System.err.println("couldn't create directory " + path.toString());
            System.exit(1);
        }
    }
}
```

This code creates a directory at the given path using `Files.createDirectories()`. The method throws an `IOException` if the directories cannot be created, so we handle this exception and print an error message before exiting with a non-zero status.
