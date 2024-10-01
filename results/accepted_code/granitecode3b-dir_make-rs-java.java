import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    Path path = Paths.get("./path/to/dir");
    try {
      Files.createDirectory(path);
    } catch (IOException e) {
      System.err.println("Error occurred: " + e.getMessage());
    }
  }
}
