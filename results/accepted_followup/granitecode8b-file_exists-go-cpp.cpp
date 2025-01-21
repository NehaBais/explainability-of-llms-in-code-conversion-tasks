package main import("fmt"
                    "os") func main() {
  file,
      err : = os.Open("data.txt") if err != nil{panic(err)} defer file.Close()
                                                stat,
          err : = file.Stat() if err !=
                  nil{panic(err)} fmt.Println("File size:", stat.Size())
}