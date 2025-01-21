To convert the given C code to Java, you can use Java's file system classes. Here's how you would do it:

```java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        // Create a File object for the current working directory and the filesystem root.
        File currentDir = new File(".");
        File rootDir = new File("/");
        
        // Check if the files exist in the specified locations.
        boolean inputTxtExists = checkFile(currentDir, "input.txt");
        boolean docsExists = checkDirectory(rootDir, "docs");
        
        // Print the results.
        System.out.println("input.txt is a regular file? " + (inputTxtExists ? "yes" : "no"));
        System.out.println("docs is a directory? " + (docsExists ? "yes" : "no"));
    }

    /**
     * Checks if a specified file exists at the given File object.
     * @param file The File object to check.
     * @param fileName The name of the file to check.
     * @return true if the file exists, false otherwise.
     */
    private static boolean checkFile(File file, String fileName) {
        File fileToCheck = new File(file.getAbsolutePath() + "/" + fileName);
        return fileToCheck.exists();
    }

    /**
     * Checks if a specified directory exists at the given File object.
     * @param file The File object to check.
     * @param dirName The name of the directory to check.
     * @return true if the directory exists, false otherwise.
     */
    private static boolean checkDirectory(File file, String dirName) {
        File dirToCheck = new File(file.getAbsolutePath() + "/" + dirName);
        return dirToCheck.exists();
    }
}
```

### Explanation:
1. **File Objects**: The `File` class from Java's `java.io` package is used to represent the current working directory (`.`) and the filesystem root (`/`). This allows us to construct paths relative to these locations.
2. **checkFile Method**: This method checks if a file exists at a given path by constructing a new `File` object with the specified name and checking its existence using the `exists()` method.
3. **checkDirectory Method**: This method does the same for directories, but it appends "/dirName" to the current directory's path before creating the new `File` object.
4. **Main Method**: In the `main` method, we create File objects and call the `checkFile` and `checkDirectory` methods to verify the existence of the specified files and directories.

This Java code achieves the same functionality as the original C code, but using Java's file system API instead of C's `sys/types.h`, `sys/stat.h`, `stdio.h`, and `unistd.h`.
