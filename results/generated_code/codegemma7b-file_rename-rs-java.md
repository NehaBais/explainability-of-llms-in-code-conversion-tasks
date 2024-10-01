```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;

public class FileRenamer {

    public static void main(String[] args) throws IOException {
        String error = "File move error";

        // Rename in current working directory
        Files.move(Path.of("input.txt"), Path.of("output.txt"));
        Files.move(Path.of("docs"), Path.of("mydocs"));

        // Rename in filesystem root
        Files.move(Path.of("/input.txt"), Path.of("/output.txt"));
        Files.move(Path.of("/docs"), Path.of("/mydocs"));
    }
}
```
