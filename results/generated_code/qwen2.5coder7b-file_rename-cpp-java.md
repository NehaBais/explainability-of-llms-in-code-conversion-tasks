Sure, here is the equivalent Java code for your requirements:

```java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        renameFile("input.txt", "output.txt");
        renameDirectory("docs", "mydocs");
        renameFile("/input.txt", "/output.txt");
        renameDirectory("/docs", "/mydocs");
    }

    public static void renameFile(String oldName, String newName) {
        File file = new File(oldName);
        if (file.exists()) {
            boolean success = file.renameTo(new File(newName));
            if (!success) {
                System.out.println("Failed to rename " + oldName + " to " + newName);
            } else {
                System.out.println("Successfully renamed " + oldName + " to " + newName);
            }
        } else {
            System.out.println(oldName + " does not exist.");
        }
    }

    public static void renameDirectory(String oldName, String newName) {
        File directory = new File(oldName);
        if (directory.exists() && directory.isDirectory()) {
            boolean success = directory.renameTo(new File(newName));
            if (!success) {
                System.out.println("Failed to rename " + oldName + " to " + newName);
            } else {
                System.out.println("Successfully renamed " + oldName + " to " + newName);
            }
        } else {
            System.out.println(oldName + " does not exist or is not a directory.");
        }
    }
}
```

### Explanation:
1. **renameFile Method**: This method takes two parameters, `oldName` and `newName`, and attempts to rename the file from `oldName` to `newName`. It checks if the file exists before attempting the rename operation.
2. **renameDirectory Method**: Similar to `renameFile`, this method renames a directory from `oldName` to `newName`. It also checks if the directory exists and is indeed a directory before attempting the rename.
3. **main Method**: This is the entry point of the program, which calls both methods for renaming files and directories in both the current working directory and the filesystem root.

### Notes:
- The `renameTo` method returns `true` if the file or directory was successfully renamed, otherwise `false`.
- If you encounter issues with renaming files or directories, especially those on different drives (e.g., from C: to D:), ensure that your program has the necessary permissions.
- On Unix-based systems, attempting to rename files across different filesystems may not work as expected.
