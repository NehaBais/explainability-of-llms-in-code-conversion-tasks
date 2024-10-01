 The equivalent code in Java would be:

```java
import java.io.*;

public class FileRename {
    public static void main(String[] args) throws IOException{
        // rename file here
        File source1 = new File("input.txt");
        File target1 = new File("output.txt");
        if(!source1.renameTo(target1)) {
            throw new IOException("Unable to rename file: " + source1);
        }

        // rename file in root directory
        File source2 = new File("/input.txt");
        File target2 = new File("/output.txt");
        if(!source2.renameTo(target2)) {
            throw new IOException("Unable to rename file: " + source2);
        }
        
        // rename directory here
        File source3 = new File("docs");
        File target3 = new File("mydocs");
        if(!source3.renameTo(target3)) {
            throw new IOException("Unable to rename folder: " + source3);
        }

        // rename directory in root directory
        File source4 = new File("/docs");
        File target4 = new File("/mydocs");
        if(!source4.renameTo(target4)) {
            throw new IOException("Unable to rename folder: " + source4);
        }
    }
}
```
