import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class CreateDirectory {

  public static void main(String[] args) {
    if (args.length != 1) {
      System.err.println("Usage: java CreateDirectory <path>");
      System.exit(1);
    }
    createDirectories(args[0]);
  }

  public static void createDirectories(String pathString) {
    Path path = Paths.get(pathString);

    try {
      Files.createDirectories(path);
    } catch (IOException e) {
      System.err.println("Failed to create directory: " + e.getMessage());
      System.exit(1);
    }
  }
}
