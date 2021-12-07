//
//  nes.hpp
//  Proj1
//
//  Created by Alexi Canesse on 17/11/2021.
//

#ifndef nes_hpp
#define nes_hpp


#include <array>

#include "cpu.hpp"
#include "ppu.hpp"

typedef uint8_t Byte;
typedef uint16_t Address;


class NES{
public:
    CPU *cpu;
    PPU *ppu;
    
    /*
        Constructor
    */
    NES();
    
#warning TODO init matrix at init
    std::array<Byte, 2048> *ram = new std::array<Byte, 2048>; //le reste et un miroire de cette tranche mémoire.
    
    
#warning temp for nestest
    std::array<Byte, 0xFFFF + 1> *rom = new std::array<Byte, 0xFFFF + 1>; //temp rom
    
    void write(Address adr, Byte content);
    Byte read(Address adr); //errno = 22 en cas d'erreur.
};


#endif /* nes_hpp */
