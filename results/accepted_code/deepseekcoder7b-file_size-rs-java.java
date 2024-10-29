import java.io.File;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    System.out.println("Enter the file name:");

    String fileName1 = input.nextLine();
    printFileSize(fileName1);

    File root = new File("/"); // Root directory
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
      System.out.println("Error: File not found.");
      ;
    }
  }
}
