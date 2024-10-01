import java.io.File;
import java.io.IOException;
import java.nio.file.Files;

public class Main {
  public static void main(String[] args) throws IOException {
    File file = new File("input.txt");
    if (file.exists()) {
      System.out.println("Size of input.txt is " + Files.size(file.toPath()));
    } else {
      System.err.println("File not found: input.txt");
    }

    File root = new File("/");
    if (root.exists()) {
      System.out.println("Size of / is " + Files.size(root.toPath()));
    } else {
      System.err.println("Directory not found: /");
    }
  }
}
