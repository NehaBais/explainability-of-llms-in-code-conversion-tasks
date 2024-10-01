import java.io.File;

public class Main {
  public static void main(String[] args) {
    File inputFile = new File("input.txt");
    if (inputFile.exists()) {
      System.out.println("Input file exists.");
    } else {
      System.out.println("Input file does not exist.");
    }
    String cwd = System.getProperty("user.dir");
    File cwdFile = new File(cwd, "input.txt");
    if (cwdFile.exists()) {
      System.out.println("Current working directory input.txt exists.");
    } else {
      System.out.println("Current working directory input.txt does not exist.");
    }
    String root = "/";
    File rootFile = new File(root, "input.txt");
    if (rootFile.exists()) {
      System.out.println("Root directory input.txt exists.");
    } else {
      System.out.println("Root directory input.txt does not exist.");
    }
  }
}
