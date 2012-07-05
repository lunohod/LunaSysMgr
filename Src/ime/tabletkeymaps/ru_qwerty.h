/* @@@LICENSE
*
*      Copyright (c) 2010-2012 Hewlett-Packard Development Company, L.P.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* LICENSE@@@ */

#ifndef KEYBOARD_RU_QWERTY_H
#define KEYBOARD_RU_QWERTY_H
#include "../TabletKeymap.h"
#include "common_keys.h"

static TabletKeymap::constUKeyArray sRuQwerty_DotCom_Extended = { cKey_DotCom, cKey_DotNet, cKey_DotOrg, cKey_DotEdu, cKey_None };
static TabletKeymap::constUKeyArray sRuQwerty1_extended = { Qt::Key_1, Qt::Key_Exclam, UKey(0x00B9) /* SUPERSCRIPT ONE ¹ */, UKey(0x00BC) /* VULGAR FRACTION ONE QUARTER ¼ */, UKey(0x00BD) /* VULGAR FRACTION ONE HALF ½ */, Qt::Key_exclamdown, cKey_None };
static TabletKeymap::constUKeyArray sRuQwerty2_extended = { Qt::Key_2, Qt::Key_At, UKey(0x00B2) /* SUPERSCRIPT TWO ² */, cKey_None };
static TabletKeymap::constUKeyArray sRuQwerty3_extended = { Qt::Key_3, Qt::Key_NumberSign, UKey(0x00B3) /* SUPERSCRIPT THREE ³ */, UKey(0x00BE) /* VULGAR FRACTION THREE QUARTERS ¾ */, cKey_None };
static TabletKeymap::constUKeyArray sRuQwerty4_extended = { Qt::Key_4, Qt::Key_Dollar, cKey_Euro, Qt::Key_sterling, Qt::Key_yen, Qt::Key_cent, UKey(0x00A4) /* CURRENCY SIGN ¤ */, cKey_None };
static TabletKeymap::constUKeyArray sRuQwerty5_extended = { Qt::Key_5, Qt::Key_Percent, UKey(0x2030) /* PER MILLE SIGN ‰ */, cKey_None };
static TabletKeymap::constUKeyArray sRuQwerty6_extended = { Qt::Key_6, Qt::Key_AsciiCircum, cKey_None };
static TabletKeymap::constUKeyArray sRuQwerty7_extended = { Qt::Key_7, Qt::Key_Ampersand, cKey_None };
static TabletKeymap::constUKeyArray sRuQwerty8_extended = { Qt::Key_8, Qt::Key_Asterisk, cKey_None };
static TabletKeymap::constUKeyArray sRuQwerty9_extended = { Qt::Key_9, Qt::Key_ParenLeft, Qt::Key_BracketLeft, Qt::Key_BraceLeft, cKey_None };
static TabletKeymap::constUKeyArray sRuQwerty0_extended = { Qt::Key_0, Qt::Key_ParenRight, Qt::Key_BracketRight, Qt::Key_BraceRight, cKey_None };
static TabletKeymap::constUKeyArray ruPeriod_extended = { Qt::Key_Period, Qt::Key_Comma, Qt::Key_Slash, Qt::Key_Backslash, cKey_None };

#define RU_QWERTY_NUMBERS_10(w)			{ w, UKey(0x401),	    UKey(0x401),							NULL },\
                                        { w, Qt::Key_1,			Qt::Key_Exclam,							sRuQwerty1_extended },\
										{ w, Qt::Key_2,			Qt::Key_At,								sRuQwerty2_extended },\
										{ w, Qt::Key_3,			Qt::Key_NumberSign,						sRuQwerty3_extended },\
										{ w, Qt::Key_4,			Qt::Key_Dollar,							sRuQwerty4_extended },\
										{ w, Qt::Key_5,			Qt::Key_Percent,						sRuQwerty5_extended },\
										{ w, Qt::Key_6,	 		Qt::Key_AsciiCircum,					sRuQwerty6_extended },\
										{ w, Qt::Key_7,			Qt::Key_Ampersand,						sRuQwerty7_extended },\
										{ w, Qt::Key_8,			Qt::Key_Asterisk,						sRuQwerty8_extended },\
										{ w, Qt::Key_9,			Qt::Key_ParenLeft,						sRuQwerty9_extended },\
										{ w, Qt::Key_0,			Qt::Key_ParenRight,						sRuQwerty0_extended },\
                                        { w, Qt::Key_Left,		Qt::Key_Up,							NULL },\
										{ w, Qt::Key_Right,		Qt::Key_Down,							NULL }

