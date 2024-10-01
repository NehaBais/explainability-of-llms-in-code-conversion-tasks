import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class FileSizeChecker {
  public static void main(String[] args) {
    String fileName = args[0];
    try {
      Files.size(Paths.get(fileName));
      System.out.println("File size: " + Files.size(Paths.get(fileName)) + " bytes");
    } catch (IOException e) {
      System.err.println("Error reading file size: " + e.getMessage());
    }
  }
}
