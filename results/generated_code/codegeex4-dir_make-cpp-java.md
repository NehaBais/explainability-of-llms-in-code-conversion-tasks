Here is the equivalent Java code for creating a directory and any missing parents using the `Files` class from the standard library:

```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class MkdirP {
    public static void main(String[] args) {
        if (args.length != 1) {
            System.out.println("usage: mkdir <path>");
            return;
        }

        Path pathToCreate = Paths.get(args[0]);

        try {
            Files.createDirectories(pathToCreate);
        } catch (IOException e) {
            System.err.println("couldn't create directory: " + pathToCreate.toString());
            e.printStackTrace();
            return;
        }

        // If the directory already exists, it won't throw an exception.
    }
}
```

### Explanation:

1. **Imports**: We import necessary classes from `java.nio.file` package.

2. **Main Method**:
   - The code starts by checking if exactly one command-line argument is provided (the path to create).
   
3. **Path Creation**:
   - It creates a `Path` object using the first command-line argument.
   
4. **Creating Directories**:
   - The `Files.createDirectories(Path)` method attempts to create the directory and any necessary but nonexistent parent directories specified by the given path.
   - If an exception occurs (e.g., insufficient permissions, invalid path), it is caught and an error message is printed.

### Cross-Platform Compatibility:
The Java `Files` class's methods are designed to be cross-platform, meaning this code should work equally well on different operating systems like Windows, macOS, and Linux. 

This implementation ensures the directory creation works similarly to the behavior of the POSIX `mkdir -p` command.
