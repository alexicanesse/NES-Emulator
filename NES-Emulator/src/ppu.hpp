//
//  ppu.hpp
//  NES-Emulator
//
//  Created by Alexi Canesse on 07/12/2021.
//

#ifndef ppu_hpp
#define ppu_hpp

#include "nes.hpp"


typedef uint8_t Byte;
typedef uint16_t Address;

class PPU{
private:
    /*
     Registers
    */
#warning TODO init reg
    struct registers {
        Byte PPUCTRL = 0x00; // Address 0x2000       PPU control register
        Byte PPUMASK = 0x00; // Address 0x2001       PPU mask register
        Byte PPUSTATUS = 0x00; // Address 0x2002     PPU status register
        Byte OAMADDR = 0x00; // Address 0x2003       OAM address port
        Byte OAMDATA = 0x00; // Address 0x2004       OAM data port
        Byte PPUSCROLL = 0x00; // Address 0x2005     PPU scrolling position register
        Byte PPUADDR = 0x00; // Address 0x2006      PPU address register
        Byte PPUDATA = 0x00; // Address 0x2007       PPU data port
        Byte OAMDMA = 0x00; // Address 0x4014        OAM DMA register (high byte)
    } registers;
public:
    /*
     Registers
    */
    Byte getPPUCTRL();    //get PPU control register
    Byte getPPUMASK();    //get PPU mask register
    Byte getPPUSTATUS();  //get PPU status register
    Byte getOAMADDR();    //OAM address port
    Byte getOAMDATA();    //get OAM data port
    Byte getPPUSCROLL();  //get scrolling position register
    Byte getPPUADDR();    //get address register
    Byte getPPUDATA();    //get PPU data port
    Byte getOAMDMA();     //get OAM DMA register (high byte)
    
    
    
    /*
     Other
    */
    NES nes;
    void clock();
};






#endif /* ppu_hpp */