#define RU_QWERTY_TOP_12(w)				{ w, UKey(0x419),      Qt::Key_QuoteLeft,						NULL },\
										{ w, UKey(0x426),      Qt::Key_AsciiTilde,						NULL },\
										{ w, UKey(0x423),      cKey_Euro,								sE_extended },\
										{ w, UKey(0x41a),			Qt::Key_sterling,						sR_extended },\
										{ w, UKey(0x415),			Qt::Key_Backslash,						sT_extended },\
										{ w, UKey(0x41d),	 		Qt::Key_Bar,							sY_extended },\
										{ w, UKey(0x413),			Qt::Key_BraceLeft,						sU_extended },\
										{ w, UKey(0x428),			Qt::Key_BraceRight,						sI_extended },\
										{ w, UKey(0x429),			Qt::Key_BracketLeft,					sO_extended },\
										{ w, UKey(0x417),			Qt::Key_BracketRight,					sP_extended },\
										{ w, UKey(0x425),			Qt::Key_BracketRight,					NULL },\
										{ w, UKey(0x42a),			Qt::Key_BracketRight,					NULL }

#define RU_QWERTY_MID_11(w)				{ w, UKey(0x424),			Qt::Key_Less,							sA_extended },\
										{ w, UKey(0x42b),			Qt::Key_Greater,						sS_extended },\
										{ w, UKey(0x412),			Qt::Key_Equal,							sD_extended },\
										{ w, UKey(0x410),			Qt::Key_Plus,							NULL },\
										{ w, UKey(0x41f),			UKey(0x00D7) /* multiplication sign */,	sG_extended },\
										{ w, UKey(0x420),			UKey(0x00F7) /* division sign */,		NULL },\
										{ w, UKey(0x41e),			Qt::Key_degree,							NULL },\
										{ w, UKey(0x41b),			Qt::Key_Semicolon,						NULL },\
										{ w, UKey(0x414),			Qt::Key_Colon,							sL_extended },\
										{ w, UKey(0x416),			Qt::Key_Colon,							NULL },\
										{ w, UKey(0x42d),			Qt::Key_Colon,							NULL }

#define RU_QWERTY_LOW_9(w)				{ w, UKey(0x42f),			cKey_Emoticon_Smile,					sZ_extended },\
										{ w, UKey(0x427),			cKey_Emoticon_Wink,						sOptions },\
										{ w, UKey(0x421),			cKey_Emoticon_Frown,					sC_extended },\
										{ w, UKey(0x41c),			cKey_Emoticon_Cry,						NULL },\
										{ w, UKey(0x418),			cKey_Emoticon_Yuck,						sToggleLanguage_extended },\
										{ w, UKey(0x422),			cKey_Emoticon_Gasp,						sN_extended },\
										{ w, UKey(0x42c),			cKey_Emoticon_Heart,					sM_extended },\
										{ w, UKey(0x411),			Qt::Key_Slash,					NULL },\
										{ w, UKey(0x42e),			Qt::Key_Question,					NULL },\
										{ w, Qt::Key_Period,	Qt::Key_Comma,						ruPeriod_extended }

