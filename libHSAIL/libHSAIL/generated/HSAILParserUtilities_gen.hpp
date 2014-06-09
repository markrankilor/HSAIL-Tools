// University of Illinois/NCSA
// Open Source License
//
// Copyright (c) 2013, Advanced Micro Devices, Inc.
// All rights reserved.
//
// Developed by:
//
//     HSA Team
//
//     Advanced Micro Devices, Inc
//
//     www.amd.com
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal with
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
// of the Software, and to permit persons to whom the Software is furnished to do
// so, subject to the following conditions:
//
//     * Redistributions of source code must retain the above copyright notice,
//       this list of conditions and the following disclaimers.
//
//     * Redistributions in binary form must reproduce the above copyright notice,
//       this list of conditions and the following disclaimers in the
//       documentation and/or other materials provided with the distribution.
//
//     * Neither the names of the LLVM Team, University of Illinois at
//       Urbana-Champaign, nor the names of its contributors may be used to
//       endorse or promote products derived from this Software without specific
//       prior written permission.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
// CONTRIBUTORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS WITH THE
// SOFTWARE.
Parser::OperandParser Parser::getOperandParser(Brig::BrigOpcode16_t arg) {
  using namespace Brig;
  switch( arg ) {
    case BRIG_OPCODE_ABS                : return &Parser::parseOperands;
    case BRIG_OPCODE_ACTIVELANECOUNT    : return &Parser::parseOperands;
    case BRIG_OPCODE_ACTIVELANEID       : return &Parser::parseOperands;
    case BRIG_OPCODE_ACTIVELANEMASK     : return &Parser::parseOperands;
    case BRIG_OPCODE_ACTIVELANESHUFFLE  : return &Parser::parseOperands;
    case BRIG_OPCODE_ADD                : return &Parser::parseOperands;
    case BRIG_OPCODE_ADDQUEUEWRITEINDEX : return &Parser::parseOperands;
    case BRIG_OPCODE_ALLOCA             : return &Parser::parseOperands;
    case BRIG_OPCODE_AND                : return &Parser::parseOperands;
    case BRIG_OPCODE_ARRIVEFBAR         : return &Parser::parseOperands;
    case BRIG_OPCODE_ATOMIC             : return &Parser::parseOperands;
    case BRIG_OPCODE_ATOMICIMAGE        : return &Parser::parseOperands;
    case BRIG_OPCODE_ATOMICIMAGENORET   : return &Parser::parseOperands;
    case BRIG_OPCODE_ATOMICNORET        : return &Parser::parseOperands;
    case BRIG_OPCODE_BARRIER            : return &Parser::parseOperands;
    case BRIG_OPCODE_BITALIGN           : return &Parser::parseOperands;
    case BRIG_OPCODE_BITEXTRACT         : return &Parser::parseOperands;
    case BRIG_OPCODE_BITINSERT          : return &Parser::parseOperands;
    case BRIG_OPCODE_BITMASK            : return &Parser::parseOperands;
    case BRIG_OPCODE_BITREV             : return &Parser::parseOperands;
    case BRIG_OPCODE_BITSELECT          : return &Parser::parseOperands;
    case BRIG_OPCODE_BORROW             : return &Parser::parseOperands;
    case BRIG_OPCODE_BRN                : return &Parser::parseOperands;
    case BRIG_OPCODE_BYTEALIGN          : return &Parser::parseOperands;
    case BRIG_OPCODE_CALL               : return &Parser::parseCallOperands;
    case BRIG_OPCODE_CARRY              : return &Parser::parseOperands;
    case BRIG_OPCODE_CASQUEUEWRITEINDEX : return &Parser::parseOperands;
    case BRIG_OPCODE_CBR                : return &Parser::parseOperands;
    case BRIG_OPCODE_CEIL               : return &Parser::parseOperands;
    case BRIG_OPCODE_CLASS              : return &Parser::parseOperands;
    case BRIG_OPCODE_CLEARDETECTEXCEPT  : return &Parser::parseOperands;
    case BRIG_OPCODE_CLOCK              : return &Parser::parseOperands;
    case BRIG_OPCODE_CMOV               : return &Parser::parseOperands;
    case BRIG_OPCODE_CMP                : return &Parser::parseOperands;
    case BRIG_OPCODE_CODEBLOCKEND       : return &Parser::parseOperands;
    case BRIG_OPCODE_COMBINE            : return &Parser::parseOperands;
    case BRIG_OPCODE_COPYSIGN           : return &Parser::parseOperands;
    case BRIG_OPCODE_CUID               : return &Parser::parseOperands;
    case BRIG_OPCODE_CURRENTWORKGROUPSIZE : return &Parser::parseOperands;
    case BRIG_OPCODE_CVT                : return &Parser::parseOperands;
    case BRIG_OPCODE_DEBUGTRAP          : return &Parser::parseOperands;
    case BRIG_OPCODE_DIM                : return &Parser::parseOperands;
    case BRIG_OPCODE_DIV                : return &Parser::parseOperands;
    case BRIG_OPCODE_EXPAND             : return &Parser::parseOperands;
    case BRIG_OPCODE_FIRSTBIT           : return &Parser::parseOperands;
    case BRIG_OPCODE_FLOOR              : return &Parser::parseOperands;
    case BRIG_OPCODE_FMA                : return &Parser::parseOperands;
    case BRIG_OPCODE_FRACT              : return &Parser::parseOperands;
    case BRIG_OPCODE_FTOS               : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNAPPEND          : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNATOMIC          : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNATOMICNORET     : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNB32XCHG         : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNB4XCHG          : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNBFM             : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNCONSUME         : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNFLDEXP          : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNFREXP_EXP       : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNFREXP_MANT      : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNLD              : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNMADS            : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNMADU            : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNMAX             : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNMAX3            : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNMED3            : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNMIN             : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNMIN3            : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNMQSAD           : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNMQSAD4          : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNMSAD            : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNPRIORITY        : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNQSAD            : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNREGIONALLOC     : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNSADD            : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNSADW            : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNSLEEP           : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNST              : return &Parser::parseOperands;
    case BRIG_OPCODE_GCNTRIG_PREOP      : return &Parser::parseOperands;
    case BRIG_OPCODE_GETDETECTEXCEPT    : return &Parser::parseOperands;
    case BRIG_OPCODE_GRIDGROUPS         : return &Parser::parseOperands;
    case BRIG_OPCODE_GRIDSIZE           : return &Parser::parseOperands;
    case BRIG_OPCODE_INITFBAR           : return &Parser::parseOperands;
    case BRIG_OPCODE_JOINFBAR           : return &Parser::parseOperands;
    case BRIG_OPCODE_LANEID             : return &Parser::parseOperands;
    case BRIG_OPCODE_LASTBIT            : return &Parser::parseOperands;
    case BRIG_OPCODE_LD                 : return &Parser::parseOperands;
    case BRIG_OPCODE_LDA                : return &Parser::parseOperands;
    case BRIG_OPCODE_LDC                : return &Parser::parseOperands;
    case BRIG_OPCODE_LDF                : return &Parser::parseOperands;
    case BRIG_OPCODE_LDIMAGE            : return &Parser::parseOperands;
    case BRIG_OPCODE_LDQUEUEREADINDEX   : return &Parser::parseOperands;
    case BRIG_OPCODE_LDQUEUEWRITEINDEX  : return &Parser::parseOperands;
    case BRIG_OPCODE_LEAVEFBAR          : return &Parser::parseOperands;
    case BRIG_OPCODE_LERP               : return &Parser::parseOperands;
    case BRIG_OPCODE_MAD                : return &Parser::parseOperands;
    case BRIG_OPCODE_MAD24              : return &Parser::parseOperands;
    case BRIG_OPCODE_MAD24HI            : return &Parser::parseOperands;
    case BRIG_OPCODE_MAX                : return &Parser::parseOperands;
    case BRIG_OPCODE_MAXCUID            : return &Parser::parseOperands;
    case BRIG_OPCODE_MAXWAVEID          : return &Parser::parseOperands;
    case BRIG_OPCODE_MEMFENCE           : return &Parser::parseOperands;
    case BRIG_OPCODE_MIN                : return &Parser::parseOperands;
    case BRIG_OPCODE_MOV                : return &Parser::parseOperands;
    case BRIG_OPCODE_MUL                : return &Parser::parseOperands;
    case BRIG_OPCODE_MUL24              : return &Parser::parseOperands;
    case BRIG_OPCODE_MUL24HI            : return &Parser::parseOperands;
    case BRIG_OPCODE_MULHI              : return &Parser::parseOperands;
    case BRIG_OPCODE_NCOS               : return &Parser::parseOperands;
    case BRIG_OPCODE_NEG                : return &Parser::parseOperands;
    case BRIG_OPCODE_NEXP2              : return &Parser::parseOperands;
    case BRIG_OPCODE_NFMA               : return &Parser::parseOperands;
    case BRIG_OPCODE_NLOG2              : return &Parser::parseOperands;
    case BRIG_OPCODE_NOP                : return &Parser::parseNoOperands;
    case BRIG_OPCODE_NOT                : return &Parser::parseOperands;
    case BRIG_OPCODE_NRCP               : return &Parser::parseOperands;
    case BRIG_OPCODE_NRSQRT             : return &Parser::parseOperands;
    case BRIG_OPCODE_NSIN               : return &Parser::parseOperands;
    case BRIG_OPCODE_NSQRT              : return &Parser::parseOperands;
    case BRIG_OPCODE_NULLPTR            : return &Parser::parseOperands;
    case BRIG_OPCODE_OR                 : return &Parser::parseOperands;
    case BRIG_OPCODE_PACK               : return &Parser::parseOperands;
    case BRIG_OPCODE_PACKCVT            : return &Parser::parseOperands;
    case BRIG_OPCODE_PACKETCOMPLETIONSIG : return &Parser::parseOperands;
    case BRIG_OPCODE_PACKETID           : return &Parser::parseOperands;
    case BRIG_OPCODE_POPCOUNT           : return &Parser::parseOperands;
    case BRIG_OPCODE_QUERYIMAGEARRAY    : return &Parser::parseOperands;
    case BRIG_OPCODE_QUERYIMAGEDEPTH    : return &Parser::parseOperands;
    case BRIG_OPCODE_QUERYIMAGEFORMAT   : return &Parser::parseOperands;
    case BRIG_OPCODE_QUERYIMAGEHEIGHT   : return &Parser::parseOperands;
    case BRIG_OPCODE_QUERYIMAGEORDER    : return &Parser::parseOperands;
    case BRIG_OPCODE_QUERYIMAGEWIDTH    : return &Parser::parseOperands;
    case BRIG_OPCODE_QUERYSAMPLERBOUNDARY : return &Parser::parseOperands;
    case BRIG_OPCODE_QUERYSAMPLERCOORD  : return &Parser::parseOperands;
    case BRIG_OPCODE_QUERYSAMPLERFILTER : return &Parser::parseOperands;
    case BRIG_OPCODE_QUEUEID            : return &Parser::parseOperands;
    case BRIG_OPCODE_QUEUEPTR           : return &Parser::parseOperands;
    case BRIG_OPCODE_RDIMAGE            : return &Parser::parseOperands;
    case BRIG_OPCODE_RELEASEFBAR        : return &Parser::parseOperands;
    case BRIG_OPCODE_REM                : return &Parser::parseOperands;
    case BRIG_OPCODE_RET                : return &Parser::parseOperands;
    case BRIG_OPCODE_RINT               : return &Parser::parseOperands;
    case BRIG_OPCODE_SAD                : return &Parser::parseOperands;
    case BRIG_OPCODE_SADHI              : return &Parser::parseOperands;
    case BRIG_OPCODE_SEGMENTP           : return &Parser::parseOperands;
    case BRIG_OPCODE_SERVICEQUEUEPTR    : return &Parser::parseOperands;
    case BRIG_OPCODE_SETDETECTEXCEPT    : return &Parser::parseOperands;
    case BRIG_OPCODE_SHL                : return &Parser::parseOperands;
    case BRIG_OPCODE_SHR                : return &Parser::parseOperands;
    case BRIG_OPCODE_SHUFFLE            : return &Parser::parseOperands;
    case BRIG_OPCODE_SIGNAL             : return &Parser::parseOperands;
    case BRIG_OPCODE_SIGNALNORET        : return &Parser::parseOperands;
    case BRIG_OPCODE_SQRT               : return &Parser::parseOperands;
    case BRIG_OPCODE_ST                 : return &Parser::parseOperands;
    case BRIG_OPCODE_STIMAGE            : return &Parser::parseOperands;
    case BRIG_OPCODE_STOF               : return &Parser::parseOperands;
    case BRIG_OPCODE_STQUEUEWRITEINDEX  : return &Parser::parseOperands;
    case BRIG_OPCODE_SUB                : return &Parser::parseOperands;
    case BRIG_OPCODE_TRUNC              : return &Parser::parseOperands;
    case BRIG_OPCODE_UNPACK             : return &Parser::parseOperands;
    case BRIG_OPCODE_UNPACKCVT          : return &Parser::parseOperands;
    case BRIG_OPCODE_UNPACKHI           : return &Parser::parseOperands;
    case BRIG_OPCODE_UNPACKLO           : return &Parser::parseOperands;
    case BRIG_OPCODE_WAITFBAR           : return &Parser::parseOperands;
    case BRIG_OPCODE_WAVEBARRIER        : return &Parser::parseOperands;
    case BRIG_OPCODE_WAVEID             : return &Parser::parseOperands;
    case BRIG_OPCODE_WORKGROUPID        : return &Parser::parseOperands;
    case BRIG_OPCODE_WORKGROUPSIZE      : return &Parser::parseOperands;
    case BRIG_OPCODE_WORKITEMABSID      : return &Parser::parseOperands;
    case BRIG_OPCODE_WORKITEMFLATABSID  : return &Parser::parseOperands;
    case BRIG_OPCODE_WORKITEMFLATID     : return &Parser::parseOperands;
    case BRIG_OPCODE_WORKITEMID         : return &Parser::parseOperands;
    case BRIG_OPCODE_XOR                : return &Parser::parseOperands;
    default : return NULL;
    }
}

