//Arquivo para funções de conversão de armazenamento
#include <stdio.h>

// Funções para conversão

// Bits para Bytes
float bitsToBytes(float bits) {
    return bits / 8;
}

// Bytes para Bits
float bytesToBits(float bytes) {
    return bytes * 8;
}

// Bytes para Kilobytes (KB)
float bytesToKB(float bytes) {
    return bytes / 1024;
}

// Kilobytes (KB) para Bytes
float kbToBytes(float kb) {
    return kb * 1024;
}

// Kilobytes (KB) para Megabytes (MB)
float kbToMB(float kb) {
    return kb / 1024;
}

// Megabytes (MB) para Kilobytes (KB)
float mbToKB(float mb) {
    return mb * 1024;
}

// Megabytes (MB) para Gigabytes (GB)
float mbToGB(float mb) {
    return mb / 1024;
}

// Gigabytes (GB) para Megabytes (MB)
float gbToMB(float gb) {
    return gb * 1024;
}

// Gigabytes (GB) para Terabytes (TB)
float gbToTB(float gb) {
    return gb / 1024;
}

// Terabytes (TB) para Gigabytes (GB)
float tbToGB(float tb) {
    return tb * 1024;
}