#define RU_QWERTY_BOTTOM_ROW_DEFAULT \
									KEY_1(1, Qt::Key_Tab),\
									KEY_1(2, cKey_Symbol),\
									NOKEY_1,\
									NOKEY_1,\
									KEY_1(SPACE_SIZE, Qt::Key_Space),\
									NOKEY_1,\
									KEY_3(1, Qt::Key_Apostrophe, Qt::Key_QuoteDbl, sSingleAndDoubleQuote_extended),\
									KEY_3(1, Qt::Key_Minus, Qt::Key_Underscore, sMinusUnderscore_extended),\
									KEY_3(1, cKey_Hide, cKey_Hide, sHide_extended),\
									NOKEY_3

#define RU_QWERTY_BOTTOM_ROW_URL \
									KEY_1(1, Qt::Key_Tab),\
									KEY_1(2, cKey_Symbol),\
									NOKEY_1,\
									KEY_3(1, Qt::Key_Slash, Qt::Key_Slash, sURL_extended),\
									KEY_1(SPACE_SIZE - 2, Qt::Key_Space),\
									KEY_3(1, cKey_DotCom, cKey_DotCom, sRuQwerty_DotCom_Extended),\
									KEY_3(1, Qt::Key_Apostrophe, Qt::Key_QuoteDbl, sSingleAndDoubleQuote_extended),\
									KEY_3(1, Qt::Key_Minus, Qt::Key_Underscore, sMinusUnderscore_extended),\
									KEY_3(1, cKey_Hide, cKey_Hide, sHide_extended),\
									NOKEY_3

#define RU_QWERTY_BOTTOM_ROW_EMAIL \
									KEY_1(1, Qt::Key_Tab),\
									KEY_1(2, cKey_Symbol),\
									NOKEY_1,\
									KEY_1(1, Qt::Key_At),\
									KEY_1(SPACE_SIZE - 2, Qt::Key_Space),\
									KEY_3(1, cKey_DotCom, cKey_DotCom, sRuQwerty_DotCom_Extended),\
									KEY_3(1, Qt::Key_Apostrophe, Qt::Key_QuoteDbl, sSingleAndDoubleQuote_extended),\
									KEY_3(1, Qt::Key_Minus, Qt::Key_Underscore, sMinusUnderscore_extended),\
									KEY_3(1, cKey_Hide, cKey_Hide, sHide_extended),\
									NOKEY_3

static TabletKeymap::Layout sRuQwerty = {
	{ KEY_2(-0.5, Qt::Key_Q, Qt::Key_BracketLeft), RU_QWERTY_NUMBERS_10(1), KEY_1(-0.5, Qt::Key_Backspace) },
	{ RU_QWERTY_TOP_12(1), KEY_1(1, Qt::Key_Backspace), NOKEY_1 },
	{ KEY_2(-0.5, Qt::Key_A, Qt::Key_Less), RU_QWERTY_MID_11(1), KEY_1(1.5, Qt::Key_Return), NOKEY_1 },
	{ KEY_1(1, Qt::Key_Shift), RU_QWERTY_LOW_9(1), KEY_1(1, Qt::Key_Shift), NOKEY_1 },
	{ RU_QWERTY_BOTTOM_ROW_DEFAULT },
};

static TabletKeymap::LayoutRow sRuQwertyBottomRow_default = { RU_QWERTY_BOTTOM_ROW_DEFAULT };
static TabletKeymap::LayoutRow sRuQwertyBottomRow_url = { RU_QWERTY_BOTTOM_ROW_URL };
static TabletKeymap::LayoutRow sRuQwertyBottomRow_email = { RU_QWERTY_BOTTOM_ROW_EMAIL };

static TabletKeymap::LayoutFamily sRuQwertyFamily("ru йцукен", "ru", IME_KBD_LANG_English, IME_KBD_SEC_REGQwerty,
                                                "+ = [  ]" /* Spaces are "Unicode Character 'HAIR SPACE' (U+200A) ' ' " */, "Р У С" /* Spaces are "Unicode Character 'HAIR SPACE' (U+200A) ' ' " */,
                                                0, 1, 10, 2, false, sRuQwerty, sRuQwertyBottomRow_default, sRuQwertyBottomRow_url, sRuQwertyBottomRow_email);
#endif // KEYBOARD_RU_QWERTY_H
