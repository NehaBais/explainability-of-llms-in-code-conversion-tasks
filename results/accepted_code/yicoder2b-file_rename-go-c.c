package main import "os"

    func
    main() {
  // Rename "input.txt" to "output.txt"
  if err := os.Rename("input.txt", "output.txt");
  err != nil { println(err) }

  // Rename "/docs" to "/mydocs" in the filesystem root
  if err := os.Rename("/docs", "/mydocs");
  err != nil { println(err) }
}