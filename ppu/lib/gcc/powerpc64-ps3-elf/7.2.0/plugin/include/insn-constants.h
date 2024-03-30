/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define TFHAR_REGNO 114
#define CR7_REGNO 75
#define CMPTFGT_GPR 1014
#define SFBOOL_BOOL_A1 5
#define LAST_ALTIVEC_REGNO 108
#define SFBOOL_TMP_VSX 1
#define FIRST_FPR_REGNO 32
#define TFIAR_SPR 129
#define SFBOOL_BOOL_D 4
#define CMPDFGT_GPR 1008
#define FIRST_ALTIVEC_REGNO 77
#define CMPDFEQ_GPR 1006
#define CMPTFLT_GPR 1016
#define STATIC_CHAIN_REGNUM 11
#define SFBOOL_MFVSR_A 3
#define SFBOOL_MFVSR_D 2
#define TEXASR_SPR 130
#define CA_REGNO 76
#define SFBOOL_TMP_VSX_DI 11
#define CMPDFLT_GPR 1010
#define SPEFSCR_REGNO 112
#define SFBOOL_MTVSR_D 9
#define MAX_CR_REGNO 75
#define CR4_REGNO 72
#define TFIAR_REGNO 115
#define CR6_REGNO 74
#define ARG_POINTER_REGNUM 67
#define SFBOOL_BOOL_A2 6
#define VRSAVE_REGNO 109
#define CR2_REGNO 70
#define TOC_REGNUM 2
#define FIRST_SPE_HIGH_REGNO 117
#define LAST_SPE_HIGH_REGNO 148
#define FIRST_GPR_REGNO 0
#define CR1_REGNO 69
#define TSTTFEQ_GPR 1013
#define LAST_GPR_REGNO 31
#define TFHAR_SPR 128
#define SPE_ACC_REGNO 111
#define MAX_HTM_OPERANDS 4
#define TSTTFGT_GPR 1015
#define VSCR_REGNO 110
#define CTR_REGNO 66
#define TEXASR_REGNO 116
#define TSTDFEQ_GPR 1007
#define SFBOOL_MTVSR_D_V4SF 12
#define CR0_REGNO 68
#define TSTTFLT_GPR 1017
#define SFBOOL_BOOL_A_DI 10
#define FRAME_POINTER_REGNUM 113
#define CR5_REGNO 73
#define SFBOOL_TMP_GPR 0
#define LAST_FPR_REGNO 63
#define SFBOOL_SHL_A 8
#define TSTDFGT_GPR 1009
#define HARD_FRAME_POINTER_REGNUM 31
#define TEXASRU_SPR 131
#define E500_CR_IOR_COMPARE 1018
#define TSTDFLT_GPR 1011
#define CMPTFEQ_GPR 1012
#define LR_REGNO 65
#define CR3_REGNO 71
#define SFBOOL_SHL_D 7
#define STACK_POINTER_REGNUM 1

