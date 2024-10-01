In Java you can use the `Files` class from java.nio package to create a directory and any missing parents. Here is how we can achieve it:

```java
import java.nio.file.*;
import static java.nio.file.FileVisitResult.CONTINUE;

public class Main {
    public static void main(String[] args) throws Exception {
        createDirectory("path/to/dir");
    }

    static void createDirectory(final String dir) throws Exception{
        Path path = Paths.get(dir);
        if (!Files.exists(path)) {
            Files.createDirectories(path);
        }
    }
}
```

Note that in Java, you do not have the option to set file permissions like in GoLang (`0770`) directly when creating directories as it's a platform dependent behavior and it might cause compatibility issues across different operating systems. However, if there is an existing directory with same path and it is not writable then it may throw AccessDeniedException while trying to create the directories.
You can change file permissions using `Files.setPosixFilePermissions(path, posixFilePermission)` function but it only works on UNIX-based systems.
