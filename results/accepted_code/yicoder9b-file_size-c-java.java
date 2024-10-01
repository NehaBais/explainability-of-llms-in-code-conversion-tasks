import java.io.*;

public class Main {
  public static void main(String[] args) {
    File file1 = new File("input.txt");
    System.out.println(file1.length());
    File file2 = new File("/", "input.txt");
    System.out.println(file2.length());
  }
}
