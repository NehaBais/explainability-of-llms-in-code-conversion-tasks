import java.io.*;

public class Main {
  public static void main(String[] args) throws IOException {
    mkdirp("/path/to/dir", new PrintWriter(System.out));
  }

  static void mkdirp(String path, PrintWriter out) throws IOException {
    if (new File(path).exists()) {
      return;
    }
    File parent = new File(new File(path).getParent());
    if (parent.mkdirs()) {
      out.println("Directory created: " + path);
    } else {
      throw new IOException("Cannot create directory");
    }
  }
}
