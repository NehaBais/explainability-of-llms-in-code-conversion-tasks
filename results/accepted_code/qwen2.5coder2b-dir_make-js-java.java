import java.io.File;

public class Main {
  public static void main(String[] args) throws Exception {
    File dir = new File("path/to/dir");
    if (!dir.exists()) {
      dir.mkdirs();
    }
  }
}
