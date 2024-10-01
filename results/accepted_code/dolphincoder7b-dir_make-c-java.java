import java.io.*;
import java.util.*;

public class Mkdir {
  public static void main(String args[]) throws IOException {
    String str, s = null;
    File file = new File(args[0]);

    if (!file.exists()) {
      file.createNewFile();
    }

    while ((str = s.substring(0, Math.min(s.length(), 255))) != null) {
      if (str.contains("/")) {
        str = str.replaceAll("/", "");
        File dir = new File(file.getParent() + "/" + str);
        if (!dir.exists()) {
          dir.mkdir();
        }
      }
      s = file.getPath().substring(0, Math.min(s.length(), 255));
    }
  }
}
