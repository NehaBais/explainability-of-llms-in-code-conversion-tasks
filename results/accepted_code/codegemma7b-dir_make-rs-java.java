import java.io.File;

public class Mkdirp {

  public static void mkdirp(String path) {
    File directory = new File(path);
    if (!directory.exists()) {
      directory.mkdirs();
    }
  }

  public static void main(String[] args) {
    mkdirp("./path/to/dir");
  }
}
