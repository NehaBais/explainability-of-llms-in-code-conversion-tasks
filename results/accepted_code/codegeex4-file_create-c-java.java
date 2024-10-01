import java.io.File;

public class Main {
  public static void main(String[] args) {
    try {
      File outputFile = new File("output.txt");
      if (!outputFile.createNewFile()) {
        System.out.println("Unable to create file 'output.txt'");
      }

      File docsDir = new File("docs");
      if (!docsDir.mkdir()) {
        System.out.println("Unable to create directory 'docs'");
      }
    } catch (Exception e) {
      e.printStackTrace();
    }
  }
}
