Here's the equivalent Java code for the given C code:
```
import java.io.File;
public class MkdirP {
 public static void main(String[] args) {
 String path = args[0];
 File file = new File(path);
 
 // Create all nonexistent parent directories along the path.
 if (!file.exists()) {
 file.mkdirs();
 }
 }
}
```
This Java code creates a `File` object from the given path and then checks if it exists using the `exists()` method. If it doesn't exist, it creates all nonexistent parent directories along the path using the `mkdirs()` method. This should work equally well cross-platform as it uses the platform-independent `File` class.

