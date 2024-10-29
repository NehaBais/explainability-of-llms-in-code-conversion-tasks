Below is the equivalent Java code using java.nio.file API, which provides a more robust and cross-platform way to handle directory creation than using pure Java APIs like File or java.io.File. 

This implementation will not throw exceptions in case of an error other than 'directory already exists', but it does provide feedback through the boolean return type (true on success, false otherwise).

```java
import java.nio.file.*;

public class Main {
    public static void main(String[] args) throws Exception{
        Path path = Paths.get("./path/to/dir");
        System.out.println(mkdirp(path));
    }
    
    public static boolean mkdirp(Path p) throws Exception {
        if (Files.exists(p)) { // Directory already exists, nothing to do return true
            return true;
        } else { 
          try{
              Files.createDirectories(p); // Create directory and any missing parents
              return true;
           }catch(FileAlreadyExistsException e){
               System.out<｜begin▁of▁sentence｜>.print("Directory already exists");
               return false;
           } catch (IOException ex) { 
                System.err.println("Error creating directory: " + p);
                return false;
           }  
        }
    }
}
```
This Java code will check if the given path's directory exists, if not then it tries to create parent directories and finally creates the current directory itself. If any error occurs (like lack of write permissions), it catches them and returns false.

