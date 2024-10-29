In Java, you can use the `File` class from `java.io.File` package and its method `length()` that returns length of file in bytes. Here is how it could be written:

```Java
import java.io.File;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the file name:");
        
        String fileName1 = input.nextLine();
        printFileSize(fileName1);
    
        File root = new File("/");  //Root directory
        for (File file : root.listFiles()) {
            if (file.isFile() && file.getName().equals(fileName1)) {
                System.out.println("Size of " + file.getName() + " is: " + file.length() + " bytes");
            }
        }        
    }
    
    public static void printFileSize(String filename) {
       File file = new File(filename); 
       if (file.exists()) { 
           System.out.println("Size of " + filename + " is: " + file.length() + " bytes");
        } else {
            System.out.println("Error: File not found.");;
        }  
    }
}
```
This Java code does the following: 
1. Asks for a filename from user which will be used to find the file in the current directory. It then prints its size, if it exists.
2. Loops through all files in root directory and checks whether the file with name entered by user exists there too. If it does, it prints out its size.
3. If the file doesn't exist in either location (in current working directory or at root of filesystem), an error message is displayed instead. 

Note that to access a File object for each entry in the root directory and verify if the name matches with the user-inputted filename, you would need a way to traverse all files in the root directory rather than just checking for existence of file with given name at current working directory (`printFileSize(fileName1)`).

