In Java, you can use the `Files` class in `java.nio.file` package to achieve similar functionality using the `createDirectories` method.

Here is how the equivalent function would look like:

```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) {
        try {
            mkdirp("./path/to/dir");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private static void mkdirp(String path) throws IOException {
        Path directory = Paths.get(path);
        Files.createDirectories(directory);
    }
}
```

This code will create a directory (and all necessary parent directories) if they do not already exist. If the directory or its parents already exist, it simply returns without doing anything.
