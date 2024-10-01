import java.io.IOException;

public class Main {
  public static void main(String[] args) throws IOException {
    String err = "File move error";
    boolean result1 = new File("input.txt").renameTo(new File("output.txt"));
    if (!result1) {
      throw new IOException(err);
    }
    boolean result2 = new File("docs").renameTo(new File("mydocs"));
    if (!result2) {
      throw new IOException(err);
    }
    boolean result3 = new File("/input.txt").renameTo(new File("/output.txt"));
    if (!result3) {
      throw new IOException(err);
    }
    boolean result4 = new File("/docs").renameTo(new File("/mydocs"));
    if (!result4) {
      throw new IOException(err);
    }
  }
}
