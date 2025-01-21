import org.apache.commons.io.*;

public class Mkdirp {
  public static void mkdirp(String path) throws IOException {
    FileUtils.forceMkdirs(new File(path));
  }
}
