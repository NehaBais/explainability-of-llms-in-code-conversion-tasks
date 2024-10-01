import java.io.File;
import java.io.IOException;

public class FileSizeChecker {

  public static void main(String[] args) {
    String fileName = args.length > 0 ? args[0] : "input.txt";

    try {
      File file = new File(fileName);
      long size = file.length();
      System.out.println("Size of " + fileName + " is " + size + " bytes");
    } catch (IOException e) {
      System.err.println("Error: " + e.getMessage());
      System.exit(1);
    }
  }
}
