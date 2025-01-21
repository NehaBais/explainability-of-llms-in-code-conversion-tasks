To convert the given C code to Java, you can use Java's built-in classes `java.io.File` and `java.nio.file.Files`. Below is the equivalent Java code that creates an empty file named "output.txt" with permissions `rw-r-----` (octal 0640) and an empty directory named "docs" with permissions `rwxr-x---` (octal 0750) in both the current working directory and the filesystem root.

```java
import java.io.File;
import java.io.IOException;

public class CreateFileAndDirectory {
    public static void main(String[] args) {
        try {
            // Current Working Directory
            createFileAndDirectory(new File("./output.txt"), new File("./docs"));
            
            // Filesystem Root
            // Note: Writing to the filesystem root typically requires administrative privileges.
            createFileAndDirectory(new File("/output.txt"), new File("/docs"));
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private static void createFileAndDirectory(File file, File directory) throws IOException {
        // Create or truncate the file
        if (!file.createNewFile()) {
            System.out.println("Failed to create file: " + file.getAbsolutePath());
        } else {
            System.out.println("File created: " + file.getAbsolutePath());
        }

        // Set permissions (octal 0640 for rw-r-----)
        if (!file.setWritable(true) || !file.setReadable(true, true)) {
            System.out.println("Failed to set file permissions: " + file.getAbsolutePath());
        } else {
            System.out.println("File permissions set successfully: " + file.getAbsolutePath());
        }

        // Create the directory
        if (!directory.mkdirs()) {
            System.out.println("Failed to create directory: " + directory.getAbsolutePath());
        } else {
            System.out.println("Directory created: " + directory.getAbsolutePath());
        }

        // Set permissions (octal 0750 for rwxr-x---)
        if (!directory.setExecutable(true) || !directory.setWritable(false, true) || !directory.setReadable(true, true)) {
            System.out.println("Failed to set directory permissions: " + directory.getAbsolutePath());
        } else {
            System.out.println("Directory permissions set successfully: " + directory.getAbsolutePath());
        }
    }
}
```

### Explanation:
1. **Creating Files and Directories**:
   - `file.createNewFile()`: Creates a new, empty file if it does not already exist.
   - `directory.mkdirs()`: Creates the directory and any necessary parent directories.

2. **Setting Permissions**:
   - `file.setWritable(true)`, `file.setReadable(true, true)`: Sets the file to be writable by the owner and readable by everyone else.
   - `directory.setExecutable(true)`, `directory.setWritable(false, true)`, `directory.setReadable(true, true)`: Sets the directory to be executable by the owner and readable and writable by everyone else.

### Note:
- Writing to directories or files in the filesystem root typically requires administrative privileges. You may need to run your Java application with elevated permissions (e.g., using `sudo` on Unix-like systems).
- Ensure that you have the necessary permissions to create files and directories in the specified locations.
