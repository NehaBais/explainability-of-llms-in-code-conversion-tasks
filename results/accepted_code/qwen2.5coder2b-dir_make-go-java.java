import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    String path = "./path/to/dir";
    try {
      Path directoryPath = Paths.get(path);
      Files.createDirectories(directoryPath, 0770);
      System.out.println("Directory created successfully.");
    } catch (IOException e) {
      System.err.println("Error creating directory: " + e.getMessage());
    }
  }
}
