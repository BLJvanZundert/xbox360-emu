#ifndef BYTE_SWAP_H
#define BYTE_SWAP_H

#include <stdint.h>
#include "bit_cast.h"

// Utility class to swap endian for types of size 1, 2, 4, 8
// other type sizes are not supported
template<typename Type, unsigned Size = sizeof(Type)>
struct byte_swap_t;

template<typename Type>
struct byte_swap_t<Type, 1>
{
   static Type swap(Type src)
   {
      return src;
   }
};

template<typename Type>
struct byte_swap_t<Type, 2>
{
   static Type swap(Type src)
   {
      return bit_cast<uint16_t, Type>(_byteswap_ushort(bit_cast<Type, uint16_t>(src)));
   }
};

template<typename Type>
struct byte_swap_t<Type, 4>
{
   static Type swap(Type src)
   {
      return bit_cast<uint32_t, Type>(_byteswap_ulong(bit_cast<Type, uint32_t>(src)));
   }
};

template<typename Type>
struct byte_swap_t<Type, 8>
{
   static Type swap(Type src)
   {
      return bit_cast<uint64_t, Type>(_byteswap_uint64(bit_cast<Type, uint64_t>(src)));
   }
};

// Swaps endian of src
template<typename Type>
Type byte_swap(Type src)
{
   return byte_swap_t<Type>::swap(src);
}

#endif // BYTE_SWAP_H
