import java.io.File;

public class Main {
  public static void main(String[] args) {
    // File in the current working directory
    File file1 = new File("input.txt");
    if (file1.exists()) {
      System.out.println(file1.length() + " bytes");
    } else {
      System.out.println("The file does not exist.");
    }

    // File in the root directory of the file system
    File file2 = new File("/input.txt");
    if (file2.exists()) {
      System.out.println(file2.length() + " bytes");
    } else {
      System.out.println("The file does not exist in root directory.");
    }
  }
}
