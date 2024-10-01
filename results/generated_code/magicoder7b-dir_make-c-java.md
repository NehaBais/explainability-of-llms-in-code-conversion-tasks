 Below is the equivalent Java code for creating a directory and any missing parents using java.nio.file API:

```java
import java.io.IOException;
import java.nio.file.*;

public class Main {
    public static void main(String[] args) {
        try {
            createDirectoryAndParents("./path/to/dir");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static void createDirectoryAndParents(String path) throws IOException {
        Path directory = Paths.get(path);
        
        if (!Files.exists(directory)) {
            Files.createDirectories(directory);
        }
    }
}
```
In this code, we use the java.nio.file package to interact with file systems in a platform independent manner. The function createDirectoryAndParents() will take a String path argument and create a directory at the given path along with all its parent directories if they do not exist. If any of these steps fail due to an IOException, the method will throw that exception back up to be caught or handled by the code calling this method.
