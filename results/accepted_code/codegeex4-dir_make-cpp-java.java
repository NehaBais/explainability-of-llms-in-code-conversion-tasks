import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class MkdirP {
  public static void main(String[] args) {
    if (args.length != 1) {
      System.out.println("usage: mkdir <path>");
      return;
    }

    Path pathToCreate = Paths.get(args[0]);

    try {
      Files.createDirectories(pathToCreate);
    } catch (IOException e) {
      System.err.println("couldn't create directory: " + pathToCreate.toString());
      e.printStackTrace();
      return;
    }

    // If the directory already exists, it won't throw an exception.
  }
}
