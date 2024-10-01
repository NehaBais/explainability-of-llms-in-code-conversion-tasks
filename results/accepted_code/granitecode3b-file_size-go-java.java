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
