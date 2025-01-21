import java.io.File;
import java.io.IOException;

public class Main {
  public static void main(String[] args) throws IOException { // added IOException declaration here
    createFile(".", "output.txt");
    createDirectory("/", "docs");
  }

  public static void createFile(String path, String fileName)
      throws IOException { // added IOException throw in function
    File dir = new File(path);
    dir.mkdirs(); // if the directories don't exist, make them
    File file = new File(dir, fileName);
    file.createNewFile(); // changed from create() to createNewFile()
  }

  public static void createDirectory(String path, String dirName) {
    File dir = new File(path);
    if (!dir.exists()) { // added !dir.exists() check here
      dir.mkdirs(); // if the directories don't exist, make them
    }
    File file = new File(dir, dirName);
    file.mkdir();
  }
}
