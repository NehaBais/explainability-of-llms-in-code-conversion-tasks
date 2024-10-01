import static java.lang.System.out;

import java.io.File;

public class Main {
  public static void main(String[] args) {
    if (args.length < 1) {
      errorAndExit("No file name supplied", 2);
    }
    String fileName = args[0];
    File file = new File(fileName);

    long size;
    try {
      size = file.length();
    } catch (Exception e) {
      errorAndExit(e, 2);
      return;
    }

    out.println("Size of " + fileName + " is " + size + " bytes");
  }

  private static void errorAndExit(Object msg, int code) {
    if (msg instanceof String) {
      out.println((String) msg);
    } else if (msg instanceof Exception) {
      out.println(((Exception) msg).getMessage());
    } else {
      out.println("Unknown error: " + msg);
    }
    System.exit(code);
  }
}
