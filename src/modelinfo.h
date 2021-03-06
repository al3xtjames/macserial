//
// Decode mac serial number
//
// Copyright (c) 2018 vit9696
//

#ifndef GENSERIAL_MODELINFO_H
#define GENSERIAL_MODELINFO_H

#include <assert.h>

#include "macserial.h"

typedef enum {
  MacBook1_1, // Intel Core Duo T2500 @ 2.00 GHz
  MacBook2_1, // Intel Core 2 Duo T7200 @ 2.00 GHz
  MacBook3_1, // Intel Core 2 Duo T7500 @ 2.20 GHz
  MacBook4_1, // Intel Core 2 Duo T8300 @ 2.39 GHz
  MacBook5_1, // Intel Core 2 Duo P7350 @ 2.00 GHz
  MacBook5_2, // Intel Core 2 Duo P7450 @ 2.13 GHz
  MacBook6_1, // Intel Core 2 Duo P7550 @ 2.26 GHz
  MacBook7_1, // Intel Core 2 Duo P8600 @ 2.40 GHz
  MacBook8_1, // Intel Core M-5Y51 @ 1.20 GHz
  MacBook9_1, // Intel Core m5-6Y54 @ 1.20 GHz
  MacBook10_1, // Intel Core i5-7Y54 @ 1.30 GHz
  MacBookPro1_1, // Intel Core Duo T2500 @ 2.00 GHz
  MacBookPro1_2, // Intel Core Duo T2600 @ 2.17 GHz
  MacBookPro2_1, // Intel Core 2 Duo T7600 @ 2.33 GHz
  MacBookPro2_2, // Intel Core 2 Duo T7400 @ 2.16 GHz
  MacBookPro3_1, // Intel Core 2 Duo T7700 @ 2.40 GHz
  MacBookPro4_1, // Intel Core 2 Duo T8300 @ 2.40 GHz
  MacBookPro5_1, // Intel Core 2 Duo P8600 @ 2.40 GHz
  MacBookPro5_2, // Intel Core 2 Duo T9600 @ 2.80 GHz
  MacBookPro5_3, // Intel Core 2 Duo P8800 @ 2.66 GHz
  MacBookPro5_4, // Intel Core 2 Duo P8700 @ 2.53 GHz
  MacBookPro5_5, // Intel Core 2 Duo P7550 @ 2.26 GHz
  MacBookPro6_1, // Intel Core i5-540M @ 2.53 GHz
  MacBookPro6_2, // Intel Core i7-620M @ 2.66 GHz
  MacBookPro7_1, // Intel Core 2 Duo P8600 @ 2.40 GHz
  MacBookPro8_1, // Intel Core i5-2415M @ 2.30 GHz
  MacBookPro8_2, // Intel Core i7-2675QM @ 2.20 GHz
  MacBookPro8_3, // Intel Core i7-2860QM @ 2.49 GHz
  MacBookPro9_1, // Intel Core i7-3720QM @ 2.60 GHz
  MacBookPro9_2, // Intel Core i5-3210M @ 2.50 GHz
  MacBookPro10_1, // Intel Core i7-3740QM @ 2.70 GHz
  MacBookPro10_2, // Intel Core i5-3230M @ 2.60 GHz
  MacBookPro11_1, // Intel Core i7-4558U @ 2.80 GHz
  MacBookPro11_2, // Intel Core i7-4750HQ @ 2.00 GHz
  MacBookPro11_3, // Intel Core i7-4870HQ @ 2.50 GHz
  MacBookPro11_4, // Intel Core i7-4770HQ @ 2.20 GHz
  MacBookPro11_5, // Intel Core i7-4870HQ @ 2.50 GHz
  MacBookPro12_1, // Intel Core i5-5257U @ 2.70 GHz
  MacBookPro13_1, // Intel Core i5-6360U @ 2.00 GHz
  MacBookPro13_2, // Intel Core i5-6287U @ 3.10 GHz
  MacBookPro13_3, // Intel Core i7-6920HQ @ 2.90 GHz
  MacBookPro14_1, // Intel Core i5-7360U @ 2.30 GHz
  MacBookPro14_2, // Intel Core i5-7267U @ 3.09 GHz
  MacBookPro14_3, // Intel Core i7-7700HQ @ 2.80 GHz
  MacBookPro15_1, //Intel Core i9 @ 2.9 GHz
  MacBookAir1_1, // Intel Core 2 Duo P7500 @ 1.60 GHz
  MacBookAir2_1, // Intel Core 2 Duo L9600 @ 2.13 GHz
  MacBookAir3_1, // Intel Core 2 Duo U9400 @ 1.40 GHz
  MacBookAir3_2, // Intel Core 2 Duo L9600 @ 2.13 GHz
  MacBookAir4_1, // Intel Core i7-2677M @ 1.80 GHz
  MacBookAir4_2, // Intel Core i5-2557M @ 1.70 GHz
  MacBookAir5_1, // Intel Core i7-3667U @ 2.00 GHz
  MacBookAir5_2, // Intel Core i5-3427U @ 1.80 GHz
  MacBookAir6_1, // Intel Core i7-4650U @ 1.70 GHz
  MacBookAir6_2, // Intel Core i5-4250U @ 1.30 GHz
  MacBookAir7_1, // Intel Core i5-5250U @ 1.60 GHz
  MacBookAir7_2, // Intel Core i7-5650U @ 2.20 GHz
  Macmini1_1, // Intel Core 2 Duo T7200 @ 2.00 GHz
  Macmini2_1, // Intel Core 2 Duo T5600 @ 1.83 GHz
  Macmini3_1, // Intel Core 2 Duo P7550 @ 2.26 GHz
  Macmini4_1, // Intel Core 2 Duo P8600 @ 2.40 GHz
  Macmini5_1, // Intel Core i5-2415M @ 2.30 GHz
  Macmini5_2, // Intel Core i7-2620M @ 2.70 GHz
  Macmini5_3, // Intel Core i7-2635QM @ 2.00 GHz
  Macmini6_1, // Intel Core i5-3210M @ 2.50 GHz
  Macmini6_2, // Intel Core i7-3615QM @ 2.30 GHz
  Macmini7_1, // Intel Core i5-4278U @ 2.60 GHz
  iMac4_1, // Intel Core 2 Duo T7200 @ 2.00 GHz
  iMac4_2, // Intel Core 2 Duo T5600 @ 1.83 GHz
  iMac5_1, // Intel Core 2 Duo T7400 @ 2.16 GHz
  iMac5_2, // Intel Core 2 Duo T5600 @ 1.83 GHz
  iMac6_1, // Intel Core 2 Duo T7400 @ 2.16 GHz
  iMac7_1, // Intel Core 2 Extreme X7900 @ 2.80 GHz
  iMac8_1, // Intel Core 2 Duo E8435 @ 3.06 GHz
  iMac9_1, // Intel Core 2 Duo E8135 @ 2.66 GHz
  iMac10_1, // Intel Core 2 Duo E7600 @ 3.06 GHz
  iMac11_1, // Intel Core i7-860 @ 2.80 GHz
  iMac11_2, // Intel Core i3-540 @ 3.06 GHz
  iMac11_3, // Intel Core i5-760 @ 2.80 GHz
  iMac12_1, // Intel Core i7-2600S @ 2.80 GHz
  iMac12_2, // Intel Core i5-2500S @ 2.70 GHz
  iMac13_1, // Intel Core i7-3770S @ 3.10 GHz
  iMac13_2, // Intel Core i5-3470 @ 3.20 GHz
  iMac13_3, // Intel Core i3-3225 @ 3.30 GHz
  iMac14_1, // Intel Core i5-4570R @ 2.70 GHz
  iMac14_2, // Intel Core i5-4570 @ 3.20 GHz
  iMac14_3, // Intel Core i5-4570S @ 2.90 GHz
  iMac14_4, // Intel Core i5-4260U @ 1.40 GHz
  iMac15_1, // Intel Core i5-4690 @ 3.50 GHz
  iMac16_1, // Intel Core i5-5250U @ 1.60 GHz
  iMac16_2, // Intel Core i5-5575R @ 2.80 GHz
  iMac17_1, // Intel Core i7-6700K @ 4.00 GHz
  iMac18_1, // Intel Core i5-7360U @ 2.30 GHz
  iMac18_2, // Intel Core i5-7500 @ 3.40 GHz
  iMac18_3, // Intel Core i7-7700K @ 4.20 GHz
  iMacPro1_1, // Intel Xeon W-2140B CPU @ 3.20 GHz
  MacPro1_1, // Intel Xeon X5355 @ 2.66 GHz x2
  MacPro2_1, // Intel Xeon X5365 @ 2.99 GHz x2
  MacPro3_1, // Intel Xeon E5462 @ 2.80 GHz x2
  MacPro4_1, // Intel Xeon X5670 @ 2.93 GHz x2
  MacPro5_1, // Intel Xeon X5675 @ 3.06 GHz x2
  MacPro6_1, // Intel Xeon E5-1650 v2 @ 3.50 GHz
  Xserve1_1, // Intel Xeon E5345 @ 2.33 GHz x2
  Xserve2_1, // Intel Xeon E5472 @ 3.00 GHz x2
  Xserve3_1, // Intel Xeon E5520 @ 2.26 GHz
} AppleModel;

#define APPLE_MODEL_MAX 105

