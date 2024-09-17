package main
import (
 "fmt"
 "math/bits"
)
func bitwiseBuiltIns(width int, a, b uint64) {
 mask := ^uint64(0) >> width
 fmt.Printf("    AND:     0b%0%db 
           & 0b%0%db 
           = 0b%0%db
           n", a, width, b, width, (a&b)&mask)
 
 fmt.Printf("    OR:      0b%0%db 
           | 0b%0%db 
           = 0b%0%db
           n", a, width, b, width, (a|b)&mask)
 
 fmt.Printf("    XOR:     0b%0%db 
           ^ 0b%0%db 
           = 0b%0%db
           n", a, width, b, width, (a^b)&mask)
 
 fmt.Printf("    NOT:   ~ 0b%0%db 
           = 0b%0%db
           n", a, width, (~a)&mask)
 
 fmt.Println("SHIFTS")
 fmt.Printf("      RIGHT:   0b%0%db >> 1\n", a, width, (a>>1)&mask)
 fmt.Printf("       LEFT:    0b%0%db << 1\n", a, width, (a<<1)&mask)
 
 fmt.Println(" ROTATIONS")
 fmt.Printf("      RIGHT:   rotr(%d, 0b%0%db, 1)\n", width, a, width, rotr(width, a, 1))
 fmt.Printf("       LEFT:    rotl(%d, 0b%0%db, 1)\n", width, a, width, rotl(width, a, 1))
 fmt.Println("")
 
 fmt.Println("SIGN-EXTENDING ARITHMETIC SHIFT RIGHT")
 fmt.Printf("               asr(%d, 0b%0%db, 1)\n", width, a, width, asr(width, a, 1))
 fmt.Printf("               asr(%d, 0b%0%db, 2)\n", width, a, width, asr(width, a, 2))
 fmt.Printf("               asr(%d, 0b%0%db, 4)\n", width, a, width, asr(width, a, 4))
}
func rotr(width int, a uint64, n int) uint64 {
 return bits.RotateRight64(a, n) & ^uint64(0) >> width
}
func rotl(width int, a uint64, n int) uint64 {
 return bits.RotateLeft64(a, n) & ^uint64(0) >> width
}
func asr(width int, a uint64, n int) uint64 {
 return uint64((int64(a) >> n)) & ^uint64(0) >> width
}
func main() {
 bitwiseBuiltIns(8, 27, 125)
}