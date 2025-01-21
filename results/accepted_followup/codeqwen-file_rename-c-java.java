import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    // Current directory
    renameFileOrDirectory(Paths.get("input.txt"), Paths.get("output.txt"));
    renameFileOrDirectory(Paths.get("docs"), Paths.get("mydocs"));

    // Filesystem root
    try {
      Path currentDir = Paths.get(".");
      Path parentDir = currentDir.getParent();

      renameFileOrDirectory(currentDir.resolve("input.txt"), parentDir.resolve("output.txt"));
      renameFileOrDirectory(currentDir.resolve("docs"), parentDir.resolve("mydocs"));
    } catch (IOException e) {
      e.printStackTrace();
    }
  }

  private static void renameFileOrDirectory(Path source, Path target) {
    try {
      Files.move(source, target);
    } catch (IOException e) {
      System.err.println("Failed to move " + source + " to " + target);
      e.printStackTrace();
    }
  }
}
