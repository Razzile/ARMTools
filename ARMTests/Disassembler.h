//
//  Disassembler.hpp
//  ARMTests
//
//  Created by callum taylor on 08/02/2016.
//  Copyright © 2016 satori. All rights reserved.
//

#ifndef __Disassembler__
#define __Disassembler__


// TODO: expand or remove this class
template <class T>
class Disassembler {
    static T *CreateDisassembler() {
        T *disassembler = new T();
        return disassembler;
    }
};


#endif /* __Disassembler__ */
