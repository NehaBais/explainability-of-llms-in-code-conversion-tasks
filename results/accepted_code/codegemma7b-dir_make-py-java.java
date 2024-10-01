import java.io.File;

public class Mkdirp {

  public static void mkdirp(String path) {
    File directory = new File(path);
    directory.mkdirs();
  }
}
