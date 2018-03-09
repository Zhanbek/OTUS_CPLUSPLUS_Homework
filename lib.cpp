#include "lib.h"
#include "version.h"

int getVersionMajor() {
    return MAJOR;
}

int getVersionMinor() {
    return MINOR;
}

int  getVersionPatch() {
    return PROJECT_VERSION_PATCH;
}
