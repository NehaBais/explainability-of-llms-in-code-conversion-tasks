import java.io.File;

public class Main {
  public static void main(String[] args) {
    File inputFile = new File("input.txt");
    File docsDirectory = new File("docs");

    if (inputFile.exists()) {
      System.out.println("input.txt exists");
    } else {
      System.out.println("input.txt does not exist");
    }

    if (docsDirectory.exists()) {
      System.out.println("docs directory exists");
    } else {
      System.out.println("docs directory does not exist");
    }
  }
}
