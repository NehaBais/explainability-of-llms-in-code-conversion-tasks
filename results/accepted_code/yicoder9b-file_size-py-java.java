import java.io.File;

public class Main {
  public static void main(String[] args) {
    // File in the current working directory
    File file1 = new File("input.txt");
    System.out.println(file1.length()); // Get size of file in bytes

    // File in the root directory
    File file2 = new File("/" + "input.txt");
    System.out.println(file2.length()); // Get size of file in bytes
  }
}
