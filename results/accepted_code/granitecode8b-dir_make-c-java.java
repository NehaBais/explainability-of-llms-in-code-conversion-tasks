import java.io.File;

public class Mkdirp {
  public static void main(String[] args) {
    if (args.length != 1) {
      System.out.println("usage: " + args[0] + " <path>");
      System.exit(1);
    }
    String path = args[0];
    File dir = new File(path);
    if (!dir.exists()) {
      Mkdirp.mkdirs(dir);
    }
  }

  public static void mkdirs(File directory) {
    if (directory.exists()) {
      return;
    }
    File parent = directory.getParentFile();
    if (parent != null) {
      Mkdirp.mkdirs(parent);
    }
    directory.mkdir();
  }
}
