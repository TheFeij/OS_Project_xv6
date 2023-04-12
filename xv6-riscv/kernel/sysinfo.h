//struct containing general information about system
struct sysinfo {
    long uptime;              // Seconds since boot
    unsigned long totalram;   // Total usable main memory size
    unsigned long freeram;    // Available memory size
    unsigned short procs;     // Number of current processes
};