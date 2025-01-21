Below is the Java version of your JavaScript code:

```java
import java.io.File;
import java.io.IOException;

public class Main {
  public static void main(String[] args) throws IOException {
    String path = "./path/to/dir";
    mkdirp(path);
  }

  public static void mkdirp(String p) throws IOException {
    File file = new File(p);
    
    if (file.exists()) {
      return;
    }
    
    // Get parent directory
    File parentDir = file.getParentFile();
    
    if (parentDir != null && !parentDir.exists()) {
      mkdirp(parentDir.getPath());
    }

    if (!file.mkdir()) {
      throw new IOException("Failed to create directory " + p);
    }
  }
}
```

This Java code does the same as your JavaScript function. It tries to create a directory, and if that fails because it doesn't exist, it creates its parent directories first until either they already exist or there's another error.

The mkdirp() method in java uses File.mkdir() which can only create a single directory at a time. If the path includes parents that do not exist, it throws an IOException. That's why we need to call mkdirp() recursively with the parent directory as argument until all parent directories are created.
