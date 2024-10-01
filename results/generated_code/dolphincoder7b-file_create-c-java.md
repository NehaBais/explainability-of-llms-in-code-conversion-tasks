Below is the equivalent Java code:
```java
import java.nio.file.*;
import java.nio.file.attribute.FileAttribute;
import static java.nio.file.StandardOpenOption.*;
import java.io.IOException;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws IOException {
        /* permissions are before umask */
        Path outputFilePath = Paths.get("output.txt");

        try (FileOutputStream outputStream = new FileOutputStream(outputFilePath.toFile(), CREATE, TRUNCATE_EXISTing)) {
            // do nothing - create an empty file
        }

        FileAttribute<Set<PosixFilePermission>> permissions = PosixFilePermissions.asFileAttribute(
                Arrays.asList(
                        PosixFilePermission.OWNER_READ,
                        PosixFilePermission.GROUP_READ,
                        PosixFilePermission.OTHERS_READ));

        try {
            Files.createDirectory(Paths.get("docs"), permissions);
        } catch (IOException e) {
            System.err.println(e);
        }
    }
}
```
In the Java code above:

1. `outputFilePath` is a `Path` object, which represents a file or directory in the filesystem. We use `Paths.get()` to create it from a string path.
2. The second try-with-resources block creates an empty "output.txt" file using `FileOutputStream`. The `CREATE` and `TRUNCATE_EXISTing` options are used to ensure that the file is created if it doesn't exist, or truncated if it already exists.
3. In the third `try`-block, a new directory named "docs" is created using `Files.createDirectory()`. We use `PosixFilePermissions` to set permissions for each user, group and other (similar to Unix file permissions).
4. The `main()` method throws an `IOException`. Since Java does not have direct equivalents of C's `#include <errno.h>` or `<fcntl.h>`, there are no error handling checks in the code. 

Note that the Java API is generally more flexible and powerful than the C one, which means that it may be necessary to adjust your implementation to match the new restrictions. The above example uses a minimalist approach with fewer methods and options.
