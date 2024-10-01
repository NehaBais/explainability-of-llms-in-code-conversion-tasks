Below is the Java equivalent of your Python code:

```java
import java.io.File;

public class Main {

    public static void main(String[] args) {
        renameAndMove("input.txt", "output.txt");
        renameAndMove("docs", "mydocs");
    }

    private static void renameAndMove(String source, String destination){
        File original = new File(source);
        File renamed = new File(destination);

        // check if files exist and are not directories
        if (original.exists() && !original.isDirectory()) {
            renamed.mkdir(); // create the destination directory 
            original.renameTo(new File(renamed, original.getName())) ; // rename file to new name
        } else {
            System.out.println("Either the file does not exist or it is a directory");
        }

    }
}
```
In this Java code, first we are checking if the files exist and they are not directories. Then we are creating the destination directory and renaming the source file to the new name in the destination directory.

Please note that this code assumes you have the necessary permissions to rename/move files/directories as required by your task.
