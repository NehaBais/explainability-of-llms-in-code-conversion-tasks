import java.io.File;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Mkdir {
  public static void main(String[] args) throws Exception {
    if (args.length != 1) {
      System.err.println("usage: mkdir <path>");
      return;
    }

    File pathToCreate = new File(args[0]);

    // If the directory already exists, just return success.
    if (pathToCreate.exists()) {
      return;
    }

    // Attempt to create all missing parent directories.
    // Returns true if successful or the directory already existed.
    Files.createDirectories(Paths.get(pathToCreate.getAbsolutePath()));
  }
}
