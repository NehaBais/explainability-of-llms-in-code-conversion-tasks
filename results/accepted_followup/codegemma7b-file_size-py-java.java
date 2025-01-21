import java.io.File;

public class FileSizeChecker {
  public static void main(String[] args) {
    File inputFile1 = new File("input.txt");
    long size1 = inputFile1.length();

    File inputFile2 = new File("/");
    File inputFile3 = new File(inputFile2, "input.txt");
    long size2 = inputFile3.length();

    System.out.println("Size of input.txt in current working directory: " + size1);
    System.out.println("Size of input.txt in file system root: " + size2);
  }
}
