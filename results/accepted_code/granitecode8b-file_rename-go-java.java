import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class RenameExample {
  public static void main(String[] args) throws IOException {
    // Rename a file in the current working directory
    Path path = Paths.get("input.txt");
    Files.move(path, Paths.get("output.txt"));

    // Rename a directory in the current working directory
    path = Paths.get("docs");
    Files.move(path, Paths.get("mydocs"));

    // Rename a file in the root directory
    path = Paths.get("/input.txt");
    Files.move(path, Paths.get("/output.txt"));

    // Rename a directory in the root directory
    path = Paths.get("/docs");
    Files.move(path, Paths.get("/mydocs"));
  }
}