static PLATFORMDATA ApplePlatformData[] = {
  { "MacBook1,1", "MB11.88Z.0061.B03.0610121324", "Mac-F4208CC8",
    "MacBook", "1.1", "W80A041AU9B", "MacBook-White",
    { 0x01, 0x00, 0x04, 0x00, 0x0F, 0x00 },"branch", "m70", 0x00071001 },
  { "MacBook2,1", "MB21.88Z.00A5.B07.0706270922", "Mac-F4208CA9",
    "MacBook", "1.2", "W88A041AWGP", "MacBook-White",
    { 0x01, 0x00, 0x13, 0x00, 0x0F, 0x00 },"branch", "m75", 0x00072001 },
  { "MacBook3,1", "MB31.88Z.008E.B02.0803051832", "Mac-F22788C8",
    "MacBook", "1.3", "W8803HACY51", "MacBook-White",
    { 0x01, 0x00, 0x24, 0x00, 0x0F, 0x00 },"branch", "k36", 0x00072001 },
  { "MacBook4,1", "MB41.88Z.00C1.B00.0802091535", "Mac-F22788A9",
    "MacBook", "1.3", "W88A041A0P0", "MacBook-Black",
    { 0x01, 0x00, 0x31, 0x00, 0x0F, 0x00 },"branch", "m82", 0x00074001 },
  { "MacBook5,1", "MB51.88Z.007D.B03.0904271443", "Mac-F42D89C8",
    "MacBook", "1.3", "W8944T1S1AQ", "MacBook-Black",
    { 0x01, 0x00, 0x32, 0x00, 0x0F, 0x00 },"branch", "m97", 0x0007A002 },
  { "MacBook5,2", "MB52.88Z.0088.B05.0904162222", "Mac-F22788AA",
    "MacBook", "1.3", "W88AAAAA9GU", "MacBook-Black",
    { 0x01, 0x00, 0x38, 0x00, 0x0F, 0x00 },"branch", "k36b", 0x0007A002 },
  { "MacBook6,1", "MB61.88Z.00CB.B00.1708080203", "Mac-F22C8AC8",
    "MacBook", "1.0", "451131JCGAY", "MacBook-White",
    { 0x01, 0x00, 0x51, 0x00, 0x0F, 0x00 },"NA", "NA", 0x0007A002 },
  { "MacBook7,1", "MB71.88Z.003D.B00.1708080317", "Mac-F22C89C8",
    "MacBook", "1.0", "451211MEF5X", "MacBook-White",
    { 0x01, 0x00, 0x60, 0x00, 0x0F, 0x00 },"k87", "k87", 0x0007A002 },
  { "MacBook8,1", "MB81.88Z.0168.B00.1708080033", "Mac-BE0E8AC46FE800CC",
    "MacBook", "1.0", "C02RCE58GCN3", "MacBook-Aluminum",
    { 0x02, 0x00, 0x25, 0x00, 0x0F, 0x00 },"j92", "j92", 0x00F0E007 },
  { "MacBook9,1", "MB91.88Z.0162.B00.1712180835", "Mac-9AE82516C7C6B903",
    "MacBook", "1.0", "C02RM408HDNK", "MacBook-Aluminum",
    { 0x02, 0x00, 0x35, 0x00, 0x0F, 0x00 },"j93", "j93", 0x00F0E007 },
  { "MacBook10,1", "MB101.88Z.0156.B00.1712141501", "Mac-EE2EBD4B90B839A8",
    "MacBook", "1.0", "C02TQHACHH27", "MacBook-Aluminum",
    { 0x02, 0x00, 0x24, 0x00, 0x0F, 0x00 },"j122", "j122", 0x00F08009 },
  { "MacBookPro1,1", "MBP11.88Z.0055.B08.0610121325", "Mac-F425BEC8",
    "MacBook Pro", "1.0", "W884857JVJ1", "MacBook-Aluminum",
    { 0x01, 0x00, 0x02, 0x00, 0x0F, 0x00 },"m1", "m1", 0x0007B002 },
  { "MacBookPro1,2", "MBP12.88Z.0061.B03.0610121334", "Mac-F42DBEC8",
    "MacBook Pro", "1.0", "W8629HACTHY", "MacBook-Aluminum",
    { 0x01, 0x00, 0x05, 0x00, 0x0F, 0x00 },"NA", "NA", 0x0007B002 },
  { "MacBookPro2,1", "MBP21.88Z.00A5.B08.0708131242", "Mac-F42189C8",
    "MacBook Pro", "1.0", "W88130WUW0H", "MacBook-Aluminum",
    { 0x01, 0x00, 0x14, 0x00, 0x0F, 0x00 },"NA", "NA", 0x0007B002 },
  { "MacBookPro2,2", "MBP22.88Z.00A5.B07.0708131242", "Mac-F42187C8",
    "MacBook Pro", "1.0", "W8827B4CW0L", "MacBook-Aluminum",
    { 0x01, 0x00, 0x13, 0x00, 0x0F, 0x00 },"NA", "NA", 0x0007B002 },
  { "MacBookPro3,1", "MBP31.88Z.0070.B07.0803051658", "Mac-F4238BC8",
    "MacBook Pro", "1.0", "W8841OHZX91", "MacBook-Aluminum",
    { 0x01, 0x00, 0x16, 0x00, 0x0F, 0x00 },"NA", "NA", 0x0007B002 },
  { "MacBookPro4,1", "MBP41.88Z.00C1.B03.0802271651", "Mac-F42C89C8",
    "MacBook Pro", "1.0", "W88484F2YP4", "MacBook-Aluminum",
    { 0x01, 0x00, 0x27, 0x00, 0x0F, 0x00 },"m87", "m87", 0x0007B002 },
  { "MacBookPro5,1", "MBP51.88Z.007E.B06.1202061253", "Mac-F42D86C8",
    "MacBook Pro", "1.0", "W88439FE1G0", "MacBook-Aluminum",
    { 0x01, 0x00, 0x33, 0x00, 0x0F, 0x00 },"m98", "m98", 0x0007B002 },
  { "MacBookPro5,2", "MBP52.88Z.008E.B05.0905042202", "Mac-F2268EC8",
    "MacBook Pro", "1.0", "W8908HAC2QP", "MacBook-Aluminum",
    { 0x01, 0x00, 0x42, 0x00, 0x0F, 0x00 },"NA", "NA", 0x0007B002 },
  { "MacBookPro5,3", "MBP53.88Z.00AC.B03.0906151647", "Mac-F22587C8",
    "MacBook Pro", "1.0", "W8035TG97XK", "MacBook-Aluminum",
    { 0x01, 0x00, 0x48, 0x00, 0x0F, 0x00 },"NA", "NA", 0x0007B002 },
  { "MacBookPro5,4", "MBP53.88Z.00AC.B03.0906151647", "Mac-F22587A1",
    "MacBook Pro", "1.0", "W8948HAC7XJ", "MacBook-Aluminum",
    { 0x01, 0x00, 0x49, 0x00, 0x0F, 0x00 },"NA", "NA", 0x0007B002 },
  { "MacBookPro5,5", "MBP55.88Z.00AC.B03.0906151708", "Mac-F2268AC8",
    "MacBook Pro", "1.0", "W8035TG966D", "MacBook-Aluminum",
    { 0x01, 0x00, 0x47, 0x00, 0x0F, 0x00 },"NA", "NA", 0x0007B002 },
  { "MacBookPro6,1", "MBP61.88Z.005A.B00.1708072217", "Mac-F22589C8",
    "MacBook Pro", "1.0", "C02G5834DC79", "MacBook-Aluminum",
    { 0x01, 0x00, 0x57, 0x00, 0x0F, 0x00 },"k17", "k17", 0x0007A004 },
  { "MacBookPro6,2", "MBP61.88Z.005A.B00.1708072217", "Mac-F22586C8",
    "MacBook Pro", "1.0", "CK132A91AGW", "MacBook-Aluminum", // W8...AGX, W8...AGW
    { 0x01, 0x00, 0x58, 0x00, 0x0F, 0x00 },"k74", "k74", 0x0007A004 },
  { "MacBookPro7,1", "MBP71.88Z.003D.B00.1708080058", "Mac-F222BEC8",
    "MacBook Pro", "1.0", "CK145C7NATM", "MacBook-Aluminum", // WQ...ATM
    { 0x01, 0x00, 0x62, 0x00, 0x0F, 0x00 },"branch", "k6", 0x0007A004 },
  { "MacBookPro8,1", "MBP81.88Z.004D.B00.1708080655", "Mac-94245B3640C91C81",
    "MacBook Pro", "1.0", "W89F9196DH2G", "MacBook-Aluminum",
    { 0x01, 0x00, 0x68, 0x00, 0x0F, 0x00 },"k90i", "k90i", 0x0007B005 },
  { "MacBookPro8,2", "MBP81.88Z.004D.B00.1708080655", "Mac-94245A3940C91C80",
    "MacBook Pro", "1.0", "C02HL0FGDF8X", "MacBook-Aluminum",
    { 0x01, 0x00, 0x69, 0x00, 0x0F, 0x00 },"trunk", "k91f", 0x0007B005 },
  { "MacBookPro8,3", "MBP81.88Z.004D.B00.1708080655", "Mac-942459F5819B171B",
    "MacBook Pro", "1.0", "W88F9CDEDF93", "MacBook-Aluminum",
    { 0x01, 0x00, 0x70, 0x00, 0x0F, 0x00 },"k92", "k92", 0x0007C005 },
  { "MacBookPro9,1", "MBP91.88Z.00D7.B00.1708080744", "Mac-4B7AC7E43945597E",
    "MacBook Pro", "1.0", "C02LW984F1G4", "MacBook-Aluminum",
    { 0x02, 0x00, 0x01, 0x00, 0x0F, 0x00 },"j31", "j31", 0x00076006 },
  { "MacBookPro9,2", "MBP91.88Z.00D7.B00.1708080744", "Mac-6F01561E16C75D06",
    "MacBook Pro", "1.0", "C02HA041DTY3", "MacBook-Aluminum",
    { 0x02, 0x00, 0x02, 0x00, 0x0F, 0x00 },"branch", "j30", 0x00076006 },
  { "MacBookPro10,1", "MBP101.88Z.00F2.B00.1708080809", "Mac-C3EC7CD22292981F",
    "MacBook Pro", "1.0", "C02K2HACDKQ1", "MacBook-Aluminum",
    { 0x02, 0x00, 0x03, 0x00, 0x0F, 0x00 },"d2", "d2", 0x00074006 },
  { "MacBookPro10,2", "MBP102.88Z.010B.B00.1708080805", "Mac-AFD8A9D944EA4843",
    "MacBook Pro", "1.0", "C02K2HACG4N7", "MacBook-Aluminum",
    { 0x02, 0x00, 0x06, 0x00, 0x0F, 0x00 },"branch", "d1", 0x00073007 },
  { "MacBookPro11,1", "MBP111.88Z.0142.B00.1708080655", "Mac-189A3D4F975D5FFC",
    "MacBook Pro", "1.0", "C02LSHACFH00", "MacBook-Aluminum",
    { 0x02, 0x00, 0x16, 0x00, 0x0F, 0x00 },"j44", "j44", 0x00F0B007 },
  { "MacBookPro11,2", "MBP112.88Z.0142.B00.1708080655", "Mac-3CBD00234E554E41",
    "MacBook Pro", "1.0", "C02LSHACG86R", "MacBook-Aluminum",
    { 0x02, 0x00, 0x18, 0x00, 0x0F, 0x00 },"j45", "j45", 0x00F0B007 },
  { "MacBookPro11,3", "MBP112.88Z.0142.B00.1708080655", "Mac-2BD1B31983FE1663",
    "MacBook Pro", "1.0", "C02LSHACFR1M", "MacBook-Aluminum",
    { 0x02, 0x00, 0x19, 0x00, 0x0F, 0x00 },"j45g", "j45g", 0x00F0D007 },
  { "MacBookPro11,4", "MBP114.88Z.0177.B00.1708080033", "Mac-06F11FD93F0323C5",
    "MacBook Pro", "1.0", "C02SNHACG8WN", "MacBook-Aluminum",
    { 0x02, 0x00, 0x29, 0x00, 0x0F, 0x00 },"NA", "NA", 0x00F0B007 },
  { "MacBookPro11,5", "MBP114.88Z.0177.B00.1708080033", "Mac-06F11F11946D27C5",
    "MacBook Pro", "1.0", "C02LSHACG85Y", "MacBook-Aluminum",
    { 0x02, 0x00, 0x30, 0x00, 0x0F, 0x00 },"NA", "NA", 0x00F0B007 },
  { "MacBookPro12,1", "MBP121.88Z.0171.B00.1708080033", "Mac-E43C1C25D4880AD6",
    "MacBook Pro", "1.0", "C02Q51OSH1DP", "MacBook-Aluminum",
    { 0x02, 0x00, 0x28, 0x00, 0x0F, 0x00 },"j52", "j52", 0x00F01008 },
  { "MacBookPro13,1", "MBP131.88Z.0215.B00.1712180846", "Mac-473D31EABEB93F9B",
    "MacBook Pro", "1.0", "C02SLHACGVC1", "MacBook-Aluminum",
    { 0x02, 0x00, 0x36, 0x00, 0x0F, 0x00 },"2016mb", "j130", 0x00F02009 },
  { "MacBookPro13,2", "MBP132.88Z.0238.B00.1712190202", "Mac-66E35819EE2D0D05",
    "MacBook Pro", "1.0", "C02SLHACGYFH", "MacBook-Aluminum",
    { 0x02, 0x00, 0x37, 0x00, 0x0F, 0x00 },"2016mb", "j79", 0x00F02009 },
  { "MacBookPro13,3", "MBP133.88Z.0238.B00.1712190202", "Mac-A5C67F76ED83108C",
    "MacBook Pro", "1.0", "C02SLHACGTFN", "MacBook-Aluminum",
    { 0x02, 0x00, 0x38, 0x00, 0x0F, 0x00 },"2016mb", "j80g", 0x00F04009 },
  { "MacBookPro14,1", "MBP141.88Z.0169.B00.1712141501", "Mac-B4831CEBD52A0C4C",
    "MacBook Pro", "1.0", "C02TNHACHV29", "MacBook-Aluminum",
    { 0x02, 0x00, 0x43, 0x00, 0x0F, 0x00 },"2017mbp", "j130a", 0x00F0B009 },
  { "MacBookPro14,2", "MBP142.88Z.0169.B00.1712141501", "Mac-CAD6701F7CEA0921",
    "MacBook Pro", "1.0", "C02TQHACHV2N", "MacBook-Aluminum",
    { 0x02, 0x00, 0x44, 0x00, 0x0F, 0x00 },"2017mbp", "j79a", 0x00F09009 },
  { "MacBookPro14,3", "MBP143.88Z.0169.B00.1712141540", "Mac-551B86E5744E2388",
    "MacBook Pro", "1.0", "C02TQHACHTD5", "MacBook-Aluminum",
    { 0x02, 0x00, 0x45, 0x00, 0x0F, 0x00 },"2017mbp", "j80ga", 0x00F0A009 },
  { "MacBookPro15,1", " ", "Mac-937A206F2EE63C01", /////
    "MacBook Pro", "1.0", "C02X10NWKGYG", "MacBook-Aluminum",
    { 0x02, 0x00, 0x45, 0x00, 0x0F, 0x00 },"2018mbp", "j80ga", 0x00F0A009 },
  { "MacBookAir1,1", "MBA11.88Z.00BB.B03.0803171226", "Mac-F42C8CC8",
    "MacBook Air", "1.0", "W864947A18X", "Air-Enclosure",
    { 0x01, 0x00, 0x23, 0x00, 0x0F, 0x00 },"NA", "NA", 0x00076005 },
  { "MacBookAir2,1", "MBA21.88Z.0075.B05.1003051506", "Mac-F42D88C8",
    "MacBook Air", "1.0", "W86494769A7", "Air-Enclosure",
    { 0x01, 0x00, 0x34, 0x00, 0x0F, 0x00 },"NA", "NA", 0x00076005 },
  { "MacBookAir3,1", "MBA31.88Z.0067.B00.1708080355", "Mac-942452F5819B1C1B",
    "MacBook Air", "1.0", "C02FLHACD0QX", "Air-Enclosure",
    { 0x01, 0x00, 0x67, 0x00, 0x0F, 0x00 },"k16k99", "k99", 0x00076005 },
  { "MacBookAir3,2", "MBA31.88Z.0067.B00.1708080355", "Mac-942C5DF58193131B",
    "MacBook Air", "1.0", "C02DRHACDDR3", "Air-Enclosure",
    { 0x01, 0x00, 0x66, 0x00, 0x0F, 0x00 },"NA", "NA", 0x00076005 },
  { "MacBookAir4,1", "MBA41.88Z.007B.B00.1708072159", "Mac-C08A6BB70A942AC2",
    "MacBook Air", "1.0", "C02KGHACDRV9", "Air-Enclosure",
    { 0x01, 0x00, 0x74, 0x00, 0x0F, 0x00 },"k21k78", "k78", 0x00076005 },
  { "MacBookAir4,2", "MBA41.88Z.007B.B00.1708072159", "Mac-742912EFDBEE19B3",
    "MacBook Air", "1.0", "C02GLHACDJWT", "Air-Enclosure",
    { 0x01, 0x00, 0x73, 0x00, 0x0F, 0x00 },"k21k78", "k21", 0x00076005 },
  { "MacBookAir5,1", "MBA51.88Z.00F4.B00.1708080803", "Mac-66F35F19FE2A0D05",
    "MacBook Air", "1.0", "C02J6HACDRV6", "Air-Enclosure",
    { 0x02, 0x00, 0x04, 0x00, 0x0F, 0x00 },"j11j13", "j11", 0x0007B006 },
  { "MacBookAir5,2", "MBA51.88Z.00F4.B00.1708080803", "Mac-2E6FAB96566FE58C",
    "MacBook Air", "1.0", "C02HA041DRVC", "Air-Enclosure",
    { 0x02, 0x00, 0x05, 0x00, 0x0F, 0x00 },"j11j13", "j13", 0x0007B006 },
  { "MacBookAir6,1", "MBA61.88Z.0103.B00.1708080653", "Mac-35C1E88140C3E6CF",
    "MacBook Air", "1.0", "C02KTHACF5NT", "Air-Enclosure",
    { 0x02, 0x00, 0x12, 0x00, 0x0F, 0x00 },"j41j43", "j41", 0x0007B007 },
  { "MacBookAir6,2", "MBA61.88Z.0103.B00.1708080653", "Mac-7DF21CB3ED6977E5",
    "MacBook Air", "1.0", "C02HACKUF5V7", "Air-Enclosure",
    { 0x02, 0x00, 0x13, 0x00, 0x0F, 0x00 },"j41j43", "j43", 0x0007B007 },
  { "MacBookAir7,1", "MBA71.88Z.0171.B00.1708072210", "Mac-9F18E312C5C2BF0B",
    "MacBook Air", "1.0", "C02PCLGFH569", "Air-Enclosure",
    { 0x02, 0x00, 0x26, 0x00, 0x0F, 0x00 },"j110", "j110", 0x0007B007 },
  { "MacBookAir7,2", "MBA71.88Z.0171.B00.1708072210", "Mac-937CB26E2E02BB01",
    "MacBook Air", "1.0", "C02Q1HACG940", "Air-Enclosure",
    { 0x02, 0x00, 0x27, 0x00, 0x0F, 0x00 },"j113", "j113", 0x0007B007 },
  { "Macmini1,1", "MM11.88Z.0055.B08.0610121326", "Mac-F4208EC8",
    "Mac mini", "1.0", "W8702N1JU35", "Mini-Aluminum",
    { 0x01, 0x00, 0x03, 0x00, 0x0F, 0x00 },"m40", "m40", 0x00078002 },
  { "Macmini2,1", "MM21.88Z.009A.B00.0706281359", "Mac-F4208EAA",
    "Mac mini", "1.1", "W8705W9LYL2", "Mini-Aluminum",
    { 0x01, 0x00, 0x19, 0x00, 0x0F, 0x00 },"NA", "NA", 0x00078002 },
  { "Macmini3,1", "MM31.88Z.0081.B06.0904271717", "Mac-F22C86C8",
    "Mac mini", "1.0", "W8905BBE19X", "Mini-Aluminum",
    { 0x01, 0x00, 0x35, 0x00, 0x0F, 0x00 },"NA", "NA", 0x00078002 },
  { "Macmini4,1", "MM41.88Z.0045.B00.1708072325", "Mac-F2208EC8",
    "Mac mini", "1.0", "C02FHBBEDD6H", "Mini-Aluminum",
    { 0x01, 0x00, 0x65, 0x00, 0x0F, 0x00 },"NA", "NA", 0x00078002 },
  { "Macmini5,1", "MM51.88Z.007B.B00.1708080744", "Mac-8ED6AF5B48C039E1",
    "Mac mini", "1.0", "C07GA041DJD0", "Mini-Aluminum",
    { 0x01, 0x00, 0x30, 0x00, 0x0F, 0x00 },"NA", "NA", 0x0007D005 },
  { "Macmini5,2", "MM51.88Z.007B.B00.1708080744", "Mac-4BC72D62AD45599E",
    "Mac mini", "1.0", "C07HVHACDJD1", "Mini-Aluminum",
    { 0x01, 0x00, 0x75, 0x00, 0x0F, 0x00 },"NA", "NA", 0x0007D005 },
  { "Macmini5,3", "MM51.88Z.007B.B00.1708080744", "Mac-7BA5B2794B2CDB12",
    "Mac mini", "1.0", "C07GWHACDKDJ", "Mini-Aluminum",
    { 0x01, 0x00, 0x77, 0x00, 0x0F, 0x00 },"NA", "NA", 0x0007D005 },
  { "Macmini6,1", "MM61.88Z.010B.B00.1708080649", "Mac-031AEE4D24BFF0B1",
    "Mac mini", "1.0", "C07JNHACDY3H", "Mini-Aluminum",
    { 0x02, 0x00, 0x07, 0x00, 0x0F, 0x00 },"NA", "NA", 0x0007D006 },
  { "Macmini6,2", "MM61.88Z.010B.B00.1708080649", "Mac-F65AE981FFA204ED",
    "Mac mini", "1.0", "C07JD041DWYN", "Mini-Aluminum",
    { 0x02, 0x00, 0x08, 0x00, 0x0F, 0x00 },"j50s", "j50s", 0x0007D006 },
  { "Macmini7,1", "MM71.88Z.0226.B00.1709290808", "Mac-35C5E08120C7EEAF",
    "Mac mini", "1.0", "C02NN7NHG1J0", "Mini-Aluminum",
    { 0x02, 0x00, 0x24, 0x00, 0x0F, 0x00 },"j64", "j64", 0x00F04008 },
  { "iMac4,1", "IM41.88Z.0055.B08.0609061538", "Mac-F42787C8",
    "iMac", "1.0", "W8608HACU2P", "iMac",
    { 0x01, 0x00, 0x01, 0x00, 0x0F, 0x00 },"m38m39", "m38", 0x00073002 },
  { "iMac4,2", "IM42.88Z.0071.B03.0610121320", "Mac-F4218EC8",
    "iMac", "1.0", "W8627HACV2H", "iMac",
    { 0x01, 0x00, 0x06, 0x00, 0x0F, 0x00 },"NA", "NA", 0x00073002 },
  { "iMac5,1", "IM51.88Z.0090.B09.0706270921", "Mac-F4228EC8",
    "iMac", "1.0", "CK637HACX1A", "iMac",
    { 0x01, 0x00, 0x08, 0x00, 0x0F, 0x00 },"NA", "NA", 0x00073002 },
  { "iMac5,2", "IM52.88Z.0090.B09.0706270913", "Mac-F4218EC8",
    "iMac", "1.0", "W8716HACWH5", "iMac",
    { 0x01, 0x00, 0x06, 0x00, 0x0F, 0x00 },"NA", "NA", 0x00073002 },
  { "iMac6,1", "IM61.88Z.0093.B07.0804281538", "Mac-F4218FC8",
    "iMac", "1.0", "W8652HACVGN", "iMac",
    { 0x01, 0x00, 0x08, 0x00, 0x0F, 0x00 },"NA", "NA", 0x00073002 },
  { "iMac7,1", "IM71.88Z.007A.B03.0803051705", "Mac-F42386C8",
    "iMac", "1.0", "W8803HACY51", "iMac-Aluminum",
    { 0x01, 0x00, 0x20, 0x00, 0x0F, 0x00 },"NA", "NA", 0x00073002 },
  { "iMac8,1", "IM81.88Z.00C1.B00.0802091538", "Mac-F227BEC8",
    "iMac", "1.3", "W8755HAC2E2", "iMac-Aluminum",
    { 0x01, 0x00, 0x29, 0x00, 0x0F, 0x00 },"k3", "k3", 0x00073002 },
  { "iMac9,1", "IM91.88Z.008D.B08.0904271717", "Mac-F2218FA9",
    "iMac", "1.0", "W89A00A36MJ", "iMac-Aluminum",
    { 0x01, 0x00, 0x36, 0x00, 0x0F, 0x00 },"NA", "NA", 0x00073002 },
  { "iMac10,1", "IM101.88Z.00CF.B00.1708080133", "Mac-F2268CC8",
    "iMac", "1.0", "W80AA98A5PE", "iMac-Aluminum",
    { 0x01, 0x00, 0x53, 0x00, 0x0F, 0x00 },"k22k23", "k23", 0x0007B002 },
  { "iMac11,1", "IM111.88Z.0037.B00.1708080241", "Mac-F2268DAE",
    "iMac", "1.0", "G8942B1V5PJ", "iMac-Aluminum",
    { 0x01, 0x00, 0x54, 0x00, 0x0F, 0x00 },"k23f", "k23f", 0x0007B004 },
  { "iMac11,2", "IM112.88Z.005B.B00.1708080439", "Mac-F2238AC8",
    "iMac", "1.2", "W8034342DB7", "iMac-Aluminum",
    { 0x01, 0x00, 0x64, 0x00, 0x0F, 0x00 },"k74", "k74", 0x0007C004 },
  { "iMac11,3", "IM112.88Z.005B.B00.1708080439", "Mac-F2238BAE",
    "iMac", "1.0", "QP0312PBDNR", "iMac-Aluminum",
    { 0x01, 0x00, 0x59, 0x00, 0x0F, 0x00 },"k74", "k74", 0x0007D004 },
  { "iMac12,1", "IM121.88Z.004D.B00.1708080012", "Mac-942B5BF58194151B",
    "iMac", "1.9", "W80CF65ADHJF", "iMac-Aluminum",
    { 0x01, 0x00, 0x71, 0x00, 0x0F, 0x00 },"k60", "k60", 0x00073005 },
  { "iMac12,2", "IM121.88Z.004D.B00.1708080012", "Mac-942B59F58194171B",
    "iMac", "1.9", "W88GG136DHJQ", "iMac-Aluminum",
    { 0x01, 0x00, 0x72, 0x00, 0x0F, 0x00 },"k62", "k62", 0x00075005 },
  { "iMac13,1", "IM131.88Z.0111.B00.1801081337", "Mac-00BE6ED71E35EB86",
    "iMac", "1.0", "C02JA041DNCT", "iMac-Aluminum",
    { 0x02, 0x00, 0x09, 0x00, 0x0F, 0x00 },"d8", "d8", 0x00078006 },
  { "iMac13,2", "IM131.88Z.0111.B00.1801081337", "Mac-FC02E91DDD3FA6A4",
    "iMac", "1.0", "C02JB041DNCW", "iMac-Aluminum",
    { 0x02, 0x00, 0x11, 0x00, 0x0F, 0x00 },"d8", "d8", 0x00079006 },
  { "iMac13,3", "IM131.88Z.0111.B00.1801081337", "Mac-7DF2A3B5E5D671ED",
    "iMac", "1.0", "C02KVHACFFYW", "iMac-Aluminum",
    { 0x02, 0x00, 0x13, 0x00, 0x0F, 0x00 },"d8", "d8", 0x00079006 },
  { "iMac14,1", "IM141.88Z.0123.B00.1708211404", "Mac-031B6874CF7F642A",
    "iMac", "1.0", "D25LHACKF8J2", "iMac-Aluminum",
    { 0x02, 0x00, 0x14, 0x00, 0x0F, 0x00 },"j16j17", "j16", 0x00079007 },
  { "iMac14,2", "IM142.88Z.0125.B00.1801081338", "Mac-27ADBB7B4CEE8E61",
    "iMac", "1.0", "D25LHACKF8JC", "iMac-Aluminum",
    { 0x02, 0x00, 0x15, 0x00, 0x0F, 0x00 },"j16j17", "j17", 0x0007A007 },
  { "iMac14,3", "IM143.88Z.0125.B00.1801091243", "Mac-77EB7D7DAF985301",
    "iMac", "1.0", "D25LHACKF8J3", "iMac-Aluminum",
    { 0x02, 0x00, 0x17, 0x00, 0x0F, 0x00 },"j16g", "j16g", 0x0007A007 },
  { "iMac14,4", "IM144.88Z.0185.B00.1801081344", "Mac-81E3E92DD6088272",
    "iMac", "1.0", "D25LHACKFY0T", "iMac-Aluminum",
    { 0x02, 0x00, 0x21, 0x00, 0x0F, 0x00 },"j70", "j70", 0x0007A007 },
  { "iMac15,1", "IM151.88Z.0213.B00.1801081343", "Mac-42FD25EABCABB274",
    "iMac", "1.0", "C02Q6HACFY10", "iMac-Aluminum",
    { 0x02, 0x00, 0x22, 0x00, 0x0F, 0x00 },"j78j78am", "j78", 0x00F00008 },
  { "iMac16,1", "IM161.88Z.0214.B00.1801051743", "Mac-A369DDC4E67F1C45",
    "iMac", "1.0", "C02QQHACGF1J", "iMac-Aluminum",
    { 0x02, 0x00, 0x31, 0x00, 0x0F, 0x00 },"j117", "j117", 0x00F00008 },
  { "iMac16,2", "IM162.88Z.0214.B00.1801051742", "Mac-FFE5EF870D7BA81A",
    "iMac", "1.0", "C02PNHACGG7G", "iMac-Aluminum",
    { 0x02, 0x00, 0x32, 0x00, 0x0F, 0x00 },"j94", "j94", 0x00F00008 },
  { "iMac17,1", "IM171.88Z.0148.B00.1712211710", "Mac-B809C3757DA9BB8D",
    "iMac17,1", "1.0", "C02QFHACGG7L", "iMac-Aluminum",
    { 0x02, 0x00, 0x33, 0x00, 0x0F, 0x00 },"j95j95am", "j95", 0x00F0C008 },
  { "iMac18,1", "IM181.88Z.0154.B00.1712211718", "Mac-4B682C642B45593E",
    "iMac", "1.0", "C02TDHACH7JY", "iMac-Aluminum",
    { 0x02, 0x00, 0x39, 0x00, 0x0F, 0x00 },"j133_4_5", "NA", 0x00F07009 },
  { "iMac18,2", "IM183.88Z.0154.B00.1712220135", "Mac-77F17D7DA9285301",
    "iMac", "1.0", "C02TDHACJ1G5", "iMac-Aluminum",
    { 0x02, 0x00, 0x40, 0x00, 0x0F, 0x00 },"j133_4_5", "NA", 0x00F07009 },
  { "iMac18,3", "IM183.88Z.0154.B00.1712220135", "Mac-BE088AF8C5EB4FA2",
    "iMac", "1.0", "C02TDHACJ1GJ", "iMac-Aluminum",
    { 0x02, 0x00, 0x41, 0x00, 0x0F, 0x00 },"j133_4_5", "j135", 0x00F07009 },
  { "iMacPro1,1", "IMP11.88Z.0064.B30.1712081714", "Mac-7BA5B2D9E42DDD94",
    "iMac Pro", "1.0", "C02VVHACHX87", "iMacPro-Aluminum",
    { 0x02, 0x00, 0x41, 0x00, 0x0F, 0x00 },"j137", "j137", 0x00F07009 },
  { "MacPro1,1", "MP11.88Z.005C.B08.0707021221", "Mac-F4208DC8",
    "MacPro", "1.0", "W88A77AXUPZ", "Pro-Enclosure",
    { 0x01, 0x00, 0x07, 0x00, 0x0F, 0x00 },"m43", "m43", 0x00079001 },
  { "MacPro2,1", "MP21.88Z.007F.B06.0707021348", "Mac-F4208DA9",
    "MacPro", "1.0", "W8930518UPZ", "Pro-Enclosure",
    { 0x01, 0x00, 0x15, 0x00, 0x0F, 0x00 },"m43a", "m43a", 0x00079001 },
  { "MacPro3,1", "MP31.88Z.006C.B05.0802291410", "Mac-F42C88C8",
    "MacPro", "1.3", "W88A77AA5J4", "Pro-Enclosure",
    { 0x01, 0x00, 0x30, 0x00, 0x0F, 0x00 },"m86", "m86", 0x00079001 },
  { "MacPro4,1", "MP41.88Z.0081.B07.0910130729", "Mac-F221BEC8",
    "MacPro", "1.4", "CT93051DK9Y", "Pro-Enclosure",
    { 0x01, 0x00, 0x39, 0x00, 0x0F, 0x00 },"NA", "NA", 0x0007C002 },
  { "MacPro5,1", "MP51.88Z.0084.B00.1708080528", "Mac-F221BEC8",
    "MacPro", "1.2", "H02380NSEUH", "Pro-Enclosure", // DGK....F4MC  C07....F4MC
    { 0x01, 0x00, 0x39, 0x00, 0x0F, 0x00 },"k5", "k5", 0x0007C002 },
  { "MacPro6,1", "MP61.88Z.0120.B00.1708080652", "Mac-F60DEB81FF30ACF6",
    "MacPro", "1.0", "F5KLA770F9VM", "Pro-Enclosure",
    { 0x02, 0x00, 0x20, 0x00, 0x0F, 0x00 },"j90", "j90", 0x00F0F006 },
  { "Xserve1,1", "XS11.88Z.0080.B01.0706271533", "Mac-F4208AC8",
    "Xserve", "1.0", "CK703E1EV2Q", "Xserve",
    { 0x01, 0x00, 0x11, 0x00, 0x0F, 0x00 },"NA", "NA", 0x00079001 },
  { "Xserve2,1", "XS21.88Z.006C.B06.0804011317", "Mac-F42289C8",
    "Xserve", "1.0", "CK830DLQX8S", "Xserve",
    { 0x01, 0x00, 0x26, 0x00, 0x0F, 0x00 },"NA", "NA", 0x00079001 },
  { "Xserve3,1", "XS31.88Z.0081.B06.0908061300", "Mac-F223BEC8",
    "Xserve", "1.0", "CK933YJ16HS", "Xserve",
    { 0x01, 0x00, 0x43, 0x00, 0x0F, 0x00 },"NA", "NA", 0x00079001 },
};

