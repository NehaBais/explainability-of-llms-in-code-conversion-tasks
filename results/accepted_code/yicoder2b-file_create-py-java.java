import java.io.File;
import java.io.IOException;

public class Main {
  public static void main(String[] args) throws IOException {
    createFile(".", "output.txt");
    createDirectory("/", "docs");
  }

  public static void createFile(String path, String fileName) {
    File dir = new File(path);
    dir.mkdirs(); // if the directories don't exist, make them
    File file = new File(dir, fileName);
    file.createNewFile();
  }

  public static void createDirectory(String path, String dirName) {
    File dir = new File(path);
    if (!dir.exists()) {
      dir.mkdirs(); // if the directories don't exist, make them
    }
    File file = new File(dir, dirName);
    file.mkdir();
  }
}
