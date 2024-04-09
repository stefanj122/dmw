#ifndef CONFIG_H
#define CONFIG_H
#define PATH(name) "/home/stefanj/Downloads/dwmblocks-async/modules/" name

// String used to delimit block outputs in the status.
#define DELIMITER " | "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 0

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(cmd, interval, signal).
#define BLOCKS(X)         \
    X(PATH("archupdates"),3600,2) \
    X(PATH("volume"),1,2) \
    X(PATH("battery"),30,3) \
    X(PATH("backlight"),1,4) \
    X(PATH("networkdowntraffic"),1,5) \
    X(PATH("cpuload"),1,6) \
    X(PATH("ram"),5,7) \
    X(PATH("cputemp"),5,8) \
    X(PATH("nvidia_gpu_temp"),5,9) \
    X(PATH("date"),60,10) \
    X(PATH("time"),10,11) \

#endif  // CONFIG_H
