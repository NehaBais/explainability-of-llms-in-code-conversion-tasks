import java.io.File;

public class Main {
  public static void main(String[] args) {
    File file1 = new File("input.txt");
    File file2 = new File("/input.txt");

    long size1 = file1.length();
    long size2 = file2.length();

    System.out.println("The size of 'input.txt' in the current directory is: " + size1);
    System.out.println("The size of '/input.txt' in the file system root is: " + size2);
  }
}
