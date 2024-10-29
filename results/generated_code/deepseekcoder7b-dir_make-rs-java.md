Below is the equivalent Java code for creating a directory and any missing parents, following the POSIX `mkdir -p` command standard. It uses java.nio.file library to create directories with options including "create_directories".

```java
import java.nio.file.Files;
import java.nio.file.Paths;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        String dir = "./path/to/dir";
        createDirWithParents(dir);
    }
    
    private static void createDirWithParents(String dir){
        try{
            Files.createDirectories(Paths.get(dir));
        } catch (IOException e) {
            System.out.println("An error occurred while creating directories");
        }
    }
}
```

In the code above, `Files.createDirectories()` is used to create a directory and any missing parents. If the pathname represents an existing directory, it will return without further action and if the operation fails due to some reason it throws IOException. The `Paths.get(dir)` method returns a new Path instance by converting the given path string into a Path object.

