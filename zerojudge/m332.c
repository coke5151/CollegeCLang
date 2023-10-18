// m332. 小賴的期中作業2021篇(開會時程)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int hr, min, total_min, wating, usage;
    scanf("Arrival time at %d:%d", &hr, &min);
    total_min = hr * 60 + min;

    if (total_min < 540) { // 00:00 ~ 08:59
        wating = -1;
        usage = 540 - total_min;
    } else if (total_min < 600) { // 09:00 ~ 09:59
        wating = 600 - total_min;
        usage = 660 - total_min;
    } else if (total_min < 660) { // 10:00 ~ 10:59
        wating = -1;
        usage = 660 - total_min;
    } else if (total_min < 720) { // 11:00 ~ 11:59
        wating = 720 - total_min;
        usage = 900 - total_min;
    } else if (total_min < 900) { // 12:00 ~ 14:59
        wating = -1;
        usage = 900 - total_min;
    } else if (total_min < 960) { // 15:00 ~ 15:59
        wating = 960 - total_min;
        usage = -1;
    } else { // 16:00 ~ 23:59
        wating = -1;
        usage = -1;
    }

    if (wating == -1) {
        printf("-1\n");
    } else {
        printf("Waiting time: %d minutes\n", wating);
    }

    if (usage == -1) {
        printf("-1\n");
    } else {
        printf("Usage time: %d minutes", usage);
    }
}