/* Generated automatically from machmode.def and config/rs6000/rs6000-modes.def
   by genmodes.  */

#ifndef GCC_INSN_MODES_H
#define GCC_INSN_MODES_H

enum machine_mode
{
  VOIDmode,                /* machmode.def:172 */
#define HAVE_VOIDmode
  BLKmode,                 /* machmode.def:176 */
#define HAVE_BLKmode
  CCmode,                  /* machmode.def:214 */
#define HAVE_CCmode
  CCUNSmode,               /* config/rs6000/rs6000-modes.def:39 */
#define HAVE_CCUNSmode
  CCFPmode,                /* config/rs6000/rs6000-modes.def:40 */
#define HAVE_CCFPmode
  CCEQmode,                /* config/rs6000/rs6000-modes.def:41 */
#define HAVE_CCEQmode
  BImode,                  /* machmode.def:179 */
#define HAVE_BImode
  QImode,                  /* machmode.def:187 */
#define HAVE_QImode
  HImode,                  /* machmode.def:188 */
#define HAVE_HImode
  SImode,                  /* machmode.def:189 */
#define HAVE_SImode
  DImode,                  /* machmode.def:190 */
#define HAVE_DImode
  TImode,                  /* machmode.def:191 */
#define HAVE_TImode
  PTImode,                 /* config/rs6000/rs6000-modes.def:56 */
#define HAVE_PTImode
  QQmode,                  /* machmode.def:217 */
#define HAVE_QQmode
  HQmode,                  /* machmode.def:218 */
#define HAVE_HQmode
  SQmode,                  /* machmode.def:219 */
#define HAVE_SQmode
  DQmode,                  /* machmode.def:220 */
#define HAVE_DQmode
  TQmode,                  /* machmode.def:221 */
#define HAVE_TQmode
  UQQmode,                 /* machmode.def:223 */
#define HAVE_UQQmode
  UHQmode,                 /* machmode.def:224 */
#define HAVE_UHQmode
  USQmode,                 /* machmode.def:225 */
#define HAVE_USQmode
  UDQmode,                 /* machmode.def:226 */
#define HAVE_UDQmode
  UTQmode,                 /* machmode.def:227 */
#define HAVE_UTQmode
  HAmode,                  /* machmode.def:229 */
#define HAVE_HAmode
  SAmode,                  /* machmode.def:230 */
#define HAVE_SAmode
  DAmode,                  /* machmode.def:231 */
#define HAVE_DAmode
  TAmode,                  /* machmode.def:232 */
#define HAVE_TAmode
  UHAmode,                 /* machmode.def:234 */
#define HAVE_UHAmode
  USAmode,                 /* machmode.def:235 */
#define HAVE_USAmode
  UDAmode,                 /* machmode.def:236 */
#define HAVE_UDAmode
  UTAmode,                 /* machmode.def:237 */
#define HAVE_UTAmode
  SFmode,                  /* machmode.def:209 */
#define HAVE_SFmode
  DFmode,                  /* machmode.def:210 */
#define HAVE_DFmode
  IFmode,                  /* config/rs6000/rs6000-modes.def:23 */
#define HAVE_IFmode
  KFmode,                  /* config/rs6000/rs6000-modes.def:26 */
#define HAVE_KFmode
  TFmode,                  /* config/rs6000/rs6000-modes.def:30 */
#define HAVE_TFmode
  SDmode,                  /* machmode.def:249 */
#define HAVE_SDmode
  DDmode,                  /* machmode.def:250 */
#define HAVE_DDmode
  TDmode,                  /* machmode.def:251 */
#define HAVE_TDmode
  CQImode,                 /* machmode.def:245 */
#define HAVE_CQImode
  CHImode,                 /* machmode.def:245 */
#define HAVE_CHImode
  CSImode,                 /* machmode.def:245 */
#define HAVE_CSImode
  CDImode,                 /* machmode.def:245 */
#define HAVE_CDImode
  CTImode,                 /* machmode.def:245 */
#define HAVE_CTImode
  SCmode,                  /* machmode.def:246 */
#define HAVE_SCmode
  DCmode,                  /* machmode.def:246 */
#define HAVE_DCmode
  ICmode,                  /* machmode.def:246 */
#define HAVE_ICmode
  KCmode,                  /* machmode.def:246 */
#define HAVE_KCmode
  TCmode,                  /* machmode.def:246 */
#define HAVE_TCmode
  V8QImode,                /* config/rs6000/rs6000-modes.def:44 */
#define HAVE_V8QImode
  V4HImode,                /* config/rs6000/rs6000-modes.def:44 */
#define HAVE_V4HImode
  V2SImode,                /* config/rs6000/rs6000-modes.def:44 */
#define HAVE_V2SImode
  V1DImode,                /* config/rs6000/rs6000-modes.def:47 */
#define HAVE_V1DImode
  V16QImode,               /* config/rs6000/rs6000-modes.def:45 */
#define HAVE_V16QImode
  V8HImode,                /* config/rs6000/rs6000-modes.def:45 */
#define HAVE_V8HImode
  V4SImode,                /* config/rs6000/rs6000-modes.def:45 */
#define HAVE_V4SImode
  V2DImode,                /* config/rs6000/rs6000-modes.def:45 */
#define HAVE_V2DImode
  V1TImode,                /* config/rs6000/rs6000-modes.def:48 */
#define HAVE_V1TImode
  V32QImode,               /* config/rs6000/rs6000-modes.def:46 */
#define HAVE_V32QImode
  V16HImode,               /* config/rs6000/rs6000-modes.def:46 */
#define HAVE_V16HImode
  V8SImode,                /* config/rs6000/rs6000-modes.def:46 */
#define HAVE_V8SImode
  V4DImode,                /* config/rs6000/rs6000-modes.def:46 */
#define HAVE_V4DImode
  V2TImode,                /* config/rs6000/rs6000-modes.def:46 */
#define HAVE_V2TImode
  V2SFmode,                /* config/rs6000/rs6000-modes.def:49 */
#define HAVE_V2SFmode
  V4SFmode,                /* config/rs6000/rs6000-modes.def:50 */
#define HAVE_V4SFmode
  V2DFmode,                /* config/rs6000/rs6000-modes.def:50 */
#define HAVE_V2DFmode
  V2IFmode,                /* config/rs6000/rs6000-modes.def:51 */
#define HAVE_V2IFmode
  V2KFmode,                /* config/rs6000/rs6000-modes.def:51 */
#define HAVE_V2KFmode
  V8SFmode,                /* config/rs6000/rs6000-modes.def:51 */
#define HAVE_V8SFmode
  V4DFmode,                /* config/rs6000/rs6000-modes.def:51 */
#define HAVE_V4DFmode
  V2TFmode,                /* config/rs6000/rs6000-modes.def:51 */
#define HAVE_V2TFmode
  MAX_MACHINE_MODE,

