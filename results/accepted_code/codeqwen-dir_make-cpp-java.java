import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    if (args.length != 1) {
      System.out.println("usage: mkdir <path>");
      return;
    }

    Path pathToCreate = Paths.get(args[0]);

    if (Files.exists(pathToCreate)) return;

    try {
      Files.createDirectories(pathToCreate);
    } catch (Exception e) {
      System.out.println("couldn't create directory: " + pathToCreate.toString());
      e.printStackTrace();
      return;
    }
  }
}
