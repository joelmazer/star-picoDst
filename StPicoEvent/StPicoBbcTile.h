/*
   BBC tile class for STAR picoDst
   Total size of this object is 6 bytes

   If all BBC inner tiles are saved, this makes 2*16*6 = 192 bytes
   Usually outer BBC tiles will not be saved, but if they are then this makes 384 bytes

   - Mike Lisa 20 May 2017
*/
#ifndef StPicoBbcTile_h
#define StPicoBbcTile_h

#include "TObject.h"

class StPicoBbcTile : public TObject
{
public:

  StPicoBbcTile();
  StPicoBbcTile(int ID, int ADC, int TAC, int TDC, bool hasTAC);

  virtual void Print(const Char_t *option = "") const;

  bool hasTAC() const;
  int  adc() const;
  int  tac() const;
  int  tdc() const;
  bool isEast() const;

  int pmtNumber() const;  // 1...32

protected:
  // mId:
  // * for BBC: Phototube #
  // * sign for both, +/- = West/East
  Short_t mId;
  ULong_t mQTdata; // bits 0-11 are ADC;  bits 12-23 are TAC;  bits 24-28 are TDC;  bit 29 is noTAC flag

  ClassDef(StPicoBbcTile, 1)
};


inline bool StPicoBbcTile::isEast() const {return (mId < 0);}

inline int  StPicoBbcTile::pmtNumber() const { return mId; }

inline int  StPicoBbcTile::adc() const { return mQTdata & 0x0FFF; }
inline int  StPicoBbcTile::tac() const { return (mQTdata >> 12) & 0x0FFF; }
inline int  StPicoBbcTile::tdc() const { return (mQTdata >> 24) & 0x001F; }
inline bool StPicoBbcTile::hasTAC() const { return (mQTdata >> 29) & 0x1; }

#endif
