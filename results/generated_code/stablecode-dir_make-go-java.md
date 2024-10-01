Below is the Java equivalent of your Go code:

Java has built-in support for creating directories and any missing parents, similar to the `mkdir -p` command in Unix.

Here's how you can implement this functionality in Java using the `java.io.File`:

```java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        String path = "/tmp/some/path/to/dir";
        File file = new File(path);

        boolean createdDirectories = file.mkdirs();

        if (createdDirectories) {
            System.out.println("Directory created.");
        } else {
            System.out.println("Directory already exists or an error occurred.");
        }
    }
}
```

This Java code uses the `File` class, which is part of the Java Standard Library. This allows for cross-platform compatibility without additional libraries.
