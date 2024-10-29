Below is the equivalent Java code to your C program:

```Java
import java.io.File;

public class Main {
    public static void main(String[] args) {
        File file1 = new File("input.txt");
        if (file1.exists()) 
            System.out.println(file1.length());   // In bytes
        
        String absolutePathToRoot =  /* specify the path to your root directory here */;
        File file2 = new File(absolutePathToRoot + "\\input.txt");
        if (file2.exists()) 
            System.out.println(file2.length()); // In bytes
    }
}
```
Please replace the `absolutePathToRoot` string in the code with an actual absolute path to your file system root directory, then you can run this Java program on your computer. This Java program uses java.io package's File class that offers methods for checking if a file exists and getting its size in bytes.

