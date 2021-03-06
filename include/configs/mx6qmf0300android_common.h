/*
 * Copyright (C) 2013-2016 Freescale Semiconductor, Inc. All Rights Reserved.
 *
 * SPDX-License-Identifier:    GPL-2.0+
 */

#ifndef __MX6QMF0300ANDROID_COMMON_CONFIG_H
#define __MX6QMF0300ANDROID_COMMON_CONFIG_H

#define I2C_RXTX_LEN                               128

#define CONFIG_CI_UDC
#define CONFIG_USBD_HS
#define CONFIG_USB_GADGET_DUALSPEED

#define CONFIG_USB_GADGET
#define CONFIG_CMD_USB_MASS_STORAGE
#define CONFIG_USB_GADGET_MASS_STORAGE
#define CONFIG_USBDOWNLOAD_GADGET
#define CONFIG_USB_GADGET_VBUS_DRAW                2

#define CONFIG_G_DNL_VENDOR_NUM                    0x18d1
#define CONFIG_G_DNL_PRODUCT_NUM                   0x0d02
#define CONFIG_G_DNL_MANUFACTURER                  "FSL"

#define CONFIG_CMD_FASTBOOT
#define CONFIG_CMD_READ

#define CONFIG_POWER
#define CONFIG_POWER_I2C

#define CONFIG_BCB_SUPPORT
#define CONFIG_ANDROID_BOOT_IMAGE
#define CONFIG_FASTBOOT_FLASH
#define CONFIG_FSL_FASTBOOT
#define CONFIG_USB_FUNCTION_FASTBOOT
#define CONFIG_CMD_FASTBOOT
#define CONFIG_ANDROID_BOOT_IMAGE
#define CONFIG_FASTBOOT_FLASH

#define CONFIG_ANDROID_RECOVERY
#define CONFIG_FASTBOOT_STORAGE_MMC

#define CONFIG_ANDROID_MAIN_MMC_BUS                1

#define CONFIG_ANDROID_BOOT_PARTITION_MMC          1
#define CONFIG_ANDROID_RECOVERY_PARTITION_MMC      2
#define CONFIG_ANDROID_EXTENDED_PARTITION_MMC      3 /* mmcblk3p3 - is extended partition             */
                                                     /* that contains partitions: mmcblk3p4-mmcblk3p9 */
#define CONFIG_ANDROID_DATA_PARTITION_MMC          4
#define CONFIG_ANDROID_SYSTEM_PARTITION_MMC        5
#define CONFIG_ANDROID_CACHE_PARTITION_MMC         6
#define CONFIG_ANDROID_DEVICE_PARTITION_MMC        7
#define CONFIG_ANDROID_MISC_PARTITION_MMC          8
#define CONFIG_ANDROID_USERDATA_PARTITION_MMC      9 /* mmcblk3p9 - is DATAFOOTER partition */
                                                     /* encryptable partition for data partition: mmcblk3p4 */

#define CONFIG_CMD_BOOTA
#define CONFIG_SUPPORT_RAW_INITRD
#define CONFIG_SERIAL_TAG

#define CONFIG_FASTBOOT_BUF_ADDR                   CONFIG_SYS_LOAD_ADDR
#define CONFIG_FASTBOOT_BUF_SIZE                   0x19000000

#define CONFIG_USB_FASTBOOT_BUF_ADDR               CONFIG_SYS_LOAD_ADDR
#define CONFIG_USB_FASTBOOT_BUF_SIZE               0x19000000

#define CONFIG_USB_GADGET_DOWNLOAD                 1

#endif /* __MX6QMF0300ANDROID_COMMON_CONFIG_H */
