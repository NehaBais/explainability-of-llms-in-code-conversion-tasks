import org.apache.commons.io.FileUtils;

public class Mkdirp {
  public static void mkdirp(String path) throws IOException {
    FileUtils.forceMkdirs(new File(path));
  }
}
