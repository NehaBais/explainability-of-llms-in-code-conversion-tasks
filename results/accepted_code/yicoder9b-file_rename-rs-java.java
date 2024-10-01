import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  private static final String ERROR_MESSAGE = "File move error";

  public static void main(String[] args) {
    try {
      // Rename file in the current working directory
      renameFile("input.txt", "output.txt");

      // Rename a directory in the current working directory
      renameFile("docs", "mydocs");

      // Rename file at filesystem root
      Path path1 = Paths.get("/" + "input.txt");
      Path path2 = Paths.get("/" + "output.txt");
      Files.move(path1, path2);

      // Rename a directory at filesystem root
      path1 = Paths.get("/" + "docs");
      path2 = Paths.get("/" + "mydocs");
      Files.move(path1, path2);
    } catch (IOException e) {
      e.printStackTrace();
    }
  }

  private static void renameFile(String oldName, String newName) throws IOException {
    Path path = Paths.get(oldName);
    Files.move(path, path.resolveSibling(newName));
  }
}
