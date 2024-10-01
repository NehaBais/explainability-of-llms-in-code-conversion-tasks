Here's a Java implementation of the `mkdirp` function using the `java.nio.file` package:
```
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.FileSystems;
import static java.nio.file.StandardWatchEventKinds.*;
import java.io.IOException;
public class Mkdirp {
    public static void main(String[] args) throws IOException {
        Path path = Paths.get("./path/to/dir");
        createDirectory(path);
    }
    public static void createDirectory(Path path) throws IOException {
        if (Files.exists(path)) {
            return;
        }
        if (Files.notExists(path.getParent())) {
            createDirectory(path.getParent());
        }
        Files.createDirectory(path);
    }
}
``` 
This Java implementation uses the `java.nio.file` package to create directories and their parents, similar to the JavaScript `mkdirp` function. The `main` method demonstrates how to call the `createDirectory` method with a path string. The `createDirectory` method first checks if the directory already exists, and if not, recursively calls itself with the parent directory until it reaches the top-level directory or encounters an error. If any errors occur during the creation of directories, they will be thrown as `IOException`.

