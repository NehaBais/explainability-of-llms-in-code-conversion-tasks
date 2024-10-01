import java.io.*;

public class Main {
  public static void main(String[] args) throws IOException {
    File inputFile = new File("input.txt");
    if (!inputFile.exists()) {
      System.out.println("File not found.");
      return;
    }
    File rootFile = new File("/input.txt");
    if (!rootFile.exists()) {
      System.out.println("Root file not found.");
      return;
    }
    long size1 = inputFile.length();
    long size2 = rootFile.length();
    System.out.println(size1);
    System.out.println(size2);
  }
}
