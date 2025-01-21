import java.nio.file.*;

public class Main {
  public static void main(String[] args) throws IOException {
    for (String file : new String[] {"input.txt", "docs", "/input.txt", "/docs"}) {
      Path path = Paths.get(file);
      try {
        BasicFileAttributes attr = Files.readAttributes(path, BasicFileAttributes.class);
        if (attr.isDirectory()) {
          System.out.println(file + " is a directory");
        } else {
          System.out.println(file + " is a file");
        }
      } catch (java.nio.file.NoSuchFileException e) {
        System.out.println(file + " does not exist");
      } catch (IOException e) {
        e.printStackTrace();
      }
    }
  }
}
