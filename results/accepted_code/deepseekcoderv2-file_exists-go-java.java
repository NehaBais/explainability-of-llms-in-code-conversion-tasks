import java.io.File;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class FileChecker {
  private static final String[] validFiles = {"input.txt", "docs"};
  private static final String filePrefix = "/";

  public static void main(String[] args) {
    for (String fileName : getValidFileNames()) {
      if (!new File(fileName).exists()) {
        System.out.println("The file or directory does not exist.");
        continue;
      }

      final String finalFileName = fileName;
      List<String> validFilesWithPrefixAndSuffix =
          Stream.of(validFiles)
              .map(file -> checkFile(finalFileName, file))
              .filter(Boolean::booleanValue)
              .map(
                  result ->
                      result ? finalFileName + " is a file." : finalFileName + " is a directory.")
              .collect(Collectors.toList());
      validFilesWithPrefixAndSuffix.forEach(System.out::println);
    }
  }

  private static String checkFile(String fileName, String filePath) {
    return new File(filePath).isDirectory()
        ? (fileName + " is a directory.")
        : (fileName + " is a file.");
  }

  public static List<String> getValidFileNames() {
    return Stream.of("input.txt", "/input.txt", "docs", "/docs")
        .filter(file -> new File(file).exists())
        .collect(Collectors.toList());
  }
}
