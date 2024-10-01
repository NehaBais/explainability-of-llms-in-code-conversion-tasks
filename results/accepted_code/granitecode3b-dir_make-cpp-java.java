import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class MkdirP {
  public static void main(String[] args) throws IOException {
    if (args.length < 1) {
      System.err.println("usage: mkdir <path>");
      return;
    }
    Path pathToCreate = Paths.get(args[0]);
    if (Files.exists(pathToCreate)) {
      System.out.printf("%s already exists%n", pathToCreate);
      return;
    }
    Files.createDirectories(pathToCreate);
  }
}
