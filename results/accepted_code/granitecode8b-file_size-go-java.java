import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;

public class FileSize {
  public static void main(String[] args) {
    printFileSize("input.txt");
    printFileSize("/input.txt");
  }

  public static void printFileSize(String fileName) {
    File file = new File(fileName);
    if (file.exists()) {
      try (FileInputStream fis = new FileInputStream(file)) {
        System.out.println(file.length() + " bytes");
      } catch (IOException e) {
        System.err.println("Error reading file: " + e.getMessage());
      }
    } else {
      System.err.println("File not found: " + fileName);
    }
  }
}
