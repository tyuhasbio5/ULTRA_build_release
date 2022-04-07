//
// Created by Daniel Olson on 3/10/22.
//

#ifndef ULTRA_BEDFILEWRITER_HPP
#define ULTRA_BEDFILEWRITER_HPP
#include "RepeatFileWriter.hpp"

class RepeatRegion;
class Ultra;
class BEDFileWriter : virtual public RepeatFileWriter
{
public:
  Ultra *owner;
  void InitializeWriter(Ultra *ultra);
  void WriteRepeat(RepeatRegion *repeat);
  void EndWriter();
};

#endif // ULTRA_BEDFILEWRITER_HPP
