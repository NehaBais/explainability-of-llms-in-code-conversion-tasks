 Below is the Java equivalent of your C code:

```java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        try {
            // Rename file "input.txt" to "output.txt" in current working directory
            File file1 = new File("input.txt");
            File file2 = new File("output.txt");
            if (file1.renameTo(file2)) {
                System.out.println("File renamed successfully");
            } else {
                System.out.println("Failed to rename file");
            }

            // Rename directory "docs" to "mydocs" in current working directory
            File folder1 = new File("docs");
            File folder2 = new File("mydocs");
            if (folder1.renameTo(folder2)) {
                System.out.println("Folder renamed successfully");
            } else {
                System.out.println("Failed to rename folder");
            }

            // Rename file "/input.txt" to "/output.txt" in the root directory
            File rootFile1 = new File("/input.txt");
            File rootFile2 = new File("/output.txt");
            if (rootFile1.renameTo(rootFile2)) {
                System.out.println("Root file renamed successfully");
            } else {
                System.out.println("Failed to rename root file");
            }

            // Rename directory "/docs" to "/mydocs" in the root directory
            File rootFolder1 = new File("/docs");
            File rootFolder2 = new File("/mydocs");
            if (rootFolder1.renameTo(rootFolder2)) {
                System.out.println("Root folder renamed successfully");
            } else {
                System.out.println("Failed to rename root folder");
            }
        } catch (SecurityException e) {
            System.out.println("Operation not permitted");
        }
    }
}
```
Note that you need appropriate permissions to perform these operations and the code should be executed with a user who has those privileges. Also, beware of the root directory as it can have system-level restrictions on what files or directories can be renamed.
