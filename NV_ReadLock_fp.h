/*
 * Copyright 2015 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef __TPM2_NV_READLOCK_FP_H
#define __TPM2_NV_READLOCK_FP_H

typedef struct {
        TPMI_RH_NV_INDEX nvIndex;
        TPM_HANDLE       authHandle;
} NV_ReadLock_In;

TPM_RC TPM2_NV_ReadLock(
        NV_ReadLock_In    *in                 // IN: input parameter list
);

#endif // __TPM2_NV_READLOCK_FP_H