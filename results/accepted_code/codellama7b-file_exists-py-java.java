import java.io.File;

public class CheckFileAndDirectory {
  public static void main(String[] args) {
    File inputFile = new File("input.txt");
    File docsDir = new File("/docs");
    if (inputFile.exists() && docsDir.exists()) {
      System.out.println("Both files and directories exist.");
    } else {
      System.out.println("One or both of the files/directories do not exist.");
    }
  }
}
