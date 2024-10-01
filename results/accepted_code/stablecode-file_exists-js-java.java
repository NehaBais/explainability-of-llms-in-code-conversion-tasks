import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) {
        
        // For the current working directory
        Path path1 = Paths.get("input.txt");
        boolean exists1 = Files.exists(path1);
        System.out.println("Does 'input.txt' exist in the current working directory? " + exists1);

        // For a file and a directory in the filesystem root
        Path path2 = Paths.get("c:/input.txt");
        boolean exists2 = Files.exists(path2);
        System.out.println("Does 'input.txt' exist at the specified location? " + exists2);

        // For a directory in the filesystem root
        Path path3 = Paths.get("c:/docs");
        boolean exists3 = Files.isDirectory(path3);
        System.out.println("Is 'docs' a directory at the specified location? " + exists3));
    }
}