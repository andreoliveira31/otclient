#include <jni.h>
#include <main.cpp>

void android_main( struct android_app* state ) {
    int argc = 0;
    char* argv[] = char[1];
    argv[0] = "";

    main(argc, argv);
}
