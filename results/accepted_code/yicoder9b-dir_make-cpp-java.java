import java.io.IOException;
import java.nio.file.*;

public class Main {
  public static void main(String[] args) {
    if (args.length != 1) {
      System.out.println("usage: mkdir <path>");
      return;
    }

    Path pathToCreate = Paths.get(args[0]);
    try {
      if (Files.exists(pathToCreate)) return;
      Files.createDirectories(pathToCreate);
    } catch (IOException e) {
      System.out.println("couldn't create directory: " + pathToCreate);
      e.printStackTrace();
      return;
    }
  }
}
