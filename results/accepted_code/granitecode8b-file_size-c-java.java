import java.io.File;

public class FileSize {
  public static void main(String[] args) {
    File file1 = new File("input.txt");
    long size1 = file1.length();
    System.out.println(size1);

    File file2 = new File("/");
    File inputFile = new File(file2, "input.txt");
    long size2 = inputFile.length();
    System.out.println(size2);
  }
}
