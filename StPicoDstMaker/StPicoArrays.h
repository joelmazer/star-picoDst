#ifndef StPicoArrays_h
#define StPicoArrays_h


class StPicoArrays
{
public:

  StPicoArrays();

  // Should be changed to constexpr once ROOT 6 is available at STAR
  enum { NAllPicoArrays = 12};

/// names of the TBranches in the TTree/File
  static const char*   picoArrayNames[NAllPicoArrays];

/// names of the classes, the TClonesArrays are arrays of this type
  static const char*   picoArrayTypes[NAllPicoArrays];

/// maximum sizes of the TClonesArrays
  static int           picoArraySizes[NAllPicoArrays];

  // Track should be "Tracks" Aug17,2017
  enum TypeIndex {Event=0, Tracks, EmcTrigger, MtdTrigger,
                  BTowHit, BTofHit, MtdHit, BbcTile, EpdTile,
                  BEmcPidTraits, BTofPidTraits, MtdPidTraits};

};

#endif
