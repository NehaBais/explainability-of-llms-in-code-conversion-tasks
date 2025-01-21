import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    if (args.length == 0) {
      System.err.println("No file name supplied");
      System.exit(1);
    }

    String fileName = args[0];
    File file = new File(fileName);

    try {
      if (!file.exists()) {
        throw new IllegalArgumentException("File does not exist: " + fileName);
      }

      long size = Files.size(Paths.get(fileName));
      System.out.println("Size of " + file.getName() + " is " + size + " bytes");
    } catch (IOException e) {
      System.err.println("Error: " + e.getMessage());
      System.exit(2);
    }
  }
}