// Note, first code is always the code used by default at generation.
// It should match with the suffix used in ApplePlatformData.
#define APPLE_MODEL_CODE_MAX 64
static const char *AppleModelCode[][APPLE_MODEL_CODE_MAX] = {
  /* MacBook1,1    */ {"U9B"},
  /* MacBook2,1    */ {"WGP"},
  /* MacBook3,1    */ {"Y51"},
  /* MacBook4,1    */ {"0P0"},
  /* MacBook5,1    */ {"1AQ"},
  /* MacBook5,2    */ {"9GU"},
  /* MacBook6,1    */ {"GAY"},
  /* MacBook7,1    */ {"F5X"},
  /* MacBook8,1    */ {"GCN3", "DNCR", "DNCT", "DNML", "DNMM", "F8QM", "F8QN", "F9RN", "FC6M", "FC6N", "FC6P", "FD55", "FD5Y", "FF7L", "FFVW", "FFVY", "FG46", "FGC4", "FGMR", "FGMT", "FL8N", "FM8L", "FM8M", "FM8N", "FMLG", "FP12"},
  /* MacBook9,1    */ {"HDNK", "GTHR", "GTHT", "GTHV", "GTHW", "GTHX", "GTHY", "GTJ0", "GTJ1", "GTJ2", "GTJ3", "GTJ4", "GTJ6", "GTJ7", "GTJ8", "GTJ9", "GTJC", "GTJD", "H3QW", "H3QX", "H3QY", "H3R5", "H3R6", "H3R7"},
  /* MacBook10,1   */ {"HH27"},
  /* MacBookPro1,1 */ {"VJ1"},
  /* MacBookPro1,2 */ {"THY"},
  /* MacBookPro2,1 */ {"W0H"},
  /* MacBookPro2,2 */ {"W0L"},
  /* MacBookPro3,1 */ {"X91"},
  /* MacBookPro4,1 */ {"YP4"},
  /* MacBookPro5,1 */ {"1G0"},
  /* MacBookPro5,2 */ {"2QP"},
  /* MacBookPro5,3 */ {"7XK"},
  /* MacBookPro5,4 */ {"7XJ"},
  /* MacBookPro5,5 */ {"66D", "66E"},
  /* MacBookPro6,1 */ {"DC79"},
  /* MacBookPro6,2 */ {"AGW"},
  /* MacBookPro7,1 */ {"ATM", "ATP"},
  /* MacBookPro8,1 */ {"DH2G", "DH2L", "DV13"},
  /* MacBookPro8,2 */ {"DF8X", "DRJD", "DRJF"},
  /* MacBookPro8,3 */ {"DF93", "DW48"},
  /* MacBookPro9,1 */ {"F1G4", "F1G3"},
  /* MacBookPro9,2 */ {"DTY3"},
  /* MacBookPro10,1*/ {"DKQ1", "DKQ2", "DKQ4", "DKQ5", "F51R", "F5Y2", "F69W", "F69Y", "F6DN", "F6F3", "F6L9", "F8JY", "F96W", "F9F1", "F9F2", "FCQ3", /* late */ "FFT0", "FFT1", "FFT2", "FFT3", "FFT4", "FG1H", "FG1J", "FGFH", "FGFJ", "FGFK", "FGFL", "FGN7", "FGWF", "FGWG", "FGWH", "FHCQ", "FHCR", "FJ47", "FJVJ", "FL94", "FR8D"},
  /* MacBookPro10,2*/ {"G4N7", "DR53", "DR54", "DR55", "DR56", "F775", "F776", "F7YF", "F897", "F8V6", "F8V7", "F8V8", "F9JT", "F9V1", "F9VQ", "FG7Q", "FG7R", "FL85", "FMLJ", /* late */ "FFRP", "FFRR", "FG1F", "FG28", "FGM8", "FGN5", "FGN6", "FGPJ", "FHCH", "FHN0"},
  /* MacBookPro11,1*/ {"FH00", "FGYY", "FH01", "FH02", "FH03", "FH04", "FH05", "FRF6", "FRF7", "FRQF", "FT4Q", "FT4R", "FT4T", "FT4V", "FTC9", "FTCD", "FTCH", "FTCK", "FTCL", "FTPH", "FTPJ", "FTPK", "FTT4", "FVVW", "FVWQ", "G3QJ", "G3QK", "G4N6", "G4N7"},
  /* MacBookPro11,2*/ {"G86R", "FD56", "G3QC", "G3QG"},
  /* MacBookPro11,3*/ {"FR1M", "FD57", "FD59", "G3QP"},
  /* MacBookPro11,4*/ {"G8WN", "G8WL"},
  /* MacBookPro11,5*/ {"G85Y", "G3QD", "G8WM", "G8WP", "G8WQ"},
  /* MacBookPro12,1*/ {"H1DP", "FVH3", "FVH4", "FVH5", "FVH6", "FVH7", "FVH8", "FVH9", "GKJG", "GKJM", "GKJN", "GL36", "GL37", "GM0V", "GM0W", "GM10", "GM11", "GM12", "GM13", "GQR4", "GQR5", "GQR6", "H1DQ"},
  /* MacBookPro13,1*/ {"GVC1", "GVC8", "GY25", "GY6N", "HV5M", "HV5H", "HV5J", "HV5K", "HV5L", "HV5G", "HV5D", "HV5N", "HWCH", "HYP5"},
  /* MacBookPro13,2*/ {"GYFH", "GTDX", "GTFJ", "GYGR", "HF1R", "HF1P", "HF1Q", "HF1T", "HP49", "HP4D", "HWH2", "HXD5"},
  /* MacBookPro13,3*/ {"GTFN", "GTDY", "GTF1", "GTFL", "GTFM", "H03M", "H03Q", "H03T", "H03Y", "H040", "HXF8"},
  /* MacBookPro14,1*/ {"HV29", "HV22", "HV2F"},
  /* MacBookPro14,2*/ {"HV2N"},
  /* MacBookPro14,3*/ {"HTD5", "HTD6", "HTD8", "HTD9", "HTDF"},
  /* MacBookPro15,1*/ {"KGYG"},
  /* MacBookAir1,1 */ {"18X"},
  /* MacBookAir2,1 */ {"9A7"},
  /* MacBookAir3,1 */ {"D0QX"},
  /* MacBookAir3,2 */ {"DDR3"},
  /* MacBookAir4,1 */ {"DRV9", "DJY8", "DJY9", "DJYC", "DJYD", "DRHF", "DRKH", "DTJW", "DTJY", "DTK1", "DTK2", "DW1C", "DW4J", "DWWM", "DWWN", "DY2M", "F2JP"},
  /* MacBookAir4,2 */ {"DJWT", "DJWQ", "DJWR", "DJWV", "DRKG", "DRQ4", "DTJT", "DTJV", "DTK0", "DW1N", "DW4H", "F14R", "F14V", "F2JQ", "F75Y"},
  /* MacBookAir5,1 */ {"DRV6", "DRV7", "DRV8", "DRV9", "F569", "F56C", "F56G", "F57H", "F5MV", "F67D", "F67F", "F67K", "F67L", "F67M", "F88G", "F88K", "F88V", "F910"},
  /* MacBookAir5,2 */ {"DRVC", "DRVD", "DRVF", "DRVG", "F2FV", "F56D", "F56F", "F56H", "F56J", "F57J", "F5MW", "F67G", "F67H", "F67J", "F67P", "F6TN", "F760", "F90Y"},
  /* MacBookAir6,1 */ {"F5NT", "F5N7", "F5N8", "F5YV", "F5YW", "FH51", "FH52", "FKYN", "FKYP", "FLCF", "FMR5", "FMR6", "FMR9", "FMRC", "FMRD", "FMRF", "FMRG", "FMRM", "FMRN", "FN5M", "FN7F", "FP2N", "FP3C", "FQLG", "FT30", /* late */ "FM72", "G083", "G084", "G2CF", "G2GH", "G2GJ", "G2PY", "G2Q0", "G4FY", "G4H0", "G4H4", "G4HK", "G4HM", "G58J", "G5RK", "G5RL", "G5RM", "G6D3", "GP4N", "GP4P"},
  /* MacBookAir6,2 */ {"F5V7", "F5V8", "F6T5", "F6T6", "FH53", "FKYQ", "FKYR", "FLCG", "FM23", "FM3Y", "FM74", "FMR7", "FMR8", "FMRH", "FMRJ", "FMRK", "FMRL", "FMRV", "FMRW", "FMRY", "FN3Y", "FN40", "FN7G", "FP2P", "FQL9", "FQLC", "FQLD", "FQLF", "G6PM", /* late */ "G085", "G086", "G2CC", "G2CD", "G2GK", "G2GL", "G2GM", "G2GN", "G356", "G4H1", "G4H2", "G4H3", "G4HN", "G4HP", "G58K", "G5RN", "G5RP", "G5RQ", "G6D4", "G6D5", "G829", "G8J1", "GP4L", "GP4M"},
  /* MacBookAir7,1 */ {"H569", "GFWK", "GFWL", "GFWM", "GFWN", "GFWP", "GKJY", "GKK0", "GL28", "GL2D", "GL2F", "GL2H", "GLCQ", "GMC5", "GMC6", "GMC7", "GMC8", "GMC9", "GNJK", "GNJL"},
  /* MacBookAir7,2 */ {"G940", "G941", "G942", "G943", "G944", "GKJT", "GKJV", "GLCN", "GLCP", "GM14", "GM15", "GM38", "GM9G", "GMC3", "GN8C", "GNJJ", "H3QD", "H3QF", "H3QJ", "H3QK", "H569"},
  /* Macmini1,1    */ {"U35"},
  /* Macmini2,1    */ {"YL2"},
  /* Macmini3,1    */ {"19X"},
  /* Macmini4,1    */ {"DD6H"},
  /* Macmini5,1    */ {"DJD0", "DJD1", "DJD2", "DJD3", "DRHT", "DTCJ", "DTCK", "DTCM", "DW33", "DW34", "DW35", "DW36", "DW37", "DW38", "DW3C", "DYQJ"},
  /* Macmini5,2    */ {"DJD1", "DJD0", "DJD2", "DJD3", "DRHT", "DTCJ", "DTCK", "DTCM", "DW33", "DW34", "DW35", "DW36", "DW37", "DW38", "DW3C", "DYQJ"},
  /* Macmini5,3    */ {"DKDJ", "DJY7", "DRHR", "DTCL", "DTCT", "DTCV", "DW39", "DW3D"},
  /* Macmini6,1    */ {"DY3H", "DWYL", "DWYM", "DY3G", "F9RK", "F9RL", "F9RM", "F9VV", "F9VW", "F9W0", "F9W1", "F9W2", "FD9G", "FD9H", "FD9J", "FD9K", "FDWK", "FGML", "FRFP", "FW56", "FW57", "G430"},
  /* Macmini6,2    */ {"DWYN", /* <- late, early */ "DWYL", "DWYM", "DY3G", "DY3H", "F9RK", "F9RL", "F9RM", "F9VV", "F9VW", "F9W0", "F9W1", "F9W2", "FD9G", "FD9H", "FD9J", "FD9K", "FDWK", "FGML", "FRFP", "FW56", "FW57", "G430", /* late */ "DWYN", "DY3J", "F9VY", "F9W3", "FC08", "FCCW", "FP14", "FP39"},
  /* Macmini7,1    */ {"G1J0", "G1HV", "G1HW", "G1HY", "G1J1", "G1J2", "GCVG", "GCVH", "GCVJ", "GCVN", "GCVP", "GCVQ", "GCVV", "GCVW", "GCVY", "GCW0", "GCW1", "GF1N", "GF1Q", "GF1T", "GJDC"},
  /* iMac4,1       */ {"U2P"},
  /* iMac4,2       */ {"V2H"},
  /* iMac5,1       */ {"X1A"},
  /* iMac5,2       */ {"WH5"},
  /* iMac6,1       */ {"VGN"},
  /* iMac7,1       */ {"Y51"},
  /* iMac8,1       */ {"2E2"},
  /* iMac9,1       */ {"6MJ"},
  /* iMac10,1      */ {"5PE"},
  /* iMac11,1      */ {"5PJ"},
  /* iMac11,2      */ {"DB7"},
  /* iMac11,3      */ {"DNR", "DB6"},
  /* iMac12,1      */ {"DHJF"},
  /* iMac12,2      */ {"DHJQ", "DHJP", "DHJW"},
  /* iMac13,1      */ {"DNCT", "DNCR", "DNML", "DNMM", "F8QM", "F8QN", "F9RN", "FC6M", "FC6N", "FC6P", "FD55", "FD5Y", "FF7L", "FFVW", "FFVY", "FG46", "FGC4", "FGMR", "FGMT", "FL8N", "FM8L", "FM8M", "FM8N", "FMLG", "FP12"},
  /* iMac13,2      */ {"DNCW", "DNCV", "DNMN", "DNMP", "F29N", "F8QP", "F8QQ", "FD5T", "FD5V", "FFM8", "FFM9", "FFMC", "FFMD", "FFMF", "FFMG", "FFMJ", "FFMK", "FFML", "FFMM", "FFMN", "FFW0", "FFW1", "FG47", "FGMW", "FGMY", "FGRP", "FL8M", "FM8P", "FM8Q", "FMLH", "FP13", "FP62", "FTQ5"},
  /* iMac13,3      */ {"FFYW", "FFYV", "FGPL", "FGPM", "FJQQ", "FLMH"},
  /* iMac14,1      */ {"F8J2", "F8J7", "FPF1", "FQMV"},
  /* iMac14,2      */ {"F8JC", "F8J4", "F8J5", "F8J9", "FLHH", "FPDY", "FPF0", "FPF3", "FPF4", "FQPG", "FQPH", "FQPJ", "FQPK", "FQPL", "FQPM", "FQPN", "FQPP", "FR20", "FR22", "FR2W", "FRM9", "FT4N", "FWQ5", "FWQ6", "FWQ7", "FWQ8", "FY15", "FY9D", "FY9F", "G6DP", "GHFF"},
  /* iMac14,3      */ {"F8J3", "F8J8", "FPDW"},
  /* iMac14,4      */ {"FY0T", "FY0V", "FY65", "FY69", "G56J", "G56K", "G5W4", "G5W5", "G5W6", "G8L2"},
  /* iMac15,1      */ {"FY10", "FY11", "FY14", "FY68", "FY6F", "GCTM", "GDQY", "GDR3", "GDR4", "GDR5", "GDR6", "GDR7", "GDR8", "GDR9", "GDRC", "GFFQ", "GJDM", "GJDN", "GJDP", "GJDQ", "FY10", "FY13", "FY6D", "GL1Q", "GL1R", "GL1T", "GL1V", "GL1W"},
  /* iMac16,1      */ {"GF1J"},
  /* iMac16,2      */ {"GG7G", "GG78", "GG7F", "GG7H", "H0P7", "H1F3", "H1F5", "H1F7", "H1F8", "H1F9", "H25N", "H8L0", "H8L1", "H8L2", "H8L3"},
  /* iMac17,1      */ {"GG7L", "GG7J", "GG7N", "GG7R", "GG7T", "GG7V", "GG80", "GG81", "GG82", "GQ17", "GQ18", "H0Q3", "H0Q4", "H0Q5", "H3GP", "H3GQ", "H3GR", "H3GT", "H3GV", "H3GW", "H8L5", "H8L6"},
  /* iMac18,1      */ {"H7JY"},
  /* iMac18,2      */ {"J1G5"},
  /* iMac18,3      */ {"J1GJ", "J1GQ"},
  /* iMacPro1,1    */ {"HX87"},
  /* MacPro1,1     */ {"UPZ"},
  /* MacPro2,1     */ {"UPZ"},
  /* MacPro3,1     */ {"5J4", "XYK", "XYL", "1Z9" },
  /* MacPro4,1     */ {"K9Y"},
  /* MacPro5,1     */ {"EUH", "GWR", "HFC", "HFA", "HFD", "HFF", "HFG", "HFJ", "HFK", "HFL", "HFN", "EUF", "F4MG"},
  /* MacPro6,1     */ {"F9VM", "F693", "F694", "F9VN", "FRDW", "FRDY", "FRF0", "FRF1", "FRF2", "FRF3", "FRF4", "FRF5", "FRQC", "FT3F", "FT3G", "FT3H", "FT95", "FT96", "FT97", "FT98", "FT99", "FT9C", "FT9D", "FY3Y", "FY40", "G1LJ", "G1LK", "G1LL", "G1LM", "G1LN", "G1LP", "G1LQ", "G1LR", "G1LT", "G1LV", "G1LW", "G1LY", "G1M0", "G1M1", "G8GC", "G8GD"},
  /* Xserve1,1     */ {"V2Q"},
  /* Xserve2,1     */ {"X8S"},
  /* Xserve3,1     */ {"6HS"},
};

