The error message indicates that the compiler cannot find the `Files` class from the `java.nio.file` package. This is because the Java implementation uses the fully-qualified name of the `Files` class, which includes the package name. The fix is to import the `Files` class statically at the beginning of the file.

Once the `Files` class is imported, the error should be resolved and the code should compile successfully.
Here's the corrected code in a single code block:
```java
import static java.nio.file.Files.*;
import static java.nio.file.StandardWatchEventKinds.*;

import java.io.IOException;
import java.nio.file.Path;
import java.nio.file.Paths;

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

