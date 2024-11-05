#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point1;

struct Point2 {
    int x;
    int y;
};

void add(Point1 p1, Point1 p2) {
    printf("Sum: (%d, %d)\n", p1.x + p2.x, p1.y + p2.y);
}

void copy(Point1 p1, Point1 p2) {
    p1.x = p2.x; // p1.x
    p1.y = p2.y;
    printf("p1: (%d, %d)\n", p1.x, p1.y);
}

int main() {
    Point1 p1 = {1, 2};
    Point1 p2 = {3, 4};

    printf("p1: (%d, %d)\n", p1.x, p1.y);
    printf("p2: (%d, %d)\n", p2.x, p2.y);

    struct Point2 p3 = {5, 6};
    struct Point2 p4 = {7, 8};

    printf("p3: (%d, %d)\n", p3.x, p3.y);
    printf("p4: (%d, %d)\n", p4.x, p4.y);

    add(p1, p2);
    add((Point1) {9, 10}, (Point1) {11, 12});

    copy(p1, p2);
    printf("p1: (%d, %d)\n", p1.x, p1.y);

    return 0;
}