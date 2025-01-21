```java
import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) {
        try {
            create(".").and(create("/"));
        } catch (IOException e) {
            System.err.println("Error: " + e.getMessage());
            System.exit(1);
        }
    }

    private static Path create(String root) throws IOException {
        Path fPath = Paths.get(root, FILE_NAME);
        Path dPath = Paths.get(root, DIR_NAME);

        if (!Files.exists(dPath)) {
            Files.createDirectories(dPath);
        }

        if (!Files.exists(fPath)) {
            Files.createFile(fPath);
        }

        return fPath;
    }
}
```
