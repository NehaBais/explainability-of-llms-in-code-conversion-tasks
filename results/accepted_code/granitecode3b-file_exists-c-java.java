import java.io.File;

public class FileChecker {

  public static void main(String[] args) {
    File inputFile = new File("input.txt");
    File docDir = new File("docs");

    System.out.println("Input file exists: " + inputFile.exists());
    System.out.println("Docs directory exists: " + docDir.exists());
  }
}
