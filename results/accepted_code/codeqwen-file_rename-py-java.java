import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
  public static void main(String[] args) {
    renameFileOrDir("input.txt", "output.txt");
    renameFileOrDir("docs", "mydocs");

    // for root directory, you need to use absolute path
    Path currentPath = Paths.get("");
    String absolutePath = currentPath.toAbsolutePath().toString();
    if (System.getProperty("os.name").contains("Windows")) { // If Windows
      absolutePath += "\\";
    } else { // If Linux/Mac
      absolutePath += "/";
    }
    renameFileOrDir(absolutePath + "input.txt", absolutePath + "output.txt");
    renameFileOrDir(absolutePath + "docs", absolutePath + "mydocs");
  }

  public static void renameFileOrDir(String oldName, String newName) {
    try {
      Files.move(Paths.get(oldName), Paths.get(newName));
      System.out.println("Renamed successfully: " + oldName + " -> " + newName);
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
