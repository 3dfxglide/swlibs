/*
** THIS SOFTWARE IS SUBJECT TO COPYRIGHT PROTECTION AND IS OFFERED ONLY
** PURSUANT TO THE 3DFX GLIDE GENERAL PUBLIC LICENSE. THERE IS NO RIGHT
** TO USE THE GLIDE TRADEMARK WITHOUT PRIOR WRITTEN PERMISSION OF 3DFX
** INTERACTIVE, INC. A COPY OF THIS LICENSE MAY BE OBTAINED FROM THE 
** DISTRIBUTOR OR BY CONTACTING 3DFX INTERACTIVE INC(info@3dfx.com). 
** THIS PROGRAM IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND, EITHER 
** EXPRESSED OR IMPLIED. SEE THE 3DFX GLIDE GENERAL PUBLIC LICENSE FOR A
** FULL TEXT OF THE NON-WARRANTY PROVISIONS.  
** 
** USE, DUPLICATION OR DISCLOSURE BY THE GOVERNMENT IS SUBJECT TO
** RESTRICTIONS AS SET FORTH IN SUBDIVISION (C)(1)(II) OF THE RIGHTS IN
** TECHNICAL DATA AND COMPUTER SOFTWARE CLAUSE AT DFARS 252.227-7013,
** AND/OR IN SIMILAR OR SUCCESSOR CLAUSES IN THE FAR, DOD OR NASA FAR
** SUPPLEMENT. UNPUBLISHED RIGHTS RESERVED UNDER THE COPYRIGHT LAWS OF
** THE UNITED STATES.  
** 
** COPYRIGHT 3DFX INTERACTIVE, INC. 1999, ALL RIGHTS RESERVED
*/

#ifndef _FXFREEBSD_H_
#define _FXFREEBSD_H_

#define FX_MAJOR_VER 0
#define FX_MINOR_VER 0

extern const FxU32 PCI_VENDOR_ID_FREEBSD;
extern const FxU32 PCI_DEVICE_ID_FREEBSD;
extern const FxU32 PCI_COMMAND_FREEBSD;
extern const FxU32 PCI_BASE_ADDRESS_0_FREEBSD;
extern const FxU32 SST1_PCI_INIT_ENABLE_FREEBSD;
extern const FxU32 SST1_PCI_BUS_SNOOP0_FREEBSD;
extern const FxU32 SST1_PCI_BUS_SNOOP1_FREEBSD;

FxBool
hasDev3DfxFreeBSD(void);

FxBool 
pciInitializeFreeBSD(void);

FxBool
pciCloseFreeBSD( void );

FxU8 
pioInByteFreeBSD(unsigned short port);

FxU16 
pioInWordFreeBSD(unsigned short port);

FxU32 
pioInLongFreeBSD(unsigned short port);

FxBool 
pioOutByteFreeBSD(unsigned short port, FxU8 data);

FxBool 
pioOutWordFreeBSD(unsigned short port, FxU16 data);

FxBool 
pioOutLongFreeBSD(unsigned short port, FxU32 data);

FxBool 
pciMapPhysicalToLinearFreeBSD( FxU32 *linear_addr, FxU32 physical_addr,
			FxU32 *length );
void 
pciUnmapPhysicalFreeBSD( FxU32 linear_addr, FxU32 length );

int
getNumDevicesFreeBSD(void);

FxU32
pciFetchRegisterFreeBSD( FxU32 cmd, FxU32 size, FxU32 device);

int
pciUpdateRegisterFreeBSD(FxU32 cmd, FxU32 data, FxU32 size, FxU32 device);

FxBool 
pciOutputDebugStringFreeBSD(const char *msg);

#endif
