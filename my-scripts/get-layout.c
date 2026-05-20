#include <stdio.h>
#include <X11/Xlib.h>
#include <X11/XKBlib.h>

int main() {
    Display *dpy = XOpenDisplay(NULL);
    if (dpy == NULL) return 1;

    XkbStateRec state;
    XkbGetState(dpy, XkbUseCoreKbd, &state);

    printf("%d", state.group);

    XCloseDisplay(dpy);
    return 0;
}
