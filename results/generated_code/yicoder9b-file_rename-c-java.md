In Java the `renameTo()` method from the File class can be used to rename files and directories. Here's how you could rewrite your C code in Java:

```java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        // Rename file/directory "input.txt"->"output.txt" and "docs"->"mydocs" in the current working directory
        renameFiles(new File("."));
        
        // Rename file/directory "/input.txt"->"/output.txt" and "/docs"->"/mydocs" in the filesystem root
        renameFiles(new File("/"));
    }

    public static void renameFiles(File dir) {
        File inputTxt = new File(dir, "input.txt");
        File outputTxt = new File(dir, "output.txt");
        File docs = new File(dir, "docs");
        File myDocs = new File(dir, "mydocs");  

        // Rename files and directories
        inputTxt.renameTo(outputTxt);
        docs.renameTo(myDocs); 
    }
}
```

Please note that this program has to be executed with sufficient permissions for renaming files in the specified directories, otherwise a `SecurityException` might occur.
