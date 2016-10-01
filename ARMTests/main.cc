//
//  main.cpp
//  ARMTests
//
//  Created by callum taylor on 11/08/2015.
//  Copyright (c) 2015 satori. All rights reserved.
//

#include <iostream>
#include <string>
#include "ARMDisassembler.h"

int main(int argc, const char * argv[]) {
    ARMDisassembler *dis = new ARMDisassembler();
    printf("%s\n", dis->Disassemble(0x0, 0xE3E01000).data());
    delete dis;
}
