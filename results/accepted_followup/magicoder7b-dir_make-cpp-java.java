import java.io.IOException; // <-- Importing IOException
import java.nio.file.*;

public class Main {
  public static void main(String[] args) {
    if (args.length != 1) {
      System.out.println("usage: mkdir <path>");
      return;
    }

    Path pathToCreate = Paths.get(args[0]);

    try {
      Files.createDirectories(pathToCreate);
    } catch (FileAlreadyExistsException e) {
      // Directory already exists, do nothing
    } catch (IOException e) {
      System.out.println("couldn't create directory: " + pathToCreate.toString());
    }
  }
}
