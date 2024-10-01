import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    String err = "File move error";
    renameFile("input.txt", "output.txt", err);
    renameDirectory("docs", "mydocs", err);
    renameFile("/input.txt", "/output.txt", err);
    renameDirectory("/docs", "/mydocs", err);
  }

  private static void renameFile(String oldName, String newName, String errorMessage) {
    try {
      Path source = Paths.get(oldName);
      Path target = Paths.get(newName);
      Files.move(source, target, java.nio.file.StandardCopyOption.REPLACE_EXISTING);
    } catch (IOException e) {
      System.out.println(errorMessage + ": " + e.getMessage());
    }
  }

  private static void renameDirectory(String oldName, String newName, String errorMessage) {
    try {
      Path source = Paths.get(oldName);
      Path target = Paths.get(newName);
      Files.move(source, target, java.nio.file.StandardCopyOption.REPLACE_EXISTING);
    } catch (IOException e) {
      System.out.println(errorMessage + ": " + e.getMessage());
    }
  }
}
