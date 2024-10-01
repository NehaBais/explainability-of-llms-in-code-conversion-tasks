import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.attribute.BasicFileAttributes;

public class Main {
  public static void main(String[] args) {
    if (args.length != 1) {
      System.err.println("No file name supplied");
      System.exit(1);
    }

    File file = new File(args[0]);
    try {
      BasicFileAttributes attrs = Files.readAttributes(file.toPath(), BasicFileAttributes.class);
      System.out.println("Size of " + file + " is " + attrs.size() + " bytes");
    } catch (IOException e) {
      System.err.println("Error: " + e.getMessage());
      System.exit(2);
    }
  }
}