#define APPLE_MODEL_YEAR_MAX 5
static uint32_t AppleModelYear[][APPLE_MODEL_YEAR_MAX] = {
  /* MacBook1,1                */ {2006},
  /* MacBook2,1                */ {2006, 2007},
  /* MacBook3,1                */ {2007, 2008},
  /* MacBook4,1                */ {2008, 2009},
  /* MacBook5,1                */ {2008, 2009},
  /* MacBook5,2                */ {2009},
  /* MacBook6,1                */ {2009, 2010},
  /* MacBook7,1                */ {2010},
  /* MacBook8,1                */ {2015, 2016},
  /* MacBook9,1                */ {2016, 2017},
  /* MacBook10,1               */ {2017},
  /* MacBookPro1,1             */ {2006},
  /* MacBookPro1,2             */ {2006},
  /* MacBookPro2,1             */ {2006, 2007},
  /* MacBookPro2,2             */ {2006, 2007},
  /* MacBookPro3,1             */ {2007, 2008},
  /* MacBookPro4,1             */ {2007, 2008, 2009},
  /* MacBookPro5,1             */ {2008, 2009},
  /* MacBookPro5,2             */ {2009},
  /* MacBookPro5,3             */ {2009, 2010},
  /* MacBookPro5,4             */ {2009, 2010},
  /* MacBookPro5,5             */ {2009, 2010},
  /* MacBookPro6,1 (bug 2011)  */ {2010},
  /* MacBookPro6,2 (bug 2011)  */ {2010},
  /* MacBookPro7,1 (bug 2011)  */ {2010},
  /* MacBookPro8,1             */ {2011, 2012},
  /* MacBookPro8,2             */ {2011, 2012},
  /* MacBookPro8,3             */ {2011, 2012},
  /* MacBookPro9,1             */ {2012, 2013},
  /* MacBookPro9,2             */ {2012, 2013},
  /* MacBookPro10,1            */ {2012, 2013},
  /* MacBookPro10,2            */ {2012, 2013},
  /* MacBookPro11,1            */ {2013, 2014},
  /* MacBookPro11,2            */ {2013, 2014},
  /* MacBookPro11,3            */ {2013, 2014},
  /* MacBookPro11,4            */ {2015},
  /* MacBookPro11,5            */ {2015, 2016},
  /* MacBookPro12,1            */ {2015, 2016, 2017},
  /* MacBookPro13,1            */ {2016, 2017},
  /* MacBookPro13,2            */ {2016, 2017},
  /* MacBookPro13,3            */ {2016, 2017},
  /* MacBookPro14,1            */ {2017},
  /* MacBookPro14,2            */ {2017},
  /* MacBookPro14,3            */ {2017},
  /* MacBookPro15,1            */ {2018},
  /* MacBookAir1,1             */ {2007, 2008, 2009},
  /* MacBookAir2,1             */ {2008, 2009},
  /* MacBookAir3,1             */ {2011},
  /* MacBookAir3,2             */ {2011},
  /* MacBookAir4,1             */ {2011, 2012},
  /* MacBookAir4,2             */ {2011, 2012},
  /* MacBookAir5,1             */ {2012, 2013},
  /* MacBookAir5,2             */ {2012, 2013},
  /* MacBookAir6,1             */ {2013, 2014},
  /* MacBookAir6,2             */ {2013, 2014},
  /* MacBookAir7,1             */ {2015, 2016},
  /* MacBookAir7,2             */ {2015, 2016, 2017},
  /* Macmini1,1                */ {2006},
  /* Macmini2,1                */ {2007, 2008, 2009},
  /* Macmini3,1                */ {2009},
  /* Macmini4,1                */ {2011},
  /* Macmini5,1                */ {2011, 2012},
  /* Macmini5,2                */ {2011, 2012},
  /* Macmini5,3                */ {2011, 2012},
  /* Macmini6,1                */ {2012, 2013, 2014},
  /* Macmini6,2                */ {2012, 2013, 2014},
  /* Macmini7,1                */ {2014},
  /* iMac4,1                   */ {2006},
  /* iMac4,2                   */ {2006},
  /* iMac5,1                   */ {2006, 2007},
  /* iMac5,2                   */ {2006, 2007},
  /* iMac6,1                   */ {2006, 2007},
  /* iMac7,1                   */ {2007, 2008},
  /* iMac8,1                   */ {2008},
  /* iMac9,1                   */ {2009},
  /* iMac10,1                  */ {2009, 2010},
  /* iMac11,1                  */ {2009, 2010},
  /* iMac11,2                  */ {2010},
  /* iMac11,3                  */ {2010},
  /* iMac12,1                  */ {2011, 2012},
  /* iMac12,2                  */ {2011, 2012},
  /* iMac13,1                  */ {2012, 2013},
  /* iMac13,2                  */ {2012, 2013},
  /* iMac13,3                  */ {2013},
  /* iMac14,1 (bug, no 2013)   */ {2013, 2014, 2015},
  /* iMac14,2 (bug, no 2013)   */ {2013, 2014, 2015},
  /* iMac14,3                  */ {2014, 2015},
  /* iMac14,4                  */ {2014, 2015},
  /* iMac15,1                  */ {2014, 2015},
  /* iMac16,1                  */ {2015, 2016, 2017},
  /* iMac16,2                  */ {2015, 2016, 2017},
  /* iMac17,1                  */ {2015, 2016, 2017},
  /* iMac18,1                  */ {2017},
  /* iMac18,2                  */ {2017},
  /* iMac18,3                  */ {2017},
  /* iMacPro1,1                */ {2017},
  /* MacPro1,1                 */ {2006, 2007, 2008},
  /* MacPro2,1                 */ {2007, 2008},
  /* MacPro3,1                 */ {2008, 2009},
  /* MacPro4,1                 */ {2009},
  /* MacPro5,1 (bug, no 2011+) */ {2010, 2011, 2012},
  /* MacPro6,1                 */ {2013, 2014, 2015, 2016, 2017},
  /* Xserve1,1                 */ {2006, 2007, 2008},
  /* Xserve2,1                 */ {2008, 2009},
  /* Xserve3,1                 */ {2009},
};

