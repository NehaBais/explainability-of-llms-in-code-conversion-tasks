import java.io.File;

public class FileSize {
  public static void main(String[] args) throws Exception {
    String path = "input.txt";

    try {
      File file1 = new File(path);
      long size = file1.length();
      System.out.println("Size of the first file: " + size);

      File file2 = new File("/");
      size = file2.length();
      System.out.println("Size of the second file: " + size);
    } catch (Exception e) {
      e.printStackTrace();
    }
  }
}
