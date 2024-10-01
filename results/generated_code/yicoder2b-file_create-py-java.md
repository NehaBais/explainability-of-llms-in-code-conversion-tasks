The equivalent Java code for the given Python script would be:

In Java, we don't have open and close functions like python so you will need to implement them manually. Also, the os library in Java does not support creating a file with size 0 bytes or a directory immediately as python does. In java, you can only create an empty file if it doesn't exist. For creating a directory, you would use java.nio package instead of os.mkdir(). Here is how we could convert the Python code to Java:

```java
import java.io.File;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        createFile(".", "output.txt");
        createDirectory("/", "docs");
    }

    static public void createFile (String path, String fileName){
        File dir = new File(path);
        dir.mkdirs(); // if the directories don't exist, make them
        File file = new File(dir, fileName);
        file.createNewFile(); 
    }

    static public void createDirectory (String path, String dirName){
        File dir = new File(path);
        if (!dir.exists()){
            dir.mkdirs(); // if the directories don't exist, make them
        }
        File file = new File(dir, dirName);
        file.mkdir(); 
    }
}
```
In this Java code, we use File class to manipulate files and directories in a more object-oriented way. We have createFile function which creates a file with the given name (if it doesn't exist), and createDirectory function which creates a directory with the given name (if it doesn't exist).
