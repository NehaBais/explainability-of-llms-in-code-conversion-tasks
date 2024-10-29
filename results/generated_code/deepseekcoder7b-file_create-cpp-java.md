Below is the Java equivalent of your C++ code using `new File()` for creating files and directories, respectively. 

To create a new file in java you can use `new File(path)` where path is the location to store the file, it will automatically handle file creation part. However since we are dealing with root directory we need to provide full system-specific path not just relative one. 

```java
import java.io.File;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        // Creating file in current working directory
        File f1 = new File("output.txt");
        try {
            f1.createNewFile();
        } catch (IOException e) {
            e.printStackTrace();
        }
        
        // Creating directory in current working directory
        File docs = new File("docs");
        if (!docs.exists()) {
           docs.mkdirs(); 
        }
         
        // Creating file at filesystem root (this might require additional permissions)
        // Please replace "c:" with your system's root directory e.g., "/" for Unix/Linux, "C:\\" for Windows
        File f2 = new File("c:/output.txt"); 
        try {
            f2.createNewFile();
        } catch (IOException e) {
            e.printStackTrace();
        }
        
        // Creating directory at filesystem root similarly replace "c:" with your system's root directory
        File docsRoot = new File("c:/docs"); 
        if (!docsRoot.exists()) {
           docsRoot.mkdirs(); 
        }
    }
}
```
This code assumes that you have the necessary permissions to create files/directories in those locations. If not, you may need to run as root user or administrator. For windows users on systems with a drive letter like C:, D: etc., "c:" is used as a placeholder and should be replaced by appropriate root path of your system.

