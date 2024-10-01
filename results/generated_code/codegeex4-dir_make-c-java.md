Here is the equivalent Java code for creating a directory and any missing parents if they don't exist. This implementation utilizes the `java.nio.file` package which provides cross-platform file system operations.

```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class CreateDirectory {

    public static void main(String[] args) {
        if (args.length != 1) {
            System.err.println("Usage: java CreateDirectory <path>");
            System.exit(1);
        }
        createDirectories(args[0]);
    }

    public static void createDirectories(String pathString) {
        Path path = Paths.get(pathString);

        try {
            Files.createDirectories(path);
        } catch (IOException e) {
            System.err.println("Failed to create directory: " + e.getMessage());
            System.exit(1);
        }
    }
}
```

### Explanation

- **Paths**: This is a utility class that represents the file path and provides methods for creating instances.
- **Files.createDirectories()**: This method creates a directory (or directories) denoted by the provided Path. If the directories do not exist, they will be created; if some of them already exist and are directories, no exception will be thrown.

This Java code is designed to be cross-platform, working equally well on Windows, Linux, and macOS. The `Files.createDirectories()` method will create missing parent directories as required by your C equivalent, while also handling cases where the path might already exist.
