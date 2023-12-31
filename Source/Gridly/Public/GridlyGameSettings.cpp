﻿// Copyright (c) 2021 LocalizeDirect AB

#include "GridlyGameSettings.h"
#include "Misc/ConfigCacheIni.h"

UGridlyGameSettings::UGridlyGameSettings() :
	CustomCultureMapping({
		{"en-US", "enUS"},
		{"ar-SA", "arSA"},
		{"ca-ES", "caES"},
		{"zh-CN", "zhCN"},
		{"zh-TW", "zhTW"},
		{"de-DE", "deDE"},
		{"it-IT", "itIT"},
		{"ja-JP", "jaJP"},
		{"ko-KR", "koKR"},
		{"pl-PL", "plPL"},
		{"pt-BR", "ptBR"},
		{"ru-RU", "ruRU"},
		{"es-MX", "esMX"},
		{"es-ES", "esES"},
		{"bn-BD", "bnBD"},
		{"bg-BG", "bgBG"},
		{"zh-HK", "zhHK"},
		{"cs-CZ", "csCZ"},
		{"da-DK", "daDK"},
		{"nl-NL", "nlNL"},
		{"fi-FI", "fiFI"},
		{"fr-CA", "frCA"},
		{"fr-FR", "frFR"},
		{"el-GR", "elGR"},
		{"he-IL", "heIL"},
		{"hi-IN", "hiIN"},
		{"hu-HU", "huHU"},
		{"id-ID", "idID"},
		{"jw-ID", "jwID"},
		{"lv-LV", "lvLV"},
		{"ms-MY", "msMY"},
		{"no-NO", "noNO"},
		{"pt-PT", "ptPT"},
		{"ro-RO", "roRO"},
		{"sk-SK", "skSK"},
		{"sv-SE", "svSE"},
		{"tl-PH", "tlPH"},
		{"th-TH", "thTH"},
		{"tr-TR", "trTR"},
		{"uk-UA", "ukUA"},
		{"ur-IN", "urIN"},
		{"vi-VN", "viVN"},
		{"af-ZA", "afZA"},
		{"ar-AE", "arAE"},
		{"ar-BH", "arBH"},
		{"ar-DZ", "arDZ"},
		{"ar-EG", "arEG"},
		{"ar-IQ", "arIQ"},
		{"ar-JO", "arJO"},
		{"ar-KW", "arKW"},
		{"ar-LB", "arLB"},
		{"ar-LY", "arLY"},
		{"ar-MA", "arMA"},
		{"ar-OM", "arOM"},
		{"ar-QA", "arQA"},
		{"ar-SY", "arSY"},
		{"ar-TN", "arTN"},
		{"ar-YE", "arYE"},
		{"az-AZ", "azAZ"},
		{"be-BY", "beBY"},
		{"bs-BA", "bsBA"},
		{"cy-GB", "cyGB"},
		{"de-AT", "deAT"},
		{"de-CH", "deCH"},
		{"de-LI", "deLI"},
		{"de-LU", "deLU"},
		{"dv-MV", "dvMV"},
		{"en-AU", "enAU"},
		{"en-BZ", "enBZ"},
		{"en-CA", "enCA"},
		{"en-GB", "enGB"},
		{"en-IE", "enIE"},
		{"en-JM", "enJM"},
		{"en-NZ", "enNZ"},
		{"en-PH", "enPH"},
		{"en-TT", "enTT"},
		{"en-ZA", "enZA"},
		{"en-ZW", "enZW"},
		{"es-AR", "esAR"},
		{"es-BO", "esBO"},
		{"es-CL", "esCL"},
		{"es-CO", "esCO"},
		{"es-CR", "esCR"},
		{"es-DO", "esDO"},
		{"es-EC", "esEC"},
		{"es-GT", "esGT"},
		{"es-HN", "esHN"},
		{"es-NI", "esNI"},
		{"es-PA", "esPA"},
		{"es-PE", "esPE"},
		{"es-PR", "esPR"},
		{"es-PY", "esPY"},
		{"es-SV", "esSV"},
		{"es-UY", "esUY"},
		{"es-VE", "esVE"},
		{"et-EE", "etEE"},
		{"eu-ES", "euES"},
		{"fa-IR", "faIR"},
		{"fo-FO", "foFO"},
		{"fr-BE", "frBE"},
		{"fr-CH", "frCH"},
		{"fr-LU", "frLU"},
		{"fr-MC", "frMC"},
		{"gl-ES", "glES"},
		{"gu-IN", "guIN"},
		{"hr-BA", "hrBA"},
		{"hr-HR", "hrHR"},
		{"hy-AM", "hyAM"},
		{"is-IS", "isIS"},
		{"it-CH", "itCH"},
		{"ka-GE", "kaGE"},
		{"kk-KZ", "kkKZ"},
		{"kn-IN", "knIN"},
		{"kok-IN", "kokIN"},
		{"ky-KG", "kyKG"},
		{"lt-LT", "ltLT"},
		{"mi-NZ", "miNZ"},
		{"mk-MK", "mkMK"},
		{"mn-MN", "mnMN"},
		{"mr-IN", "mrIN"},
		{"ms-BN", "msBN"},
		{"mt-MT", "mtMT"},
		{"nb-NO", "nbNO"},
		{"nl-BE", "nlBE"},
		{"nn-NO", "nnNO"},
		{"ns-ZA", "nsZA"},
		{"pa-IN", "paIN"},
		{"ps-AR", "psAR"},
		{"qu-BO", "quBO"},
		{"qu-EC", "quEC"},
		{"qu-PE", "quPE"},
		{"sa-IN", "saIN"},
		{"se-FI", "seFI"},
		{"se-NO", "seNO"},
		{"se-SE", "seSE"},
		{"sl-SI", "slSI"},
		{"sq-AL", "sqAL"},
		{"sr-BA", "srBA"},
		{"sv-FI", "svFI"},
		{"sw-KE", "swKE"},
		{"syr-SY", "syrSY"},
		{"ta-IN", "taIN"},
		{"te-IN", "teIN"},
		{"tn-ZA", "tnZA"},
		{"tt-RU", "ttRU"},
		{"ur-PK", "urPK"},
		{"uz-UZ", "uzUZ"},
		{"xh-ZA", "xhZA"},
		{"zh-MO", "zhMO"},
		{"zh-SG", "zhSG"},
		{"zu-ZA", "zuZA"},
	})
{
#if WITH_EDITOR
	GConfig->GetString(
		TEXT("Gridly"),
		TEXT("GridlyExportApiKey"),
		ExportApiKey,
		GEditorPerProjectIni
		);
	GConfig->GetString(TEXT("Gridly"),
		TEXT("GridlyExportViewId"),
		ExportViewId,
		GEditorPerProjectIni
		);
#endif
}

bool UGridlyGameSettings::OnSettingsSaved()
{
	UGridlyGameSettings* GridlyGameSettings = GetMutableDefault<UGridlyGameSettings>();

#if WITH_EDITOR
	GConfig->SetString(
		TEXT("Gridly"),
		TEXT("GridlyExportApiKey"),
		*GridlyGameSettings->ExportApiKey,
		GEditorPerProjectIni
		);
	GConfig->SetString(TEXT("Gridly"),
		TEXT("GridlyExportViewId"),
		*GridlyGameSettings->ExportViewId,
		GEditorPerProjectIni
		);
#endif
	return true;
}
