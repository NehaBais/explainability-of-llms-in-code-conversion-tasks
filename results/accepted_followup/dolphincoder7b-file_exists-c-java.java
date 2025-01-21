import java.io.File;

public class Main {
  public static void main(String[] args) {
    File input = new File("input.txt");
    System.out.println(
        "input.txt is a regular file? " + String.valueOf((input.exists() && input.isFile())));
    File docs = new File("docs");
    System.out.println(
        "docs is a directory? " + String.valueOf(docs.exists() && docs.isDirectory()));

    File fsInput = new File("/input.txt");
    System.out.println(
        "/input.txt is a regular file? " + String.valueOf((fsInput.exists() && fsInput.isFile())));
    File fsDocs = new File("/docs");
    System.out.println(
        "/docs is a directory? " + String.valueOf(fsDocs.exists() && fsDocs.isDirectory()));
  }
}
