The equivalent code in Java would be:
```java
import java.io.File;
public class mkdirp {
    public static void main(String[] args) {
        File dir = new File("/tmp/some/path/to/dir");
        if (!dir.exists()) {
            try{
                if(dir.mkdirs()){
                    System.out.println("Directories are created!");
                } else {
                    System.out.println("Failed to create directories!");
                }
            } catch(Exception e){ // Handle Exception If any
                e.printStackTrace();
            }
        }
    }
}
```
In this Java code, we first create a File object with the directory path /tmp/some/path/to/dir. The `mkdirs()` method checks if all missing directories exist; it returns true if this is the case and false otherwise. If the directories do not exist or are created successfully, we print a message accordingly. In case of an exception during creation, we handle that exception using the try-catch block.
Note: Java does not have `os.MkdirAll` function in standard libraries. The closest equivalent is java.nio.file.Files#createDirectory method which creates a directory and any missing parents.