static uint32_t ApplePreferredModelYear[] = {
  /* MacBook1,1     */ 0,
  /* MacBook2,1     */ 0,
  /* MacBook3,1     */ 0,
  /* MacBook4,1     */ 0,
  /* MacBook5,1     */ 0,
  /* MacBook5,2     */ 0,
  /* MacBook6,1     */ 0,
  /* MacBook7,1     */ 0,
  /* MacBook8,1     */ 0,
  /* MacBook9,1     */ 0,
  /* MacBook10,1    */ 0,
  /* MacBookPro1,1  */ 0,
  /* MacBookPro1,2  */ 0,
  /* MacBookPro2,1  */ 0,
  /* MacBookPro2,2  */ 0,
  /* MacBookPro3,1  */ 0,
  /* MacBookPro4,1  */ 0,
  /* MacBookPro5,1  */ 0,
  /* MacBookPro5,2  */ 0,
  /* MacBookPro5,3  */ 0,
  /* MacBookPro5,4  */ 0,
  /* MacBookPro5,5  */ 0,
  /* MacBookPro6,1  */ 0,
  /* MacBookPro6,2  */ 0,
  /* MacBookPro7,1  */ 0,
  /* MacBookPro8,1  */ 0,
  /* MacBookPro8,2  */ 0,
  /* MacBookPro8,3  */ 0,
  /* MacBookPro9,1  */ 0,
  /* MacBookPro9,2  */ 0,
  /* MacBookPro10,1 */ 0,
  /* MacBookPro10,2 */ 0,
  /* MacBookPro11,1 */ 0,
  /* MacBookPro11,2 */ 0,
  /* MacBookPro11,3 */ 0,
  /* MacBookPro11,4 */ 0,
  /* MacBookPro11,5 */ 0,
  /* MacBookPro12,1 */ 0,
  /* MacBookPro13,1 */ 0,
  /* MacBookPro13,2 */ 0,
  /* MacBookPro13,3 */ 0,
  /* MacBookPro14,1 */ 0,
  /* MacBookPro14,2 */ 0,
  /* MacBookPro14,3 */ 0,
  /* MacBookPro15,1 */ 0,
  /* MacBookAir1,1  */ 0,
  /* MacBookAir2,1  */ 0,
  /* MacBookAir3,1  */ 0,
  /* MacBookAir3,2  */ 0,
  /* MacBookAir4,1  */ 0,
  /* MacBookAir4,2  */ 0,
  /* MacBookAir5,1  */ 0,
  /* MacBookAir5,2  */ 0,
  /* MacBookAir6,1  */ 0,
  /* MacBookAir6,2  */ 0,
  /* MacBookAir7,1  */ 0,
  /* MacBookAir7,2  */ 0,
  /* Macmini1,1     */ 0,
  /* Macmini2,1     */ 0,
  /* Macmini3,1     */ 0,
  /* Macmini4,1     */ 0,
  /* Macmini5,1     */ 0,
  /* Macmini5,2     */ 0,
  /* Macmini5,3     */ 0,
  /* Macmini6,1     */ 0,
  /* Macmini6,2     */ 0,
  /* Macmini7,1     */ 0,
  /* iMac4,1        */ 0,
  /* iMac4,2        */ 0,
  /* iMac5,1        */ 0,
  /* iMac5,2        */ 0,
  /* iMac6,1        */ 0,
  /* iMac7,1        */ 0,
  /* iMac8,1        */ 0,
  /* iMac9,1        */ 0,
  /* iMac10,1       */ 0,
  /* iMac11,1       */ 0,
  /* iMac11,2       */ 0,
  /* iMac11,3       */ 0,
  /* iMac12,1       */ 0,
  /* iMac12,2       */ 0,
  /* iMac13,1       */ 0,
  /* iMac13,2       */ 0,
  /* iMac13,3       */ 0,
  /* iMac14,1       */ 0,
  /* iMac14,2       */ 0,
  /* iMac14,3       */ 0,
  /* iMac14,4       */ 0,
  /* iMac15,1       */ 0,
  /* iMac16,1       */ 0,
  /* iMac16,2       */ 0,
  /* iMac17,1       */ 0,
  /* iMac18,1       */ 0,
  /* iMac18,2       */ 0,
  /* iMac18,3       */ 0,
  /* iMacPro1,1     */ 0,
  /* MacPro1,1      */ 0,
  /* MacPro2,1      */ 0,
  /* MacPro3,1      */ 0,
  /* MacPro4,1      */ 0,
  /* MacPro5,1      */ 2011,
  /* MacPro6,1      */ 0,
  /* Xserve1,1      */ 0,
  /* Xserve2,1      */ 0,
  /* Xserve3,1      */ 0,
};

