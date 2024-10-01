import java.io.*;

public class Main {
  static void mkdirp(String path) throws IOException {
    File file = new File(path);
    file.getParentFile().mkdirs();
  }

  public static void main(String[] args) throws Exception {
    try {
      mkdirp("/path/to/dir");
    } catch (Exception e) {
      e.printStackTrace();
    }
  }
}
