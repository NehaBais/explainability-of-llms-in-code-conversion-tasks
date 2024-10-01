import java.io.File;

public class Main {
  public static void main(String[] args) {
    File file1 = new File("input.txt");
    File file2 = new File("/input.txt");

    if (file1.exists() && file2.exists()) {
      System.out.println(file1.length());
      System.out.println(file2.length());
    } else {
      System.out.println("File does not exist.");
    }
  }
}