#ifdef static_assert
static_assert(ARRAY_SIZE(AppleModelCode) == APPLE_MODEL_MAX &&
  ARRAY_SIZE(ApplePlatformData) == APPLE_MODEL_MAX &&
  ARRAY_SIZE(AppleModelYear) == APPLE_MODEL_MAX &&
  ARRAY_SIZE(ApplePreferredModelYear) == APPLE_MODEL_MAX,
  "Inconsistent model data");
#endif

static const char *AppleLegacyLocations[] = {
  "CK",
  "CY",
  "FC",
  "G8",
  "QP",
  "XA",
  "XB",
  "PT",
  "QT",
  "UV",
  "RN",
  "RM",
  "SG",
  "W8",
  "YM",
  // New
  "H0",
  "C0",
  "C3",
  "C7",
  "MB",
  "EE",
  "VM",
  "1C",
  "4H",
  "MQ",
  "WQ",
  "7J",
  "FK",
  "F1",
  "F2",
  "F7",
  "DL",
  "DM",
  "73",
};

#define APPLE_LEGACY_LOCATION_OLDMAX 15

static const char *AppleLegacyLocationNames[] = {
  "Ireland (Cork)",
  "Korea",
  "USA (Fountain, Colorado)",
  "USA",
  "USA",
  "USA (ElkGrove/Sacramento, California)",
  "USA (ElkGrove/Sacramento, California)",
  "Korea",
  "Taiwan (Quanta Computer)",
  "Taiwan",
  "Mexico",
  "Refurbished Model",
  "Singapore",
  "China (Shanghai)",
  "China",
  // New
  "Unknown",
  "China (Quanta Computer, Tech-Com)",
  "China (Shenzhen, Foxconn)",
  "China (Shanghai, Pegatron)",
  "Malaysia",
  "Taiwan",
  "Czech Republic (Pardubice, Foxconn)",
  "China",
  "China",
  "China",
  "China",
  "China (Hon Hai/Foxconn)",
  "China (Zhengzhou, Foxconn)",
  "China (Zhengzhou, Foxconn)",
  "China (Zhengzhou, Foxconn)",
  "China",
  "China (Foxconn)",
  "China (Foxconn)",
  "Unknown",
};

