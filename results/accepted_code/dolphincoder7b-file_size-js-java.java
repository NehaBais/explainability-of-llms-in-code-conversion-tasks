import java.io.*;

public class Main {
  public static void main(String[] args) {
    File file = new File("input.txt");
    System.out.println("File Size (in bytes): " + file.length());

    File rootFile = new File("/input.txt");
    if (rootFile.exists()) {
      System.out.println("Root File Size (in bytes): " + rootFile.length());
    }
  }
}
