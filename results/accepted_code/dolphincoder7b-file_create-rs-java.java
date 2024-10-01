import java.io.*;
import java.nio.file.*;
import java.util.*;

public class Main {
  private static final String FILE_NAME = "output.txt";
  private static final String DIR_NAME = "docs";

  public static void main(String[] args) throws IOException, InterruptedException {
    create("here").and(create("/"));
  }

  static File create(String root) throws IOException {
    Path fPath = Paths.get(root, FILE_NAME);
    Path dPath = Paths.get(root, DIR_NAME);

    try (DirectoryStream<Path> stream = Files.newDirectoryStream(dPath)) {
      for (Path entry : stream) {
        if (entry.toFile().isDirectory()) {
          deleteDir(entry.toFile());
        } else {
          Files.deleteIfExists(entry);
        }
      }
    } catch (IOException | DirectoryIteratorException e) {
    }

    return Files.createDirectories(dPath).thenCompose(path -> Files.createFile(fPath)).toFile();
  }

  private static void deleteDir(File fileOrDirectory) {
    if (fileOrDirectory.isDirectory()) {
      for (File child : Objects.requireNonNull(fileOrDirectory.listFiles())) {
        deleteDir(child);
      }
    }

    try {
      Files.deleteIfExists(fileOrDirectory.toPath());
    } catch (IOException e) {
    }
  }
}