OpcodeParser getOpcodeParser(Brig::BrigOpcode16_t arg) {
  using namespace Brig;
  switch( arg ) {
    case BRIG_OPCODE_ABS                : return parseMnemoBasicOrMod;
    case BRIG_OPCODE_ACTIVELANECOUNT    : return parseMnemoLane;
    case BRIG_OPCODE_ACTIVELANEID       : return parseMnemoLane;
    case BRIG_OPCODE_ACTIVELANEMASK     : return parseMnemoLane;
    case BRIG_OPCODE_ACTIVELANESHUFFLE  : return parseMnemoLane;
    case BRIG_OPCODE_ADD                : return parseMnemoBasicOrMod;
    case BRIG_OPCODE_ADDQUEUEWRITEINDEX : return parseMnemoQueue;
    case BRIG_OPCODE_ALLOCA             : return parseMnemoMem;
    case BRIG_OPCODE_AND                : return parseMnemoBasic;
    case BRIG_OPCODE_ARRIVEFBAR         : return parseMnemoBr;
    case BRIG_OPCODE_ATOMIC             : return parseMnemoAtomic;
    case BRIG_OPCODE_ATOMICIMAGE        : return parseMnemoAtomicImage;
    case BRIG_OPCODE_ATOMICIMAGENORET   : return parseMnemoAtomicImage;
    case BRIG_OPCODE_ATOMICNORET        : return parseMnemoAtomic;
    case BRIG_OPCODE_BARRIER            : return parseMnemoBr;
    case BRIG_OPCODE_BITALIGN           : return parseMnemoBasic;
    case BRIG_OPCODE_BITEXTRACT         : return parseMnemoBasic;
    case BRIG_OPCODE_BITINSERT          : return parseMnemoBasic;
    case BRIG_OPCODE_BITMASK            : return parseMnemoBasic;
    case BRIG_OPCODE_BITREV             : return parseMnemoBasic;
    case BRIG_OPCODE_BITSELECT          : return parseMnemoBasic;
    case BRIG_OPCODE_BORROW             : return parseMnemoBasic;
    case BRIG_OPCODE_BRN                : return parseMnemoBr;
    case BRIG_OPCODE_BYTEALIGN          : return parseMnemoBasic;
    case BRIG_OPCODE_CALL               : return parseMnemoBr;
    case BRIG_OPCODE_CARRY              : return parseMnemoBasic;
    case BRIG_OPCODE_CASQUEUEWRITEINDEX : return parseMnemoQueue;
    case BRIG_OPCODE_CBR                : return parseMnemoBr;
    case BRIG_OPCODE_CEIL               : return parseMnemoBasicOrMod;
    case BRIG_OPCODE_CLASS              : return parseMnemoSourceType;
    case BRIG_OPCODE_CLEARDETECTEXCEPT  : return parseMnemoBasic;
    case BRIG_OPCODE_CLOCK              : return parseMnemoBasic;
    case BRIG_OPCODE_CMOV               : return parseMnemoBasic;
    case BRIG_OPCODE_CMP                : return parseMnemoCmp;
    case BRIG_OPCODE_CODEBLOCKEND       : return parseMnemoBasicNoType;
    case BRIG_OPCODE_COMBINE            : return parseMnemoSourceType;
    case BRIG_OPCODE_COPYSIGN           : return parseMnemoBasicOrMod;
    case BRIG_OPCODE_CUID               : return parseMnemoBasic;
    case BRIG_OPCODE_CURRENTWORKGROUPSIZE : return parseMnemoBasic;
    case BRIG_OPCODE_CVT                : return parseMnemoCvt;
    case BRIG_OPCODE_DEBUGTRAP          : return parseMnemoBasic;
    case BRIG_OPCODE_DIM                : return parseMnemoBasic;
    case BRIG_OPCODE_DIV                : return parseMnemoBasicOrMod;
    case BRIG_OPCODE_EXPAND             : return parseMnemoSourceType;
    case BRIG_OPCODE_FIRSTBIT           : return parseMnemoSourceType;
    case BRIG_OPCODE_FLOOR              : return parseMnemoBasicOrMod;
    case BRIG_OPCODE_FMA                : return parseMnemoBasicOrMod;
    case BRIG_OPCODE_FRACT              : return parseMnemoBasicOrMod;
    case BRIG_OPCODE_FTOS               : return parseMnemoSegCvt;
    case BRIG_OPCODE_GCNAPPEND          : return parseMnemoAddr;
    case BRIG_OPCODE_GCNATOMIC          : return parseMnemoAtomic;
    case BRIG_OPCODE_GCNATOMICNORET     : return parseMnemoAtomic;
    case BRIG_OPCODE_GCNB32XCHG         : return parseMnemoBasic;
    case BRIG_OPCODE_GCNB4XCHG          : return parseMnemoBasic;
    case BRIG_OPCODE_GCNBFM             : return parseMnemoBasic;
    case BRIG_OPCODE_GCNCONSUME         : return parseMnemoAddr;
    case BRIG_OPCODE_GCNFLDEXP          : return parseMnemoBasic;
    case BRIG_OPCODE_GCNFREXP_EXP       : return parseMnemoBasic;
    case BRIG_OPCODE_GCNFREXP_MANT      : return parseMnemoBasic;
    case BRIG_OPCODE_GCNLD              : return parseMnemoMem;
    case BRIG_OPCODE_GCNMADS            : return parseMnemoBasicNoType;
    case BRIG_OPCODE_GCNMADU            : return parseMnemoBasicNoType;
    case BRIG_OPCODE_GCNMAX             : return parseMnemoBasic;
    case BRIG_OPCODE_GCNMAX3            : return parseMnemoBasic;
    case BRIG_OPCODE_GCNMED3            : return parseMnemoBasic;
    case BRIG_OPCODE_GCNMIN             : return parseMnemoBasic;
    case BRIG_OPCODE_GCNMIN3            : return parseMnemoBasic;
    case BRIG_OPCODE_GCNMQSAD           : return parseMnemoBasic;
    case BRIG_OPCODE_GCNMQSAD4          : return parseMnemoBasicNoType;
    case BRIG_OPCODE_GCNMSAD            : return parseMnemoBasic;
    case BRIG_OPCODE_GCNPRIORITY        : return parseMnemoBasic;
    case BRIG_OPCODE_GCNQSAD            : return parseMnemoBasic;
    case BRIG_OPCODE_GCNREGIONALLOC     : return parseMnemoBasicNoType;
    case BRIG_OPCODE_GCNSADD            : return parseMnemoBasic;
    case BRIG_OPCODE_GCNSADW            : return parseMnemoBasic;
    case BRIG_OPCODE_GCNSLEEP           : return parseMnemoBasic;
    case BRIG_OPCODE_GCNST              : return parseMnemoMem;
    case BRIG_OPCODE_GCNTRIG_PREOP      : return parseMnemoBasic;
    case BRIG_OPCODE_GETDETECTEXCEPT    : return parseMnemoBasic;
    case BRIG_OPCODE_GRIDGROUPS         : return parseMnemoBasic;
    case BRIG_OPCODE_GRIDSIZE           : return parseMnemoBasic;
    case BRIG_OPCODE_INITFBAR           : return parseMnemoBasicNoType;
    case BRIG_OPCODE_JOINFBAR           : return parseMnemoBr;
    case BRIG_OPCODE_LANEID             : return parseMnemoBasic;
    case BRIG_OPCODE_LASTBIT            : return parseMnemoSourceType;
    case BRIG_OPCODE_LD                 : return parseMnemoMem;
    case BRIG_OPCODE_LDA                : return parseMnemoAddr;
    case BRIG_OPCODE_LDC                : return parseMnemoBasic;
    case BRIG_OPCODE_LDF                : return parseMnemoBasic;
    case BRIG_OPCODE_LDIMAGE            : return parseMnemoImage;
    case BRIG_OPCODE_LDQUEUEREADINDEX   : return parseMnemoQueue;
    case BRIG_OPCODE_LDQUEUEWRITEINDEX  : return parseMnemoQueue;
    case BRIG_OPCODE_LEAVEFBAR          : return parseMnemoBr;
    case BRIG_OPCODE_LERP               : return parseMnemoBasic;
    case BRIG_OPCODE_MAD                : return parseMnemoBasic;
    case BRIG_OPCODE_MAD24              : return parseMnemoBasic;
    case BRIG_OPCODE_MAD24HI            : return parseMnemoBasic;
    case BRIG_OPCODE_MAX                : return parseMnemoBasicOrMod;
    case BRIG_OPCODE_MAXCUID            : return parseMnemoBasic;
    case BRIG_OPCODE_MAXWAVEID          : return parseMnemoBasic;
    case BRIG_OPCODE_MEMFENCE           : return parseMnemoMemFence;
    case BRIG_OPCODE_MIN                : return parseMnemoBasicOrMod;
    case BRIG_OPCODE_MOV                : return parseMnemoBasic;
    case BRIG_OPCODE_MUL                : return parseMnemoBasicOrMod;
    case BRIG_OPCODE_MUL24              : return parseMnemoBasic;
    case BRIG_OPCODE_MUL24HI            : return parseMnemoBasic;
    case BRIG_OPCODE_MULHI              : return parseMnemoBasicOrMod;
    case BRIG_OPCODE_NCOS               : return parseMnemoBasic;
    case BRIG_OPCODE_NEG                : return parseMnemoBasicOrMod;
    case BRIG_OPCODE_NEXP2              : return parseMnemoBasic;
    case BRIG_OPCODE_NFMA               : return parseMnemoBasic;
    case BRIG_OPCODE_NLOG2              : return parseMnemoBasic;
    case BRIG_OPCODE_NOP                : return parseMnemoNop;
    case BRIG_OPCODE_NOT                : return parseMnemoBasic;
    case BRIG_OPCODE_NRCP               : return parseMnemoBasic;
    case BRIG_OPCODE_NRSQRT             : return parseMnemoBasic;
    case BRIG_OPCODE_NSIN               : return parseMnemoBasic;
    case BRIG_OPCODE_NSQRT              : return parseMnemoBasic;
    case BRIG_OPCODE_NULLPTR            : return parseMnemoSeg;
    case BRIG_OPCODE_OR                 : return parseMnemoBasic;
    case BRIG_OPCODE_PACK               : return parseMnemoSourceType;
    case BRIG_OPCODE_PACKCVT            : return parseMnemoSourceType;
    case BRIG_OPCODE_PACKETCOMPLETIONSIG : return parseMnemoBasic;
    case BRIG_OPCODE_PACKETID           : return parseMnemoBasic;
    case BRIG_OPCODE_POPCOUNT           : return parseMnemoSourceType;
    case BRIG_OPCODE_QUERYIMAGEARRAY    : return parseMnemoSourceType;
    case BRIG_OPCODE_QUERYIMAGEDEPTH    : return parseMnemoSourceType;
    case BRIG_OPCODE_QUERYIMAGEFORMAT   : return parseMnemoSourceType;
    case BRIG_OPCODE_QUERYIMAGEHEIGHT   : return parseMnemoSourceType;
    case BRIG_OPCODE_QUERYIMAGEORDER    : return parseMnemoSourceType;
    case BRIG_OPCODE_QUERYIMAGEWIDTH    : return parseMnemoSourceType;
    case BRIG_OPCODE_QUERYSAMPLERBOUNDARY : return parseMnemoSourceType;
    case BRIG_OPCODE_QUERYSAMPLERCOORD  : return parseMnemoSourceType;
    case BRIG_OPCODE_QUERYSAMPLERFILTER : return parseMnemoSourceType;
    case BRIG_OPCODE_QUEUEID            : return parseMnemoBasic;
    case BRIG_OPCODE_QUEUEPTR           : return parseMnemoSeg;
    case BRIG_OPCODE_RDIMAGE            : return parseMnemoImage;
    case BRIG_OPCODE_RELEASEFBAR        : return parseMnemoBasicNoType;
    case BRIG_OPCODE_REM                : return parseMnemoBasic;
    case BRIG_OPCODE_RET                : return parseMnemoBasicNoType;
    case BRIG_OPCODE_RINT               : return parseMnemoBasicOrMod;
    case BRIG_OPCODE_SAD                : return parseMnemoSourceType;
    case BRIG_OPCODE_SADHI              : return parseMnemoSourceType;
    case BRIG_OPCODE_SEGMENTP           : return parseMnemoSegCvt;
    case BRIG_OPCODE_SERVICEQUEUEPTR    : return parseMnemoSeg;
    case BRIG_OPCODE_SETDETECTEXCEPT    : return parseMnemoBasic;
    case BRIG_OPCODE_SHL                : return parseMnemoBasic;
    case BRIG_OPCODE_SHR                : return parseMnemoBasic;
    case BRIG_OPCODE_SHUFFLE            : return parseMnemoBasic;
    case BRIG_OPCODE_SIGNAL             : return parseMnemoSignal;
    case BRIG_OPCODE_SIGNALNORET        : return parseMnemoSignal;
    case BRIG_OPCODE_SQRT               : return parseMnemoBasicOrMod;
    case BRIG_OPCODE_ST                 : return parseMnemoMem;
    case BRIG_OPCODE_STIMAGE            : return parseMnemoImage;
    case BRIG_OPCODE_STOF               : return parseMnemoSegCvt;
    case BRIG_OPCODE_STQUEUEWRITEINDEX  : return parseMnemoQueue;
    case BRIG_OPCODE_SUB                : return parseMnemoBasicOrMod;
    case BRIG_OPCODE_TRUNC              : return parseMnemoBasicOrMod;
    case BRIG_OPCODE_UNPACK             : return parseMnemoSourceType;
    case BRIG_OPCODE_UNPACKCVT          : return parseMnemoSourceType;
    case BRIG_OPCODE_UNPACKHI           : return parseMnemoBasic;
    case BRIG_OPCODE_UNPACKLO           : return parseMnemoBasic;
    case BRIG_OPCODE_WAITFBAR           : return parseMnemoBr;
    case BRIG_OPCODE_WAVEBARRIER        : return parseMnemoBr;
    case BRIG_OPCODE_WAVEID             : return parseMnemoBasic;
    case BRIG_OPCODE_WORKGROUPID        : return parseMnemoBasic;
    case BRIG_OPCODE_WORKGROUPSIZE      : return parseMnemoBasic;
    case BRIG_OPCODE_WORKITEMABSID      : return parseMnemoBasic;
    case BRIG_OPCODE_WORKITEMFLATABSID  : return parseMnemoBasic;
    case BRIG_OPCODE_WORKITEMFLATID     : return parseMnemoBasic;
    case BRIG_OPCODE_WORKITEMID         : return parseMnemoBasic;
    case BRIG_OPCODE_XOR                : return parseMnemoBasic;
    default : return NULL;
    }
}