static const char *AppleLocations[] = {
  "C02",
  "C07",
  "C17",
  "C1M",
  "C2V",
  "CK2",
  "D25",
  "F5K",
  "W80",
  "W88",
  "W89",
  "CMV",
  "YM0",
  "DGK",
};

static const char *AppleLocationNames[] = {
  "China (Quanta Computer)",
  "China (Quanta Computer)",
  "China",
  "China",
  "China",
  "Ireland (Cork)",
  "Unknown",
  "USA (Flextronics)",
  "Unknown",
  "Unknown",
  "Unknown",
  "Unknown",
  "China (Hon Hai/Foxconn)",
  "Unknown"
};

#ifdef static_assert
static_assert(ARRAY_SIZE(AppleLegacyLocations) == ARRAY_SIZE(AppleLegacyLocationNames),
  "Inconsistent legacy location data");
static_assert(ARRAY_SIZE(AppleLocations) == ARRAY_SIZE(AppleLocationNames),
  "Inconsistent legacy location data");
#endif

static const char *MLBBlock1[] = {
  "200", "600", "403", "404", "405", "303", "108",
  "207", "609", "501", "306", "102", "701", "301",
  "501", "101", "300", "130", "100", "270", "310",
  "902", "104", "401", "902", "500", "700", "802"
};

