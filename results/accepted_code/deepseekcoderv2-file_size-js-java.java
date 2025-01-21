import java.io.File;

public class FileSizeChecker {
  public static void main(String[] args) {
    // Check the size of input.txt in the current working directory
    File file1 = new File("input.txt");
    if (file1.exists()) {
      System.out.println("Size of input.txt in current directory: " + file1.length() + " bytes");
    } else {
      System.out.println("File input.txt does not exist in the current directory.");
    }

    // Check the size of input.txt in the root directory (C:)
    File file2 = new File("c:/input.txt");
    if (file2.exists()) {
      System.out.println("Size of input.txt in root directory: " + file2.length() + " bytes");
    } else {
      System.out.println("File input.txt does not exist in the root directory.");
    }
  }
}
