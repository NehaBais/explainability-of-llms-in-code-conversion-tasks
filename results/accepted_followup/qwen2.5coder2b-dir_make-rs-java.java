import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    String dirPath = "./path/to/dir";
    try {
      Files.createDirectories(Paths.get(dirPath));
    } catch (IOException e) {
      System.err.println("An Error Occured: " + e.getMessage());
    }
  }
}
