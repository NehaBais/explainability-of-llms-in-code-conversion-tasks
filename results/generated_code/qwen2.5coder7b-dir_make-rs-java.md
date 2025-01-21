In Java, you can use `java.nio.file.Files` to create directories and their parents. Here is how your Rust code would look translated into Java:

```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) {
        Path path = Paths.get("./path/to/dir");
        try {
            Files.createDirectories(path);
        } catch (IOException e) {
            System.err.println("An Error Occured: " + e.getMessage());
        }
    }
}
```

This code will create the directory and any missing parents. If the directory already exists, it will not throw an error; instead, it will simply do nothing.
