// Copyright 2014 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#include "../../../../include/fpdfapi/fpdf_resource.h"
#include "../../../../include/fpdfapi/fpdf_module.h"
#include "../../fpdf_font/font_int.h"
#include "../cmap_int.h"
extern const FX_WORD g_FXCMAP_GB_EUC_H_0[];
extern const FX_WORD g_FXCMAP_GB_EUC_V_0[];
extern const FX_WORD g_FXCMAP_GBpc_EUC_H_0[];
extern const FX_WORD g_FXCMAP_GBpc_EUC_V_0[];
extern const FX_WORD g_FXCMAP_GBK_EUC_H_2[];
extern const FX_WORD g_FXCMAP_GBK_EUC_V_2[];
extern const FX_WORD g_FXCMAP_GBKp_EUC_H_2[];
extern const FX_WORD g_FXCMAP_GBKp_EUC_V_2[];
extern const FX_WORD g_FXCMAP_GBK2K_H_5[];
extern const FX_WORD g_FXCMAP_GBK2K_H_5_DWord[];
extern const FX_WORD g_FXCMAP_GBK2K_V_5[];
extern const FX_WORD g_FXCMAP_UniGB_UCS2_H_4[];
extern const FX_WORD g_FXCMAP_UniGB_UCS2_V_4[];
extern const FX_WORD g_FXCMAP_GB1CID2Unicode_5[];
static const FXCMAP_CMap g_FXCMAP_GB1_cmaps[] = {
    { "GB-EUC-H", FXCMAP_CMap::Range, g_FXCMAP_GB_EUC_H_0, 90, FXCMAP_CMap::None, NULL, 0, 0 },
    { "GB-EUC-V", FXCMAP_CMap::Range, g_FXCMAP_GB_EUC_V_0, 20, FXCMAP_CMap::None, NULL, 0, -1 },
    { "GBpc-EUC-H", FXCMAP_CMap::Range, g_FXCMAP_GBpc_EUC_H_0, 91, FXCMAP_CMap::None, NULL, 0, 0 },
    { "GBpc-EUC-V", FXCMAP_CMap::Range, g_FXCMAP_GBpc_EUC_V_0, 20, FXCMAP_CMap::None, NULL, 0, -1 },
    { "GBK-EUC-H", FXCMAP_CMap::Range, g_FXCMAP_GBK_EUC_H_2, 4071, FXCMAP_CMap::None, NULL, 0, 0 },
    { "GBK-EUC-V", FXCMAP_CMap::Range, g_FXCMAP_GBK_EUC_V_2, 20, FXCMAP_CMap::None, NULL, 0, -1 },
    { "GBKp-EUC-H", FXCMAP_CMap::Range, g_FXCMAP_GBKp_EUC_H_2, 4070, FXCMAP_CMap::None, NULL, 0, -2 },
    { "GBKp-EUC-V", FXCMAP_CMap::Range, g_FXCMAP_GBKp_EUC_V_2, 20, FXCMAP_CMap::None, NULL, 0, -1 },
    { "GBK2K-H", FXCMAP_CMap::Range, g_FXCMAP_GBK2K_H_5, 4071, FXCMAP_CMap::Single, g_FXCMAP_GBK2K_H_5_DWord, 1017, -4 },
    { "GBK2K-V", FXCMAP_CMap::Range, g_FXCMAP_GBK2K_V_5, 41, FXCMAP_CMap::None, NULL, 0, -1 },
    { "UniGB-UCS2-H", FXCMAP_CMap::Range, g_FXCMAP_UniGB_UCS2_H_4, 13825, FXCMAP_CMap::None, NULL, 0, 0 },
    { "UniGB-UCS2-V", FXCMAP_CMap::Range, g_FXCMAP_UniGB_UCS2_V_4, 24, FXCMAP_CMap::None, NULL, 0, -1 },
    { "UniGB-UTF16-H", FXCMAP_CMap::Range, g_FXCMAP_UniGB_UCS2_H_4, 13825, FXCMAP_CMap::None, NULL, 0, 0 },
    { "UniGB-UTF16-V", FXCMAP_CMap::Range, g_FXCMAP_UniGB_UCS2_V_4, 24, FXCMAP_CMap::None, NULL, 0, -1 },
};
void CPDF_ModuleMgr::LoadEmbeddedGB1CMaps()
{
    CPDF_FontGlobals* pFontGlobals = CPDF_ModuleMgr::Get()->GetPageModule()->GetFontGlobals();
    pFontGlobals->m_EmbeddedCharsets[CIDSET_GB1].m_pMapList = g_FXCMAP_GB1_cmaps;
    pFontGlobals->m_EmbeddedCharsets[CIDSET_GB1].m_Count = sizeof g_FXCMAP_GB1_cmaps / sizeof (FXCMAP_CMap);
    pFontGlobals->m_EmbeddedToUnicodes[CIDSET_GB1].m_pMap = g_FXCMAP_GB1CID2Unicode_5;
    pFontGlobals->m_EmbeddedToUnicodes[CIDSET_GB1].m_Count = 30284;
}
