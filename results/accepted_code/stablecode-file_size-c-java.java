import java.io.File;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.List;

public class Main {

    public static void main(String[] args) throws Exception {
        // Get the size of "input.txt" in the current working directory
        File inputFileInCurrentDirectory = new File("input.txt");
        long sizeOfInputFileInCurrentDirectory = inputFileInCurrentDirectory.length();

        System.out.println(sizeOfInputFileInCurrentDirectory);

        // Get the size of "input.txt" in the root directory
        Path pathToInputFileInRootDirectory = Paths.get("/", "input.txt"));
        List<Byte> bytesOfInputFileInRootDirectory = Files.readAllBytes(pathToInputFileInRootDirectory));
        long sizeOfInputFileInRootDirectory = Byte.toUnsignedInt(bytesOfInputFileInRootDirectory.get(0)) & 0x7F) << 24 | 
                        Byte.toUnsignedInt(bytesOfInputFileInRootDirectory.get(1))) << 16 | 
                        Byte.toUnsignedInt(bytesOfInputFileInRootDirectory.get(2)))) << 8 | 
                        Byte.toUnsignedInt(bytesOfInputFileInRootDirectory.get(3))));

        System.out.println(sizeOfInputFileInRootDirectory);
    }
}