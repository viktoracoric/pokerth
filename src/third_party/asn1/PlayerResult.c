/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 */

#include <asn_internal.h>

#include "PlayerResult.h"

static int
memb_resultCards_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size == 2)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_bestHandPosition_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size == 5)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_moneyWon_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 10000000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_playerMoney_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 10000000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_resultCards_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_Card,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_resultCards_tags_3[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_resultCards_specs_3 = {
	sizeof(struct resultCards),
	offsetof(struct resultCards, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_resultCards_3 = {
	"resultCards",
	"resultCards",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_resultCards_tags_3,
	sizeof(asn_DEF_resultCards_tags_3)
		/sizeof(asn_DEF_resultCards_tags_3[0]), /* 1 */
	asn_DEF_resultCards_tags_3,	/* Same as above */
	sizeof(asn_DEF_resultCards_tags_3)
		/sizeof(asn_DEF_resultCards_tags_3[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_resultCards_3,
	1,	/* Single element */
	&asn_SPC_resultCards_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_bestHandPosition_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_bestHandPosition_tags_5[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_bestHandPosition_specs_5 = {
	sizeof(struct bestHandPosition),
	offsetof(struct bestHandPosition, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bestHandPosition_5 = {
	"bestHandPosition",
	"bestHandPosition",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_bestHandPosition_tags_5,
	sizeof(asn_DEF_bestHandPosition_tags_5)
		/sizeof(asn_DEF_bestHandPosition_tags_5[0]), /* 1 */
	asn_DEF_bestHandPosition_tags_5,	/* Same as above */
	sizeof(asn_DEF_bestHandPosition_tags_5)
		/sizeof(asn_DEF_bestHandPosition_tags_5[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_bestHandPosition_5,
	1,	/* Single element */
	&asn_SPC_bestHandPosition_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PlayerResult_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PlayerResult, playerId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PlayerResult, resultCards),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_resultCards_3,
		memb_resultCards_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"resultCards"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PlayerResult, bestHandPosition),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_bestHandPosition_5,
		memb_bestHandPosition_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"bestHandPosition"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PlayerResult, cardsValue),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"cardsValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PlayerResult, moneyWon),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_moneyWon_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"moneyWon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PlayerResult, playerMoney),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_playerMoney_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerMoney"
		},
};
static ber_tlv_tag_t asn_DEF_PlayerResult_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PlayerResult_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 3 }, /* playerId at 403 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 3, -1, 2 }, /* cardsValue at 406 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 4, -2, 1 }, /* moneyWon at 407 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 5, -3, 0 }, /* playerMoney at 408 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 1 }, /* resultCards at 404 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -1, 0 } /* bestHandPosition at 405 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PlayerResult_specs_1 = {
	sizeof(struct PlayerResult),
	offsetof(struct PlayerResult, _asn_ctx),
	asn_MAP_PlayerResult_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	5,	/* Start extensions */
	7	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PlayerResult = {
	"PlayerResult",
	"PlayerResult",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_PlayerResult_tags_1,
	sizeof(asn_DEF_PlayerResult_tags_1)
		/sizeof(asn_DEF_PlayerResult_tags_1[0]), /* 1 */
	asn_DEF_PlayerResult_tags_1,	/* Same as above */
	sizeof(asn_DEF_PlayerResult_tags_1)
		/sizeof(asn_DEF_PlayerResult_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PlayerResult_1,
	6,	/* Elements count */
	&asn_SPC_PlayerResult_specs_1	/* Additional specs */
};