enum unspec {
  UNSPEC_FRSP = 0,
  UNSPEC_PROBE_STACK = 1,
  UNSPEC_TOCPTR = 2,
  UNSPEC_TOC = 3,
  UNSPEC_TOCSLOT = 4,
  UNSPEC_MOVSI_GOT = 5,
  UNSPEC_MV_CR_OV = 6,
  UNSPEC_FCTIWZ = 7,
  UNSPEC_FRIM = 8,
  UNSPEC_FRIN = 9,
  UNSPEC_FRIP = 10,
  UNSPEC_FRIZ = 11,
  UNSPEC_XSRDPI = 12,
  UNSPEC_LD_MPIC = 13,
  UNSPEC_RELD_MPIC = 14,
  UNSPEC_MPIC_CORRECT = 15,
  UNSPEC_TLSGD = 16,
  UNSPEC_TLSLD = 17,
  UNSPEC_MOVESI_FROM_CR = 18,
  UNSPEC_MOVESI_TO_CR = 19,
  UNSPEC_TLSDTPREL = 20,
  UNSPEC_TLSDTPRELHA = 21,
  UNSPEC_TLSDTPRELLO = 22,
  UNSPEC_TLSGOTDTPREL = 23,
  UNSPEC_TLSTPREL = 24,
  UNSPEC_TLSTPRELHA = 25,
  UNSPEC_TLSTPRELLO = 26,
  UNSPEC_TLSGOTTPREL = 27,
  UNSPEC_TLSTLS = 28,
  UNSPEC_FIX_TRUNC_TF = 29,
  UNSPEC_MV_CR_GT = 30,
  UNSPEC_STFIWX = 31,
  UNSPEC_POPCNTB = 32,
  UNSPEC_FRES = 33,
  UNSPEC_SP_SET = 34,
  UNSPEC_SP_TEST = 35,
  UNSPEC_SYNC = 36,
  UNSPEC_LWSYNC = 37,
  UNSPEC_SYNC_OP = 38,
  UNSPEC_ATOMIC = 39,
  UNSPEC_CMPXCHG = 40,
  UNSPEC_XCHG = 41,
  UNSPEC_AND = 42,
  UNSPEC_DLMZB = 43,
  UNSPEC_DLMZB_CR = 44,
  UNSPEC_DLMZB_STRLEN = 45,
  UNSPEC_RSQRT = 46,
  UNSPEC_TOCREL = 47,
  UNSPEC_MACHOPIC_OFFSET = 48,
  UNSPEC_BPERM = 49,
  UNSPEC_COPYSIGN = 50,
  UNSPEC_PARITY = 51,
  UNSPEC_CMPB = 52,
  UNSPEC_FCTIW = 53,
  UNSPEC_FCTID = 54,
  UNSPEC_LFIWAX = 55,
  UNSPEC_LFIWZX = 56,
  UNSPEC_FCTIWUZ = 57,
  UNSPEC_NOP = 58,
  UNSPEC_GRP_END_NOP = 59,
  UNSPEC_P8V_FMRGOW = 60,
  UNSPEC_P8V_MTVSRWZ = 61,
  UNSPEC_P8V_RELOAD_FROM_GPR = 62,
  UNSPEC_P8V_MTVSRD = 63,
  UNSPEC_P8V_XXPERMDI = 64,
  UNSPEC_P8V_RELOAD_FROM_VSX = 65,
  UNSPEC_ADDG6S = 66,
  UNSPEC_CDTBCD = 67,
  UNSPEC_CBCDTD = 68,
  UNSPEC_DIVE = 69,
  UNSPEC_DIVEO = 70,
  UNSPEC_DIVEU = 71,
  UNSPEC_DIVEUO = 72,
  UNSPEC_UNPACK_128BIT = 73,
  UNSPEC_PACK_128BIT = 74,
  UNSPEC_LSQ = 75,
  UNSPEC_FUSION_GPR = 76,
  UNSPEC_STACK_CHECK = 77,
  UNSPEC_FUSION_P9 = 78,
  UNSPEC_FUSION_ADDIS = 79,
  UNSPEC_ROUND_TO_ODD = 80,
  UNSPEC_SIGNBIT = 81,
  UNSPEC_SF_FROM_SI = 82,
  UNSPEC_SI_FROM_SF = 83,
  UNSPEC_PREDICATE = 84,
  UNSPEC_REDUC = 85,
  UNSPEC_NEZ_P = 86,
  UNSPEC_VSX_CONCAT = 87,
  UNSPEC_VSX_CVDPSXWS = 88,
  UNSPEC_VSX_CVDPUXWS = 89,
  UNSPEC_VSX_CVSPDP = 90,
  UNSPEC_VSX_CVSPDPN = 91,
  UNSPEC_VSX_CVDPSPN = 92,
  UNSPEC_VSX_CVSXWDP = 93,
  UNSPEC_VSX_CVUXWDP = 94,
  UNSPEC_VSX_CVSXDSP = 95,
  UNSPEC_VSX_CVUXDSP = 96,
  UNSPEC_VSX_CVSPSXDS = 97,
  UNSPEC_VSX_CVSPUXDS = 98,
  UNSPEC_VSX_TDIV = 99,
  UNSPEC_VSX_TSQRT = 100,
  UNSPEC_VSX_SET = 101,
  UNSPEC_VSX_ROUND_I = 102,
  UNSPEC_VSX_ROUND_IC = 103,
  UNSPEC_VSX_SLDWI = 104,
  UNSPEC_VSX_XXSPLTW = 105,
  UNSPEC_VSX_XXSPLTD = 106,
  UNSPEC_VSX_DIVSD = 107,
  UNSPEC_VSX_DIVUD = 108,
  UNSPEC_VSX_MULSD = 109,
  UNSPEC_VSX_XVCVSXDDP = 110,
  UNSPEC_VSX_XVCVUXDDP = 111,
  UNSPEC_VSX_XVCVDPSXDS = 112,
  UNSPEC_VSX_XVCVDPUXDS = 113,
  UNSPEC_VSX_SIGN_EXTEND = 114,
  UNSPEC_VSX_VSLO = 115,
  UNSPEC_VSX_EXTRACT = 116,
  UNSPEC_VSX_SXEXPDP = 117,
  UNSPEC_VSX_SXSIGDP = 118,
  UNSPEC_VSX_SIEXPDP = 119,
  UNSPEC_VSX_SCMPEXPDP = 120,
  UNSPEC_VSX_STSTDC = 121,
  UNSPEC_VSX_VXEXP = 122,
  UNSPEC_VSX_VXSIG = 123,
  UNSPEC_VSX_VIEXP = 124,
  UNSPEC_VSX_VTSTDC = 125,
  UNSPEC_VSX_VEC_INIT = 126,
  UNSPEC_LXVL = 127,
  UNSPEC_STXVL = 128,
  UNSPEC_VCLZLSBB = 129,
  UNSPEC_VCTZLSBB = 130,
  UNSPEC_VEXTUBLX = 131,
  UNSPEC_VEXTUHLX = 132,
  UNSPEC_VEXTUWLX = 133,
  UNSPEC_VEXTUBRX = 134,
  UNSPEC_VEXTUHRX = 135,
  UNSPEC_VEXTUWRX = 136,
  UNSPEC_VCMPNEB = 137,
  UNSPEC_VCMPNEZB = 138,
  UNSPEC_VCMPNEH = 139,
  UNSPEC_VCMPNEZH = 140,
  UNSPEC_VCMPNEW = 141,
  UNSPEC_VCMPNEZW = 142,
  UNSPEC_XXEXTRACTUW = 143,
  UNSPEC_XXINSERTW = 144,
  UNSPEC_VCMPBFP = 145,
  UNSPEC_VMSUMU = 146,
  UNSPEC_VMSUMM = 147,
  UNSPEC_VMSUMSHM = 148,
  UNSPEC_VMSUMUHS = 149,
  UNSPEC_VMSUMSHS = 150,
  UNSPEC_VMHADDSHS = 151,
  UNSPEC_VMHRADDSHS = 152,
  UNSPEC_VADDCUW = 153,
  UNSPEC_VADDU = 154,
  UNSPEC_VADDS = 155,
  UNSPEC_VAVGU = 156,
  UNSPEC_VAVGS = 157,
  UNSPEC_VMULEUB = 158,
  UNSPEC_VMULESB = 159,
  UNSPEC_VMULEUH = 160,
  UNSPEC_VMULESH = 161,
  UNSPEC_VMULOUB = 162,
  UNSPEC_VMULOSB = 163,
  UNSPEC_VMULOUH = 164,
  UNSPEC_VMULOSH = 165,
  UNSPEC_VPKPX = 166,
  UNSPEC_VPACK_SIGN_SIGN_SAT = 167,
  UNSPEC_VPACK_SIGN_UNS_SAT = 168,
  UNSPEC_VPACK_UNS_UNS_SAT = 169,
  UNSPEC_VPACK_UNS_UNS_MOD = 170,
  UNSPEC_VPACK_UNS_UNS_MOD_DIRECT = 171,
  UNSPEC_VSLV4SI = 172,
  UNSPEC_VSLO = 173,
  UNSPEC_VSR = 174,
  UNSPEC_VSRO = 175,
  UNSPEC_VSUBCUW = 176,
  UNSPEC_VSUBU = 177,
  UNSPEC_VSUBS = 178,
  UNSPEC_VSUM4UBS = 179,
  UNSPEC_VSUM4S = 180,
  UNSPEC_VSUM2SWS = 181,
  UNSPEC_VSUMSWS = 182,
  UNSPEC_VPERM = 183,
  UNSPEC_VPERMR = 184,
  UNSPEC_VPERM_UNS = 185,
  UNSPEC_VRFIN = 186,
  UNSPEC_VCFUX = 187,
  UNSPEC_VCFSX = 188,
  UNSPEC_VCTUXS = 189,
  UNSPEC_VCTSXS = 190,
  UNSPEC_VLOGEFP = 191,
  UNSPEC_VEXPTEFP = 192,
  UNSPEC_VSLDOI = 193,
  UNSPEC_VUNPACK_HI_SIGN = 194,
  UNSPEC_VUNPACK_LO_SIGN = 195,
  UNSPEC_VUNPACK_HI_SIGN_DIRECT = 196,
  UNSPEC_VUNPACK_LO_SIGN_DIRECT = 197,
  UNSPEC_VUPKHPX = 198,
  UNSPEC_VUPKLPX = 199,
  UNSPEC_DARN = 200,
  UNSPEC_DARN_32 = 201,
  UNSPEC_DARN_RAW = 202,
  UNSPEC_DST = 203,
  UNSPEC_DSTT = 204,
  UNSPEC_DSTST = 205,
  UNSPEC_DSTSTT = 206,
  UNSPEC_LVSL = 207,
  UNSPEC_LVSR = 208,
  UNSPEC_LVE = 209,
  UNSPEC_STVX = 210,
  UNSPEC_STVXL = 211,
  UNSPEC_STVE = 212,
  UNSPEC_SET_VSCR = 213,
  UNSPEC_GET_VRSAVE = 214,
  UNSPEC_LVX = 215,
  UNSPEC_REDUC_PLUS = 216,
  UNSPEC_VECSH = 217,
  UNSPEC_EXTEVEN_V4SI = 218,
  UNSPEC_EXTEVEN_V8HI = 219,
  UNSPEC_EXTEVEN_V16QI = 220,
  UNSPEC_EXTEVEN_V4SF = 221,
  UNSPEC_EXTODD_V4SI = 222,
  UNSPEC_EXTODD_V8HI = 223,
  UNSPEC_EXTODD_V16QI = 224,
  UNSPEC_EXTODD_V4SF = 225,
  UNSPEC_INTERHI_V4SI = 226,
  UNSPEC_INTERHI_V8HI = 227,
  UNSPEC_INTERHI_V16QI = 228,
  UNSPEC_INTERLO_V4SI = 229,
  UNSPEC_INTERLO_V8HI = 230,
  UNSPEC_INTERLO_V16QI = 231,
  UNSPEC_LVLX = 232,
  UNSPEC_LVLXL = 233,
  UNSPEC_LVRX = 234,
  UNSPEC_LVRXL = 235,
  UNSPEC_STVLX = 236,
  UNSPEC_STVLXL = 237,
  UNSPEC_STVRX = 238,
  UNSPEC_STVRXL = 239,
  UNSPEC_VADU = 240,
  UNSPEC_VSLV = 241,
  UNSPEC_VSRV = 242,
  UNSPEC_VMULWHUB = 243,
  UNSPEC_VMULWLUB = 244,
  UNSPEC_VMULWHSB = 245,
  UNSPEC_VMULWLSB = 246,
  UNSPEC_VMULWHUH = 247,
  UNSPEC_VMULWLUH = 248,
  UNSPEC_VMULWHSH = 249,
  UNSPEC_VMULWLSH = 250,
  UNSPEC_VUPKHUB = 251,
  UNSPEC_VUPKHUH = 252,
  UNSPEC_VUPKLUB = 253,
  UNSPEC_VUPKLUH = 254,
  UNSPEC_VPERMSI = 255,
  UNSPEC_VPERMHI = 256,
  UNSPEC_INTERHI = 257,
  UNSPEC_INTERLO = 258,
  UNSPEC_VUPKHS_V4SF = 259,
  UNSPEC_VUPKLS_V4SF = 260,
  UNSPEC_VUPKHU_V4SF = 261,
  UNSPEC_VUPKLU_V4SF = 262,
  UNSPEC_VGBBD = 263,
  UNSPEC_VMRGH_DIRECT = 264,
  UNSPEC_VMRGL_DIRECT = 265,
  UNSPEC_VSPLT_DIRECT = 266,
  UNSPEC_VMRGEW_DIRECT = 267,
  UNSPEC_VSUMSWS_DIRECT = 268,
  UNSPEC_VADDCUQ = 269,
  UNSPEC_VADDEUQM = 270,
  UNSPEC_VADDECUQ = 271,
  UNSPEC_VSUBCUQ = 272,
  UNSPEC_VSUBEUQM = 273,
  UNSPEC_VSUBECUQ = 274,
  UNSPEC_VBPERMQ = 275,
  UNSPEC_VBPERMD = 276,
  UNSPEC_BCDADD = 277,
  UNSPEC_BCDSUB = 278,
  UNSPEC_BCD_OVERFLOW = 279,
  UNSPEC_CMPRB = 280,
  UNSPEC_CMPRB2 = 281,
  UNSPEC_CMPEQB = 282,
  UNSPEC_VRLMI = 283,
  UNSPEC_VRLNM = 284,
  UNSPEC_MOVSD_LOAD = 285,
  UNSPEC_MOVSD_STORE = 286,
  UNSPEC_DDEDPD = 287,
  UNSPEC_DENBCD = 288,
  UNSPEC_DXEX = 289,
  UNSPEC_DIEX = 290,
  UNSPEC_DSCLI = 291,
  UNSPEC_DTSTSFI = 292,
  UNSPEC_DSCRI = 293,
  UNSPEC_INTERHI_V2SF = 294,
  UNSPEC_INTERLO_V2SF = 295,
  UNSPEC_EXTEVEN_V2SF = 296,
  UNSPEC_EXTODD_V2SF = 297,
  UNSPEC_VCIPHER = 298,
  UNSPEC_VNCIPHER = 299,
  UNSPEC_VCIPHERLAST = 300,
  UNSPEC_VNCIPHERLAST = 301,
  UNSPEC_VSBOX = 302,
  UNSPEC_VSHASIGMA = 303,
  UNSPEC_VPERMXOR = 304,
  UNSPEC_VPMSUM = 305,
  UNSPEC_HTM_FENCE = 306
};
#define NUM_UNSPEC_VALUES 307
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_BLOCK = 0,
  UNSPECV_LL = 1,
  UNSPECV_SC = 2,
  UNSPECV_PROBE_STACK_RANGE = 3,
  UNSPECV_EH_RR = 4,
  UNSPECV_ISYNC = 5,
  UNSPECV_MFTB = 6,
  UNSPECV_NLGR = 7,
  UNSPECV_MFFS = 8,
  UNSPECV_MTFSF = 9,
  UNSPECV_SPLIT_STACK_RETURN = 10,
  UNSPECV_SET_VRSAVE = 11,
  UNSPECV_MTVSCR = 12,
  UNSPECV_MFVSCR = 13,
  UNSPECV_DSSALL = 14,
  UNSPECV_DSS = 15,
  UNSPECV_HTM_TABORT = 16,
  UNSPECV_HTM_TABORTXC = 17,
  UNSPECV_HTM_TABORTXCI = 18,
  UNSPECV_HTM_TBEGIN = 19,
  UNSPECV_HTM_TCHECK = 20,
  UNSPECV_HTM_TEND = 21,
  UNSPECV_HTM_TRECHKPT = 22,
  UNSPECV_HTM_TRECLAIM = 23,
  UNSPECV_HTM_TSR = 24,
  UNSPECV_HTM_TTEST = 25,
  UNSPECV_HTM_MFSPR = 26,
  UNSPECV_HTM_MTSPR = 27
};
#define NUM_UNSPECV_VALUES 28
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
