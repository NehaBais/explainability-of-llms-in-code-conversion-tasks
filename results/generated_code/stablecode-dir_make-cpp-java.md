Below is the equivalent Java code using the java.io package and its classes (Files, Paths). This includes creating a directory and any missing parent directories:

```java
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Collections;
import java.util.List;

public class Main {

    public static void main(String[] args) throws IOException {
        if (args.length != 1)) {
            System.out.println("Usage: mkdir <path>");
            return;
        }
        
        Path path = Paths.get(args[0]));
        List<Path> parents = new ArrayList<>();

        // Get the list of all parent directories
        for (Path dir : Files.listTree(path))) {
            parents.add(dir));
        }

        // Create each parent directory if it doesn't exist yet
        Collections.reverse(parents)); // Reverse the list to ensure that we're creating the parent directories from most specific to most general
        for (Path dir : parents) {
            if (!Files.exists(dir))) {
                try {
                    Files.createDirectories(dir));
                } catch (IOException e) {
                    System.out.println("Couldn't create directory: " + dir.toString()));
                    return;
                }
            }
        }

        // Check if the directory already exists
        if (Files.exists(path))) {
            System.out.println("Directory already exists: " + path.toString()));
        } else {
            try {
                Files.createDirectories(path));
                System.out.println("Successfully created directory: " + path.toString()));
            } catch (IOException e) {
                System.out.println("Couldn't create directory: " + path.toString()));
            }
        }
    }
}
```

This code first checks if the required argument is provided. If not, it prints an error message and exits.

Next, the code creates a `Path` object from the given argument.

Then, it gets a list of all parent directories of the given path using the `Files.listTree()` method.

After that, it iterates over the list of parent directories in reverse order (from most specific to most general) and creates each parent directory if it doesn't exist yet using the `Files.createDirectories()` method.

Finally, the code checks if the given path already exists or not using the `Files.exists()` method. If the path already exists, it prints a message indicating that the directory already exists and exits. Otherwise, it creates the given directory and its parent directories if they don't exist yet using the `Files.createDirectories()` method. If there is any error during the creation process, it prints an error message and exits.
