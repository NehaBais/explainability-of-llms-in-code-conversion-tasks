Below is the equivalent Java code for your C code:

```java
import java.io.File;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) throws Exception {
        renameInCurrentDir("input.txt", "output.txt");
        renameInCurrentDir("docs", "mydocs");
        renameOnFilesystemRoot("/input.txt", "/output.txt");
        renameOnFilesystemRoot("docs", "mydocs");
    }

    public static void renameInCurrentDir(String oldName, String newName) throws Exception {
        File src = new File(oldName);
        File dest = new File(newName);
        if (src.exists() && dest.createNewFile()) {
            Files.move(src.toPath(), dest.toPath());
            System.out.println("Renamed file " + oldName + " to " + newName));
        } else {
            throw new Exception("Failed to rename file " + oldName + " to " + newName));
        }
    }

    public static void renameOnFilesystemRoot(String oldPath, String newPath) throws Exception {
        File src = new File(oldPath);
        File dest = new File(newPath);
        if (src.exists() && dest.createNewFile()) {
            Files.move(src.toPath(), dest.toPath()));
            System.out.println("Renamed file " + oldPath + " to " + newPath));
        } else {
            throw new Exception("Failed to rename file " + oldPath + " to " + newPath));
        }
    }
}
```
Please note that this Java code will only work correctly on systems where the `rename` function works (e.g. Unix/Linux, MacOS). For Windows systems, you can use the `Files.move()` method with a `StandardCopyOption.REPLACE_EXISTING` option, as shown in the Java code above.
