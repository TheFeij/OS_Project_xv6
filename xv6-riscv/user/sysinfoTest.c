#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"


int main(void){

    struct sysinfo info;
    if (sysinfo(&info) == 0) {
        printf("Uptime: %l seconds\n", info.uptime);
        printf("Total memory: %l bytes\n", info.totalram);
        printf("Free memory: %l bytes\n", info.freeram);
        printf("Number of processes: %d\n", info.procs);
    } else {
        printf("Error getting system information.\n");
    }

    exit(0);
}