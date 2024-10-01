Sure, here is the equivalent Java code for the given Go language:

```java
import java.io.*;
public class Main {
    static void printFileSize(String filename){
        File file = new File(filename);
        if (file.exists()){
            if (file.isFile()){
                System.out.println(file.length() + " bytes");
            }else if (file.isDirectory()){
                System.out.println(getDirSize(file) + " bytes");
            }else {
                System.out.println("Not a file or directory!");
            } 
        } else {
            System.out.println(filename+" not found!");
        }
    }
    static long getDirSize(File dir) {
        long size = 0;
        for (File file : dir.listFiles()) {
            if (file.isFile()){
                size += file.length();
            }else if (file.isDirectory()){
                size += getDirSize(file);
            }
        }
        return size;
    }
    public static void main(String[] args) {
        printFileSize("input.txt");
        printFileSize("/input.txt");
    }
}
```
This code first checks if the file or directory exists, then it gets its size based on its type (file or directory). If the file is a file (not a directory), it adds its size to the total, otherwise if it's a directory, it recursively calls itself with that directory as argument and adds up all of its sizes. If the file does not exist then it prints a message saying so.
