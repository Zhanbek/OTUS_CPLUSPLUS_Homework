#include "lib.h"
#include "version.h"

int getVersionMajor() {
    return MA;
}

int getVersionMinor() {
    return MI;
}

int  getVersionPatch() {
    return PROJECT_VERSION_PATCH;
}
