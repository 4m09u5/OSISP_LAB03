#define _XOPEN_SOURCE 500

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "util.h"

enum Action {LIST, KILL, SILENT, GARRULOUS, UNKNOWN_ACTION};

struct ParsedAction {
    enum Action action;
    long long num;
};

struct ParsedAction parse(char *input) {

}

void handleAction(struct ParsedAction action) {

}

int main() {
    char buff;
    char action[256] = {0};

    if((buff = getch()) == 0) {
        fgets(buff, 256, STDIN_FILENO);
    } else {
        (*action) = buff;
    }

    printf("%s\n", action);
}