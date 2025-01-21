import java.io.IOException;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws IOException {
    fileExists("input.txt");
    fileExists("zero_length.txt");
    fileExists("docs/input.txt");
    fileExists("docs/zero_length.txt");

    // Root of the filesystem  (e.g., C:\ on Windows, / on Unix)
    Path root = FileSystems.getDefault().getRootDirectories().iterator().next();
    Files.list(root)
        .forEach(
            path -> {
              try {
                fileExists(path.toString());
              } catch (IOException | NoSuchFileException ignored) {
              }
            });
  }

  private static void fileExists(String pathStr) {
    Path path = Paths.get(pathStr);
    System.out.print(pathStr);
    if (Files.exists(path)) {
      if (Files.isDirectory(path)) {
        System.out.println(" is a directory");
      } else {
        try {
          System.out.println(" exists with a file size of " + Files.size(path) + " bytes.");
        } catch (IOException e) {
          throw new RuntimeException(e);
        }
      }
    } else {
      System.out.println(" does not exist");
    }
  }
}
