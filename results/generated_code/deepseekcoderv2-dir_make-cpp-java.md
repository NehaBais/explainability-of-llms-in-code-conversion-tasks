 Here is the equivalent Java code for the provided C++ code using the `java.nio.file` package, which provides a cross-platform API for file system operations:

```java
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Mkdir {
    public static void main(String[] args) {
        if (args.length != 1) {
            System.out.println("usage: mkdir <path>");
            return;
        }

        Path pathToCreate = Paths.get(args[0]);

        if (Files.exists(pathToCreate)) {
            return;
        }

        try {
            Files.createDirectories(pathToCreate);
        } catch (Exception e) {
            System.out.println("couldn't create directory: " + pathToCreate.toString());
            return;
        }
    }
}
```

This Java code performs the same operations as the C++ code: it checks if a directory already exists at the given path, and if not, it creates the directory along with any necessary parent directories. If the directory creation fails, it prints an error message to the console.
