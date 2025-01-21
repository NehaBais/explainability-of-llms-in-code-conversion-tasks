import java.nio.file.*;
import java.util.concurrent.*;

public class Main {
  private static final String FILE_NAME = "output.txt";
  private static final String DIR_NAME = "docs";

  public static void main(String[] args) {
    try {
      create(".").and(create("/")).get();
    } catch (Exception e) {
      System.err.println("Error: " + e);
      System.exit(-1);
    }
  }

  public static CompletionStage<Void> create(String root) {
    Path f_path = Paths.get(root, FILE_NAME);
    Path d_path = Paths.get(root, DIR_NAME);

    return FileSystems.getDefault().provider().newDirectoryStream(f_path).findAny().isPresent()
        ? createFile(f_path)
        : CompletableFuture.completedStage(null)
            .thenCombine(DirBuilder.create(d_path).toCompletableFuture(), (__, path) -> null);
  }

  public static CompletionStage<Void> createFile(Path file) {
    return Files.createFile(file).thenApply((Path p) -> null);
  }
}
