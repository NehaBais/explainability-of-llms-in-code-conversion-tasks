import static java.nio.file.Files.*;

import java.io.IOException;
import java.nio.file.*;

public class Main {
  static void createDirectory(String dir) throws IOException {
    Path path = Paths.get(dir);
    if (!exists(path)) {
      createDirectories(path);
    } else if (!isDirectory(path)) {
      System.err.format("couldn't create directory %s%n", dir);
      System.exit(1); // or throw an exception
    }
  }

  public static void main(String[] args) {
    if (args.length != 1) {
      System.err.format("usage: java %s <path>%n", Main.class.getName());
      System.exit(1); // or throw an exception
    }
    try {
      createDirectory(args[0]);
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
