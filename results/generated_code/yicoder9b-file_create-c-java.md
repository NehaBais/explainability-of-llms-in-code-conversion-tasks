In Java the equivalent code would be:

```java
import java.io.File;
import java.io.IOException;
import java.nio.file.Files;

public class Main {
    public static void main(String[] args) throws IOException { 
        createEmptyFilesAndDirs();
        
        File root = File.listRoots()[0]; // Get the filesystem root directory
        File workingDir = new File(".");  // Get the current working directory

        for (File dir : new File[] {root, workingDir}) { 
            createEmptyFilesAndDirs(dir);
        }
    }
    
    private static void createEmptyFilesAndDirs() throws IOException{
      File file = new File("output.txt");
      file.createNewFile(); // Create an empty file, with size 0 bytes

      File dir = new File("docs");
      dir.mkdir();  // Make a directory
    }
    
    private static void createEmptyFilesAndDirs(File base) throws IOException {
      for (String filename : new String[]{"output.txt", "docs"}){ 
          createEmptyFilesAndDirs(new File(base, filename)); // Create files and directories under the base directory  
      }
    }
}
```
Please note that Java I/O operations may throw `IOException` exceptions, so it's necessary to either handle these exceptions or declare them in a method using `throws IOException`.
