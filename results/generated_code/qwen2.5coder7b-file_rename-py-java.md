Here is the Java equivalent of your Python code:

```java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        String sep = File.separator;
        
        renameFile("input.txt", "output.txt");
        renameFile(sep + "input.txt", sep + "output.txt");

        renameDirectory("docs", "mydocs");
        renameDirectory(sep + "docs", sep + "mydocs");
    }

    public static void renameFile(String oldName, String newName) {
        File file = new File(oldName);
        if (file.exists() && file.isFile()) {
            file.renameTo(new File(newName));
        }
    }

    public static void renameDirectory(String oldName, String newName) {
        File directory = new File(oldName);
        if (directory.exists() && directory.isDirectory()) {
            directory.renameTo(new File(newName));
        }
    }
}
```
This Java code does the same as your Python script: renames a file and directory both in the current working directory and in the filesystem root. It uses `File.separator` for platform independent path separators.

Note: The rename operation will only be successful if there is no file or directory already named "output.txt" or "mydocs". If there is, the rename operation will fail silently without throwing an exception.
