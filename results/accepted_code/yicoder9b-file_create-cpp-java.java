import java.io.File;
import java.io.IOException;

public class Main {
  public static void main(String[] args) throws IOException {
    createEmptyFilesAndDirs(""); // creates files/dirs in the current working directory
    createEmptyFilesAndDirs("/"); // creates files/dirs at root of filesystem
  }

  private static void createEmptyFilesAndDirs(String path) throws IOException {
    File file1 = new File(path + "output.txt");
    file1.createNewFile();

    File dir1 = new File(path + "docs");
    dir1.mkdir();
  }
}
