import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Mkdir {
  public static void main(String[] args) throws IOException {
    if (args.length != 2) {
      System.out.println("usage: mkdir <path>");
      return;
    }

    Path pathToCreate = Paths.get(args[1]);

    if (Files.exists(pathToCreate)) {
      return;
    } else {
      Files.createDirectories(pathToCreate);
      System.out.println("Created directory: " + pathToCreate.toString());
      return;
    }
  }
}
