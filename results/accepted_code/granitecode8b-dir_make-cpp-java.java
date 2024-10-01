import java.nio.file.FileSystems;
import java.nio.file.Files;
import java.nio.file.Path;

public class DirectoryCreator {
  public static void main(String[] args) {
    if (args.length != 1) {
      System.out.println("usage: mkdir <path>");
      return;
    }

    Path pathToCreate = FileSystems.getDefault().getPath(args[0]);

    try {
      Files.createDirectories(pathToCreate);
    } catch (Exception e) {
      System.out.println("couldn't create directory: " + pathToCreate);
    }
  }
}
