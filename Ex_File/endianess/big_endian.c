//this program is to convert the little endian into big endian

#include <stdio.h>
#include <inttypes.h>

//Function to change one endian to another
uint32_t ChangeEndianness(uint32_t u32Value)
{
    uint32_t u32Result = 0;
    u32Result |= (u32Value & 0x000000FF) << 24;
    u32Result |= (u32Value & 0x0000FF00) << 8;
    u32Result |= (u32Value & 0x00FF0000) >> 8;
    u32Result |= (u32Value & 0xFF000000) >> 24;
    return u32Result;
}

int main()
{
    uint32_t u32CheckData  = 0x11223344;
    uint32_t u32ResultData =0;
    //swap the data
    u32ResultData = ChangeEndianness(u32CheckData);
    //original data
    printf("Little Endian: 0x%x\n", u32CheckData);
    //converted data
    printf("Big Endian:    0x%x\n",u32ResultData);
    return 0;
}