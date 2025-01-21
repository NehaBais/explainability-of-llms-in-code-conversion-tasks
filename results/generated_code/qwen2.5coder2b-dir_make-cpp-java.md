In Java, the `java.nio.file.Files` class provides similar functionality with the `createDirectories()` method. You can use it to handle directory creation and parent directories' existence checks.

Here is a Java implementation of your C++ code:

```java
import java.io.IOException;
import java.nio.file.*;

public class MkdirP {
    public static void main(String[] args) {
        if (args.length != 1) {
            System.out.println("Usage: mkdir <path>");
            return;
        }

        Path pathToCreate = Paths.get(args[0]);

        try {
            Files.createDirectories(pathToCreate);
            System.out.println("Directory created successfully.");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
```

This Java program will create a directory with the given path. If the parent directories do not exist, it will be created. The `Files.createDirectories()` method checks if the path already exists or needs to be created, and will attempt to create any missing parent directories before creating the target directory itself.

Please note that this implementation uses Java 7 or later for support of Java NIO features like file paths and exceptions handling. You may need to adjust according to your specific use case and environment.
