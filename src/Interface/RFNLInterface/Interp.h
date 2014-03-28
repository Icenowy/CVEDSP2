#include <RFNL.h>

typedef void (*_CDSP2_FP_GPK_Float_Float)
    (PMatch_Float_Float*, float*, int, int);
typedef void (*_CDSP2_FP_GPK_Float_Double)
    (PMatch_Float_Double*, double*, int, int);
typedef void (*_CDSP2_FP_GPK_Double_Float)
    (PMatch_Double_Float*, float*, int, int);
typedef void (*_CDSP2_FP_GPK_Double_Double)
    (PMatch_Double_Double*, double*, int, int);

typedef void (*_CDSP2_FP_RSP_Float) (float* , float* , int, int);
typedef void (*_CDSP2_FP_RSP_Double)(double*, double*, int, int);

_CDSP2_FP_GPK_Float_Float   CDSP2_GenPeak_Float_Float;
_CDSP2_FP_GPK_Float_Double  CDSP2_GenPeak_Float_Double;
_CDSP2_FP_GPK_Double_Float  CDSP2_GenPeak_Double_Float;
_CDSP2_FP_GPK_Double_Double CDSP2_GenPeak_Double_Double;

_CDSP2_FP_RSP_Float  CDSP2_Resample_Non_Float;
_CDSP2_FP_RSP_Float  CDSP2_Resample_Linear_Float;
_CDSP2_FP_RSP_Float  CDSP2_Resample_Cosine_Float;

_CDSP2_FP_RSP_Double  CDSP2_Resample_Non_Double;
_CDSP2_FP_RSP_Double  CDSP2_Resample_Linear_Double;
_CDSP2_FP_RSP_Double  CDSP2_Resample_Cosine_Double;

typedef void (*_CDSP2_FP_MPS_Float_Float)
    (float* , float* , float* , float* , int, int);
typedef void (*_CDSP2_FP_MPS_Float_Double)
    (double*, double*, float* , float* , int, int);
typedef void (*_CDSP2_FP_MPS_Double_Float)
    (float* , float* , double*, double*, int, int);
typedef void (*_CDSP2_FP_MPS_Double_Double)
    (double*, double*, double*, double*, int, int);

#define __CDSP2_Define_FP_MPS(Type) \
    _CDSP2_FP_MPS_##Type CDSP2_MapStretch_Non_##Type; \
    _CDSP2_FP_MPS_##Type CDSP2_MapStretch_Linear_##Type; \
    _CDSP2_FP_MPS_##Type CDSP2_MapStretch_Cosine_##Type;

__CDSP2_Define_FP_MPS(Float_Float);
__CDSP2_Define_FP_MPS(Float_Double);
__CDSP2_Define_FP_MPS(Double_Float);
__CDSP2_Define_FP_MPS(Double_Double);

typedef void (*_CDSP2_FP_MINP_Float_Float)
    (float* , PMatch_Float_Float*  , float , int);
typedef void (*_CDSP2_FP_MINP_Float_Double)
    (double*, PMatch_Float_Double* , double, int);
typedef void (*_CDSP2_FP_MINP_Double_Float)
    (float* , PMatch_Double_Float* , float , int);
typedef void (*_CDSP2_FP_MINP_Double_Double)
    (double*, PMatch_Double_Double*, double, int);

#define __CDSP2_Define_FP_MINP(Type) \
    _CDSP2_FP_MINP_##Type CDSP2_MatchInterp_Non_##Type; \
    _CDSP2_FP_MINP_##Type CDSP2_MatchInterp_Linear_##Type; \
    _CDSP2_FP_MINP_##Type CDSP2_MatchInterp_Cosine_##Type;

__CDSP2_Define_FP_MINP(Float_Float);
__CDSP2_Define_FP_MINP(Float_Double);
__CDSP2_Define_FP_MINP(Double_Float);
__CDSP2_Define_FP_MINP(Double_Double);

