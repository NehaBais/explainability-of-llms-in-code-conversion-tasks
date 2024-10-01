The equivalent code in Java would be as follows:

```java
import java.io.File;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.stream.Stream;

public class Main {
    public static void main(String[] args) {
        if (args.length != 1) {
            System.out.println("usage: mkdir <path>");
            return;
        }

        Path pathToCreate = Paths.get(args[0]);

        if (Files.exists(pathToCreate))
            return;

        try {
            Files.createDirectories(pathToCreate);
        } catch (Exception e) {
            System.out.println("couldn't create directory: " + pathToCreate.toString());
            e.printStackTrace();
            return;
        }
    }
}
```

In Java, we use `java.io.File` and `java.nio.file.Files` for file and directory handling respectively. The difference is that the former is a legacy API used in older versions of Java, while the latter provides more modern and powerful APIs.

The code first checks if the provided path exists. If it does, it returns immediately. If not, it attempts to create all parent directories as needed using `Files.createDirectories(pathToCreate)`. If this succeeds, the function returns; otherwise, an error message is printed, and the function exits with a non-zero status code (to indicate failure).

In the event of any exceptions during the creation of directories, they are caught and their stack trace is printed. This can be useful for debugging purposes but should not be used in production as it could expose sensitive information.
