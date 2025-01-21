import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) throws IOException {
    Path currentDirectory = Paths.get("").toAbsolutePath();
    renameFiles(currentDirectory);

    Path rootDirectory = Paths.get("/");
    if (Files.exists(rootDirectory)) { // check if the root directory exists
      renameFiles(rootDirectory);
    }
  }

  private static void renameFiles(Path path) throws IOException {
    Files.move(Paths.get(path + "/input.txt"), Paths.get(path + "/output.txt"));
    Files.move(Paths.get(path + "/docs"), Paths.get(path + "/mydocs"));
  }
}
