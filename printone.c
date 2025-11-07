#include <printone.s>

int main() {
    const char *msg = "Mensaje desde el Syscall WRITE\n";
    syscall(untitled(56), 1, msg, 32);
    return 0;
}