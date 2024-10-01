import java.io.File;
import java.io.IOException;

public class Main {

  private static final String FILE_NAME = "output.txt";
  private static final String DIR_NAME = "docs";

  public static void main(String[] args) {
    try {
      create(".");
      create("/");
    } catch (IOException e) {
      System.err.println("Error: " + e.getMessage());
      System.exit(1);
    }
  }

  private static void create(String root) throws IOException {
    String fPath = root + File.separator + FILE_NAME;
    String dPath = root + File.separator + DIR_NAME;

    new File(dPath).mkdirs();
    new File(fPath).createNewFile();
  }
}
