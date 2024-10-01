In Java, there is no direct equivalent of Python's os.makedirs() function. However, the java.nio.file.Files class provides a static method named createDirectories(), which does exactly what you want:

```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
    public static void mkdirp(String path) throws IOException {
        Files.createDirectories(Paths.get(path));
    }

    public static void main(String[] args) {
        try {
            mkdirp("./path/to/dir");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
```

Please note that IOException is thrown if the directory cannot be created for any reason such as a permission issue, invalid path etc. 

The above code will attempt to create all directories required to resolve the given path name. If a component of the path already exists, it will not be replaced.
