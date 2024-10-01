Below is the equivalent Java code using the java.io.File class methods which creates directories if they do not exist already:

```java
import java.io.File;

public class Main {

    public static void main(String[] args) {
        createDirs("./path/to/dir");
    }

    private static boolean createDirs(String path){
        File dir = new File(path);
  
        // If the directory does not exist, then create it
        if (!dir.exists() && dir.isDirectory())) {
            return dir.mkdirs();
        } 
        return false;
    }
}
```
This Java code uses java.io.File class to check if a folder exists and if not, creates that directory. It does this by using the 'exists' method to check if the directory already exists, if so it simply returns true indicating success. If the directory doesn't exist (or perhaps exists but isn't a directory) then it uses the 'mkdirs()' method to create that directory. This method also ensures any missing parent directories are created in the process. 

The function `createDirs` takes a path string and has the side-effect of creating any missing parent directories in the given path string. The function returns true if the directory already exists or is successfully created. The implementation works equally well cross-platform as the File class methods used are part of Java's standard library which works across all major platforms including Windows, Linux, MacOS and more.
