import java.io.IOException;
import java.nio.file.*;

public class MkdirP {
  public static void main(String[] args) {
    if (args.length != 1) {
      System.out.println("Usage: mkdir <path>");
      return;
    }

    Path pathToCreate = Paths.get(args[0]);

    try {
      Files.createDirectories(pathToCreate);
      System.out.println("Directory created successfully.");
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
