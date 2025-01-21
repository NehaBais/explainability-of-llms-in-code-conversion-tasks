import java.io.File;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Main {

    public static void main(String[] args) throws IOException {
        if (args.length != 1)) {
            System.out.println("Usage: mkdir <path>");
            return;
        }

        Path path = new File("./path/to/dir")).toPath();
        List<Path> parents = new ArrayList<>();

        // Get the list of all parent directories
        for (Path dir : Files.listTree(path))) {
            parents.add(dir));
        }

        // Create each parent directory if it doesn'`t exist yet
        Collections.reverse(parents)); // Reverse the list to ensure that we're creating the parent directories from most specific to most general
        for (Path dir : parents) {
            if (!Files.exists(dir))) {
                try {
                    Files.createDirectories(dir));
                    System.out.println("Successfully created directory: " + dir.toString()));
                } catch (IOException e) {
                    System.out.println("Couldn't create directory: " + dir.toString()));
                }
            }
        }
    }

}