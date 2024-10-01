 In Java, you can use the `Files` class in NIO (`java.nio.file`) package for this task. Here's a function that does similar to Python's `os.makedirs`:

```java
import java.io.IOException;
import java.nio.file.*;

public void mkdirp(String path) throws IOException {
    Files.createDirectories(Paths.get(path));
}
```

This method will create a directory at the specified path, including any missing parent directories. If the directory already exists, this method does nothing and returns successfully.

Please note that unlike Python's `os.makedirs`, the Java version throws an IOException if it cannot create the directory due to a filesystem error (e.g., permission denied). 

Also please note that Java uses "/" as its path separator rather than "\\", so be sure to replace all backslashes in your paths with slashes for correct behavior on both Windows and Unix-like systems.
