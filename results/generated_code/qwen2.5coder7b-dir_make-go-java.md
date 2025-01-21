In Java, you can use `java.nio.file.Files` class to achieve the same functionality as the GoLang os.MkdirAll function:

```java
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) {
        try {
            Path path = Paths.get("/tmp/some/path/to/dir");
            Files.createDirectories(path);
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
```

This Java code will create a directory and any missing parents, similar to the GoLang os.MkdirAll function. If the directory already exists, it will throw an `IOException` which you can handle as needed.
