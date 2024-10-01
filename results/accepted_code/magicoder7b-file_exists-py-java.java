import java.io.*;

public class Main {
  public static void main(String[] args) {
    File file = new File("input.txt");
    File dir = new File("docs");

    System.out.println("Current directory: " + (file.exists() && file.isFile()));
    System.out.println(
        "/input.txt: " + (new File("/input.txt").exists() && new File("/input.txt").isFile()));
    System.out.println("Current directory: " + (dir.exists() && dir.isDirectory()));
    System.out.println("/docs: " + (new File("/docs").exists() && new File("/docs").isDirectory()));
  }
}