static const char *MLBBlock2[] = {
  "GU", "4N", "J9", "QX", "OP", "CD", "GU"
};

static const char *MLBBlock3[] = {
  "DYWF", "F117", "F502", "F505", "F9GY", "F9H0",
  "F9H1", "F9H2", "DYWD", "F504", "F116", "F503",
  "F2FR", "F653", "F49P", "F651", "F49R", "F652",
  "DYW3", "F64V", "F0V5", "F64W", "FF4G", "FF4H",
  "FF4J", "FF4K", "FF4L", "FF4M", "FF4N", "FF4P",
  "DNY3", "DP00", "DJWK", "DM66", "DNJK", "DKG1",
  "DM65", "DNJJ", "DKG2", "DM67", "DNJL", "DJWM",
  "DMT3", "DMT5", "DJWN", "DM69", "DJWP", "DM6C"
};

static const char *MLBBlock4[] = {
  "1H", "1M", "AD", "1F", "A8", "UE", "JA", "JC", "8C", "CB", "FB"
};

// Used for line/copy:               A   B   C   D   E   F   G   H   I   J   K   L   M   N   O   P   Q   R   S   T   U   V   W   X   Y   Z
static int32_t AppleTblBase34[] =  {10, 11, 12, 13, 14, 15, 16, 17,  0, 18, 19, 20, 21, 22,  0, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33};
static const char *AppleBase34Blacklist = "IO";
static const char *AppleBase34Reverse = "0123456789ABCDEFGHJKLMNPQRSTUVWXYZ";

// Used for year:                    A   B   C   D   E   F   G   H   I   J   K   L   M   N   O   P   Q   R   S   T   U   V   W   X   Y   Z
static int32_t AppleTblYear[] =    { 0,  0,  0,  0,  0,  1,  1,  2,  0,  2,  3,  3,  4,  4,  0,  5,  5,  6,  6,  7,  0,  7,  8,  8,  9,  9};
static const char *AppleYearBlacklist = "ABEIOU";
static const char *AppleYearReverse   = "CDFGHJKLMNPQRSTVWXYZ";

// Used for week to year add:        A   B   C   D   E   F   G   H   I   J   K   L   M   N   O   P   Q   R   S   T   U   V   W   X   Y   Z
static int32_t AppleTblWeekAdd[] = { 0,  0,  0, 26,  0,  0, 26,  0,  0, 26,  0, 26,  0, 26,  0,  0, 26,  0, 26,  0,  0, 26,  0, 26,  0, 26};

// Used for week                     A   B   C   D   E   F   G   H   I   J   K   L   M   N   O   P   Q   R   S   T   U   V   W   X   Y   Z
static int32_t AppleTblWeek[] =    { 0,  0, 10, 11,  0, 12, 13, 14,  0, 15, 16, 17, 18, 19,  0, 20, 21, 22,  0, 23,  0, 24, 25, 26, 27,  0};
static const char *AppleWeekBlacklist = "ABEIOSUZ";
static const char *AppleWeekReverse   = "0123456789CDFGHJKLMNPQRTVWX123456789CDFGHJKLMNPQRTVWXY";

#ifdef static_assert
static_assert(ARRAY_SIZE(AppleTblBase34) == 26 && ARRAY_SIZE(AppleTblYear) == 26 &&
  ARRAY_SIZE(AppleTblWeekAdd) == 26 && ARRAY_SIZE(AppleTblWeek) == 26,
  "Conversion table must cover latin alphabet");
#endif

#endif // GENSERIAL_MODELINFO_H
