#include "StPicoDstMaker/StPicoArrays.h"

//              ARRAY NAMES
//              Track should be "Tracks"  Aug17,2017
//              BTOWHit -> BTowHit Aug18,2017
//============================================================================================
const char* StPicoArrays::picoArrayNames [NAllPicoArrays] = {"Event", "Tracks", "EmcTrigger", "MtdTrigger",
                                                             "BTowHit", "BTofHit", "MtdHit",
                                                             "BbcTile", "EpdTile",
                                                             "BEmcPidTraits", "BTofPidTraits", "MtdPidTraits"
                                                            };

//              ARRAY TYPES
//============================================================================================
const char* StPicoArrays::picoArrayTypes [NAllPicoArrays] = {"StPicoEvent", "StPicoTrack", "StPicoEmcTrigger", "StPicoMtdTrigger",
                                                             "StPicoBTowHit", "StPicoBTofHit", "StPicoMtdHit",
                                                             "StPicoBbcTile", "StPicoEpdTile",
                                                             "StPicoBEmcPidTraits", "StPicoBTofPidTraits", "StPicoMtdPidTraits"
                                                            };

//              ARRAY SIZES
//============================================================================================
// These are intial sizes. Automatically resized if too small.
// Choosing too large initial values gives a performance penalty when reading
// only selected picoDst branches
int StPicoArrays::picoArraySizes [NAllPicoArrays] = {1, 1000, 100, 100,
                                                     100, 100, 100,
                                                     100, 100,
                                                     100, 100, 100
                                                    };
StPicoArrays::StPicoArrays()
{}
