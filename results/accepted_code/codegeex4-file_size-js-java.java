import java.io.File;

public class FileSize {
  public static void main(String[] args) {
    // Get the size of file in current working directory
    File file = new File("input.txt");
    System.out.println(file.length() + " bytes");

    // Get the size of file in root of the filesystem
    File rootFile = new File("/input.txt");
    if (rootFile.exists()) {
      System.out.println(rootFile.length() + " bytes");
    } else {
      System.out.println("File doesn't exist at root.");
    }
  }
}
