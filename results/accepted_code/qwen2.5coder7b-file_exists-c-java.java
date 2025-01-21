import java.io.File;

public class FileChecker {

  public static void main(String[] args) {
    checkFileAndDirectory("input.txt", "docs");
    checkFileAndDirectory("/input.txt", "/docs");
  }

  public static void checkFileAndDirectory(String filePath, String dirPath) {
    File file = new File(filePath);
    File directory = new File(dirPath);

    System.out.println(filePath + " is a regular file? " + (file.exists() && file.isFile()));
    System.out.println(
        dirPath + " is a directory? " + (directory.exists() && directory.isDirectory()));
  }
}
