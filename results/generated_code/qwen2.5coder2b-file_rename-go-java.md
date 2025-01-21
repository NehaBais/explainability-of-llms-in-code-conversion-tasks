To convert the provided Go code to Java, you can use Java's file handling capabilities. Below is the equivalent code:

```java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        // Rename in the current working directory
        File inputFile = new File("input.txt");
        File outputFile = new File("output.txt");
        inputFile.renameTo(outputFile);

        // Rename in the filesystem root directory
        File rootInputFile = new File("/");
        File rootOutputFile = new File("/output.txt");
        rootInputFile.renameTo(rootOutputFile);
    }
}
```

### Explanation:
1. **Import Statements**: The `java.io.File` class is imported for file operations.
2. **Main Method**:
   - Create a `File` object for the input file and output file.
   - Use the `renameTo()` method to rename the files. Note that when dealing with filesystem root directories, the path should start with a slash (`/`).

This Java code performs the same operations as the Go code, renaming the specified files in both the current working directory and the filesystem root.
