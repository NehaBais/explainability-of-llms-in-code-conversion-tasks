import java.io.File;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.List;

public class Main {

    public static void main(String[] args) throws Exception {
        	// rename input.txt to output.txt in the current working directory
        	File src = new File("input.txt");
            File dest = new File("output.txt");
            dest.createNewFile();
            Files.copy(src.toPath(), dest.toPath());
            src.delete();

        	// rename docs to mydocs in the current working directory
        	File src2 = new File("docs");
            File dest2 = new File("mydocs");
            dest2.mkdirs();
            Files.move(src2.toPath(), dest2.toPath());
            src2.delete();

        	// rename input.txt to output.txt in the root directory (/)
        	List<String> list = Files.readAllLines(Paths.get("/input.txt")));
            Files.write(Paths.get("/output.txt")), list);
            Files.deleteIfExists(Paths.get("/input.txt"));
            Files.move(Paths.get("/docs")), Paths.get("/mydocs"));
        }
    }
}