  MIN_MODE_RANDOM = VOIDmode,
  MAX_MODE_RANDOM = BLKmode,

  MIN_MODE_CC = CCmode,
  MAX_MODE_CC = CCEQmode,

  MIN_MODE_INT = QImode,
  MAX_MODE_INT = TImode,

  MIN_MODE_PARTIAL_INT = PTImode,
  MAX_MODE_PARTIAL_INT = PTImode,

  MIN_MODE_POINTER_BOUNDS = VOIDmode,
  MAX_MODE_POINTER_BOUNDS = VOIDmode,

  MIN_MODE_FRACT = QQmode,
  MAX_MODE_FRACT = TQmode,

  MIN_MODE_UFRACT = UQQmode,
  MAX_MODE_UFRACT = UTQmode,

  MIN_MODE_ACCUM = HAmode,
  MAX_MODE_ACCUM = TAmode,

  MIN_MODE_UACCUM = UHAmode,
  MAX_MODE_UACCUM = UTAmode,

  MIN_MODE_FLOAT = SFmode,
  MAX_MODE_FLOAT = TFmode,

  MIN_MODE_DECIMAL_FLOAT = SDmode,
  MAX_MODE_DECIMAL_FLOAT = TDmode,

  MIN_MODE_COMPLEX_INT = CQImode,
  MAX_MODE_COMPLEX_INT = CTImode,

  MIN_MODE_COMPLEX_FLOAT = SCmode,
  MAX_MODE_COMPLEX_FLOAT = TCmode,

  MIN_MODE_VECTOR_INT = V8QImode,
  MAX_MODE_VECTOR_INT = V2TImode,

