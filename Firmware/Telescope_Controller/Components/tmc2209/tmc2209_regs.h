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

/* --- Register Addresses --- */

/* General Configuration */
#define TMC2209_REG_GCONF           0x00U   /* RW, 10-bit */
#define TMC2209_REG_GSTAT           0x01U   /* RWC, 3-bit */
#define TMC2209_REG_IFCNT           0x02U   /* R, 8-bit */
#define TMC2209_REG_NODECONF        0x03U   /* W, 4-bit */
#define TMC2209_REG_OTP_PROG        0x04U   /* W, 16-bit */
#define TMC2209_REG_OTP_READ        0x05U   /* R, 24-bit */
#define TMC2209_REG_OTP_IOIN        0x06U   /* R, 18-bit */
#define TMC2209_REG_FACTORY_CONF    0x07U   /* RW, 7-bit */

/* Velocity Dependent Control */
#define TMC2209_REG_IHOLD_IRUN      0x10U   /* W, 14-bit */
#define TMC2209_REG_TPOWERDOWN      0x11U   /* W, 8-bit */
#define TMC2209_REG_TSTEP           0x12U   /* R, 20-bit */
#define TMC2209_REG_TPWMTHRS        0x13U   /* W, 20-bit */
#define TMC2209_REG_VACTUAL         0x22U   /* W, 24-bit */

/* StallGuard Control */
#define TMC2209_REG_TCOOLTHRS       0x14U   /* W, 20-bit */
#define TMC2209_REG_SGTHRS          0x40U   /* W, 8-bit */
#define TMC2209_REG_SG_RESULT       0x41U   /* R, 10-bit */
#define TMC2209_REG_COOLCONF        0x42U   /* W, 16-bit */

/* Sequencer Registers */
#define TMC2209_REG_MSCNT           0x6AU   /* R, 10-bit */
#define TMC2209_REG_MSCURACT        0x6BU   /* R, 18-bit */

/* Chopper Control Registers */
#define TMC2209_REG_CHOPCONF        0x6CU   /* RW, 32-bit */
#define TMC2209_REG_DRV_STATUS      0x6FU   /* R, 32-bit */
#define TMC2209_REG_PWM_SCALE       0x71U   /* R, 17-bit */
#define TMC2209_REG_PWM_AUTO        0x72U   /* R, 16-bit */

/* --- GCONF (0x00) --- */






















#endif /* TMC2209_REG_MAP_H */