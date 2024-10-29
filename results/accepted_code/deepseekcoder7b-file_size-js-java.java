import java.io.File;

public class Main {
  public static void main(String[] args) {
    File file1 = new File("input.txt"); // in the current directory
    System.out.println(
        file1.length()); // returns size of input.txt located in current working directory

    File file2 = new File("c:\\input.txt"); // in root directory
    System.out.println(file2.length()); // returns size of input.txt located in C:\ drive
  }
}
