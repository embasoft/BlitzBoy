// Constants of Cartridge/MBC Types
#define ROM_ONLY 0x00
#define MBC1 0x01
#define MBC1_RAM 0x02
#define MBC1_RAM_BATTERY 0x03
#define MBC2 0x05
#define MBC2_BATTERY 0x06
#define ROM_RAM 0x08
#define ROM_RAM_BATTERY 0x09
#define MMM01 0x0B
#define MMM01_RAM 0x0C
#define MMM01_RAM_BATTERY 0x0D
#define MBC3_TIMER_BATTERY 0x0F
#define MBC3_TIMER_RAM_BATTERY 0x10
#define MBC3 0x11
#define MBC3_RAM 0x12
#define MBC3_RAM_BATTERY 0x13
#define MBC4 0x15
#define MBC4_RAM 0x16 
#define MBC4_RAM_BATTERY 0x17
#define MBC5 0x19
#define MBC5_RAM 0x1A
#define MBC5_RAM_BATTERY 0x1B
#define MBC5_RUMBLE 0x1C
#define MBC5_RUMBLE_RAM 0x1D
#define MBC5_RUMBLE_RAM_BATTERY 0x1E
#define POCKET_CAMERA 0xFC
#define BANDAI_TAMA5 0xFD
#define HUC3 0xFE
#define HUC1_RAM_BATTERY 0xFF
// Bank specific constans
#define BANK_LENGTH 0x4000
#define VIDEO_RAM_LENGTH 0x2000
#define WORK_RAM_LENGTH 0x2000
#define SPRITE_ATTRIBUTE_TABLE_LENGTH 0x00A0
#define IO_PORTS_LENGTH 0x0080
#define HIGH_RAM_LENGTH 0x0080
// Length of header areas
#define HEADER_LENGTH 0x0150
#define ENTRY_POINT_LENGTH 0x04
#define NINTENDO_LOGO_LENGTH 0x30
#define TITLE_LENGTH 0x10
#define MANUFACTURER_CODE_LENGTH 0x04
#define NEW_LICENSE_CODE_LENGTH 0x02
#define GLOBAL_CHECKSUM_LENGTH 0x02
