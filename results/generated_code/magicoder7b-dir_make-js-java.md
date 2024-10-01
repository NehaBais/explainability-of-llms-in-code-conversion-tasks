 Below is the Java equivalent for the JavaScript code provided above. We use Java's `java.nio.file` package to create the directories if they don't exist and also handle any errors that may occur during this process:

import java.io.IOException;
import java.nio.file.*;

public class Main {
    public static void main(String[] args) throws IOException {
        Path directory = Paths.get("./path/to/dir");
        createDirectory(directory);
    }

    private static void createDirectory(Path path) throws IOException {
        Files.createDirectories(path);
    }
}

This code will simply try to create a directory at the specified location and does not have the same error handling or parent directory creation as the JavaScript code. If you need that functionality, it would be easier to use more traditional file operations in Java. For instance:

```Java
import java.io.*;

public class Main {
    public static void main(String[] args) {
        File directory = new File("./path/to/dir");
        if (!directory.exists() && !directory.mkdirs()) {
            System.out.println("Failed to create directory.");
        } else {
            System.out.println("Directory created successfully.");
        }
    }
}
```
This code checks if the file exists, and if it doesn't, attempts to make all non-existent parent directories as well as the directory itself. If any of these steps fail, it prints an error message. Otherwise, it prints that the directory was created successfully.
