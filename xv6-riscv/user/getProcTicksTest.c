#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main() {
    int tick = getProcTick(1);
    printf("%d\n", tick);
    exit(0);
}
