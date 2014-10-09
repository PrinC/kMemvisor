// Memory layout

#define EXTMEM   0x00100000            // Start of extended memory
#define PHYSTOP  0x006000000           // Top physical memory
#define DEVSPACE 0xFE000000         // Other devices are at high addresses

// Key addresses for address space layout (see kmap in vm.c for layout)
#define KERNBASE 0x80000000         // First kernel virtual address
#define KERNLINK (KERNBASE+EXTMEM)  // Address where kernel is linked

#define HAMA_MIRROR 0x08000000
#define HAMA_IS_MIRROR(v) ((((v) >= HAMA_MIRROR) \
                          &&((v) < KERNBASE)) || \
                           (((v) >= KERNBASE + HAMA_MIRROR) \
                          &&((v) < DEVSPACE)))

#ifndef __ASSEMBLER__

static inline uint v2p(void *a) { return ((uint) (a))  - KERNBASE; }
static inline void *p2v(uint a) { return (void *) ((a) + KERNBASE); }

#endif

#define V2P(a) (((uint) (a)) - KERNBASE)
#define P2V(a) (((void *) (a)) + KERNBASE)

#define V2P_WO(x) ((x) - KERNBASE)    // same as V2P, but without casts
#define P2V_WO(x) ((x) + KERNBASE)    // same as V2P, but without casts
