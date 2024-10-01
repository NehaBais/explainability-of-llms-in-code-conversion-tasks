import java.io.*;
import java.nio.file.*;

public class CreateDirectory {
  public static void main(String[] args) throws IOException {
    if (args.length != 2) {
      System.err.println("usage: " + CreateDirectory.class.getSimpleName() + " <path>");
      return;
    }

    String path = args[1];
    File file = new File(path);
    if (!file.exists()) {
      // create directory and any missing parents
      Files.createDirectories(Paths.get(path));
    } else {
      // check if the file is a directory
      if (!Files.isDirectory(Paths.get(path))) {
        System.err.println("couldn't create directory " + path);
        return;
      }
    }
  }
}
