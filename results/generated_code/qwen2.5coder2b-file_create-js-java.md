In Java, the `java.nio.file.Files` class can be used for creating new files and directories. Here's how you could convert the JavaScript code to Java:

```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) {
        // Creating an output file
        try {
            Path outputFile = Paths.get("output.txt");
            Files.createFile(outputFile);
            System.out.println("Output file created.");
        } catch (IOException e) {
            System.err.println(e.getMessage());
        }

        // Creating a directory
        try {
            Path docsDirectory = Paths.get("docs");
            Files.createDirectories(docsDirectory);
            System.out.println("Docs directory created.");
        } catch (IOException e) {
            System.err.println(e.getMessage());
        }
    }
}
```

In this Java program, we create `Path` objects for the file and directory we want to create. We then use `Files.createFile()` for creating a new file and `Files.createDirectories()` for creating a new directory.

Please note that you might need to add appropriate permissions when running this Java program with root privileges (chmod +x filename.java), depending on your system's configuration.
