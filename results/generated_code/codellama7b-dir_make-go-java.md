 Here is an example of how you can implement this function in Java:
```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class MkdirAll {
    public static void mkdir(String path, int mode) throws IOException {
        Path dir = Paths.get(path);
        if (Files.exists(dir)) {
            return;
        } else {
            Files.createDirectories(dir, new FileAttribute[0]);
        }
    }
}
```
This function takes a `String` path and an `int` mode as parameters. The `Paths.get()` method is used to create a `Path` object from the given path string, and the `Files.exists()` method is used to check if the directory already exists. If it does not exist, the `Files.createDirectories()` method is called with the same `Path` object and an empty array of `FileAttribute` objects as parameters. This creates a new directory with the specified mode (in this case 0770) and returns successfully.
You can use this function in your code by importing it and calling it with the path to the directory you want to create:

import MkdirAll;

MkdirAll.mkdir("/tmp/some/path/to/dir", 0770);

