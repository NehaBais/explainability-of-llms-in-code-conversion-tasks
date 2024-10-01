import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    if (args.length != 1) {
      System.err.println("usage: %s <path>");
      System.exit(1);
    }
    createDirectories(Paths.get(args[0]));
  }

  public static void createDirectories(Path path) {
    try {
      Files.createDirectories(path);
    } catch (IOException e) {
      System.err.println("couldn't create directory " + path.toString());
      System.exit(1);
    }
  }
}
