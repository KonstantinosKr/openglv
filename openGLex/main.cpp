//
//  main.cpp
//  openGLex
//
//  Created by Konstantinos on 9/21/14.
//  Copyright (c) 2014 Durham University. All rights reserved.
//

#include <iostream>
#include "viewer.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int WIDTH = 10, HEIGHT= 10;
    double extents [6] = {-1, -1, -1, 1, 1, 1};
    viewer (&argc, argv, "MAIN", WIDTH, HEIGHT, extents, /* run viewer */
         RND_Menu, RND_Init, RND_Idle, RND_Quit, RND_Render,
         RND_Key, RND_Keyspec, RND_Mouse, RND_Motion, RND_Passive);
    return 0;
}