  MIN_MODE_VECTOR_FRACT = VOIDmode,
  MAX_MODE_VECTOR_FRACT = VOIDmode,

  MIN_MODE_VECTOR_UFRACT = VOIDmode,
  MAX_MODE_VECTOR_UFRACT = VOIDmode,

  MIN_MODE_VECTOR_ACCUM = VOIDmode,
  MAX_MODE_VECTOR_ACCUM = VOIDmode,

  MIN_MODE_VECTOR_UACCUM = VOIDmode,
  MAX_MODE_VECTOR_UACCUM = VOIDmode,

  MIN_MODE_VECTOR_FLOAT = V2SFmode,
  MAX_MODE_VECTOR_FLOAT = V2TFmode,

  NUM_MACHINE_MODES = MAX_MACHINE_MODE
};

#define CONST_MODE_SIZE const
#define CONST_MODE_UNIT_SIZE const
#define CONST_MODE_BASE_ALIGN const
#define CONST_MODE_IBIT const
#define CONST_MODE_FBIT const

#define BITS_PER_UNIT (8)
#define MAX_BITSIZE_MODE_ANY_INT (16*BITS_PER_UNIT)
#define MAX_BITSIZE_MODE_ANY_MODE (32*BITS_PER_UNIT)
#define NUM_INT_N_ENTS 1

#if !defined (USED_FOR_TARGET) && GCC_VERSION >= 4001

#ifdef __cplusplus
inline __attribute__((__always_inline__))
#else
extern __inline__ __attribute__((__always_inline__, __gnu_inline__))
#endif
unsigned short
mode_size_inline (machine_mode mode)
{
  extern const unsigned short mode_size[NUM_MACHINE_MODES];
  gcc_assert (mode >= 0 && mode < NUM_MACHINE_MODES);
  switch (mode)
    {
    case VOIDmode: return 0;
    case BLKmode: return 0;
    case CCmode: return 4;
    case CCUNSmode: return 4;
    case CCFPmode: return 4;
    case CCEQmode: return 4;
    case BImode: return 1;
    case QImode: return 1;
    case HImode: return 2;
    case SImode: return 4;
    case DImode: return 8;
    case TImode: return 16;
    case PTImode: return 16;
    case QQmode: return 1;
    case HQmode: return 2;
    case SQmode: return 4;
    case DQmode: return 8;
    case TQmode: return 16;
    case UQQmode: return 1;
    case UHQmode: return 2;
    case USQmode: return 4;
    case UDQmode: return 8;
    case UTQmode: return 16;
    case HAmode: return 2;
    case SAmode: return 4;
    case DAmode: return 8;
    case TAmode: return 16;
    case UHAmode: return 2;
    case USAmode: return 4;
    case UDAmode: return 8;
    case UTAmode: return 16;
    case SFmode: return 4;
    case DFmode: return 8;
    case IFmode: return 16;
    case KFmode: return 16;
    case TFmode: return 16;
    case SDmode: return 4;
    case DDmode: return 8;
    case TDmode: return 16;
    case CQImode: return 2;
    case CHImode: return 4;
    case CSImode: return 8;
    case CDImode: return 16;
    case CTImode: return 32;
    case SCmode: return 8;
    case DCmode: return 16;
    case ICmode: return 32;
    case KCmode: return 32;
    case TCmode: return 32;
    case V8QImode: return 8;
    case V4HImode: return 8;
    case V2SImode: return 8;
    case V1DImode: return 8;
    case V16QImode: return 16;
    case V8HImode: return 16;
    case V4SImode: return 16;
    case V2DImode: return 16;
    case V1TImode: return 16;
    case V32QImode: return 32;
    case V16HImode: return 32;
    case V8SImode: return 32;
    case V4DImode: return 32;
    case V2TImode: return 32;
    case V2SFmode: return 8;
    case V4SFmode: return 16;
    case V2DFmode: return 16;
    case V2IFmode: return 32;
    case V2KFmode: return 32;
    case V8SFmode: return 32;
    case V4DFmode: return 32;
    case V2TFmode: return 32;
    default: return mode_size[mode];
    }
}

