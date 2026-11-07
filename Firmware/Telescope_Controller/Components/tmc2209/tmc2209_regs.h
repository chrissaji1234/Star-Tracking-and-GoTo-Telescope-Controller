/**
 ******************************************************************************
 * @file    tmc2209_regs.h
 * @brief   TMC2209 register addresses and bit fields.
 ******************************************************************************
 *
 * Source: TMC2209 Datasheet Rev 1.09 (2023-FEB-16), section 5 "Register Map"
 * (Docs/TMC2209_Reference_Manual.pdf).
 *
 * Register groups, in datasheet order:
 *   5.1  General configuration (0x00-0x07): global settings and status
 *        flags, write counter, UART reply delay, OTP access, input pin
 *        states and chip version.
 *   5.2  Velocity dependent control (0x10-0x13, 0x22): motor current and
 *        standstill reduction, StealthChop/SpreadCycle switch-over speed,
 *        internal step generator.
 *   5.3  StallGuard and CoolStep (0x14, 0x40-0x42): sensorless stall
 *        detection and adaptive motor current.
 *   5.4  Sequencer (0x6A-0x6B): microstep table position and coil
 *        currents; read only.
 *   5.5  Chopper control (0x6C, 0x6F-0x72): StealthChop2 and SpreadCycle
 *        tuning, braking and freewheeling, diagnostics, driver enable.
 *
 * Naming (the same style as ST's CMSIS headers):
 *   TMC2209_REG_<reg>              register address
 *   TMC2209_<reg>_<field>_Pos      bit number of the field's lowest bit
 *   TMC2209_<reg>_<field>_Msk      field mask, already shifted into place
 *
 * Access (the datasheet's notation):
 *   R      read only
 *   W      write only; it can't be read back, so the driver keeps a copy
 *   R/W    read and write
 *   R+WC   read; write 1 to a flag bit to clear it
 *
 * Every register address is listed. For now, bit fields are listed only for 
 * registers the driver uses.
 *
 * All registers reset to 0 at power-up unless the datasheet notes otherwise.
 *
 * The addresses here are read addresses. A write sets bit 7 (0x80), which is
 * part of the UART datagram, so tmc2209.c adds it.
 *
 */
#ifndef TMC2209_REG_MAP_H
#define TMC2209_REG_MAP_H

/* General Configuration Registers 0x00...0x0F */
#define GNCOF                   0x00






















#endif /* TMC2209_REG_MAP_H */