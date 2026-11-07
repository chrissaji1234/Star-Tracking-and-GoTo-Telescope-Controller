/**
 ******************************************************************************
 * @file    bsp_memory.h
 * @brief   Placement of DMA buffers in memory the D-cache never holds.
 ******************************************************************************
 *
 * The Cortex-M7 D-cache is write-back and the DMA controllers bypass it, so a
 * DMA buffer in cacheable RAM (SRAM1/SRAM2) can be read or written stale.
 * BSP_DMA_BUFFER places a buffer in the .dma_buffers output section, which
 * STM32F767XX_FLASH.ld puts in DTCM: never cached, and reachable by DMA1/DMA2
 * through the core's AHBS port. This is F7-specific; on an H7, DMA1/DMA2 cannot
 * reach DTCM. No cache maintenance is needed.
 *
 * Rules (the section is NOLOAD - startup code neither copies nor zeroes this section):
 *  - Globals and statics only. Locals live on the stack.
 *  - No initializer. NOLOAD silently drops initial values.
 *  - Not zeroed at startup. Clear the buffer in driver init if needed.
 *  - Not const. GCC rejects const and non-const objects in one named section
 *    ("section type conflict").
 *
 * Usage:
 *   static uint8_t rx_frame[64] BSP_DMA_BUFFER;
 */

#ifndef BSP_MEMORY_H
#define BSP_MEMORY_H

/** Cortex-M7 L1 D-cache line size, in bytes. */
#define BSP_DCACHE_LINE_SIZE    32U

/** Place a static-storage object in the DMA-safe .dma_buffers section. */
#define BSP_DMA_BUFFER  __attribute__((section(".dma_buffers"), aligned(BSP_DCACHE_LINE_SIZE)))

#endif /* BSP_MEMORY_H */
