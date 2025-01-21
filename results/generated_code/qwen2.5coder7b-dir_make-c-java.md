Sure! Here is the equivalent Java code that achieves the same functionality as your C code. This Java function will create a directory and any missing parents, similar to the `mkdir -p` command in Unix-based systems.

```java
import java.io.File;

public class DirectoryCreator {

    public static void main(String[] args) {
        if (args.length != 1) {
            System.err.println("usage: " + new File(args[0]).getName());
            System.exit(1);
        }
        String path = args[0];
        createDirectory(path);
    }

    public static void createDirectory(String path) {
        File directory = new File(path);

        if (!directory.exists()) {
            boolean created = directory.mkdirs();
            if (created) {
                System.out.println("Directory and parents created successfully.");
            } else {
                System.err.println("Failed to create directory: " + path);
            }
        } else if (directory.isFile()) {
            System.err.println(path + " is a file, not a directory.");
        } else {
            System.out.println("Directory already exists.");
        }
    }
}
```

### Explanation:
1. **Main Method**: This method checks the number of arguments and prints a usage message if the argument count is incorrect. It then calls the `createDirectory` method with the provided path.

2. **createDirectory Method**:
   - A `File` object representing the directory to be created is created.
   - The `exists()` method checks if the file or directory already exists.
   - If it does not exist, the `mkdirs()` method is called on the `File` object. This method creates the directory and any necessary parent directories, similar to `mkdir -p`.
   - Depending on whether `mkdirs()` returns `true` or `false`, appropriate messages are printed.

### Usage:
To run this Java code, you would compile it using a Java compiler (like `javac`) and then execute it with the desired path as an argument. For example:

javac DirectoryCreator.java
java DirectoryCreator ./path/to/dir

This will create the directory at `./path/to/dir` and any necessary parent directories if they do not already exist.
