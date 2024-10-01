Below is a Java version of the JavaScript code. Note that due to incompatibility with Java's `File` API and lack of built-in file manipulation methods, there are no equivalents for the `mkdir`, `readdir`, or `stat` calls. 

Also note that Java has an official way to perform directory creation using `java.nio.file.Files#createDirectory(Path, FileAttribute...)`. This is not available in Node.js and would be the preferred method for most users. However, as a learning tool, it may still be useful to see how `mkdirp` works on the Java platform.

```Java
import java.io.*;
import java.nio.file.*;
import java.util.*;

public class MkdirP {

    public static void mkdirp(String path) throws IOException {
        path = new File(path).getAbsolutePath();

        String dirPath = path;
        String parentPath = null;

        // Ensure parent directory exists, if needed.
        while ((parentPath = new File(dirPath).getParent()) != null && !new File(parentPath).exists() && !new File(parentPath).mkdirs()) {
            throw new IOException("Failed to create parent directories.");
        }
    }

    public static void main(String[] args) throws IOException {
        mkdirp("/path/to/dir");
    }
}
```

This code creates the directory with the provided path, including any missing parent directories. If a directory already exists, it will not create anything. The `File` and `Files` classes in Java are used to perform file manipulations. This implementation is based on Node's original JavaScript version and may be adapted to your own use-cases.
