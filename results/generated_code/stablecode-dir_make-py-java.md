Below is a Java equivalent of the Python function `mkdirp`:

```java
import java.io.File;

public class Main {

    public static void mkdirp(String path) {
        File dir = new File(path);
        if (!dir.exists()) {
            boolean success = dir.mkdirs();
                    if(!success){
                     throw new RuntimeException("Failed to create directory for " + path));
                }
            } else {
                // Check if the given path is a file instead of a directory:
                if (!dir.isDirectory()) {
                    throw new IllegalArgumentException(path + " is not a directory"));
                }
            }
        } catch (Exception e) {
            throw new RuntimeException("Failed to create directory for " + path));
        }
    }

    public static void main(String[] args) {
        mkdirp("./path/to/dir");
        System.out.println("Directory created successfully.");
    }
}
```
This implementation uses Java's built-in File class to create directories and check if a path is a directory or not. The `exist_ok=True` argument in the Python function `os.makedirs(path, exist_ok=True))` has been implemented by checking if the given path already exists or not before creating the directory at the specified path. If the directory already exists or any of its missing parents directories, it will return successfully without throwing an exception. The implementation works equally well cross-platform as Java is a platform independent programming language.
