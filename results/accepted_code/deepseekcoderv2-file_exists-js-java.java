import java.io.File;

public class FileExistsExample {
  public static void main(String[] args) {
    // Check for file and directory in the current working directory
    checkFileAndDirectory("input.txt", new File("docs"));

    // Check for file and directory in the filesystem root
    checkFileAndDirectory("c:/input.txt", new File("c:/docs"));
  }

  public static void checkFileAndDirectory(String filePath, File directory) {
    File file = new File(filePath);
    boolean fileExists = file.exists() && file.isFile();
    boolean dirExists = directory.exists() && directory.isDirectory();

    System.out.println(
        "Checking for " + filePath + ": " + (fileExists ? "Exists" : "Does not exist"));
    System.out.println(
        "Checking for " + directory.getPath() + ": " + (dirExists ? "Exists" : "Does not exist"));
  }
}
