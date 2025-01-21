The error occurs because the `File` class is not imported which is needed to get parent directory path as string. 

To fix this, we need to import java.io.File at the beginning of our Java code. 

Here's your corrected code:
```java
import static java.nio.file.StandardCopyOption.*;

import java.io.File;
import java.io.IOException;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws IOException {
    mkdirp("./path/to/dir");
  }

  static void mkdirp(String p) throws IOException {
    Path path = Paths.get(p);

    try {
      Files.createDirectories(path);
    } catch (IOException e) {
      if (e instanceof NoSuchFileException) {
        // The parent directory does not exist, create it and try again
        mkdirp(new File(path.getParent().toString()).getParent());
        mkdirp(p);
      } else {
        throw e; // re-throw the exception if it's another type of IOException
      }
    }
  }
}
```
