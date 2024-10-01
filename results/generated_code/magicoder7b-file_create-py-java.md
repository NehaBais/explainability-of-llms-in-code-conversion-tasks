 In Java, you can use the `java.io` and `java.nio.file` packages to perform these operations. Here's a conversion of your code:

```java
import java.io.*;
import java.nio.file.*;

public class Main {
    public static void main(String[] args) throws IOException {
        createHere();
        createRoot();
    }
    
    // Method to create files and directories in the current working directory
    private static void createHere() throws IOException {
        Files.createFile(Paths.get("output.txt"));
        Files.createDirectory(Paths.get("docs"));
    }

    // Method to create files and directories in the root directory
    private static void createRoot() throws IOException {
        Files.createFile(Paths.get("/", "output.txt"));
        Files.createDirectory(Paths.get("/", "docs"));
    }
}
```
