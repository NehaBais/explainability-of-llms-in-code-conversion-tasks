import java.io.IOException;

public class Main {
  public static void main(String[] args) {
    try {
      // File size of input.txt in current directory
      long size1 = new java.io.File("input.txt").length();
      System.out.println("Size of input.txt in current directory: " + size1);

      // File size of /input.txt in file system root
      long size2 = new java.io.File("/input.txt").length();
      System.out.println("Size of /input.txt in file system root: " + size2);
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
