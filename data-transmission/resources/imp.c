#include "swan_imported_functions.h"


swan_float32 ADD_IF(swan_float32 i0, swan_float32 i1){
	return i0 + i1;
}


swan_uint32 uint_of_float_IF(/* f */swan_float32 f){
	union {swan_float32 f; swan_uint32 u;} tmp;
	tmp.f = f;
	return tmp.u;
}

void Float32toUint8_Codec(swan_float32 i0, array_uint8_4 * restrict o0){
	union {swan_float32 f; uint8_t aui8[4];} tmp;
	tmp.f = i0;
	for (int i=0; i<4;++i) (*o0)[i] = tmp.aui8[i];
}

swan_float32 Uint8toFloat32_Codec(/* in */ const array_uint8_4 *in){
	union {swan_float32 f; uint8_t aui8[4];} tmp;
	for (int i=0; i<4;++i) tmp.aui8[i]=(*in)[i];
	return tmp.f;
}