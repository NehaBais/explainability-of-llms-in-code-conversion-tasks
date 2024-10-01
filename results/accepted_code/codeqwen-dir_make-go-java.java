import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    try {
      Files.createDirectories(Paths.get("/tmp/some/path/to/dir"));
    } catch (IOException e) {
      System.out.println("An error occurred while creating the directory: " + e.getMessage());
    }
  }
}
