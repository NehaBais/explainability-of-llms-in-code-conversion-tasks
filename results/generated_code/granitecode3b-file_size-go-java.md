Sure, here's the Java code that does the same thing as the Golang code:
```java
import java.io.File;
import java.util.Scanner;
public class Main {
 public static void main(String[] args) {
  Scanner scanner = new Scanner(System.in);
  System.out.print("Enter file name: ");
  String fileName = scanner.nextLine();
  File inputFile = new File(fileName);
  if (inputFile.exists()) {
   System.out.println("Size of " + fileName + ": " + inputFile.length() + " bytes");
  } else {
   System.out.println("File not found!");
  }
 }
}
```
In this Java code, we first create a Scanner object to read user input. Then we prompt the user to enter a file name. We then create a File object with that file name. If the file exists, we use the length() method to get its size in bytes and print it out. If the file doesn't exist, we print an error message.

