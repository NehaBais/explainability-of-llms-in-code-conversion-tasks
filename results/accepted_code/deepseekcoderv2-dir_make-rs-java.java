import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    try {
      // Create the directory and any missing parents
      Files.createDirectories(Paths.get("./path/to/dir"));
      System.out.println("Directory created successfully.");
    } catch (IOException e) {
      System.err.println("An Error Occurred: " + e.getMessage());
    }
  }
}
