private static void printFileSize(String filename) throws IOException {
    Path path = Paths.get(filename);
    long size;
    try {
        size = Files.size(path);
        System.out.println("Size of file " + filename + " is " + size + " bytes.");
    } catch (IOException e) {
        throw new IOException(e.getMessage() + ": " + path, e); // throw the original exception with an added message and its own traceback
    }
}