#ifdef __cplusplus
inline __attribute__((__always_inline__))
#else
extern __inline__ __attribute__((__always_inline__, __gnu_inline__))
#endif
unsigned char
mode_nunits_inline (machine_mode mode)
{
  extern const unsigned char mode_nunits[NUM_MACHINE_MODES];
  gcc_assert (mode >= 0 && mode < NUM_MACHINE_MODES);
  switch (mode)
    {
    case VOIDmode: return 0;
    case BLKmode: return 0;
    case CCmode: return 1;
    case CCUNSmode: return 1;
    case CCFPmode: return 1;
    case CCEQmode: return 1;
    case BImode: return 1;
    case QImode: return 1;
    case HImode: return 1;
    case SImode: return 1;
    case DImode: return 1;
    case TImode: return 1;
    case PTImode: return 1;
    case QQmode: return 1;
    case HQmode: return 1;
    case SQmode: return 1;
    case DQmode: return 1;
    case TQmode: return 1;
    case UQQmode: return 1;
    case UHQmode: return 1;
    case USQmode: return 1;
    case UDQmode: return 1;
    case UTQmode: return 1;
    case HAmode: return 1;
    case SAmode: return 1;
    case DAmode: return 1;
    case TAmode: return 1;
    case UHAmode: return 1;
    case USAmode: return 1;
    case UDAmode: return 1;
    case UTAmode: return 1;
    case SFmode: return 1;
    case DFmode: return 1;
    case IFmode: return 1;
    case KFmode: return 1;
    case TFmode: return 1;
    case SDmode: return 1;
    case DDmode: return 1;
    case TDmode: return 1;
    case CQImode: return 2;
    case CHImode: return 2;
    case CSImode: return 2;
    case CDImode: return 2;
    case CTImode: return 2;
    case SCmode: return 2;
    case DCmode: return 2;
    case ICmode: return 2;
    case KCmode: return 2;
    case TCmode: return 2;
    case V8QImode: return 8;
    case V4HImode: return 4;
    case V2SImode: return 2;
    case V1DImode: return 1;
    case V16QImode: return 16;
    case V8HImode: return 8;
    case V4SImode: return 4;
    case V2DImode: return 2;
    case V1TImode: return 1;
    case V32QImode: return 32;
    case V16HImode: return 16;
    case V8SImode: return 8;
    case V4DImode: return 4;
    case V2TImode: return 2;
    case V2SFmode: return 2;
    case V4SFmode: return 4;
    case V2DFmode: return 2;
    case V2IFmode: return 2;
    case V2KFmode: return 2;
    case V8SFmode: return 8;
    case V4DFmode: return 4;
    case V2TFmode: return 2;
    default: return mode_nunits[mode];
    }
}

#ifdef __cplusplus
inline __attribute__((__always_inline__))
#else
extern __inline__ __attribute__((__always_inline__, __gnu_inline__))
#endif
unsigned char
mode_inner_inline (machine_mode mode)
{
  extern const unsigned char mode_inner[NUM_MACHINE_MODES];
  gcc_assert (mode >= 0 && mode < NUM_MACHINE_MODES);
  switch (mode)
    {
    case VOIDmode: return VOIDmode;
    case BLKmode: return BLKmode;
    case CCmode: return CCmode;
    case CCUNSmode: return CCUNSmode;
    case CCFPmode: return CCFPmode;
    case CCEQmode: return CCEQmode;
    case BImode: return BImode;
    case QImode: return QImode;
    case HImode: return HImode;
    case SImode: return SImode;
    case DImode: return DImode;
    case TImode: return TImode;
    case PTImode: return PTImode;
    case QQmode: return QQmode;
    case HQmode: return HQmode;
    case SQmode: return SQmode;
    case DQmode: return DQmode;
    case TQmode: return TQmode;
    case UQQmode: return UQQmode;
    case UHQmode: return UHQmode;
    case USQmode: return USQmode;
    case UDQmode: return UDQmode;
    case UTQmode: return UTQmode;
    case HAmode: return HAmode;
    case SAmode: return SAmode;
    case DAmode: return DAmode;
    case TAmode: return TAmode;
    case UHAmode: return UHAmode;
    case USAmode: return USAmode;
    case UDAmode: return UDAmode;
    case UTAmode: return UTAmode;
    case SFmode: return SFmode;
    case DFmode: return DFmode;
    case IFmode: return IFmode;
    case KFmode: return KFmode;
    case TFmode: return TFmode;
    case SDmode: return SDmode;
    case DDmode: return DDmode;
    case TDmode: return TDmode;
    case CQImode: return QImode;
    case CHImode: return HImode;
    case CSImode: return SImode;
    case CDImode: return DImode;
    case CTImode: return TImode;
    case SCmode: return SFmode;
    case DCmode: return DFmode;
    case ICmode: return IFmode;
    case KCmode: return KFmode;
    case TCmode: return TFmode;
    case V8QImode: return QImode;
    case V4HImode: return HImode;
    case V2SImode: return SImode;
    case V1DImode: return DImode;
    case V16QImode: return QImode;
    case V8HImode: return HImode;
    case V4SImode: return SImode;
    case V2DImode: return DImode;
    case V1TImode: return TImode;
    case V32QImode: return QImode;
    case V16HImode: return HImode;
    case V8SImode: return SImode;
    case V4DImode: return DImode;
    case V2TImode: return TImode;
    case V2SFmode: return SFmode;
    case V4SFmode: return SFmode;
    case V2DFmode: return DFmode;
    case V2IFmode: return IFmode;
    case V2KFmode: return KFmode;
    case V8SFmode: return SFmode;
    case V4DFmode: return DFmode;
    case V2TFmode: return TFmode;
    default: return mode_inner[mode];
    }
}

