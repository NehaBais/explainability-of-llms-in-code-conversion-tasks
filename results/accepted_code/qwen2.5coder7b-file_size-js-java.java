import java.io.File;

public class Main {
  public static void main(String[] args) {
    File file1 = new File("input.txt");
    File file2 = new File("/c/input.txt");

    long size1 = 0;
    long size2 = 0;

    if (file1.exists()) {
      size1 = file1.length();
    } else {
      System.out.println("File not found: input.txt");
    }

    if (file2.exists()) {
      size2 = file2.length();
    } else {
      System.out.println("File not found: c:/input.txt");
    }

    System.out.println("Size of 'input.txt': " + size1);
    System.out.println("Size of 'c:/input.txt': " + size2);
  }
}
