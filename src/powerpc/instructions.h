#ifndef PPC_INSTRUCTIONS_H
#define PPC_INSTRUCTIONS_H

#include "cpu.h"

namespace ppc
{

#include "emugen_instructionid.h"
#include "../common/emugen_types.h"

extern emugen::InstrEntry Instructions[];

Instruction createInstruction(InstructionID id);
const ppc::emugen::InstrEntry &getInstruction(InstructionID id);

template<InstructionID id>
bool isa(Instruction instr)
{
   static_assert(id < InstructionID::InstructionMax, "Invalid instruction ID");

   for (auto &op : ppc::Instructions[static_cast<unsigned>(id)].opcodes) {
      if (instr.get(op.field) != op.value) {
         return false;
      }
   }

   return true;
}

} // namespace ppc

#endif // PPC_INSTRUCTIONS_H