#ifdef __cplusplus
inline __attribute__((__always_inline__))
#else
extern __inline__ __attribute__((__always_inline__, __gnu_inline__))
#endif
unsigned char
mode_unit_size_inline (machine_mode mode)
{
  extern CONST_MODE_UNIT_SIZE unsigned char mode_unit_size[NUM_MACHINE_MODES];
  gcc_assert (mode >= 0 && mode < NUM_MACHINE_MODES);
  switch (mode)
    {
    case VOIDmode: return 0;
    case BLKmode: return 0;
    case CCmode: return 4;
    case CCUNSmode: return 4;
    case CCFPmode: return 4;
    case CCEQmode: return 4;
    case BImode: return 1;
    case QImode: return 1;
    case HImode: return 2;
    case SImode: return 4;
    case DImode: return 8;
    case TImode: return 16;
    case PTImode: return 16;
    case QQmode: return 1;
    case HQmode: return 2;
    case SQmode: return 4;
    case DQmode: return 8;
    case TQmode: return 16;
    case UQQmode: return 1;
    case UHQmode: return 2;
    case USQmode: return 4;
    case UDQmode: return 8;
    case UTQmode: return 16;
    case HAmode: return 2;
    case SAmode: return 4;
    case DAmode: return 8;
    case TAmode: return 16;
    case UHAmode: return 2;
    case USAmode: return 4;
    case UDAmode: return 8;
    case UTAmode: return 16;
    case SFmode: return 4;
    case DFmode: return 8;
    case IFmode: return 16;
    case KFmode: return 16;
    case TFmode: return 16;
    case SDmode: return 4;
    case DDmode: return 8;
    case TDmode: return 16;
    case CQImode: return 1;
    case CHImode: return 2;
    case CSImode: return 4;
    case CDImode: return 8;
    case CTImode: return 16;
    case SCmode: return 4;
    case DCmode: return 8;
    case ICmode: return 16;
    case KCmode: return 16;
    case TCmode: return 16;
    case V8QImode: return 1;
    case V4HImode: return 2;
    case V2SImode: return 4;
    case V1DImode: return 8;
    case V16QImode: return 1;
    case V8HImode: return 2;
    case V4SImode: return 4;
    case V2DImode: return 8;
    case V1TImode: return 16;
    case V32QImode: return 1;
    case V16HImode: return 2;
    case V8SImode: return 4;
    case V4DImode: return 8;
    case V2TImode: return 16;
    case V2SFmode: return 4;
    case V4SFmode: return 4;
    case V2DFmode: return 8;
    case V2IFmode: return 16;
    case V2KFmode: return 16;
    case V8SFmode: return 4;
    case V4DFmode: return 8;
    case V2TFmode: return 16;
    default: return mode_unit_size[mode];
    }
}

