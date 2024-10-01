 Below is the equivalent Java code for your Golang program:

```java
import java.io.*;

public class Main{

    public static void main(String[] args){
        try {
            printFileSize("input.txt");
            printFileSize("/input.txt");
        } catch (IOException e) {
            System.out.println(e);
        }
    }
    
    public static void printFileSize(String f) throws IOException{
        File file = new File(f);
        
        if(!file.exists()){
            System.out.println("File does not exist");
        } else {
            long size = file.length();
            System.out.println("The size of the file is " + size + " bytes");
        }
    }
}
```
Just like in your Go code, this Java program uses the `os` and `io` packages to determine the size of a given file. It checks if the file exists first before attempting to get its length, printing an error message if it doesn't exist or cannot be accessed for some other reason. In Java, we use exceptions (try-catch blocks) instead of checking for errors like in Go.
