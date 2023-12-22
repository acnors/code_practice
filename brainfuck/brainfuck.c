#include <stdio.h>

#define TAPE_SIZE 100

int tape[TAPE_SIZE];
int position;

int add(int position) {
    tape[position]++;
    return position;
}

int subtract(int position) {
    tape[position]--;
    return position;
}

int move_position(int position) {
    return position + 1;
}

int main() {
    position = move_position(position);
	tape[position] = add(position);
    printf("Position: %d\n", position);
    printf("Tape[0]: %d\n", tape[position]);

    return 0;
}

