int size = 0;
File inputFile1 = new File("C:\\input.txt"); //for Windows
File inputFile2 = new File("/input.txt"); // for Linux and other systems
if (size != null) {
    if(inputFile1.exists()) {
        System.out.println("The size of the file is: " + size);
    } else {
        throw new IOException();
    }
} else {
    throw new IOException();
}