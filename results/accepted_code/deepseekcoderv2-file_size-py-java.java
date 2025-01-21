import java.io.File;

public class FileSizeChecker {
  public static void main(String[] args) {
    // Check the size of input.txt in the current working directory
    File fileCurrent = new File("input.txt");
    if (fileCurrent.exists()) {
      long sizeCurrent = fileCurrent.length();
      System.out.println("Size of input.txt in current directory: " + sizeCurrent + " bytes");
    } else {
      System.out.println("File input.txt does not exist in the current directory.");
    }

    // Check the size of input.txt in the root of the file system
    File fileRoot = new File("/input.txt");
    if (fileRoot.exists()) {
      long sizeRoot = fileRoot.length();
      System.out.println("Size of /input.txt: " + sizeRoot + " bytes");
    } else {
      System.out.println("File /input.txt does not exist in the root directory.");
    }
  }
}
