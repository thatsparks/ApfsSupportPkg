/** @file

Apple FileSystem BDS stage protocol to inform Apfs Loader 
about Apfs boot not compatible.

Copyright (c) 2018, savvas

All rights reserved.

This program and the accompanying materials
are licensed and made available under the terms and conditions of the BSD License
which accompanies this distribution.  The full text of the license may be found at
http://opensource.org/licenses/bsd-license.php

THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#ifndef APPLE_FILESYSTEM_UNSUPPORTED_BDS_PROTOCOL_H_
#define APPLE_FILESYSTEM_UNSUPPORTED_BDS_PROTOCOL_H_

//
// If this protocol present, then firmware doesn't compatible for Apfs boot,
// so AppleApfsJumpStart won't load
//
#define APPLE_FILESYSTEM_UNSUPPORTED_BDS_PROTOCOL_GUID \
  { 0xA196A7CA, 0x14C6, 0x11E7, {0xB9, 0x06, 0xB8, 0xE8, 0x56, 0x2C, 0xBA, 0xFA } }

extern EFI_GUID gAppleFileSystemUnsupportedBdsProtocolGuid;

#endif // APPLE_FILESYSTEM_UNSUPPORTED_BDS_PROTOCOL_H_