#ifdef __cplusplus
inline __attribute__((__always_inline__))
#else
extern __inline__ __attribute__((__always_inline__, __gnu_inline__))
#endif
unsigned short
mode_unit_precision_inline (machine_mode mode)
{
  extern const unsigned short mode_unit_precision[NUM_MACHINE_MODES];
  gcc_assert (mode >= 0 && mode < NUM_MACHINE_MODES);
  switch (mode)
    {
    case VOIDmode: return 0;
    case BLKmode: return 0;
    case CCmode: return 4*BITS_PER_UNIT;
    case CCUNSmode: return 4*BITS_PER_UNIT;
    case CCFPmode: return 4*BITS_PER_UNIT;
    case CCEQmode: return 4*BITS_PER_UNIT;
    case BImode: return 1;
    case QImode: return 1*BITS_PER_UNIT;
    case HImode: return 2*BITS_PER_UNIT;
    case SImode: return 4*BITS_PER_UNIT;
    case DImode: return 8*BITS_PER_UNIT;
    case TImode: return 16*BITS_PER_UNIT;
    case PTImode: return 128;
    case QQmode: return 1*BITS_PER_UNIT;
    case HQmode: return 2*BITS_PER_UNIT;
    case SQmode: return 4*BITS_PER_UNIT;
    case DQmode: return 8*BITS_PER_UNIT;
    case TQmode: return 16*BITS_PER_UNIT;
    case UQQmode: return 1*BITS_PER_UNIT;
    case UHQmode: return 2*BITS_PER_UNIT;
    case USQmode: return 4*BITS_PER_UNIT;
    case UDQmode: return 8*BITS_PER_UNIT;
    case UTQmode: return 16*BITS_PER_UNIT;
    case HAmode: return 2*BITS_PER_UNIT;
    case SAmode: return 4*BITS_PER_UNIT;
    case DAmode: return 8*BITS_PER_UNIT;
    case TAmode: return 16*BITS_PER_UNIT;
    case UHAmode: return 2*BITS_PER_UNIT;
    case USAmode: return 4*BITS_PER_UNIT;
    case UDAmode: return 8*BITS_PER_UNIT;
    case UTAmode: return 16*BITS_PER_UNIT;
    case SFmode: return 4*BITS_PER_UNIT;
    case DFmode: return 8*BITS_PER_UNIT;
    case IFmode: return 106;
    case KFmode: return 113;
    case TFmode: return 16*BITS_PER_UNIT;
    case SDmode: return 4*BITS_PER_UNIT;
    case DDmode: return 8*BITS_PER_UNIT;
    case TDmode: return 16*BITS_PER_UNIT;
    case CQImode: return 1*BITS_PER_UNIT;
    case CHImode: return 2*BITS_PER_UNIT;
    case CSImode: return 4*BITS_PER_UNIT;
    case CDImode: return 8*BITS_PER_UNIT;
    case CTImode: return 16*BITS_PER_UNIT;
    case SCmode: return 4*BITS_PER_UNIT;
    case DCmode: return 8*BITS_PER_UNIT;
    case ICmode: return 106;
    case KCmode: return 113;
    case TCmode: return 16*BITS_PER_UNIT;
    case V8QImode: return 1*BITS_PER_UNIT;
    case V4HImode: return 2*BITS_PER_UNIT;
    case V2SImode: return 4*BITS_PER_UNIT;
    case V1DImode: return 8*BITS_PER_UNIT;
    case V16QImode: return 1*BITS_PER_UNIT;
    case V8HImode: return 2*BITS_PER_UNIT;
    case V4SImode: return 4*BITS_PER_UNIT;
    case V2DImode: return 8*BITS_PER_UNIT;
    case V1TImode: return 16*BITS_PER_UNIT;
    case V32QImode: return 1*BITS_PER_UNIT;
    case V16HImode: return 2*BITS_PER_UNIT;
    case V8SImode: return 4*BITS_PER_UNIT;
    case V4DImode: return 8*BITS_PER_UNIT;
    case V2TImode: return 16*BITS_PER_UNIT;
    case V2SFmode: return 4*BITS_PER_UNIT;
    case V4SFmode: return 4*BITS_PER_UNIT;
    case V2DFmode: return 8*BITS_PER_UNIT;
    case V2IFmode: return 106;
    case V2KFmode: return 113;
    case V8SFmode: return 4*BITS_PER_UNIT;
    case V4DFmode: return 8*BITS_PER_UNIT;
    case V2TFmode: return 16*BITS_PER_UNIT;
    default: return mode_unit_precision[mode];
    }
}

#endif /* GCC_VERSION >= 4001 */

#endif /* insn-modes.h */
